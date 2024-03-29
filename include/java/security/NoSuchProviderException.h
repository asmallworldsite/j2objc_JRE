//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/NoSuchProviderException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityNoSuchProviderException")
#ifdef RESTRICT_JavaSecurityNoSuchProviderException
#define INCLUDE_ALL_JavaSecurityNoSuchProviderException 0
#else
#define INCLUDE_ALL_JavaSecurityNoSuchProviderException 1
#endif
#undef RESTRICT_JavaSecurityNoSuchProviderException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityNoSuchProviderException_) && (INCLUDE_ALL_JavaSecurityNoSuchProviderException || defined(INCLUDE_JavaSecurityNoSuchProviderException))
#define JavaSecurityNoSuchProviderException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when a particular security provider is
  requested but is not available in the environment.
 @author Benjamin Renaud
 @since 1.1
 */
@interface JavaSecurityNoSuchProviderException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a NoSuchProviderException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a NoSuchProviderException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityNoSuchProviderException)

FOUNDATION_EXPORT void JavaSecurityNoSuchProviderException_init(JavaSecurityNoSuchProviderException *self);

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *new_JavaSecurityNoSuchProviderException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *create_JavaSecurityNoSuchProviderException_init(void);

FOUNDATION_EXPORT void JavaSecurityNoSuchProviderException_initWithNSString_(JavaSecurityNoSuchProviderException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *new_JavaSecurityNoSuchProviderException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityNoSuchProviderException *create_JavaSecurityNoSuchProviderException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityNoSuchProviderException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityNoSuchProviderException")
