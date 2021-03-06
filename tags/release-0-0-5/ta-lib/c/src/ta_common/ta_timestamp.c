/* TA-LIB Copyright (c) 1999-2000, Mario Fortier
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
 *  MF       Mario Fortier
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  110199 MF   First version. Simply encapsulate iMatix.
 *
 */

/* Description:
 *   This file provides the functionality for setting/getting
 *   information stored in a TA_Timestamp.
 */

/**** Headers ****/
#include <stddef.h>
#include "ta_common.h"
#include "sfl.h"

/**** External functions declarations. ****/
/* None */

/**** External variables declarations. ****/
/* None */

/**** Global variables definitions.    ****/
/* None */

/**** Local declarations.              ****/
/* None */

/**** Local functions declarations.    ****/
static void move_delta_day( long *date, int delta );


/**** Local variables definitions.     ****/
static const int nbDayInMonth[12] = { 31, 28, 31, 30, 31, 30,
                                      31, 31, 30, 31, 30, 31 };


/**** Global functions definitions.   ****/

unsigned int TA_GetYear( const TA_Timestamp *timestamp )
{
   if( timestamp == NULL )
      return 0;

   return GET_CCYEAR(timestamp->date);
}

unsigned int TA_GetMonth( const TA_Timestamp *timestamp )
{
   if( timestamp == NULL )
      return 0;

   return GET_MONTH(timestamp->date);
}

unsigned int TA_GetDay( const TA_Timestamp *timestamp )
{
   if( timestamp == NULL )
      return 0;

   return GET_DAY(timestamp->date);
}

unsigned int TA_GetDayOfTheYear( const TA_Timestamp *timestamp )
{
   if( timestamp == NULL )
      return 0;

   return julian_date( timestamp->date )-1;
}

unsigned int TA_GetWeekOfTheYear( const TA_Timestamp *timestamp )
{
   return week_of_year( timestamp->date );
}

TA_DayOfWeek TA_GetDayOfTheWeek( const TA_Timestamp *timestamp )
{
   if( !timestamp )
      return TA_SUNDAY; /* Default...  */

   return day_of_week( timestamp->date );
}

unsigned int TA_GetQuarterOfTheYear( const TA_Timestamp *timestamp )
{
   if( !timestamp )
      return 0; /* Default... */

   return (unsigned int)(year_quarter(timestamp->date)-1);
}

unsigned int TA_GetHour( const TA_Timestamp *timestamp )
{
    if( timestamp == NULL )
       return 0;

    return GET_HOUR(timestamp->time);
}

unsigned int TA_GetMin( const TA_Timestamp *timestamp )
{
    if( timestamp == NULL )
       return 0;

    return GET_MINUTE(timestamp->time);
}

unsigned int TA_GetSec( const TA_Timestamp *timestamp )
{
    if( timestamp == NULL )
       return 0;

    return GET_SECOND(timestamp->time);
}

TA_RetCode TA_GetDate( const TA_Timestamp *timestamp,
                       unsigned int *year,
                       unsigned int *month,
                       unsigned int *day )
{
   #ifdef TA_DEBUG
      TA_RetCode retCode;

      if( timestamp == NULL )
         return 0;

      retCode = TA_TimestampValidate( timestamp );

      if( retCode != TA_SUCCESS )
         return retCode;
   #else
      if( timestamp == NULL )
         return 0;
   #endif

   *year  = TA_GetYear ( timestamp );
   *month = TA_GetMonth( timestamp );
   *day   = TA_GetDay  ( timestamp );

   return TA_SUCCESS;
}

TA_RetCode TA_GetTime( const TA_Timestamp *timestamp,
                       unsigned int *hour,
                       unsigned int *min,
                       unsigned int *sec )
{
   #ifdef TA_DEBUG
      TA_RetCode retCode;

      if( timestamp == NULL )
         return 0;

      retCode = TA_TimestampValidate( timestamp );

      if( retCode != TA_SUCCESS )
         return retCode;
   #else
      if( timestamp != NULL )
         return TA_BAD_PARAM;
   #endif

   *hour = TA_GetHour( timestamp );
   *min  = TA_GetMin ( timestamp );
   *sec  = TA_GetSec ( timestamp );

   return TA_SUCCESS;
}

