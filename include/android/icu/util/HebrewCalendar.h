//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/util/HebrewCalendar.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuUtilHebrewCalendar")
#ifdef RESTRICT_AndroidIcuUtilHebrewCalendar
#define INCLUDE_ALL_AndroidIcuUtilHebrewCalendar 0
#else
#define INCLUDE_ALL_AndroidIcuUtilHebrewCalendar 1
#endif
#undef RESTRICT_AndroidIcuUtilHebrewCalendar

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuUtilHebrewCalendar_) && (INCLUDE_ALL_AndroidIcuUtilHebrewCalendar || defined(INCLUDE_AndroidIcuUtilHebrewCalendar))
#define AndroidIcuUtilHebrewCalendar_

#define RESTRICT_AndroidIcuUtilCalendar 1
#define INCLUDE_AndroidIcuUtilCalendar 1
#include "android/icu/util/Calendar.h"

@class AndroidIcuUtilTimeZone;
@class AndroidIcuUtilULocale;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaUtilDate;
@class JavaUtilLocale;

/*!
 @brief <code>HebrewCalendar</code> is a subclass of <code>Calendar</code>
  that that implements the traditional Hebrew calendar.
 This is the civil calendar in Israel and the liturgical calendar
  of the Jewish faith worldwide. 
 <p>
  The Hebrew calendar is lunisolar and thus has a number of interesting
  properties that distinguish it from the Gregorian.  Months start
  on the day of (an arithmetic approximation of) each new moon.  Since the
  solar year (approximately 365.24 days) is not an even multiple of
  the lunar month (approximately 29.53 days) an extra "leap month" is
  inserted in 7 out of every 19 years.  To make matters even more
  interesting, the start of a year can be delayed by up to three days
  in order to prevent certain holidays from falling on the Sabbath and
  to prevent certain illegal year lengths.  Finally, the lengths of certain
  months can vary depending on the number of days in the year. 
 <p>
  The leap month is known as "Adar 1" and is inserted between the
  months of Shevat and Adar in leap years.  Since the leap month does
  not come at the end of the year, calculations involving
  month numbers are particularly complex.  Users of this class should
  make sure to use the <code>roll</code> and <code>add</code> methods
  rather than attempting to perform date arithmetic by manipulating
  the fields directly. 
 <p>
  <b>Note:</b> In the traditional Hebrew calendar, days start at sunset.
  However, in order to keep the time fields in this class
  synchronized with those of the other calendars and with local clock time,
  we treat days and months as beginning at midnight,
  roughly 6 hours after the corresponding sunset. 
 <p>
  If you are interested in more information on the rules behind the Hebrew
  calendar, see one of the following references: 
 <ul>
  <li>"<a href="http://www.amazon.com/exec/obidos/ASIN/0521564743">Calendrical Calculations</a>",
       by Nachum Dershowitz &amp; Edward Reingold, Cambridge University Press, 1997, pages 85-91. 
 <li>Hebrew Calendar Science and Myths,
       <a href="http://web.archive.org/web/20090423084613/http://www.geocities.com/Athens/1584/">
       http://web.archive.org/web/20090423084613/http://www.geocities.com/Athens/1584/</a>
  
 <li>The Calendar FAQ,
       <a href="http://www.faqs.org/faqs/calendars/faq/">
       http://www.faqs.org/faqs/calendars/faq/</a>
  </ul>
  
 <p>
  This class should not be subclassed.</p>
  <p>
  HebrewCalendar usually should be instantiated using  
 <code>android.icu.util.Calendar.getInstance(ULocale)</code> passing in a <code>ULocale</code>
  with the tag <code>"@@calendar=hebrew"</code>.</p>
 - seealso: android.icu.util.GregorianCalendar
 - seealso: android.icu.util.Calendar
 @author Laura Werner
 @author Alan Liu
 */
@interface AndroidIcuUtilHebrewCalendar : AndroidIcuUtilCalendar

#pragma mark Public

