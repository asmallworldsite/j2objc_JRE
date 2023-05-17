//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/ChronoLocalDate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoChronoLocalDate")
#ifdef RESTRICT_JavaTimeChronoChronoLocalDate
#define INCLUDE_ALL_JavaTimeChronoChronoLocalDate 0
#else
#define INCLUDE_ALL_JavaTimeChronoChronoLocalDate 1
#endif
#undef RESTRICT_JavaTimeChronoChronoLocalDate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoChronoLocalDate_) && (INCLUDE_ALL_JavaTimeChronoChronoLocalDate || defined(INCLUDE_JavaTimeChronoChronoLocalDate))
#define JavaTimeChronoChronoLocalDate_

#define RESTRICT_JavaTimeTemporalTemporal 1
#define INCLUDE_JavaTimeTemporalTemporal 1
#include "java/time/temporal/Temporal.h"

#define RESTRICT_JavaTimeTemporalTemporalAdjuster 1
#define INCLUDE_JavaTimeTemporalTemporalAdjuster 1
#include "java/time/temporal/TemporalAdjuster.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeFormatDateTimeFormatter;
@class JavaTimeLocalTime;
@protocol JavaTimeChronoChronoLocalDateTime;
@protocol JavaTimeChronoChronoPeriod;
@protocol JavaTimeChronoChronology;
@protocol JavaTimeChronoEra;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaTimeTemporalTemporalAmount;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;
@protocol JavaTimeTemporalTemporalUnit;
@protocol JavaUtilComparator;

