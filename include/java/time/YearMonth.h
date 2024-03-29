//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/YearMonth.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeYearMonth")
#ifdef RESTRICT_JavaTimeYearMonth
#define INCLUDE_ALL_JavaTimeYearMonth 0
#else
#define INCLUDE_ALL_JavaTimeYearMonth 1
#endif
#undef RESTRICT_JavaTimeYearMonth

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeYearMonth_) && (INCLUDE_ALL_JavaTimeYearMonth || defined(INCLUDE_JavaTimeYearMonth))
#define JavaTimeYearMonth_

#define RESTRICT_JavaTimeTemporalTemporal 1
#define INCLUDE_JavaTimeTemporalTemporal 1
#include "java/time/temporal/Temporal.h"

#define RESTRICT_JavaTimeTemporalTemporalAdjuster 1
#define INCLUDE_JavaTimeTemporalTemporalAdjuster 1
#include "java/time/temporal/TemporalAdjuster.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeFormatDateTimeFormatter;
@class JavaTimeLocalDate;
@class JavaTimeMonth;
@class JavaTimeTemporalValueRange;
@class JavaTimeZoneId;
@protocol JavaIoDataInput;
@protocol JavaIoDataOutput;
@protocol JavaLangCharSequence;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaTimeTemporalTemporalAmount;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;
@protocol JavaTimeTemporalTemporalUnit;

/*!
 @brief A year-month in the ISO-8601 calendar system, such as <code>2007-12</code>.
 <p>
  <code>YearMonth</code> is an immutable date-time object that represents the combination
  of a year and month. Any field that can be derived from a year and month, such as
  quarter-of-year, can be obtained. 
 <p>
  This class does not store or represent a day, time or time-zone.
  For example, the value "October 2007" can be stored in a <code>YearMonth</code>.
  <p>
  The ISO-8601 calendar system is the modern civil calendar system used today
  in most of the world. It is equivalent to the proleptic Gregorian calendar
  system, in which today's rules for leap years are applied for all time.
  For most applications written today, the ISO-8601 rules are entirely suitable.
  However, any application that makes use of historical dates, and requires them
  to be accurate will find the ISO-8601 approach unsuitable.
 @since 1.8
 */
@interface JavaTimeYearMonth : NSObject < JavaTimeTemporalTemporal, JavaTimeTemporalTemporalAdjuster, JavaLangComparable, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Adjusts the specified temporal object to have this year-month.
 <p>
  This returns a temporal object of the same observable type as the input
  with the year and month changed to be the same as this. 
 <p>
  The adjustment is equivalent to using <code>Temporal.with(TemporalField, long)</code>
  passing <code>ChronoField.PROLEPTIC_MONTH</code> as the field.
  If the specified temporal object does not use the ISO calendar system then
  a <code>DateTimeException</code> is thrown. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.with(TemporalAdjuster)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    temporal = thisYearMonth.adjustInto(temporal);
    temporal = temporal.with(thisYearMonth); 
  
@endcode
  <p>
  This instance is immutable and unaffected by this method call.
 @param temporal the target object to be adjusted, not null
 @return the adjusted object, not null
 @throw DateTimeExceptionif unable to make the adjustment
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)adjustIntoWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Combines this year-month with a day-of-month to create a <code>LocalDate</code>.
 <p>
  This returns a <code>LocalDate</code> formed from this year-month and the specified day-of-month. 
 <p>
  The day-of-month value must be valid for the year-month. 
 <p>
  This method can be used as part of a chain to produce a date: 
 @code

   LocalDate date = year.atMonth(month).atDay(day); 
  
@endcode
 @param dayOfMonth the day-of-month to use, from 1 to 31
 @return the date formed from this year-month and the specified day, not null
 @throw DateTimeExceptionif the day is invalid for the year-month
 - seealso: #isValidDay(int)
 */
- (JavaTimeLocalDate *)atDayWithInt:(jint)dayOfMonth;