/*!
 @brief Constructs a default <code>HebrewCalendar</code> using the current time
  in the default time zone with the default <code>FORMAT</code> locale.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>HebrewCalendar</code> with the given date set
  in the default time zone with the default <code>FORMAT</code> locale.
 @param date The date to which the new calendar is set.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Constructs a <code>HebrewCalendar</code> with the given date set
  in the default time zone with the default <code>FORMAT</code> locale.
 @param year The value used to set the calendar's <code>YEAR</code>  time field.
 @param month The value used to set the calendar's <code>MONTH</code>  time field.                   The value is 0-based. e.g., 0 for Tishri.
 @param date The value used to set the calendar's <code>DATE</code>  time field.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date;

/*!
 @brief Constructs a <code>HebrewCalendar</code> with the given date
  and time set for the default time zone with the default <code>FORMAT</code> locale.
 @param year The value used to set the calendar's <code>YEAR</code>  time field.
 @param month The value used to set the calendar's <code>MONTH</code>  time field.                   The value is 0-based. e.g., 0 for Tishri.
 @param date The value used to set the calendar's <code>DATE</code>  time field.
 @param hour The value used to set the calendar's <code>HOUR_OF_DAY</code>  time field.
 @param minute The value used to set the calendar's <code>MINUTE</code>  time field.
 @param second The value used to set the calendar's <code>SECOND</code>  time field.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithInt:(jint)year
                              withInt:(jint)month
                              withInt:(jint)date
                              withInt:(jint)hour
                              withInt:(jint)minute
                              withInt:(jint)second;

/*!
 @brief Constructs a <code>HebrewCalendar</code> based on the current time
  in the default time zone with the given locale.
 @param aLocale The locale for the new calendar.
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)aLocale;

/*!
 @brief Constructs a <code>HebrewCalendar</code> based on the current time
  in the given time zone with the default <code>FORMAT</code> locale.
 @param zone The time zone for the new calendar.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone;

/*!
 @brief Constructs a <code>HebrewCalendar</code> based on the current time
  in the given time zone with the given locale.
 @param zone The time zone for the new calendar.
 @param aLocale The locale for the new calendar.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone
                                      withJavaUtilLocale:(JavaUtilLocale *)aLocale;

/*!
 @brief Constructs a <code>HebrewCalendar</code> based on the current time
  in the given time zone with the given locale.
 @param zone The time zone for the new calendar.
 @param locale The locale for the new calendar.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilTimeZone:(AndroidIcuUtilTimeZone *)zone
                               withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Constructs a <code>HebrewCalendar</code> based on the current time
  in the default time zone with the given locale.
 @param locale The locale for the new calendar.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Add a signed amount to a specified field, using this calendar's rules.
 For example, to add three days to the current date, you can call 
 <code>add(Calendar.DATE, 3)</code>.  
 <p>
  When adding to certain fields, the values of other fields may conflict and
  need to be changed.  For example, when adding one to the <code>MONTH</code> field
  for the date "30 Av 5758", the <code>DAY_OF_MONTH</code> field
  must be adjusted so that the result is "29 Elul 5758" rather than the invalid
  "30 Elul 5758". 
 <p>
  This method is able to add to
  all fields except for <code>ERA</code>, <code>DST_OFFSET</code>,
  and <code>ZONE_OFFSET</code>.
  <p>
  <b>Note:</b> You should always use <code>roll</code> and add rather
  than attempting to perform arithmetic operations directly on the fields
  of a <tt>HebrewCalendar</tt>.  Since the <code>MONTH</code> field behaves
  discontinuously in non-leap years, simple arithmetic can give invalid results. 
 <p>
 @param field the time field.
 @param amount the amount to add to the field.
 @throw IllegalArgumentExceptionif the field is invalid or refers
               to a field that cannot be handled by this method.
 */
- (void)addWithInt:(jint)field
           withInt:(jint)amount;

/*!
 */
- (NSString *)getType;