/*!
 @brief A date without time-of-day or time-zone in an arbitrary chronology, intended
  for advanced globalization use cases.
 <p>
  <b>Most applications should declare method signatures, fields and variables
  as <code>LocalDate</code>, not this interface.</b>
  <p>
  A <code>ChronoLocalDate</code> is the abstract representation of a date where the 
 <code>Chronology chronology</code>, or calendar system, is pluggable.
  The date is defined in terms of fields expressed by <code>TemporalField</code>,
  where most common implementations are defined in <code>ChronoField</code>.
  The chronology defines how the calendar system operates and the meaning of
  the standard fields. 
 <h3>When to use this interface</h3>
  The design of the API encourages the use of <code>LocalDate</code> rather than this
  interface, even in the case where the application needs to deal with multiple
  calendar systems. 
 <p>
  This concept can seem surprising at first, as the natural way to globalize an
  application might initially appear to be to abstract the calendar system.
  However, as explored below, abstracting the calendar system is usually the wrong
  approach, resulting in logic errors and hard to find bugs.
  As such, it should be considered an application-wide architectural decision to choose
  to use this interface as opposed to <code>LocalDate</code>.
  
 <h3>Architectural issues to consider</h3>
  These are some of the points that must be considered before using this interface
  throughout an application. 
 <p>
  1) Applications using this interface, as opposed to using just <code>LocalDate</code>,
  face a significantly higher probability of bugs. This is because the calendar system
  in use is not known at development time. A key cause of bugs is where the developer
  applies assumptions from their day-to-day knowledge of the ISO calendar system
  to code that is intended to deal with any arbitrary calendar system.
  The section below outlines how those assumptions can cause problems
  The primary mechanism for reducing this increased risk of bugs is a strong code review process.
  This should also be considered a extra cost in maintenance for the lifetime of the code. 
 <p>
  2) This interface does not enforce immutability of implementations.
  While the implementation notes indicate that all implementations must be immutable
  there is nothing in the code or type system to enforce this. Any method declared
  to accept a <code>ChronoLocalDate</code> could therefore be passed a poorly or
  maliciously written mutable implementation. 
 <p>
  3) Applications using this interface  must consider the impact of eras. 
 <code>LocalDate</code> shields users from the concept of eras, by ensuring that <code>getYear()</code>
  returns the proleptic year. That decision ensures that developers can think of 
 <code>LocalDate</code> instances as consisting of three fields - year, month-of-year and day-of-month.
  By contrast, users of this interface must think of dates as consisting of four fields -
  era, year-of-era, month-of-year and day-of-month. The extra era field is frequently
  forgotten, yet it is of vital importance to dates in an arbitrary calendar system.
  For example, in the Japanese calendar system, the era represents the reign of an Emperor.
  Whenever one reign ends and another starts, the year-of-era is reset to one. 
 <p>
  4) The only agreed international standard for passing a date between two systems
  is the ISO-8601 standard which requires the ISO calendar system. Using this interface
  throughout the application will inevitably lead to the requirement to pass the date
  across a network or component boundary, requiring an application specific protocol or format. 
 <p>
  5) Long term persistence, such as a database, will almost always only accept dates in the
  ISO-8601 calendar system (or the related Julian-Gregorian). Passing around dates in other
  calendar systems increases the complications of interacting with persistence. 
 <p>
  6) Most of the time, passing a <code>ChronoLocalDate</code> throughout an application
  is unnecessary, as discussed in the last section below. 
 <h3>False assumptions causing bugs in multi-calendar system code</h3>
  As indicated above, there are many issues to consider when try to use and manipulate a
  date in an arbitrary calendar system. These are some of the key issues. 
 <p>
  Code that queries the day-of-month and assumes that the value will never be more than
  31 is invalid. Some calendar systems have more than 31 days in some months. 
 <p>
  Code that adds 12 months to a date and assumes that a year has been added is invalid.
  Some calendar systems have a different number of months, such as 13 in the Coptic or Ethiopic. 
 <p>
  Code that adds one month to a date and assumes that the month-of-year value will increase
  by one or wrap to the next year is invalid. Some calendar systems have a variable number
  of months in a year, such as the Hebrew. 
 <p>
  Code that adds one month, then adds a second one month and assumes that the day-of-month
  will remain close to its original value is invalid. Some calendar systems have a large difference
  between the length of the longest month and the length of the shortest month.
  For example, the Coptic or Ethiopic have 12 months of 30 days and 1 month of 5 days. 
 <p>
  Code that adds seven days and assumes that a week has been added is invalid.
  Some calendar systems have weeks of other than seven days, such as the French Revolutionary. 
 <p>
  Code that assumes that because the year of <code>date1</code> is greater than the year of <code>date2</code>
  then <code>date1</code> is after <code>date2</code> is invalid. This is invalid for all calendar systems
  when referring to the year-of-era, and especially untrue of the Japanese calendar system
  where the year-of-era restarts with the reign of every new Emperor. 
 <p>
  Code that treats month-of-year one and day-of-month one as the start of the year is invalid.
  Not all calendar systems start the year when the month value is one. 
 <p>
  In general, manipulating a date, and even querying a date, is wide open to bugs when the
  calendar system is unknown at development time. This is why it is essential that code using
  this interface is subjected to additional code reviews. It is also why an architectural
  decision to avoid this interface type is usually the correct one. 
 <h3>Using LocalDate instead</h3>
  The primary alternative to using this interface throughout your application is as follows. 
 <ul>
  <li>Declare all method signatures referring to dates in terms of <code>LocalDate</code>.
  <li>Either store the chronology (calendar system) in the user profile or lookup
   the chronology from the user locale 
 <li>Convert the ISO <code>LocalDate</code> to and from the user's preferred calendar system during
   printing and parsing 
 </ul>
  This approach treats the problem of globalized calendar systems as a localization issue
  and confines it to the UI layer. This approach is in keeping with other localization
  issues in the java platform. 
 <p>
  As discussed above, performing calculations on a date where the rules of the calendar system
  are pluggable requires skill and is not recommended.
  Fortunately, the need to perform calculations on a date in an arbitrary calendar system
  is extremely rare. For example, it is highly unlikely that the business rules of a library
  book rental scheme will allow rentals to be for one month, where meaning of the month
  is dependent on the user's preferred calendar system. 
 <p>
  A key use case for calculations on a date in an arbitrary calendar system is producing
  a month-by-month calendar for display and user interaction. Again, this is a UI issue,
  and use of this interface solely within a few methods of the UI layer may be justified. 
 <p>
  In any other part of the system, where a date must be manipulated in a calendar system
  other than ISO, the use case will generally specify the calendar system to use.
  For example, an application may need to calculate the next Islamic or Hebrew holiday
  which may require manipulating the date.
  This kind of use case can be handled as follows: 
 <ul>
  <li>start from the ISO <code>LocalDate</code> being passed to the method 
 <li>convert the date to the alternate calendar system, which for this use case is known
   rather than arbitrary 
 <li>perform the calculation 
 <li>convert back to <code>LocalDate</code>
  </ul>
  Developers writing low-level frameworks or libraries should also avoid this interface.
  Instead, one of the two general purpose access interfaces should be used.
  Use <code>TemporalAccessor</code> if read-only access is required, or use <code>Temporal</code>
  if read-write access is required.
 @since 1.8
 */