/*!
 @brief Returns a <code>LocalDate</code> at the end of the month.
 <p>
  This returns a <code>LocalDate</code> based on this year-month.
  The day-of-month is set to the last valid day of the month, taking
  into account leap years. 
 <p>
  This method can be used as part of a chain to produce a date: 
 @code

   LocalDate date = year.atMonth(month).atEndOfMonth(); 
  
@endcode
 @return the last valid date of this year-month, not null
 */
- (JavaTimeLocalDate *)atEndOfMonth;

/*!
 @brief Compares this year-month to another year-month.
 <p>
  The comparison is based first on the value of the year, then on the value of the month.
  It is "consistent with equals", as defined by <code>Comparable</code>.
 @param other the other year-month to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(JavaTimeYearMonth *)other;

/*!
 @brief Checks if this year-month is equal to another year-month.
 <p>
  The comparison is based on the time-line position of the year-months.
 @param obj the object to check, null returns false
 @return true if this is equal to the other year-month
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Formats this year-month using the specified formatter.
 <p>
  This year-month will be passed to the formatter to produce a string.
 @param formatter the formatter to use, not null
 @return the formatted year-month string, not null
 @throw DateTimeExceptionif an error occurs during printing
 */
- (NSString *)formatWithJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Obtains an instance of <code>YearMonth</code> from a temporal object.
 <p>
  This obtains a year-month based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>YearMonth</code>.
  <p>
  The conversion extracts the <code>YEAR</code> and 
 <code>MONTH_OF_YEAR</code> fields.
  The extraction is only permitted if the temporal object has an ISO
  chronology, or can be converted to a <code>LocalDate</code>.
  <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>YearMonth::from</code>.
 @param temporal the temporal object to convert, not null
 @return the year-month, not null
 @throw DateTimeExceptionif unable to convert to a <code>YearMonth</code>
 */
+ (JavaTimeYearMonth *)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Gets the value of the specified field from this year-month as an <code>int</code>.
 <p>
  This queries this year-month for the value of the specified field.
  The returned value will always be within the valid range of values for the field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return valid
  values based on this year-month, except <code>PROLEPTIC_MONTH</code> which is too
  large to fit in an <code>int</code> and throw a <code>DateTimeException</code>.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field
 @throw DateTimeExceptionif a value for the field cannot be obtained or
          the value is outside the range of valid values for the field
 @throw UnsupportedTemporalTypeExceptionif the field is not supported or
          the range of values exceeds an <code>int</code>
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jint)getWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the value of the specified field from this year-month as a <code>long</code>.
 <p>
  This queries this year-month for the value of the specified field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return valid
  values based on this year-month.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.getFrom(TemporalAccessor)</code>
  passing <code>this</code> as the argument. Whether the value can be obtained,
  and what the value represents, is determined by the field.
 @param field the field to get, not null
 @return the value for the field
 @throw DateTimeExceptionif a value for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)getLongWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the month-of-year field using the <code>Month</code> enum.
 <p>
  This method returns the enum <code>Month</code> for the month.
  This avoids confusion as to what <code>int</code> values mean.
  If you need access to the primitive <code>int</code> value then the enum
  provides the <code>int value</code>.
 @return the month-of-year, not null
 - seealso: #getMonthValue()
 */
- (JavaTimeMonth *)getMonth;

/*!
 @brief Gets the month-of-year field from 1 to 12.
 <p>
  This method returns the month as an <code>int</code> from 1 to 12.
  Application code is frequently clearer if the enum <code>Month</code>
  is used by calling <code>getMonth()</code>.
 @return the month-of-year, from 1 to 12
 - seealso: #getMonth()
 */
- (jint)getMonthValue;

/*!
 @brief Gets the year field.
 <p>
  This method returns the primitive <code>int</code> value for the year. 
 <p>
  The year returned by this method is proleptic as per <code>get(YEAR)</code>.
 @return the year, from MIN_YEAR to MAX_YEAR
 */
- (jint)getYear;

/*!
 @brief A hash code for this year-month.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Checks if this year-month is after the specified year-month.
 @param other the other year-month to compare to, not null
 @return true if this is after the specified year-month
 */
- (jboolean)isAfterWithJavaTimeYearMonth:(JavaTimeYearMonth *)other;

/*!
 @brief Checks if this year-month is before the specified year-month.
 @param other the other year-month to compare to, not null
 @return true if this point is before the specified year-month
 */
- (jboolean)isBeforeWithJavaTimeYearMonth:(JavaTimeYearMonth *)other;

/*!
 @brief Checks if the year is a leap year, according to the ISO proleptic
  calendar system rules.
 <p>
  This method applies the current rules for leap years across the whole time-line.
  In general, a year is a leap year if it is divisible by four without
  remainder. However, years divisible by 100, are not leap years, with
  the exception of years divisible by 400 which are. 
 <p>
  For example, 1904 is a leap year it is divisible by 4.
  1900 was not a leap year as it is divisible by 100, however 2000 was a
  leap year as it is divisible by 400. 
 <p>
  The calculation is proleptic - applying the same rules into the far future and far past.
  This is historically inaccurate, but is correct for the ISO-8601 standard.
 @return true if the year is leap, false otherwise
 */
- (jboolean)isLeapYear;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if this year-month can be queried for the specified field.
  If false, then calling the <code>range</code>,
  <code>get</code> and <code>with(TemporalField, long)</code>
  methods will throw an exception. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The supported fields are: 
 <ul>
  <li><code>MONTH_OF_YEAR</code>
  <li><code>PROLEPTIC_MONTH</code>
  <li><code>YEAR_OF_ERA</code>
  <li><code>YEAR</code>
  <li><code>ERA</code>
  </ul>
  All other <code>ChronoField</code> instances will return false. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field is supported on this year-month, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks if the specified unit is supported.
 <p>
  This checks if the specified unit can be added to, or subtracted from, this year-month.
  If false, then calling the <code>plus(long, TemporalUnit)</code> and 
 <code>minus</code> methods will throw an exception. 
 <p>
  If the unit is a <code>ChronoUnit</code> then the query is implemented here.
  The supported units are: 
 <ul>
  <li><code>MONTHS</code>
  <li><code>YEARS</code>
  <li><code>DECADES</code>
  <li><code>CENTURIES</code>
  <li><code>MILLENNIA</code>
  <li><code>ERAS</code>
  </ul>
  All other <code>ChronoUnit</code> instances will return false. 
 <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.isSupportedBy(Temporal)</code>
  passing <code>this</code> as the argument.
  Whether the unit is supported is determined by the unit.
 @param unit the unit to check, null returns false
 @return true if the unit can be added/subtracted, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Checks if the day-of-month is valid for this year-month.
 <p>
  This method checks whether this year and month and the input day form
  a valid date.
 @param dayOfMonth the day-of-month to validate, from 1 to 31, invalid value returns false
 @return true if the day is valid for this year-month
 */
- (jboolean)isValidDayWithInt:(jint)dayOfMonth;

/*!
 @brief Returns the length of the month, taking account of the year.
 <p>
  This returns the length of the month in days.
  For example, a date in January would return 31.
 @return the length of the month in days, from 28 to 31
 */
- (jint)lengthOfMonth;

/*!
 @brief Returns the length of the year.
 <p>
  This returns the length of the year in days, either 365 or 366.
 @return 366 if the year is leap, 365 otherwise
 */
- (jint)lengthOfYear;