/*!
 @brief Determine whether a given Hebrew year is a leap year
  The rule here is that if (year % 19) == 0, 3, 6, 8, 11, 14, or 17.
 The formula below performs the same test, believe it or not.
 */
+ (jboolean)isLeapYearWithInt:(jint)year;

/*!
 @brief Rolls (up/down) a specified amount time on the given field.For
  example, to roll the current date up by three days, you can call 
 <code>roll(Calendar.DATE, 3)</code>.
 If the
  field is rolled past its maximum allowable value, it will "wrap" back
  to its minimum and continue rolling.  
  For example, calling <code>roll(Calendar.DATE, 10)</code>
  on a Hebrew calendar set to "25 Av 5758" will result in the date "5 Av 5758". 
 <p>
  When rolling certain fields, the values of other fields may conflict and
  need to be changed.  For example, when rolling the <code>MONTH</code> field
  upward by one for the date "30 Av 5758", the <code>DAY_OF_MONTH</code> field
  must be adjusted so that the result is "29 Elul 5758" rather than the invalid
  "30 Elul". 
 <p>
  This method is able to roll
  all fields except for <code>ERA</code>, <code>DST_OFFSET</code>,
  and <code>ZONE_OFFSET</code>.  Subclasses may, of course, add support for
  additional fields in their overrides of <code>roll</code>.
  <p>
  <b>Note:</b> You should always use roll and <code>add</code> rather
  than attempting to perform arithmetic operations directly on the fields
  of a <tt>HebrewCalendar</tt>.  Since the <code>MONTH</code> field behaves
  discontinuously in non-leap years, simple arithmetic can give invalid results. 
 <p>
 @param field the time field.
 @param amount the amount by which the field should be rolled.
 @throw IllegalArgumentExceptionif the field is invalid or refers
               to a field that cannot be handled by this method.
 */
- (void)rollWithInt:(jint)field
            withInt:(jint)amount;

#pragma mark Protected

/*!
 @brief Subclasses may override this method to compute several fields
  specific to each calendar system.These are: 
 <ul><li>ERA
  <li>YEAR
  <li>MONTH
  <li>DAY_OF_MONTH
  <li>DAY_OF_YEAR
  <li>EXTENDED_YEAR</ul>
  
  Subclasses can refer to the DAY_OF_WEEK and DOW_LOCAL fields,
  which will be set when this method is called.
 Subclasses can
  also call the getGregorianXxx() methods to obtain Gregorian
  calendar equivalents for the given Julian day. 
 <p>In addition, subclasses should compute any subclass-specific
  fields, that is, fields from BASE_FIELD_COUNT to
  getFieldCount() - 1.
 */
- (void)handleComputeFieldsWithInt:(jint)julianDay;

/*!
 @brief Return JD of start of given month/year.
 */
- (jint)handleComputeMonthStartWithInt:(jint)eyear
                               withInt:(jint)month
                           withBoolean:(jboolean)useMonth;

/*!
 */
- (jint)handleGetExtendedYear;

/*!
 */
- (jint)handleGetLimitWithInt:(jint)field
                      withInt:(jint)limitType;

/*!
 @brief Returns the length of the given month in the given year
 */
- (jint)handleGetMonthLengthWithInt:(jint)extendedYear
                            withInt:(jint)month;

/*!
 @brief Returns the number of days in the given Hebrew year
 */
- (jint)handleGetYearLengthWithInt:(jint)eyear;

/*!
 @brief  <p>
  Overrides <code>Calendar.validateField(int)</code> to provide
  special handling for month validation for Hebrew calendar.
 */
- (void)validateFieldWithInt:(jint)field;

@end

J2OBJC_STATIC_INIT(AndroidIcuUtilHebrewCalendar)