@protocol JavaTimeChronoChronoLocalDate < JavaTimeTemporalTemporal, JavaTimeTemporalTemporalAdjuster, JavaLangComparable, JavaObject >

/*!
 @brief Gets the chronology of this date.
 <p>
  The <code>Chronology</code> represents the calendar system in use.
  The era and other fields in <code>ChronoField</code> are defined by the chronology.
 @return the chronology, not null
 */
- (id<JavaTimeChronoChronology>)getChronology;

/*!
 @brief Gets the era, as defined by the chronology.
 <p>
  The era is, conceptually, the largest division of the time-line.
  Most calendar systems have a single epoch dividing the time-line into two eras.
  However, some have multiple eras, such as one for the reign of each leader.
  The exact meaning is determined by the <code>Chronology</code>.
  <p>
  All correctly implemented <code>Era</code> classes are singletons, thus it
  is valid code to write <code>date.getEra() == SomeChrono.ERA_NAME)</code>.
  <p>
  This default implementation uses <code>Chronology.eraOf(int)</code>.
 @return the chronology specific era constant applicable at this date, not null
 */
- (id<JavaTimeChronoEra>)getEra;

/*!
 @brief Checks if the year is a leap year, as defined by the calendar system.
 <p>
  A leap-year is a year of a longer length than normal.
  The exact meaning is determined by the chronology with the constraint that
  a leap-year must imply a year-length longer than a non leap-year. 
 <p>
  This default implementation uses <code>Chronology.isLeapYear(long)</code>.
 @return true if this date is in a leap year, false otherwise
 */
- (jboolean)isLeapYear;

/*!
 @brief Returns the length of the month represented by this date, as defined by the calendar system.
 <p>
  This returns the length of the month in days.
 @return the length of the month in days
 */
- (jint)lengthOfMonth;

/*!
 @brief Returns the length of the year represented by this date, as defined by the calendar system.
 <p>
  This returns the length of the year in days. 
 <p>
  The default implementation uses <code>isLeapYear()</code> and returns 365 or 366.
 @return the length of the year in days
 */
- (jint)lengthOfYear;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if the specified field can be queried on this date.
  If false, then calling the <code>range</code>,
  <code>get</code> and <code>with(TemporalField, long)</code>
  methods will throw an exception. 
 <p>
  The set of supported fields is defined by the chronology and normally includes
  all <code>ChronoField</code> date fields. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field can be queried, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks if the specified unit is supported.
 <p>
  This checks if the specified unit can be added to or subtracted from this date.
  If false, then calling the <code>plus(long, TemporalUnit)</code> and 
 <code>minus</code> methods will throw an exception. 
 <p>
  The set of supported units is defined by the chronology and normally includes
  all <code>ChronoUnit</code> date units except <code>FOREVER</code>.
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
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)withWithJavaTimeTemporalTemporalAdjuster:(id<JavaTimeTemporalTemporalAdjuster>)adjuster;

