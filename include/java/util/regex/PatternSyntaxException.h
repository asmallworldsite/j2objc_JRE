//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/regex/PatternSyntaxException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilRegexPatternSyntaxException")
#ifdef RESTRICT_JavaUtilRegexPatternSyntaxException
#define INCLUDE_ALL_JavaUtilRegexPatternSyntaxException 0
#else
#define INCLUDE_ALL_JavaUtilRegexPatternSyntaxException 1
#endif
#undef RESTRICT_JavaUtilRegexPatternSyntaxException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilRegexPatternSyntaxException_) && (INCLUDE_ALL_JavaUtilRegexPatternSyntaxException || defined(INCLUDE_JavaUtilRegexPatternSyntaxException))
#define JavaUtilRegexPatternSyntaxException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangInteger;
@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown to indicate a syntax error in a
  regular-expression pattern.
 @since 1.4
 */
@interface JavaUtilRegexPatternSyntaxException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 @param desc A description of the error
 @param regex The erroneous pattern
 @param index The approximate index in the pattern of the error,
           or <code>-1</code>
   if the index is not known
 */
- (instancetype __nonnull)initWithNSString:(NSString *)desc
                              withNSString:(NSString *)regex
                                   withInt:(jint)index;

/*!
 @brief Retrieves the description of the error.
 @return The description of the error
 */
- (NSString *)getDescription;

/*!
 @brief Retrieves the error index.
 @return The approximate index in the pattern of the error,
          or <code>-1</code> if the index is not known
 */
- (jint)getIndex;

/*!
 @brief Returns a multi-line string containing the description of the syntax
  error and its index, the erroneous regular-expression pattern, and a
  visual indication of the error index within the pattern.
 @return The full detail message
 */
- (NSString *)getMessage;

/*!
 @brief Retrieves the erroneous regular-expression pattern.
 @return The erroneous pattern
 */
- (NSString *)getPattern;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexPatternSyntaxException)

FOUNDATION_EXPORT void JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(JavaUtilRegexPatternSyntaxException *self, NSString *desc, NSString *regex, jint index);

FOUNDATION_EXPORT JavaUtilRegexPatternSyntaxException *new_JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(NSString *desc, NSString *regex, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRegexPatternSyntaxException *create_JavaUtilRegexPatternSyntaxException_initWithNSString_withNSString_withInt_(NSString *desc, NSString *regex, jint index);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexPatternSyntaxException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilRegexPatternSyntaxException")
