/* TA-LIB Copyright (c) 1999-2003, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ta_libc.h"

char buffer[1024];

int gen_ta_mrg_0( void );
int gen_ta_sim_ref_0( void );

static void TA_WriteRefCFile( TA_UDBase *unifiedDatabase,
                              const char *category,
                              const char *symbol,
                              void *opaqueData );

int main( int argc, char *argv[] )
{
   int retValue;

   (void)argv; /* Get rid of compiler warning. */

   if( argc > 1 )
   {
      printf( "\n" );
      printf( "gen_data V%s - Embbeded data generator\n", TA_GetVersionString() );
      printf( "\n" );
      printf( "Usage: gen_data\n" );
      printf( "\n" );
      printf( "  No parameter needed.\n" );
      printf( "\n" );      
      printf( "  This tool will takes some .CSV files and generate the\n" );
      printf( "  corresponding static data in 'C'. This tool is useful\n" );
      printf( "  only for developers modifying the TA-Lib for generating\n" );
      printf( "  new data being used by the TA_SIMULATOR data source.\n" );
      printf( "\n" );
      printf( "  See ta-lib/c/src/tools/gen_data for the input/output files.\n" );
      printf( "\n" );
      printf( "  ** Must be directly run from the 'bin' directory.\n" );
      printf( "\n" );
      printf( "  On failure, the exit code is -1.\n" );
      printf( "  On success, the exit code is  0.\n" );
      exit(-1);
   }

   retValue = gen_ta_mrg_0();
   if( retValue != 0 )
      return retValue;

   printf( "\n" );
   printf( "Generating data for the TA_SIMULATOR data source\n" );
   printf( "Type gen_data -? for more info\n" );

   retValue = gen_ta_sim_ref_0();
   if( retValue != 0 )
      return retValue;

   printf( "\nDone\n" );
   return 0;
}

void myFatalHandler( void )
{
   printf( "\nFatal Error Handler Called\n " );
   TA_FatalReport( stdout );
}

int gen_ta_sim_ref_0( void )
{
   TA_UDBase *unifiedDatabase;
   TA_InitializeParam initializeParam;
   TA_AddDataSourceParam param;
   TA_RetCode retCode;

   /* Initialize the TA-LIB. */
   memset( &initializeParam, 0, sizeof( TA_InitializeParam ) );
   initializeParam.logOutput = stdout;
   retCode = TA_Initialize( &initializeParam );
   if( retCode != TA_SUCCESS )
      return -10;

   /* Install the TA_Fatal handler, just for better debugging.  */
   retCode = TA_SetFatalErrorHandler( myFatalHandler );
   if( retCode != TA_SUCCESS )
      return retCode;
 
   /* Create the unified database. */
   retCode = TA_UDBaseAlloc( &unifiedDatabase );
   if( retCode == TA_SUCCESS )
   {
      /* Add the reference data in the unified database. */
      memset( &param, 0, sizeof( TA_AddDataSourceParam ) );
      param.id       = TA_ASCII_FILE;
      param.location = "..\\src\\tools\\gen_data\\daily_ref_0.csv";
      param.info     = "[M][D][YYYY][O][H][L][C][V]";
      param.category = "TA_SIM_REF";
      retCode = TA_AddDataSource( unifiedDatabase, &param );

      if( retCode != TA_SUCCESS )
         printf( "Cannot open daily_ref_0.csv %d\n", retCode );
      else
      {
         param.location = "..\\src\\tools\\gen_data\\intra_ref_0.csv";
         param.info     = "[M][D][YYYY][HH][MN=10][O][H][L][C]";
         param.category = "TA_SIM_REF";
         retCode = TA_AddDataSource( unifiedDatabase, &param );
         if( retCode != TA_SUCCESS )
            printf( "Cannot open intra_ref_0.csv %d\n", retCode );
         else
         {
            retCode = TA_Report( unifiedDatabase, stdout, 0xFF );
            if( retCode != TA_SUCCESS )
               printf( "TA_Report failed %d\n", retCode );
            else
            {
               /* Generate the 'c' files from all the symbols... */
               TA_ForEachSymbol( unifiedDatabase, TA_WriteRefCFile, NULL );
            }
         }
      }

      retCode = TA_UDBaseFree( unifiedDatabase );
      if( retCode != TA_SUCCESS )
         return retCode;
   }

   retCode = TA_Shutdown();
   if( retCode != TA_SUCCESS )
      return -20;

   return 0;
}