TA_RetCode TA_SetDate( unsigned int year,
                       unsigned int month,
                       unsigned int day,
                       TA_Timestamp *timestamp )
{
   long cc;

   if( timestamp == NULL )
      return TA_BAD_PARAM;

   if( year <= 99 )
   {
      if( year >= 11 )
        cc = 19;
      else
        cc = 20;
   }
   else
     cc = year / 100;

   timestamp->date = MAKE_DATE( cc, year % 100, month, day); 

   return TA_SUCCESS;
}

TA_RetCode TA_SetTime( unsigned int hour,
                       unsigned int min,
                       unsigned int sec,
                       TA_Timestamp *timestamp )
{
    if( timestamp == NULL )
       return 0;

    if( hour > 23 )
        return TA_BAD_PARAM;

    if( min > 59 )
        return TA_BAD_PARAM;

    if( sec > 59 )
        return TA_BAD_PARAM;

    timestamp->time = MAKE_TIME( hour, min, sec, 0 );

    return TA_SUCCESS;
}

TA_RetCode TA_TimestampValidate( const TA_Timestamp *timestamp )
{
    if( timestamp == NULL )
       return TA_BAD_PARAM;

    if( valid_date(timestamp->date) && valid_time(timestamp->time) )
       return TA_SUCCESS;

    return TA_BAD_PARAM;
}

int TA_TimestampLess( const TA_Timestamp *t1, const TA_Timestamp *t2 )
{
   if( (t1 == NULL) || (t2 == NULL) )
      return 0;

   return timelt(t1->date,t1->time,t2->date,t2->time);
}

int TA_TimestampGreater( const TA_Timestamp *t1, const TA_Timestamp *t2 )
{
   if( (t1 == NULL) || (t2 == NULL) )
      return 0;

   return timegt(t1->date,t1->time,t2->date,t2->time);
}

int TA_TimestampEqual( const TA_Timestamp *t1, const TA_Timestamp *t2 )
{
   if( (t1 == NULL) || (t2 == NULL) )
      return 0;

   return timeeq(t1->date,t1->time,t2->date,t2->time);
}


/* Move the timestamp to the next day. Will continue to the next
 * month and/or year if needed.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_NextDay( TA_Timestamp *timestamp )
{    
    if( !timestamp )
       return TA_BAD_PARAM;

    move_delta_day( &timestamp->date, 1 );

    return TA_SUCCESS;
}

/* Move to the next year */
TA_RetCode TA_NextYear( TA_Timestamp *timestamp )
{    
    if( !timestamp )
       return TA_BAD_PARAM;

    move_delta_day( &timestamp->date, 365 );

    return TA_SUCCESS;
}

/* Move the timestamp to the previous day. Will continue to the next
 * month and/or year if needed.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_PrevDay( TA_Timestamp *timestamp )
{
    if( !timestamp )
       return TA_BAD_PARAM;

    move_delta_day( &timestamp->date, -1 );

    return TA_SUCCESS;
}

/* Move the timestamp to the previous year. */
TA_RetCode TA_PrevYear( TA_Timestamp *timestamp )
{
    if( !timestamp )
       return TA_BAD_PARAM;

    move_delta_day( &timestamp->date, -365 );

    return TA_SUCCESS;
}


/* Move the timestamp to the next week-day. After Friday comes Monday...
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_NextWeekday( TA_Timestamp *timestamp )
{
   if( !timestamp )
      return TA_BAD_PARAM;

   timestamp->date = next_weekday( timestamp->date );

   return TA_SUCCESS;
}

/* Move the timestamp to the previous week-day. Before Monday is Friday...
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_PrevWeekday( TA_Timestamp *timestamp )
{
   if( !timestamp )
      return TA_BAD_PARAM;

   timestamp->date = prev_weekday( timestamp->date );

   return TA_SUCCESS;
}

/* Jump forward to the last day of the current month.
 * Won't move if already on the last day of the month.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_JumpToEndOfMonth( TA_Timestamp *timestamp )
{
  int century, year, month, day;

  if( !timestamp )
     return TA_BAD_PARAM;

  month   = GET_MONTH  ( timestamp->date );
  year    = GET_YEAR   ( timestamp->date );
  century = GET_CENTURY( timestamp->date );

  day = nbDayInMonth[month-1];
  if( (month == 2) && leap_year(year) )
     day++;

  timestamp->date = MAKE_DATE( century, year, month, day );

  return TA_SUCCESS;
}

/* Jump backward to the first day of the current month.
 * Won't move if already on the first day of the month.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_BackToBeginOfMonth( TA_Timestamp *timestamp )
{
   unsigned int month, year, century;
   if( !timestamp )
      return TA_BAD_PARAM;

   /* Just force the day to be '1'. */
   month   = GET_MONTH  ( timestamp->date );
   year    = GET_YEAR   ( timestamp->date );
   century = GET_CENTURY( timestamp->date );

   timestamp->date = MAKE_DATE( century, year, month, 1 );

   return TA_SUCCESS;
}


/* Jump forward to the last day of the current quarter.
 * Won't move if already on the last day of the quarter.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_JumpToEndOfQuarter( TA_Timestamp *timestamp )
{
  int century, year, month, day, quarter;

  if( !timestamp )
     return TA_BAD_PARAM;

  year    = GET_YEAR   ( timestamp->date );
  century = GET_CENTURY( timestamp->date );
  quarter = year_quarter( timestamp->date ) - 1;

  switch( quarter )
  {
  case 1: /* Second quarter */
     month = 6;
     day   = 30;
     break;
  case 2:/* Third quarter */
     month = 9;
     day   = 30;
     break;
  case 3: /* Fourth quarter */
     month = 12;
     day   = 31;
     break;
  default: /* First quarter */
     month = 3;
     day   = 31;
     break;
  }

  timestamp->date = MAKE_DATE( century, year, month, day );

  return TA_SUCCESS;
}

/* Jump backward to the first day of the current quarter.
 * Won't move if already on the first day of the quarter.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_BackToBeginOfQuarter( TA_Timestamp *timestamp )
{
  int century, year, month, day, quarter;

  if( !timestamp )
     return TA_BAD_PARAM;

  year    = GET_YEAR   ( timestamp->date );
  century = GET_CENTURY( timestamp->date );
  quarter = year_quarter( timestamp->date ) - 1;

  day = 1;

  switch( quarter )
  {
  case 1: /* Second quarter */
     month = 4;
     break;
  case 2:/* Third quarter */
     month = 7;
     break;
  case 3: /* Fourth quarter */
     month = 10;
     break;
  default: /* First quarter */
     month = 1;
     break;
  }

  timestamp->date = MAKE_DATE( century, year, month, day );

  return TA_SUCCESS;
}

/* Jump forward to the last day of the year.
 * (December 31)
 */
TA_RetCode TA_JumpToEndOfYear( TA_Timestamp *timestamp )
{
   unsigned int year, century;

   if( !timestamp )
      return TA_BAD_PARAM;

   /* Just force the day to be '1'. */
   year    = GET_YEAR   ( timestamp->date );
   century = GET_CENTURY( timestamp->date );

   timestamp->date = MAKE_DATE( century, year, 12, 31 );

   return TA_SUCCESS;
}

/* Jump backward to the first day of the year.
 * (January 1st).
 */
TA_RetCode TA_BackToBeginOfYear( TA_Timestamp *timestamp )
{
   unsigned int year, century;

   if( !timestamp )
      return TA_BAD_PARAM;

   /* Just force the day to be '1'. */
   year    = GET_YEAR   ( timestamp->date );
   century = GET_CENTURY( timestamp->date );

   timestamp->date = MAKE_DATE( century, year, 1, 1 );

   return TA_SUCCESS;
}

/* Jump forward to the specified day of the week. 
 * Won't move if already on the specified day of the week.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_JumpToDayOfWeek( TA_Timestamp *timestamp,
                               TA_DayOfWeek  dayOfWeek )
{
   int curDayOfWeek;
   int delta;

   if( !timestamp || (dayOfWeek > 6))
      return TA_BAD_PARAM;

   curDayOfWeek = day_of_week( timestamp->date );

   if( curDayOfWeek == (int)dayOfWeek )
      return TA_SUCCESS;

   /* Calculate how far we are from the dayOfWeek. */
   if( curDayOfWeek < (int)dayOfWeek )
      delta = dayOfWeek - curDayOfWeek;
   else   
      delta = 7-(curDayOfWeek - dayOfWeek);

   move_delta_day( &timestamp->date, delta );

   return TA_SUCCESS;
}

/* Jump backward to the specified day of the week.
 * Won't move if already on the specified day of the week.
 * Time component of the timestamp is not modified.
 */
TA_RetCode TA_BackToDayOfWeek( TA_Timestamp *timestamp,
                               TA_DayOfWeek  dayOfWeek )
{
   int curDayOfWeek;
   int delta;

   if( !timestamp || (dayOfWeek > 6))
      return TA_BAD_PARAM;

   curDayOfWeek = day_of_week( timestamp->date );

   if( curDayOfWeek == (int)dayOfWeek )
      return TA_SUCCESS;

   /* Calculate how far we are from the dayOfWeek. */
   if( curDayOfWeek > (int)dayOfWeek )
      delta = dayOfWeek-curDayOfWeek;
   else   
      delta = (dayOfWeek-7) - curDayOfWeek;

   move_delta_day( &timestamp->date, delta );

   return TA_SUCCESS;
}

#if 0
!!! This portion of code needs to be re-written for 
!!! using the iMatix library.
TA_RetCode TA_TimestampNextMonth( TA_Timestamp *timeToAdvance )
{
   unsigned int year, month, dayOfTheYear;

   if( timeToAdvance == NULL )
      return TA_BAD_PARAM;

   /* Go to day 1 of the following month.
    * Year will be adjusted as needed. Time is left unchanged.
    */
   month = TA_GetMonth( timeToAdvance );

   if( month == 12 )
      return TA_TimestampNextYear( timeToAdvance );

    dayOfTheYear = day_offset[month-1]+1;
    if( month > 1 )
    {
      year = TA_GetYear( timeToAdvance );
      if( isLeapYear( year ) )
         dayOfTheYear++;
    }

    setDay( timeToAdvance, dayOfTheYear );

    return TA_SUCCESS;
}

TA_RetCode TA_TimestampNextYear( TA_Timestamp *timeToAdvance )
{
   unsigned int year;

   /* Go to Jan 1 of the following year.
    * Only date is changed. Time is left untouch.
    */
   if( timeToAdvance == NULL )
      return TA_BAD_PARAM;

   year = TA_GetYear( timeToAdvance );
   if( year >= TA_MAX_YEAR )
      return TA_BAD_PARAM;

   setYear( timeToAdvance, year+1 );
   setDay ( timeToAdvance, 1 );

   return TA_SUCCESS;
}
#endif

TA_RetCode TA_SetDefault( TA_Timestamp *timestamp )
{
   if( timestamp == NULL )
      return TA_BAD_PARAM;

   timestamp->date = MAKE_DATE( 19, 0, 1, 1 ); 
   timestamp->time = 0;

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampCopy( TA_Timestamp *dest, const TA_Timestamp *src )
{
   #ifdef TA_DEBUG
   TA_RetCode retCode;
   #endif

   if( (src == NULL) || (dest == NULL) )
      return TA_BAD_PARAM;

   #ifdef TA_DEBUG
      retCode = TA_TimestampValidate( src );
      if( retCode != TA_SUCCESS )
         return retCode;
   #endif

   /* Make a simple integer copy. */
   dest->date = src->date;
   dest->time = src->time;

   return TA_SUCCESS;
}

TA_RetCode TA_SetDateNow( TA_Timestamp *timestamp )
{
   if( !timestamp )
      return TA_BAD_PARAM;

   timestamp->date = date_now();   

   return TA_SUCCESS;   
}

TA_RetCode TA_SetTimeNow( TA_Timestamp *timestamp )
{
   if( !timestamp )
      return TA_BAD_PARAM;

   timestamp->time = time_now();   

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaYear ( const TA_Timestamp *t1,
                                   const TA_Timestamp *t2,
                                   unsigned int *delta )
{
   TA_RetCode retCode;
   unsigned int deltaDays;

   if( !delta )
      return TA_BAD_PARAM;
         
   retCode = TA_TimestampDeltaDay( t1, t2, &deltaDays );

   if( retCode != TA_SUCCESS )
   {
      *delta = 0;
      return retCode;
   }

   if( deltaDays == 0 )
   {
      *delta = 0;    
      return TA_SUCCESS;
   }

   *delta = (deltaDays / 365);

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaQuarter( const TA_Timestamp *t1,
                                     const TA_Timestamp *t2,
                                     unsigned int *delta )
{
   TA_RetCode retCode;
   unsigned int deltaMonth;

   if( !delta )
      return TA_BAD_PARAM;

   retCode = TA_TimestampDeltaMonth( t1, t2, &deltaMonth );

   if( retCode != TA_SUCCESS )
   {
      *delta = 0;
      return retCode;
   }

   *delta = deltaMonth / 4;

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaWeek ( const TA_Timestamp *t1,
                                   const TA_Timestamp *t2,
                                   unsigned int *delta )
{
   TA_RetCode retCode;
   unsigned int deltaDays;

   if( !delta )
      return TA_BAD_PARAM;

   retCode = TA_TimestampDeltaDay( t1, t2, &deltaDays );

   if( retCode != TA_SUCCESS )
   {
      *delta = 0;
      return retCode;
   }

   if( deltaDays == 0 )
   {
      *delta = 0;    
      return TA_SUCCESS;
   }

   *delta = (deltaDays / 7);

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaMonth( const TA_Timestamp *t1,
                                   const TA_Timestamp *t2,
                                   unsigned int *delta )
{
   TA_RetCode retCode;
   unsigned int deltaDays, deltaMonth, deltaYear;

   if( !delta )
      return TA_BAD_PARAM;
         
   retCode = TA_TimestampDeltaDay( t1, t2, &deltaDays );

   if( retCode != TA_SUCCESS )
   {
      *delta = 0;
      return retCode;
   }

   if( deltaDays == 0 )
   {
      *delta = 0;    
      return TA_SUCCESS;
   }

   /* Evaluate the minimum number of year. */
   deltaYear = deltaDays / 365;
   if( deltaYear == 0 )
      deltaMonth = 0;
   else
   {
      deltaDays  -= (deltaYear * 365);
      deltaMonth  = deltaYear * 12;
   }

   /* Overestimate the remaining partial year. */
   deltaMonth += deltaDays / 28;
   *delta = deltaMonth;

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaDay( const TA_Timestamp *t1,
                                 const TA_Timestamp *t2,
                                 unsigned int *delta )
{
   if( !t1 || !t2 || !delta )
      return TA_BAD_PARAM;

   if( TA_TimestampGreater( t1, t2 ) )
      *delta = (unsigned int)(date_to_days(t1->date)-date_to_days(t2->date))+1;
   else
      *delta = (unsigned int)(date_to_days(t2->date)-date_to_days(t1->date))+1;

   return TA_SUCCESS;
}

TA_RetCode TA_TimestampDeltaWeekday( const TA_Timestamp *t1,
                                     const TA_Timestamp *t2,
                                     unsigned int *delta )
{
   int nbWeekday;
   TA_Timestamp curDate, endDate;
   TA_DayOfWeek dayOfTheWeek;

   if( !t1 || !t2 || !delta )
      return TA_BAD_PARAM;

   /* Handle special case. */
   if( TA_TimestampEqual( t1, t2 ) )
   {
      dayOfTheWeek = TA_GetDayOfTheWeek( t1 );
      if( (dayOfTheWeek == TA_SUNDAY) || (dayOfTheWeek == TA_SATURDAY) )
         *delta = 0;
      else
         *delta = 1;

      return TA_SUCCESS;
   }

   /* Swap t1, t2 as needed. */
   if( TA_TimestampGreater( t1, t2 ) )
   {
      TA_TimestampCopy( &curDate, t2 );
      TA_TimestampCopy( &endDate, t1 );
   }
   else
   {
      TA_TimestampCopy( &curDate, t1 );
      TA_TimestampCopy( &endDate, t2 );
   }

   /* ToDo:
    *  This implementation works but is inefficient.
    *  This can be definitely speed optimized by using
    *  a couple of formula.
    */

   /* Check if starting point is or is not a weekday */
   dayOfTheWeek = TA_GetDayOfTheWeek( &curDate );
   if( (dayOfTheWeek == TA_SUNDAY) || (dayOfTheWeek == TA_SATURDAY) )
      nbWeekday=0;
   else
      nbWeekday=1;

   TA_NextWeekday( &curDate );

   /* Count the number of weekday */
   while( TA_TimestampLess( &curDate, &endDate ) )
   {
      nbWeekday++;
      TA_NextWeekday( &curDate );
   } 

   /* Check if the ending point is a weekday. */
   if( TA_TimestampEqual( &curDate, &endDate ) )
   {
      dayOfTheWeek = TA_GetDayOfTheWeek( &curDate );
      if( (dayOfTheWeek != TA_SUNDAY) && (dayOfTheWeek != TA_SATURDAY) )
         nbWeekday++;
   }

   *delta = nbWeekday;

   return TA_SUCCESS;
}

/**** Local functions definitions.     ****/
static void move_delta_day( long *date, int delta )
{
    long days;

    days = date_to_days( *date );
    days += delta;
    *date = days_to_date( days );
}
