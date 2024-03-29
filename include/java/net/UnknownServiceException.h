//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/UnknownServiceException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetUnknownServiceException")
#ifdef RESTRICT_JavaNetUnknownServiceException
#define INCLUDE_ALL_JavaNetUnknownServiceException 0
#else
#define INCLUDE_ALL_JavaNetUnknownServiceException 1
#endif
#undef RESTRICT_JavaNetUnknownServiceException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetUnknownServiceException_) && (INCLUDE_ALL_JavaNetUnknownServiceException || defined(INCLUDE_JavaNetUnknownServiceException))
#define JavaNetUnknownServiceException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that an unknown service exception has
  occurred.Either the MIME type returned by a URL connection does
  not make sense, or the application is attempting to write to a
  read-only URL connection.
 @author unascribed
 @since JDK1.0
 */
@interface JavaNetUnknownServiceException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnknownServiceException</code> with no
  detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>UnknownServiceException</code> with the
  specified detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetUnknownServiceException)

FOUNDATION_EXPORT void JavaNetUnknownServiceException_init(JavaNetUnknownServiceException *self);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetUnknownServiceException *create_JavaNetUnknownServiceException_init(void);

FOUNDATION_EXPORT void JavaNetUnknownServiceException_initWithNSString_(JavaNetUnknownServiceException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetUnknownServiceException *create_JavaNetUnknownServiceException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetUnknownServiceException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetUnknownServiceException")