/*!
 @brief Returns a copy of this year-month with the specified amount subtracted.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the amount
  in terms of the unit subtracted. If it is not possible to subtract the amount,
  because the unit is not supported or for some other reason, an exception is thrown. 
 <p>
  This method is equivalent to <code>plus(long, TemporalUnit)</code> with the amount negated.
  See that method for a full description of how addition, and thus subtraction, works. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToSubtract the amount of the unit to subtract from the result, may be negative
 @param unit the unit of the amount to subtract, not null
 @return a <code>YearMonth</code> based on this year-month with the specified amount subtracted, not null
 @throw DateTimeExceptionif the subtraction cannot be made
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)minusWithLong:(jlong)amountToSubtract
    withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns a copy of this year-month with the specified amount subtracted.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the specified amount subtracted.
  The amount is typically <code>Period</code> but may be any other type implementing
  the <code>TemporalAmount</code> interface. 
 <p>
  The calculation is delegated to the amount object by calling 
 <code>TemporalAmount.subtractFrom(Temporal)</code>. The amount implementation is free
  to implement the subtraction in any way it wishes, however it typically
  calls back to <code>minus(long, TemporalUnit)</code>. Consult the documentation
  of the amount implementation to determine if it can be successfully subtracted. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToSubtract the amount to subtract, not null
 @return a <code>YearMonth</code> based on this year-month with the subtraction made, not null
 @throw DateTimeExceptionif the subtraction cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)minusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToSubtract;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the specified number of months subtracted.
 <p>
  This instance is immutable and unaffected by this method call.
 @param monthsToSubtract the months to subtract, may be negative
 @return a <code>YearMonth</code> based on this year-month with the months subtracted, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYearMonth *)minusMonthsWithLong:(jlong)monthsToSubtract;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the specified number of years subtracted.
 <p>
  This instance is immutable and unaffected by this method call.
 @param yearsToSubtract the years to subtract, may be negative
 @return a <code>YearMonth</code> based on this year-month with the years subtracted, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYearMonth *)minusYearsWithLong:(jlong)yearsToSubtract;

/*!
 @brief Obtains the current year-month from the system clock in the default time-zone.
 <p>
  This will query the <code>system clock</code> in the default
  time-zone to obtain the current year-month. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @return the current year-month using the system clock and default time-zone, not null
 */
+ (JavaTimeYearMonth *)now;

/*!
 @brief Obtains the current year-month from the specified clock.
 <p>
  This will query the specified clock to obtain the current year-month.
  Using this method allows the use of an alternate clock for testing.
  The alternate clock may be introduced using <code>dependency injection</code>.
 @param clock the clock to use, not null
 @return the current year-month, not null
 */
+ (JavaTimeYearMonth *)nowWithJavaTimeClock:(JavaTimeClock *)clock;

/*!
 @brief Obtains the current year-month from the system clock in the specified time-zone.
 <p>
  This will query the <code>system clock</code> to obtain the current year-month.
  Specifying the time-zone avoids dependence on the default time-zone. 
 <p>
  Using this method will prevent the ability to use an alternate clock for testing
  because the clock is hard-coded.
 @param zone the zone ID to use, not null
 @return the current year-month using the system clock, not null
 */
+ (JavaTimeYearMonth *)nowWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Obtains an instance of <code>YearMonth</code> from a year and month.
 @param year the year to represent, from MIN_YEAR to MAX_YEAR
 @param month the month-of-year to represent, from 1 (January) to 12 (December)
 @return the year-month, not null
 @throw DateTimeExceptionif either field value is invalid
 */
+ (JavaTimeYearMonth *)ofWithInt:(jint)year
                         withInt:(jint)month;

/*!
 @brief Obtains an instance of <code>YearMonth</code> from a year and month.
 @param year the year to represent, from MIN_YEAR to MAX_YEAR
 @param month the month-of-year to represent, not null
 @return the year-month, not null
 @throw DateTimeExceptionif the year value is invalid
 */
+ (JavaTimeYearMonth *)ofWithInt:(jint)year
               withJavaTimeMonth:(JavaTimeMonth *)month;