/*!
 @throw DateTimeException
 @throw UnsupportedTemporalTypeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)withWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field
                                                                  withLong:(jlong)newValue;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)plusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amount;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)plusWithLong:(jlong)amountToAdd
                 withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)minusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amount;

/*!
 @throw DateTimeException
 @throw UnsupportedTemporalTypeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoLocalDate>)minusWithLong:(jlong)amountToSubtract
                  withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Queries this date using the specified query.
 <p>
  This queries this date using the specified query strategy object.
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
 @brief Adjusts the specified temporal object to have the same date as this object.
 <p>
  This returns a temporal object of the same observable type as the input
  with the date changed to be the same as this. 
 <p>
  The adjustment is equivalent to using <code>Temporal.with(TemporalField, long)</code>
  passing <code>ChronoField.EPOCH_DAY</code> as the field. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.with(TemporalAdjuster)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    temporal = thisLocalDate.adjustInto(temporal);
    temporal = temporal.with(thisLocalDate); 
  
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
 @brief Calculates the amount of time until another date in terms of the specified unit.
 <p>
  This calculates the amount of time between two <code>ChronoLocalDate</code>
  objects in terms of a single <code>TemporalUnit</code>.
  The start and end points are <code>this</code> and the specified date.
  The result will be negative if the end is before the start. The 
 <code>Temporal</code> passed to this method is converted to a 
 <code>ChronoLocalDate</code> using <code>Chronology.date(TemporalAccessor)</code>.
  The calculation returns a whole number, representing the number of
  complete units between the two dates.
  For example, the amount in days between two dates can be calculated
  using <code>startDate.until(endDate, DAYS)</code>.
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
  The units <code>DAYS</code>, <code>WEEKS</code>, <code>MONTHS</code>, <code>YEARS</code>,
  <code>DECADES</code>, <code>CENTURIES</code>, <code>MILLENNIA</code> and <code>ERAS</code>
  should be supported by all implementations.
  Other <code>ChronoUnit</code> values will throw an exception. 
 <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.between(Temporal, Temporal)</code>
  passing <code>this</code> as the first argument and the converted input temporal as
  the second argument. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param endExclusive the end date, exclusive, which is converted to a   
 <code>ChronoLocalDate</code>  in the same chronology, not null
 @param unit the unit to measure the amount in, not null
 @return the amount of time between this date and the end date
 @throw DateTimeExceptionif the amount cannot be calculated, or the end
   temporal cannot be converted to a <code>ChronoLocalDate</code>
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (jlong)untilWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)endExclusive
          withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Calculates the period between this date and another date as a <code>ChronoPeriod</code>.
 <p>
  This calculates the period between two dates. All supplied chronologies
  calculate the period using years, months and days, however the 
 <code>ChronoPeriod</code> API allows the period to be represented using other units. 
 <p>
  The start and end points are <code>this</code> and the specified date.
  The result will be negative if the end is before the start.
  The negative sign will be the same in each of year, month and day. 
 <p>
  The calculation is performed using the chronology of this date.
  If necessary, the input date will be converted to match. 
 <p>
  This instance is immutable and unaffected by this method call.
 @param endDateExclusive the end date, exclusive, which may be in any chronology, not null
 @return the period between this date and the end date, not null
 @throw DateTimeExceptionif the period cannot be calculated
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeChronoChronoPeriod>)untilWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)endDateExclusive;

/*!
 @brief Formats this date using the specified formatter.
 <p>
  This date will be passed to the formatter to produce a string. 
 <p>
  The default implementation must behave as follows: 
 @code

   return formatter.format(this); 
  
@endcode
 @param formatter the formatter to use, not null
 @return the formatted date string, not null
 @throw DateTimeExceptionif an error occurs during printing
 */
- (NSString *)formatWithJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Combines this date with a time to create a <code>ChronoLocalDateTime</code>.
 <p>
  This returns a <code>ChronoLocalDateTime</code> formed from this date at the specified time.
  All possible combinations of date and time are valid.
 @param localTime the local time to use, not null
 @return the local date-time formed from this date and the specified time, not null
 */
- (id<JavaTimeChronoChronoLocalDateTime>)atTimeWithJavaTimeLocalTime:(JavaTimeLocalTime *)localTime;

/*!
 @brief Converts this date to the Epoch Day.
 <p>
  The <code>Epoch Day count</code> is a simple
  incrementing count of days where day 0 is 1970-01-01 (ISO).
  This definition is the same for all chronologies, enabling conversion. 
 <p>
  This default implementation queries the <code>EPOCH_DAY</code> field.
 @return the Epoch Day equivalent to this date
 */
- (jlong)toEpochDay;

/*!
 @brief Compares this date to another date, including the chronology.
 <p>
  The comparison is based first on the underlying time-line date, then
  on the chronology.
  It is "consistent with equals", as defined by <code>Comparable</code>.
  <p>
  For example, the following is the comparator order: 
 <ol>
  <li><code>2012-12-03 (ISO)</code></li>
  <li><code>2012-12-04 (ISO)</code></li>
  <li><code>2555-12-04 (ThaiBuddhist)</code></li>
  <li><code>2012-12-05 (ISO)</code></li>
  </ol>
  Values #2 and #3 represent the same date on the time-line.
  When two values represent the same date, the chronology ID is compared to distinguish them.
  This step is needed to make the ordering "consistent with equals". 
 <p>
  If all the date objects being compared are in the same chronology, then the
  additional chronology stage is not required and only the local date is used.
  To compare the dates of two <code>TemporalAccessor</code> instances, including dates
  in two different chronologies, use <code>ChronoField.EPOCH_DAY</code> as a comparator. 
 <p>
  This default implementation performs the comparison defined above.
 @param other the other date to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(id<JavaTimeChronoChronoLocalDate>)other;

/*!
 @brief Checks if this date is after the specified date ignoring the chronology.
 <p>
  This method differs from the comparison in <code>compareTo</code> in that it
  only compares the underlying date and not the chronology.
  This allows dates in different calendar systems to be compared based
  on the time-line position.
  This is equivalent to using <code>date1.toEpochDay() > date2.toEpochDay()</code>.
  <p>
  This default implementation performs the comparison based on the epoch-day.
 @param other the other date to compare to, not null
 @return true if this is after the specified date
 */
- (jboolean)isAfterWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)other;

/*!
 @brief Checks if this date is before the specified date ignoring the chronology.
 <p>
  This method differs from the comparison in <code>compareTo</code> in that it
  only compares the underlying date and not the chronology.
  This allows dates in different calendar systems to be compared based
  on the time-line position.
  This is equivalent to using <code>date1.toEpochDay() < date2.toEpochDay()</code>.
  <p>
  This default implementation performs the comparison based on the epoch-day.
 @param other the other date to compare to, not null
 @return true if this is before the specified date
 */
- (jboolean)isBeforeWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)other;

/*!
 @brief Checks if this date is equal to the specified date ignoring the chronology.
 <p>
  This method differs from the comparison in <code>compareTo</code> in that it
  only compares the underlying date and not the chronology.
  This allows dates in different calendar systems to be compared based
  on the time-line position.
  This is equivalent to using <code>date1.toEpochDay() == date2.toEpochDay()</code>.
  <p>
  This default implementation performs the comparison based on the epoch-day.
 @param other the other date to compare to, not null
 @return true if the underlying date is equal to the specified date
 */
- (jboolean)isEqualWithJavaTimeChronoChronoLocalDate:(id<JavaTimeChronoChronoLocalDate>)other;

/*!
 @brief Checks if this date is equal to another date, including the chronology.
 <p>
  Compares this date with another ensuring that the date and chronology are the same. 
 <p>
  To compare the dates of two <code>TemporalAccessor</code> instances, including dates
  in two different chronologies, use <code>ChronoField.EPOCH_DAY</code> as a comparator.
 @param obj the object to check, null returns false
 @return true if this is equal to the other date
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief A hash code for this date.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Outputs this date as a <code>String</code>.
 <p>
  The output will include the full local date.
 @return the formatted date, not null
 */
- (NSString *)description;

@end

@interface JavaTimeChronoChronoLocalDate : NSObject

/*!
 @brief Gets a comparator that compares <code>ChronoLocalDate</code> in
  time-line order ignoring the chronology.
 <p>
  This comparator differs from the comparison in <code>compareTo</code> in that it
  only compares the underlying date and not the chronology.
  This allows dates in different calendar systems to be compared based
  on the position of the date on the local time-line.
  The underlying comparison is equivalent to comparing the epoch-day.
 @return a comparator that compares in time-line order ignoring the chronology
 - seealso: #isAfter
 - seealso: #isBefore
 - seealso: #isEqual
 */
