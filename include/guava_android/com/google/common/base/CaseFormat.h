//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/CaseFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCaseFormat")
#ifdef RESTRICT_ComGoogleCommonBaseCaseFormat
#define INCLUDE_ALL_ComGoogleCommonBaseCaseFormat 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCaseFormat 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCaseFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCaseFormat_) && (INCLUDE_ALL_ComGoogleCommonBaseCaseFormat || defined(INCLUDE_ComGoogleCommonBaseCaseFormat))
#define ComGoogleCommonBaseCaseFormat_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class ComGoogleCommonBaseConverter;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonBaseCaseFormat_Enum) {
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_HYPHEN = 0,
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_UNDERSCORE = 1,
  ComGoogleCommonBaseCaseFormat_Enum_LOWER_CAMEL = 2,
  ComGoogleCommonBaseCaseFormat_Enum_UPPER_CAMEL = 3,
  ComGoogleCommonBaseCaseFormat_Enum_UPPER_UNDERSCORE = 4,
};

/*!
 @brief Utility class for converting between various ASCII case formats.Behavior is undefined for
  non-ASCII input.
 @author Mike Bostock
 @since 1.0
 */
@interface ComGoogleCommonBaseCaseFormat : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonBaseCaseFormat *LOWER_HYPHEN NS_SWIFT_NAME(LOWER_HYPHEN);
@property (readonly, class, nonnull) ComGoogleCommonBaseCaseFormat *LOWER_UNDERSCORE NS_SWIFT_NAME(LOWER_UNDERSCORE);
@property (readonly, class, nonnull) ComGoogleCommonBaseCaseFormat *LOWER_CAMEL NS_SWIFT_NAME(LOWER_CAMEL);
@property (readonly, class, nonnull) ComGoogleCommonBaseCaseFormat *UPPER_CAMEL NS_SWIFT_NAME(UPPER_CAMEL);
@property (readonly, class, nonnull) ComGoogleCommonBaseCaseFormat *UPPER_UNDERSCORE NS_SWIFT_NAME(UPPER_UNDERSCORE);
#pragma mark Public

/*!
 @brief Returns a <code>Converter</code> that converts strings from this format to <code>targetFormat</code>.
 @since 16.0
 */
- (ComGoogleCommonBaseConverter *)converterToWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat * __nonnull)targetFormat;

/*!
 @brief Converts the specified <code>String str</code> from this format to the specified <code>format</code>.A
  "best effort" approach is taken; if <code>str</code> does not conform to the assumed format, then
  the behavior of this method is undefined but we make a reasonable effort at converting anyway.
 */
- (NSString *)toWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat * __nonnull)format
                                     withNSString:(NSString * __nonnull)str;

+ (ComGoogleCommonBaseCaseFormat *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

/*!
 @brief Enum values can override for performance reasons.
 */
- (NSString *)convertWithComGoogleCommonBaseCaseFormat:(ComGoogleCommonBaseCaseFormat * __nonnull)format
                                          withNSString:(NSString * __nonnull)s;

- (NSString *)normalizeFirstWordWithNSString:(NSString * __nonnull)word;

- (NSString *)normalizeWordWithNSString:(NSString * __nonnull)word;

- (ComGoogleCommonBaseCaseFormat_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseCaseFormat)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_values_[];

/*!
 @brief Hyphenated variable naming convention, e.g., "lower-hyphen".
 */
inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_HYPHEN(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_HYPHEN)

/*!
 @brief C++ variable naming convention, e.g., "lower_underscore".
 */
inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_UNDERSCORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_UNDERSCORE)

/*!
 @brief Java variable naming convention, e.g., "lowerCamel".
 */
inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_LOWER_CAMEL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, LOWER_CAMEL)

/*!
 @brief Java and C++ class naming convention, e.g., "UpperCamel".
 */
inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_UPPER_CAMEL(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, UPPER_CAMEL)

/*!
 @brief Java and C++ constant naming convention, e.g., "UPPER_UNDERSCORE".
 */
inline ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_get_UPPER_UNDERSCORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBaseCaseFormat, UPPER_UNDERSCORE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBaseCaseFormat_values(void);

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBaseCaseFormat *ComGoogleCommonBaseCaseFormat_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCaseFormat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCaseFormat")
