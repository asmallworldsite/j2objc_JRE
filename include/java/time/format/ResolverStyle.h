//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/format/ResolverStyle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeFormatResolverStyle")
#ifdef RESTRICT_JavaTimeFormatResolverStyle
#define INCLUDE_ALL_JavaTimeFormatResolverStyle 0
#else
#define INCLUDE_ALL_JavaTimeFormatResolverStyle 1
#endif
#undef RESTRICT_JavaTimeFormatResolverStyle

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeFormatResolverStyle_) && (INCLUDE_ALL_JavaTimeFormatResolverStyle || defined(INCLUDE_JavaTimeFormatResolverStyle))
#define JavaTimeFormatResolverStyle_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, JavaTimeFormatResolverStyle_Enum) {
  JavaTimeFormatResolverStyle_Enum_STRICT = 0,
  JavaTimeFormatResolverStyle_Enum_SMART = 1,
  JavaTimeFormatResolverStyle_Enum_LENIENT = 2,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define JavaTimeFormatResolverStyle_ORDINAL jint
#else
#define JavaTimeFormatResolverStyle_ORDINAL JavaTimeFormatResolverStyle_Enum
#endif


/*!
 @brief Enumeration of different ways to resolve dates and times.
 <p>
  Parsing a text string occurs in two phases.
  Phase 1 is a basic text parse according to the fields added to the builder.
  Phase 2 resolves the parsed field-value pairs into date and/or time objects.
  This style is used to control how phase 2, resolving, happens.
 @since 1.8
 */
@interface JavaTimeFormatResolverStyle : JavaLangEnum

#pragma mark Public

+ (JavaTimeFormatResolverStyle *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaTimeFormatResolverStyle_Enum)toNSEnum;

- (JavaTimeFormatResolverStyle_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(JavaTimeFormatResolverStyle)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_values_[];

/*!
 @brief Style to resolve dates and times strictly.
 <p>
  Using strict resolution will ensure that all parsed values are within
  the outer range of valid values for the field. Individual fields may
  be further processed for strictness. 
 <p>
  For example, resolving year-month and day-of-month in the ISO calendar
  system using strict mode will ensure that the day-of-month is valid
  for the year-month, rejecting invalid values.
 */
inline JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_get_STRICT(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatResolverStyle, STRICT)

/*!
 @brief Style to resolve dates and times in a smart, or intelligent, manner.
 <p>
  Using smart resolution will perform the sensible default for each
  field, which may be the same as strict, the same as lenient, or a third
  behavior. Individual fields will interpret this differently. 
 <p>
  For example, resolving year-month and day-of-month in the ISO calendar
  system using smart mode will ensure that the day-of-month is from
  1 to 31, converting any value beyond the last valid day-of-month to be
  the last valid day-of-month.
 */
inline JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_get_SMART(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatResolverStyle, SMART)

/*!
 @brief Style to resolve dates and times leniently.
 <p>
  Using lenient resolution will resolve the values in an appropriate
  lenient manner. Individual fields will interpret this differently. 
 <p>
  For example, lenient mode allows the month in the ISO calendar system
  to be outside the range 1 to 12.
  For example, month 15 is treated as being 3 months after month 12.
 */
inline JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_get_LENIENT(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatResolverStyle, LENIENT)

FOUNDATION_EXPORT IOSObjectArray *JavaTimeFormatResolverStyle_values(void);

FOUNDATION_EXPORT JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTimeFormatResolverStyle *JavaTimeFormatResolverStyle_fromOrdinal(JavaTimeFormatResolverStyle_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeFormatResolverStyle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeFormatResolverStyle")