/*!
 @brief Constant for Tishri, the 1st month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_TISHRI(void);
#define AndroidIcuUtilHebrewCalendar_TISHRI 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, TISHRI, jint)

/*!
 @brief Constant for Heshvan, the 2nd month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_HESHVAN(void);
#define AndroidIcuUtilHebrewCalendar_HESHVAN 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, HESHVAN, jint)

/*!
 @brief Constant for Kislev, the 3rd month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_KISLEV(void);
#define AndroidIcuUtilHebrewCalendar_KISLEV 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, KISLEV, jint)

/*!
 @brief Constant for Tevet, the 4th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_TEVET(void);
#define AndroidIcuUtilHebrewCalendar_TEVET 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, TEVET, jint)

/*!
 @brief Constant for Shevat, the 5th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_SHEVAT(void);
#define AndroidIcuUtilHebrewCalendar_SHEVAT 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, SHEVAT, jint)

/*!
 @brief Constant for Adar I, the 6th month of the Hebrew year
  (present in leap years only).In non-leap years, the calendar
  jumps from Shevat (5th month) to Adar (7th month).
 */
inline jint AndroidIcuUtilHebrewCalendar_get_ADAR_1(void);
#define AndroidIcuUtilHebrewCalendar_ADAR_1 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, ADAR_1, jint)

/*!
 @brief Constant for the Adar, the 7th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_ADAR(void);
#define AndroidIcuUtilHebrewCalendar_ADAR 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, ADAR, jint)

/*!
 @brief Constant for Nisan, the 8th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_NISAN(void);
#define AndroidIcuUtilHebrewCalendar_NISAN 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, NISAN, jint)

/*!
 @brief Constant for Iyar, the 9th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_IYAR(void);
#define AndroidIcuUtilHebrewCalendar_IYAR 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, IYAR, jint)

/*!
 @brief Constant for Sivan, the 10th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_SIVAN(void);
#define AndroidIcuUtilHebrewCalendar_SIVAN 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, SIVAN, jint)

/*!
 @brief Constant for Tammuz, the 11th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_TAMUZ(void);
#define AndroidIcuUtilHebrewCalendar_TAMUZ 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, TAMUZ, jint)

/*!
 @brief Constant for Av, the 12th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_AV(void);
#define AndroidIcuUtilHebrewCalendar_AV 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, AV, jint)

/*!
 @brief Constant for Elul, the 13th month of the Hebrew year.
 */
inline jint AndroidIcuUtilHebrewCalendar_get_ELUL(void);
#define AndroidIcuUtilHebrewCalendar_ELUL 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuUtilHebrewCalendar, ELUL, jint)

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_init(AndroidIcuUtilHebrewCalendar *self);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_init(void);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilHebrewCalendar *self, AndroidIcuUtilTimeZone *zone);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilTimeZone *zone) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_(AndroidIcuUtilTimeZone *zone);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithJavaUtilLocale_(AndroidIcuUtilHebrewCalendar *self, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithJavaUtilLocale_(JavaUtilLocale *aLocale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithJavaUtilLocale_(JavaUtilLocale *aLocale);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilHebrewCalendar *self, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilHebrewCalendar *self, AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withJavaUtilLocale_(AndroidIcuUtilTimeZone *zone, JavaUtilLocale *aLocale);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilHebrewCalendar *self, AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithAndroidIcuUtilTimeZone_withAndroidIcuUtilULocale_(AndroidIcuUtilTimeZone *zone, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_(AndroidIcuUtilHebrewCalendar *self, jint year, jint month, jint date);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_(jint year, jint month, jint date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_(jint year, jint month, jint date);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithJavaUtilDate_(AndroidIcuUtilHebrewCalendar *self, JavaUtilDate *date);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithJavaUtilDate_(JavaUtilDate *date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithJavaUtilDate_(JavaUtilDate *date);

FOUNDATION_EXPORT void AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(AndroidIcuUtilHebrewCalendar *self, jint year, jint month, jint date, jint hour, jint minute, jint second);

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *new_AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilHebrewCalendar *create_AndroidIcuUtilHebrewCalendar_initWithInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second);

FOUNDATION_EXPORT jboolean AndroidIcuUtilHebrewCalendar_isLeapYearWithInt_(jint year);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilHebrewCalendar)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidIcuUtilHebrewCalendar")
