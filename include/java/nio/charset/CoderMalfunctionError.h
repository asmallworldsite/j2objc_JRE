//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/CoderMalfunctionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetCoderMalfunctionError")
#ifdef RESTRICT_JavaNioCharsetCoderMalfunctionError
#define INCLUDE_ALL_JavaNioCharsetCoderMalfunctionError 0
#else
#define INCLUDE_ALL_JavaNioCharsetCoderMalfunctionError 1
#endif
#undef RESTRICT_JavaNioCharsetCoderMalfunctionError

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetCoderMalfunctionError_) && (INCLUDE_ALL_JavaNioCharsetCoderMalfunctionError || defined(INCLUDE_JavaNioCharsetCoderMalfunctionError))
#define JavaNioCharsetCoderMalfunctionError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangBoolean;
@class JavaLangException;
@class JavaLangThrowable;

/*!
 @brief Error thrown when the <code>decodeLoop</code> method of
  a <code>CharsetDecoder</code>, or the <code>encodeLoop</code>
  method of a <code>CharsetEncoder</code>, throws an unexpected
  exception.
 @since 1.4
 */
@interface JavaNioCharsetCoderMalfunctionError : JavaLangError

#pragma mark Public

/*!
 @brief Initializes an instance of this class.
 @param cause The unexpected exception that was thrown
 */
- (instancetype __nonnull)initWithJavaLangException:(JavaLangException *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetCoderMalfunctionError)

FOUNDATION_EXPORT void JavaNioCharsetCoderMalfunctionError_initWithJavaLangException_(JavaNioCharsetCoderMalfunctionError *self, JavaLangException *cause);

FOUNDATION_EXPORT JavaNioCharsetCoderMalfunctionError *new_JavaNioCharsetCoderMalfunctionError_initWithJavaLangException_(JavaLangException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioCharsetCoderMalfunctionError *create_JavaNioCharsetCoderMalfunctionError_initWithJavaLangException_(JavaLangException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCoderMalfunctionError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetCoderMalfunctionError")