/*!
 @brief Obtains an instance of <code>YearMonth</code> from a text string such as <code>2007-12</code>.
 <p>
  The string must represent a valid year-month.
  The format must be <code>uuuu-MM</code>.
  Years outside the range 0000 to 9999 must be prefixed by the plus or minus symbol.
 @param text the text to parse such as "2007-12", not null
 @return the parsed year-month, not null
 @throw DateTimeParseExceptionif the text cannot be parsed
 */
+ (JavaTimeYearMonth *)parseWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Obtains an instance of <code>YearMonth</code> from a text string using a specific formatter.
 <p>
  The text is parsed using the formatter, returning a year-month.
 @param text the text to parse, not null
 @param formatter the formatter to use, not null
 @return the parsed year-month, not null
 @throw DateTimeParseExceptionif the text cannot be parsed
 */
+ (JavaTimeYearMonth *)parseWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                 withJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Returns a copy of this year-month with the specified amount added.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the amount
  in terms of the unit added. If it is not possible to add the amount, because the
  unit is not supported or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoUnit</code> then the addition is implemented here.
  The supported fields behave as follows: 
 <ul>
  <li><code>MONTHS</code> -
   Returns a <code>YearMonth</code> with the specified number of months added.
   This is equivalent to <code>plusMonths(long)</code>.
  <li><code>YEARS</code> -
   Returns a <code>YearMonth</code> with the specified number of years added.
   This is equivalent to <code>plusYears(long)</code>.
  <li><code>DECADES</code> -
   Returns a <code>YearMonth</code> with the specified number of decades added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 10. 
 <li><code>CENTURIES</code> -
   Returns a <code>YearMonth</code> with the specified number of centuries added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 100. 
 <li><code>MILLENNIA</code> -
   Returns a <code>YearMonth</code> with the specified number of millennia added.
   This is equivalent to calling <code>plusYears(long)</code> with the amount
   multiplied by 1,000. 
 <li><code>ERAS</code> -
   Returns a <code>YearMonth</code> with the specified number of eras added.
   Only two eras are supported so the amount must be one, zero or minus one.
   If the amount is non-zero then the year is changed such that the year-of-era
   is unchanged. 
 </ul>
  <p>
  All other <code>ChronoUnit</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.addTo(Temporal, long)</code>
  passing <code>this</code> as the argument. In this case, the unit determines
  whether and how to perform the addition. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToAdd the amount of the unit to add to the result, may be negative
 @param unit the unit of the amount to add, not null
 @return a <code>YearMonth</code> based on this year-month with the specified amount added, not null
 @throw DateTimeExceptionif the addition cannot be made
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)plusWithLong:(jlong)amountToAdd
   withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns a copy of this year-month with the specified amount added.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the specified amount added.
  The amount is typically <code>Period</code> but may be any other type implementing
  the <code>TemporalAmount</code> interface. 
 <p>
  The calculation is delegated to the amount object by calling 
 <code>TemporalAmount.addTo(Temporal)</code>. The amount implementation is free
  to implement the addition in any way it wishes, however it typically
  calls back to <code>plus(long, TemporalUnit)</code>. Consult the documentation
  of the amount implementation to determine if it can be successfully added. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param amountToAdd the amount to add, not null
 @return a <code>YearMonth</code> based on this year-month with the addition made, not null
 @throw DateTimeExceptionif the addition cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)plusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amountToAdd;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the specified number of months added.
 <p>
  This instance is immutable and unaffected by this method call.
 @param monthsToAdd the months to add, may be negative
 @return a <code>YearMonth</code> based on this year-month with the months added, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYearMonth *)plusMonthsWithLong:(jlong)monthsToAdd;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the specified number of years added.
 <p>
  This instance is immutable and unaffected by this method call.
 @param yearsToAdd the years to add, may be negative
 @return a <code>YearMonth</code> based on this year-month with the years added, not null
 @throw DateTimeExceptionif the result exceeds the supported range
 */
