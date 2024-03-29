//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/Era.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoEra")
#ifdef RESTRICT_JavaTimeChronoEra
#define INCLUDE_ALL_JavaTimeChronoEra 0
#else
#define INCLUDE_ALL_JavaTimeChronoEra 1
#endif
#undef RESTRICT_JavaTimeChronoEra

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoEra_) && (INCLUDE_ALL_JavaTimeChronoEra || defined(INCLUDE_JavaTimeChronoEra))
#define JavaTimeChronoEra_

#define RESTRICT_JavaTimeTemporalTemporalAccessor 1
#define INCLUDE_JavaTimeTemporalTemporalAccessor 1
#include "java/time/temporal/TemporalAccessor.h"

#define RESTRICT_JavaTimeTemporalTemporalAdjuster 1
#define INCLUDE_JavaTimeTemporalTemporalAdjuster 1
#include "java/time/temporal/TemporalAdjuster.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeFormatTextStyle;
@class JavaTimeTemporalValueRange;
@class JavaUtilLocale;
@protocol JavaTimeTemporalTemporal;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;

/*!
 @brief An era of the time-line.
 <p>
  Most calendar systems have a single epoch dividing the time-line into two eras.
  However, some calendar systems, have multiple eras, such as one for the reign
  of each leader.
  In all cases, the era is conceptually the largest division of the time-line.
  Each chronology defines the Era's that are known Eras and a 
 <code>Chronology.eras</code> to get the valid eras. 
 <p>
  For example, the Thai Buddhist calendar system divides time into two eras,
  before and after a single date. By contrast, the Japanese calendar system
  has one era for the reign of each Emperor. 
 <p>
  Instances of <code>Era</code> may be compared using the <code>==</code> operator.
 @since 1.8
 */
@protocol JavaTimeChronoEra < JavaTimeTemporalTemporalAccessor, JavaTimeTemporalTemporalAdjuster, JavaObject >

/*!
 @brief Gets the numeric value associated with the era as defined by the chronology.
 Each chronology defines the predefined Eras and methods to list the Eras
  of the chronology. 
 <p>
  All fields, including eras, have an associated numeric value.
  The meaning of the numeric value for era is determined by the chronology
  according to these principles: 
 <ul>
  <li>The era in use at the epoch 1970-01-01 (ISO) has the value 1. 
 <li>Later eras have sequentially higher values. 
 <li>Earlier eras have sequentially lower values, which may be negative. 
 </ul>
 @return the numeric era value
 */
- (jint)getValue;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if this era can be queried for the specified field.
  If false, then calling the <code>range</code> and 
 <code>get</code> methods will throw an exception. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>ERA</code> field returns true.
  All other <code>ChronoField</code> instances will return false. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field is supported on this era, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the range of valid values for the specified field.
 <p>
  The range object expresses the minimum and maximum valid values for a field.
  This era is used to enhance the accuracy of the returned range.
  If it is not possible to return the range, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>ERA</code> field returns the range.
  All other <code>ChronoField</code> instances will throw an <code>UnsupportedTemporalTypeException</code>.
  <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.rangeRefinedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the range can be obtained is determined by the field. 
 <p>
  The default implementation must return a range for <code>ERA</code> from
  zero to one, suitable for two era calendar systems such as ISO.
 @param field the field to query the range for, not null
 @return the range of valid values for the field, not null
 @throw DateTimeExceptionif the range for the field cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the unit is not supported
 */
- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the value of the specified field from this era as an <code>int</code>.
 <p>
  This queries this era for the value of the specified field.
  The returned value will always be within the valid range of values for the field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>ERA</code> field returns the value of the era.
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
 @brief Gets the value of the specified field from this era as a <code>long</code>.
 <p>
  This queries this era for the value of the specified field.
  If it is not possible to return the value, because the field is not supported
  or for some other reason, an exception is thrown. 
 <p>
  If the field is a <code>ChronoField</code> then the query is implemented here.
  The <code>ERA</code> field returns the value of the era.
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
 @brief Queries this era using the specified query.
 <p>
  This queries this era using the specified query strategy object.
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
 @brief Adjusts the specified temporal object to have the same era as this object.
 <p>
  This returns a temporal object of the same observable type as the input
  with the era changed to be the same as this. 
 <p>
  The adjustment is equivalent to using <code>Temporal.with(TemporalField, long)</code>
  passing <code>ChronoField.ERA</code> as the field. 
 <p>
  In most cases, it is clearer to reverse the calling pattern by using 
 <code>Temporal.with(TemporalAdjuster)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    temporal = thisEra.adjustInto(temporal);
    temporal = temporal.with(thisEra); 
  
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
 @brief Gets the textual representation of this era.
 <p>This returns the textual name used to identify the era, suitable for presentation to the
  user. The parameters control the style of the returned text and the locale. 
 <p>If no textual mapping is found then the <code>numeric value</code> is returned.
 @param style the style of the text required, not null
 @param locale the locale to use, not null
 @return the text value of the era, not null
 */
- (NSString *)getDisplayNameWithJavaTimeFormatTextStyle:(JavaTimeFormatTextStyle *)style
                                     withJavaUtilLocale:(JavaUtilLocale *)locale;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeChronoEra)

FOUNDATION_EXPORT jboolean JavaTimeChronoEra_isSupportedWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT JavaTimeTemporalValueRange *JavaTimeChronoEra_rangeWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT jint JavaTimeChronoEra_getWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT jlong JavaTimeChronoEra_getLongWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT id JavaTimeChronoEra_queryWithJavaTimeTemporalTemporalQuery_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporalQuery> query);

FOUNDATION_EXPORT id<JavaTimeTemporalTemporal> JavaTimeChronoEra_adjustIntoWithJavaTimeTemporalTemporal_(id<JavaTimeChronoEra> self, id<JavaTimeTemporalTemporal> temporal);

FOUNDATION_EXPORT NSString *JavaTimeChronoEra_getDisplayNameWithJavaTimeFormatTextStyle_withJavaUtilLocale_(id<JavaTimeChronoEra> self, JavaTimeFormatTextStyle *style, JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoEra)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoEra")