int gen_ta_mrg_0( void )
{
   FILE *in, *out;
   unsigned int i, j;
   unsigned char data_out;

   printf( "Generating ta_mrg_0.c\n");
   
   #if defined( WIN32 )
   in = fopen( "..\\src\\tools\\gen_data\\mrg.in", "r" );
   #else
   in = fopen( "../src/tools/gen_data/mrg.in", "r" );
   #endif

   if( !in )
   {
      printf( "Cannot open mrg.in\n" );
      return -1;
   }

   #if defined( WIN32 )
   out = fopen( "..\\src\\tools\\gen_data\\ta_mrg_0.c", "w" );
   #else
   out = fopen( "../src/tools/gen_data/ta_mrg_0.c", "w" );
   #endif

   if( !out )
   {
      printf( "Cannot open ta_mrg_0.c" );
      return -1;
   }

   fprintf( out, "/* This file is generated by gen_data. Do not modify. */\n\n" );

   fprintf( out, "\n\nconst char TA_MRG_0_DATA_PRIV[1000] = {" );

   for( i=0; i < 1000; i++ )
   {
      fgets( buffer, 1024, in );
      /* printf( "%s", buffer ); */
      data_out = 0;
      for( j=0; j < 4; j++ )
      {
         switch( buffer[j] )
         {
         case '1':
            data_out |= 0x01;
            break;
         case '0':
            break;
         case 'X':
         case 'x':
            data_out |= 0x11;
            break;
         default:
            printf( "Invalid data at line %d\n", i );
            return -2;
         }
         data_out <<= 2;
      }
      fprintf( out, "%s0x%02X%s", 
               i%25 == 0?"\n":"", data_out,
               i != 999?",":"};" );
   }

   fprintf( out, "\n" );

   fclose( in );
   fclose( out );

   return 0;
}

static void TA_WriteRefCFile( TA_UDBase *unifiedDatabase,
                              const char *category,
                              const char *symbol,
                              void *opaqueData )
{
   TA_RetCode retCode;
   TA_Period period;
   FILE *out;
   TA_History *history;
   unsigned int i;
   const char *tmpStr;

   (void)opaqueData; /* Get ride of compiler warning. */

   /* Identify the period for this symbol. */
   if( strcmp( symbol, "intra_ref_0" ) == 0 )
      period = TA_1MIN * 10;
   else
      period = TA_DAILY;

   if( (strlen( symbol ) + 6) > 1024 )
   {
      printf( "Symbol name too large [%s]\n", symbol );
      return;
   }

   retCode = TA_HistoryAlloc( unifiedDatabase, category, symbol,
                              period, 0, 0, TA_ALL, &history );

   if( retCode != TA_SUCCESS )
      printf( "Processing of %s failed (%d)\n", symbol, retCode );
   else
   {
      sprintf( buffer, "..\\src\\tools\\gen_data\\ta_%s.c", symbol );

      out = fopen( buffer, "w" );
      if( !out )
         printf( "Failed to open [%s]\n", buffer );
      else
      {
         fprintf( out, "/* This file is generated by gen_data.c. \n" );
         fprintf( out, " * DO NOT MODIFY THIS FILE DIRECTLY. \n" );
         fprintf( out, " */\n" );

         fprintf( out, "#include \"ta_libc.h\"\n\n" );
      
         if( history->timestamp )
         {
            fprintf( out, "TA_Timestamp TA_SREF_timestamp_%s_PRIV[%d] = {", symbol, history->nbBars );
            for( i=0; i < history->nbBars; i++ )
            {
               if( (i+1) == history->nbBars )
                  tmpStr = "};\n\n";
               else
                  tmpStr = ",";

               fprintf( out, "{0x%08X,", (unsigned int)history->timestamp[i].date );
               fprintf( out, "0x%08X}", (unsigned int)history->timestamp[i].time );
               fprintf( out, tmpStr );

               if( (i != 0) && (i%10 == 0) )
                  fprintf( out, "\n" );
            }
         }

         #define WRITE_REAL_DATA(varName) \
         if( history->varName ) \
         { \
            fprintf( out, "TA_Real TA_SREF_%s_%s_PRIV[%d] = {", #varName, symbol, history->nbBars ); \
            for( i=0; i < history->nbBars; i++ ) \
            { \
               fprintf( out, "%f%s", (float)history->varName[i],  \
                        i+1 == history->nbBars? "};\n\n":"," ); \
               if( (i != 0) && (i%10 == 0) ) \
                  fprintf( out, "\n" ); \
            } \
         }

         #define WRITE_INTEGER_DATA(varName) \
         if( history->varName ) \
         { \
            fprintf( out, "TA_Integer TA_SREF_%s_%s_PRIV[%d] = {", #varName, symbol, history->nbBars ); \
            for( i=0; i < history->nbBars; i++ ) \
            { \
               fprintf( out, "%d%s", history->varName[i],  \
                        i+1 == history->nbBars? "};\n\n":"," ); \
               if( (i != 0) && (i%10 == 0) ) \
                  fprintf( out, "\n" ); \
            } \
         }

         WRITE_REAL_DATA(open);
         WRITE_REAL_DATA(high);
         WRITE_REAL_DATA(low);
         WRITE_REAL_DATA(close);
         WRITE_INTEGER_DATA(volume);
         WRITE_INTEGER_DATA(openInterest);
         #undef WRITE_REAL_DATA
         #undef WRITE_INTEGER_DATA

         fclose( out );
      }

      retCode = TA_HistoryFree( history );
      if( retCode != TA_SUCCESS )
         printf( "Freeing %s history failed %d\n", symbol, retCode );
   }

}