- (JavaTimeYearMonth *)plusYearsWithLong:(jlong)yearsToAdd;

/*!
 @brief Queries this year-month using the specified query.
 <p>
  This queries this year-month using the specified query strategy object.
  The <code>TemporalQuery</code> object defines the logic to be used to
  obtain the result. Read the documentation of the query to understand
  what the result of this method will be. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalQuery.queryFrom(TemporalAccessor)</code> method on the
  specified query passing <code>this</code> as the argument.
 @param query the query to invoke, not null
 @return the query result, null may be returned (defined by the query)
 @throw DateTimeExceptionif unable to query (defined by the query)
 @throw ArithmeticExceptionif numeric overflow occurs (defined by the query)
 */
- (id)queryWithJavaTimeTemporalTemporalQuery:(id<JavaTimeTemporalTemporalQuery>)query;

/*!
 @brief Gets the range of valid values for the specified field.
 <p>
  The range object expresses the minimum and maximum valid values for a field.
  This year-month is used to enhance the accuracy of the returned range.
  If it is not possible to return the range, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>supported fields</code> will return
  appropriate range instances.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.rangeRefinedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the range can be obtained is determined by the field.
 @param field the field to query the range for, not null
 @return the range of valid values for the field, not null
 @throw DateTimeExceptionif the range for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 */
- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Outputs this year-month as a <code>String</code>, such as <code>2007-12</code>.
 <p>
  The output will be in the format <code>uuuu-MM</code>:
 @return a string representation of this year-month, not null
 */
- (NSString *)description;

/*!
 @brief Calculates the amount of time until another year-month in terms of the specified unit.
 <p>
  This calculates the amount of time between two <code>YearMonth</code>
  objects in terms of a single <code>TemporalUnit</code>.
  The start and end points are <code>this</code> and the specified year-month.
  The result will be negative if the end is before the start. The 
 <code>Temporal</code> passed to this method is converted to a 
 <code>YearMonth</code> using <code>from(TemporalAccessor)</code>.
  For example, the amount in years between two year-months can be calculated
  using <code>startYearMonth.until(endYearMonth, YEARS)</code>.
  <p>
  The calculation returns a whole number, representing the number of
  complete units between the two year-months.
  For example, the amount in decades between 2012-06 and 2032-05
  will only be one decade as it is one month short of two decades. 
 <p>
  There are two equivalent ways of using this method.
  The first is to invoke this method.
  The second is to use <code>TemporalUnit.between(Temporal, Temporal)</code>:
  @code

    // these two lines are equivalent
    amount = start.until(end, MONTHS);
    amount = MONTHS.between(start, end); 
  
@endcode
  The choice should be made based on which makes the code more readable. 
 <p>
  The calculation is implemented in this method for <code>ChronoUnit</code>.
  The units <code>MONTHS</code>, <code>YEARS</code>, <code>DECADES</code>,
  <code>CENTURIES</code>, <code>MILLENNIA</code> and <code>ERAS</code> are supported.
  Other <code>ChronoUnit</code> values will throw an exception. 
 <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.between(Temporal, Temporal)</code>
  passing <code>this</code> as the first argument and the converted input temporal
  as the second argument. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param endExclusive the end date, exclusive, which is converted to a <code>YearMonth</code> , not null
 @param unit the unit to measure the amount in, not null
 @return the amount of time between this year-month and the end year-month
 @throw DateTimeExceptionif the amount cannot be calculated, or the end
   temporal cannot be converted to a <code>YearMonth</code>
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)untilWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)endExclusive
          withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns an adjusted copy of this year-month.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the year-month adjusted.
  The adjustment takes place using the specified adjuster strategy object.
  Read the documentation of the adjuster to understand what adjustment will be made. 
 <p>
  A simple adjuster might simply set the one of the fields, such as the year field.
  A more complex adjuster might set the year-month to the next month that
  Halley's comet will pass the Earth. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalAdjuster.adjustInto(Temporal)</code> method on the
  specified adjuster passing <code>this</code> as the argument. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param adjuster the adjuster to use, not null
 @return a <code>YearMonth</code> based on <code>this</code> with the adjustment made, not null
 @throw DateTimeExceptionif the adjustment cannot be made
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)withWithJavaTimeTemporalTemporalAdjuster:(id<JavaTimeTemporalTemporalAdjuster>)adjuster;

/*!
 @brief Returns a copy of this year-month with the specified field set to a new value.
 <p>
  This returns a <code>YearMonth</code>, based on this one, with the value
  for the specified field changed.
  This can be used to change any supported field, such as the year or month.
  If it is not possible to set the value, because the field is not supported or for
  some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the adjustment is implemented here.
  The supported fields behave as follows: 
 <ul>
  <li><code>MONTH_OF_YEAR</code> -
   Returns a <code>YearMonth</code> with the specified month-of-year.
   The year will be unchanged. 
 <li><code>PROLEPTIC_MONTH</code> -
   Returns a <code>YearMonth</code> with the specified proleptic-month.
   This completely replaces the year and month of this object. 
 <li><code>YEAR_OF_ERA</code> -
   Returns a <code>YearMonth</code> with the specified year-of-era
   The month and era will be unchanged. 
 <li><code>YEAR</code> -
   Returns a <code>YearMonth</code> with the specified year.
   The month will be unchanged. 
 <li><code>ERA</code> -
   Returns a <code>YearMonth</code> with the specified era.
   The month and year-of-era will be unchanged. 
 </ul>
  <p>
  In all cases, if the new value is outside the valid range of values for the field
  then a <code>DateTimeException</code> will be thrown. 
 <p>
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.adjustInto(Temporal, long)</code>
  passing <code>this</code> as the argument. In this case, the field determines
  whether and how to adjust the instant. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param field the field to set in the result, not null
 @param newValue the new value of the field in the result
 @return a <code>YearMonth</code> based on <code>this</code> with the specified field set, not null
 @throw DateTimeExceptionif the field cannot be set
 @throw UnsupportedTemporalTypeExceptionif the field is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (JavaTimeYearMonth *)withWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field
                                                    withLong:(jlong)newValue;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the month-of-year altered.
 <p>
  This instance is immutable and unaffected by this method call.
 @param month the month-of-year to set in the returned year-month, from 1 (January) to 12 (December)
 @return a <code>YearMonth</code> based on this year-month with the requested month, not null
 @throw DateTimeExceptionif the month-of-year value is invalid
 */
- (JavaTimeYearMonth *)withMonthWithInt:(jint)month;

/*!
 @brief Returns a copy of this <code>YearMonth</code> with the year altered.
 <p>
  This instance is immutable and unaffected by this method call.
 @param year the year to set in the returned year-month, from MIN_YEAR to MAX_YEAR
 @return a <code>YearMonth</code> based on this year-month with the requested year, not null
 @throw DateTimeExceptionif the year value is invalid
 */
- (JavaTimeYearMonth *)withYearWithInt:(jint)year;

#pragma mark Package-Private

+ (JavaTimeYearMonth *)readExternalWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

- (void)writeExternalWithJavaIoDataOutput:(id<JavaIoDataOutput>)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaTimeYearMonth)

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_now(void);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_nowWithJavaTimeZoneId_(JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_nowWithJavaTimeClock_(JavaTimeClock *clock);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_ofWithInt_withJavaTimeMonth_(jint year, JavaTimeMonth *month);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_ofWithInt_withInt_(jint year, jint month);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_parseWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_parseWithJavaLangCharSequence_withJavaTimeFormatDateTimeFormatter_(id<JavaLangCharSequence> text, JavaTimeFormatDateTimeFormatter *formatter);

FOUNDATION_EXPORT JavaTimeYearMonth *JavaTimeYearMonth_readExternalWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeYearMonth)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeYearMonth")
