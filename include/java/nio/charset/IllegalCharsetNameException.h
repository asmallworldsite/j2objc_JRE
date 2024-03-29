//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/IllegalCharsetNameException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetIllegalCharsetNameException")
#ifdef RESTRICT_JavaNioCharsetIllegalCharsetNameException
#define INCLUDE_ALL_JavaNioCharsetIllegalCharsetNameException 0
#else
#define INCLUDE_ALL_JavaNioCharsetIllegalCharsetNameException 1
#endif
#undef RESTRICT_JavaNioCharsetIllegalCharsetNameException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetIllegalCharsetNameException_) && (INCLUDE_ALL_JavaNioCharsetIllegalCharsetNameException || defined(INCLUDE_JavaNioCharsetIllegalCharsetNameException))
#define JavaNioCharsetIllegalCharsetNameException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when a string that is not a 
 <a href=Charset.html#names>legal charset name</a> is used as such.
 @since 1.4
 */
@interface JavaNioCharsetIllegalCharsetNameException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 @param charsetName The illegal charset name
 */
- (instancetype __nonnull)initWithNSString:(NSString *)charsetName;

/*!
 @brief Retrieves the illegal charset name.
 @return The illegal charset name
 */
- (NSString *)getCharsetName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetIllegalCharsetNameException)

FOUNDATION_EXPORT void JavaNioCharsetIllegalCharsetNameException_initWithNSString_(JavaNioCharsetIllegalCharsetNameException *self, NSString *charsetName);

FOUNDATION_EXPORT JavaNioCharsetIllegalCharsetNameException *new_JavaNioCharsetIllegalCharsetNameException_initWithNSString_(NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioCharsetIllegalCharsetNameException *create_JavaNioCharsetIllegalCharsetNameException_initWithNSString_(NSString *charsetName);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetIllegalCharsetNameException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetIllegalCharsetNameException")
