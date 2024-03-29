//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/format/SignStyle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeFormatSignStyle")
#ifdef RESTRICT_JavaTimeFormatSignStyle
#define INCLUDE_ALL_JavaTimeFormatSignStyle 0
#else
#define INCLUDE_ALL_JavaTimeFormatSignStyle 1
#endif
#undef RESTRICT_JavaTimeFormatSignStyle

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeFormatSignStyle_) && (INCLUDE_ALL_JavaTimeFormatSignStyle || defined(INCLUDE_JavaTimeFormatSignStyle))
#define JavaTimeFormatSignStyle_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaLangBoolean;

typedef NS_ENUM(jint, JavaTimeFormatSignStyle_Enum) {
  JavaTimeFormatSignStyle_Enum_NORMAL = 0,
  JavaTimeFormatSignStyle_Enum_ALWAYS = 1,
  JavaTimeFormatSignStyle_Enum_NEVER = 2,
  JavaTimeFormatSignStyle_Enum_NOT_NEGATIVE = 3,
  JavaTimeFormatSignStyle_Enum_EXCEEDS_PAD = 4,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define JavaTimeFormatSignStyle_ORDINAL jint
#else
#define JavaTimeFormatSignStyle_ORDINAL JavaTimeFormatSignStyle_Enum
#endif


/*!
 @brief Enumeration of ways to handle the positive/negative sign.
 <p>
  The formatting engine allows the positive and negative signs of numbers
  to be controlled using this enum.
  See <code>DateTimeFormatterBuilder</code> for usage.
 @since 1.8
 */
@interface JavaTimeFormatSignStyle : JavaLangEnum

#pragma mark Public

+ (JavaTimeFormatSignStyle *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

/*!
 @brief Parse helper.
 @param positive true if positive sign parsed, false for negative sign
 @param strict true if strict, false if lenient
 @param fixedWidth true if fixed width, false if not
 */
- (jboolean)parseWithBoolean:(jboolean)positive
                 withBoolean:(jboolean)strict
                 withBoolean:(jboolean)fixedWidth;

- (JavaTimeFormatSignStyle_Enum)toNSEnum;

- (JavaTimeFormatSignStyle_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(JavaTimeFormatSignStyle)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_values_[];

/*!
 @brief Style to output the sign only if the value is negative.
 <p>
  In strict parsing, the negative sign will be accepted and the positive sign rejected.
  In lenient parsing, any sign will be accepted.
 */
inline JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_get_NORMAL(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatSignStyle, NORMAL)

/*!
 @brief Style to always output the sign, where zero will output '+'.
 <p>
  In strict parsing, the absence of a sign will be rejected.
  In lenient parsing, any sign will be accepted, with the absence
  of a sign treated as a positive number.
 */
inline JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_get_ALWAYS(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatSignStyle, ALWAYS)

/*!
 @brief Style to never output sign, only outputting the absolute value.
 <p>
  In strict parsing, any sign will be rejected.
  In lenient parsing, any sign will be accepted unless the width is fixed.
 */
inline JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_get_NEVER(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatSignStyle, NEVER)

/*!
 @brief Style to block negative values, throwing an exception on printing.
 <p>
  In strict parsing, any sign will be rejected.
  In lenient parsing, any sign will be accepted unless the width is fixed.
 */
inline JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_get_NOT_NEGATIVE(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatSignStyle, NOT_NEGATIVE)

/*!
 @brief Style to always output the sign if the value exceeds the pad width.
 A negative value will always output the '-' sign. 
 <p>
  In strict parsing, the sign will be rejected unless the pad width is exceeded.
  In lenient parsing, any sign will be accepted, with the absence
  of a sign treated as a positive number.
 */
inline JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_get_EXCEEDS_PAD(void);
J2OBJC_ENUM_CONSTANT(JavaTimeFormatSignStyle, EXCEEDS_PAD)

FOUNDATION_EXPORT IOSObjectArray *JavaTimeFormatSignStyle_values(void);

FOUNDATION_EXPORT JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTimeFormatSignStyle *JavaTimeFormatSignStyle_fromOrdinal(JavaTimeFormatSignStyle_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeFormatSignStyle)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeFormatSignStyle")