+ (id<JavaUtilComparator>)timeLineOrder;

/*!
 @brief Obtains an instance of <code>ChronoLocalDate</code> from a temporal object.
 <p>
  This obtains a local date based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>ChronoLocalDate</code>.
  <p>
  The conversion extracts and combines the chronology and the date
  from the temporal object. The behavior is equivalent to using 
 <code>Chronology.date(TemporalAccessor)</code> with the extracted chronology.
  Implementations are permitted to perform optimizations such as accessing
  those fields that are equivalent to the relevant objects. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>ChronoLocalDate::from</code>.
 @param temporal the temporal object to convert, not null
 @return the date, not null
 @throw DateTimeExceptionif unable to convert to a <code>ChronoLocalDate</code>
 - seealso: Chronology#date(TemporalAccessor)
 */
+ (id<JavaTimeChronoChronoLocalDate>)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeChronoChronoLocalDate)

FOUNDATION_EXPORT id<JavaUtilComparator> JavaTimeChronoChronoLocalDate_timeLineOrder(void);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT id<JavaTimeChronoEra> JavaTimeChronoChronoLocalDate_getEra(id<JavaTimeChronoChronoLocalDate> self);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isLeapYear(id<JavaTimeChronoChronoLocalDate> self);

FOUNDATION_EXPORT jint JavaTimeChronoChronoLocalDate_lengthOfYear(id<JavaTimeChronoChronoLocalDate> self);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isSupportedWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isSupportedWithJavaTimeTemporalTemporalUnit_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalUnit> unit);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_withWithJavaTimeTemporalTemporalAdjuster_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalAdjuster> adjuster);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_withWithJavaTimeTemporalTemporalField_withLong_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalField> field, jlong newValue);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_plusWithJavaTimeTemporalTemporalAmount_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalAmount> amount);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_plusWithLong_withJavaTimeTemporalTemporalUnit_(id<JavaTimeChronoChronoLocalDate> self, jlong amountToAdd, id<JavaTimeTemporalTemporalUnit> unit);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_minusWithJavaTimeTemporalTemporalAmount_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalAmount> amount);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoLocalDate_minusWithLong_withJavaTimeTemporalTemporalUnit_(id<JavaTimeChronoChronoLocalDate> self, jlong amountToSubtract, id<JavaTimeTemporalTemporalUnit> unit);

FOUNDATION_EXPORT id JavaTimeChronoChronoLocalDate_queryWithJavaTimeTemporalTemporalQuery_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporalQuery> query);

FOUNDATION_EXPORT id<JavaTimeTemporalTemporal> JavaTimeChronoChronoLocalDate_adjustIntoWithJavaTimeTemporalTemporal_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeTemporalTemporal> temporal);

FOUNDATION_EXPORT NSString *JavaTimeChronoChronoLocalDate_formatWithJavaTimeFormatDateTimeFormatter_(id<JavaTimeChronoChronoLocalDate> self, JavaTimeFormatDateTimeFormatter *formatter);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDateTime> JavaTimeChronoChronoLocalDate_atTimeWithJavaTimeLocalTime_(id<JavaTimeChronoChronoLocalDate> self, JavaTimeLocalTime *localTime);

FOUNDATION_EXPORT jlong JavaTimeChronoChronoLocalDate_toEpochDay(id<JavaTimeChronoChronoLocalDate> self);

FOUNDATION_EXPORT jint JavaTimeChronoChronoLocalDate_compareToWithJavaTimeChronoChronoLocalDate_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeChronoChronoLocalDate> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isAfterWithJavaTimeChronoChronoLocalDate_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeChronoChronoLocalDate> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isBeforeWithJavaTimeChronoChronoLocalDate_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeChronoChronoLocalDate> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoLocalDate_isEqualWithJavaTimeChronoChronoLocalDate_(id<JavaTimeChronoChronoLocalDate> self, id<JavaTimeChronoChronoLocalDate> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoChronoLocalDate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoChronoLocalDate")
