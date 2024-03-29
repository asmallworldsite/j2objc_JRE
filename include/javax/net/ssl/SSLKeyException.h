//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLKeyException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLKeyException")
#ifdef RESTRICT_JavaxNetSslSSLKeyException
#define INCLUDE_ALL_JavaxNetSslSSLKeyException 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLKeyException 1
#endif
#undef RESTRICT_JavaxNetSslSSLKeyException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLKeyException_) && (INCLUDE_ALL_JavaxNetSslSSLKeyException || defined(INCLUDE_JavaxNetSslSSLKeyException))
#define JavaxNetSslSSLKeyException_

#define RESTRICT_JavaxNetSslSSLException 1
#define INCLUDE_JavaxNetSslSSLException 1
#include "javax/net/ssl/SSLException.h"

@class JavaLangThrowable;

/*!
 @brief Reports a bad SSL key.Normally, this indicates misconfiguration
  of the server or client SSL certificate and private key.
 @since 1.4
 @author David Brownell
 */
@interface JavaxNetSslSSLKeyException : JavaxNetSslSSLException

#pragma mark Public

/*!
 @brief Constructs an exception reporting a key management error
  found by an SSL subsystem.
 @param reason describes the problem.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLKeyException)

FOUNDATION_EXPORT void JavaxNetSslSSLKeyException_initWithNSString_(JavaxNetSslSSLKeyException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLKeyException *new_JavaxNetSslSSLKeyException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLKeyException *create_JavaxNetSslSSLKeyException_initWithNSString_(NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLKeyException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLKeyException")
