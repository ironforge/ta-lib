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

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  JP       John Price <jp_talib@gcfl.net>
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  070203 JP   Initial.
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */

#if defined( _MANAGED )
   #using <mscorlib.dll>
   #include "Core.h"
   namespace TA { namespace Lib {
#else
   #include <string.h>
   #include <math.h>
   #include "ta_func.h"
#endif

#ifndef TA_UTILITY_H
   #include "ta_utility.h"
#endif

#ifndef TA_MEMORY_H
   #include "ta_memory.h"
#endif

#if defined( _MANAGED )
int Core::LINEARREG_ANGLE_Lookback( int           optInTimePeriod_0 )  /* From 2 to 100000 */

#else
int TA_LINEARREG_ANGLE_Lookback( int           optInTimePeriod_0 )  /* From 2 to 100000 */

#endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert lookback code here. */
   return optInTimePeriod_0-1;
}

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/*
 * TA_LINEARREG_ANGLE - Linear Regression Angle
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod_0:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */


#if defined( _MANAGED )
enum TA_RetCode Core::LINEARREG_ANGLE( int    startIdx,
                                       int    endIdx,
                                       double       inReal_0 __gc [],
                                       int           optInTimePeriod_0, /* From 2 to 100000 */
                                       [OutAttribute]Int32 *outBegIdx,
                                       [OutAttribute]Int32 *outNbElement,
                                       double        outReal_0 __gc [] )
#else
TA_RetCode TA_LINEARREG_ANGLE( int    startIdx,
                               int    endIdx,
                               const double inReal_0[],
                               int           optInTimePeriod_0, /* From 2 to 100000 */
                               int          *outBegIdx,
                               int          *outNbElement,
                               double        outReal_0[] )
#endif
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   int outIdx;

   int today, lookbackTotal;
   double SumX, SumXY, SumY, SumXSqr, Divisor;

   double b;

   int i;

   double tempValue1;

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/

#ifndef TA_FUNC_NO_RANGE_CHECK

   /* Validate the requested output range. */
   if( startIdx < 0 )
      return TA_OUT_OF_RANGE_START_INDEX;
   if( (endIdx < 0) || (endIdx < startIdx))
      return TA_OUT_OF_RANGE_END_INDEX;

   /* Validate the parameters. */
   if( !inReal_0 ) return TA_BAD_PARAM;
   /* min/max are checked for optInTimePeriod_0. */
   if( (int)optInTimePeriod_0 == TA_INTEGER_DEFAULT )
      optInTimePeriod_0 = 14;
   else if( ((int)optInTimePeriod_0 < 2) || ((int)optInTimePeriod_0 > 100000) )
      return TA_BAD_PARAM;

   if( outReal_0 == NULL )
      return TA_BAD_PARAM;

#endif /* TA_FUNC_NO_RANGE_CHECK */

/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */
   /* Linear Regression is a concept also known as the
    * "least squares method" or "best fit." Linear
    * Regression attempts to fit a straight line between
    * several data points in such a way that distance
    * between each data point and the line is minimized.
    *
    * For each point, a straight line over the specified
    * previous bar period is determined in terms
    * of y = a + bx (where x is the period).
    *
    * TA_LINEARREG          : Returns 'y'
    * TA_LINEARREG_SLOPE    : Returns 'b'
    * TA_LINEARREG_ANGLE    : Returns 'b' in degree.
    * TA_LINEARREG_INTERCEPT: Returns 'a'
    */

   /* Adjust startIdx to account for the lookback period. */
   lookbackTotal = TA_LINEARREG_Lookback( optInTimePeriod_0 );

   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      *outBegIdx    = 0;
      *outNbElement = 0;
      return TA_SUCCESS;
   }

   outIdx = 0; /* Index into the output. */
   today = startIdx;

   SumX = optInTimePeriod_0 * ( optInTimePeriod_0 - 1 ) * 0.5;
   SumXSqr = optInTimePeriod_0 * ( optInTimePeriod_0 - 1 ) * ( 2 * optInTimePeriod_0 - 1 ) / 6;
   Divisor = SumX * SumX - optInTimePeriod_0 * SumXSqr;

   while( today <= endIdx )
   {
     SumXY = 0;
     SumY = 0;
     for( i = optInTimePeriod_0; i--; )
     {
       SumY += tempValue1 = inReal_0[today - i];
       SumXY += (double)i * tempValue1;
     }
     b = ( optInTimePeriod_0 * SumXY - SumX * SumY) / Divisor;
     outReal_0[outIdx] = atan(b) * ( 180.0 / PI );
     today++;
   }

   *outBegIdx = startIdx;
   *outNbElement = outIdx;

   return TA_SUCCESS;
}

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
#if defined( _MANAGED )
   }} // Close namespace TA.Lib
#endif
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

