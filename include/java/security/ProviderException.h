//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/ProviderException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityProviderException")
#ifdef RESTRICT_JavaSecurityProviderException
#define INCLUDE_ALL_JavaSecurityProviderException 0
#else
#define INCLUDE_ALL_JavaSecurityProviderException 1
#endif
#undef RESTRICT_JavaSecurityProviderException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityProviderException_) && (INCLUDE_ALL_JavaSecurityProviderException || defined(INCLUDE_JavaSecurityProviderException))
#define JavaSecurityProviderException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief A runtime exception for Provider exceptions (such as
  misconfiguration errors or unrecoverable internal errors),
  which may be subclassed by Providers to
  throw specialized, provider-specific runtime errors.
 @author Benjamin Renaud
 @since 1.1
 */
@interface JavaSecurityProviderException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a ProviderException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a ProviderException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Creates a <code>ProviderException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>ProviderException</code> with the specified cause
  and a detail message of <code>(cause==null ?
 null : cause.toString())</code>
  (which typically contains the class and detail message of 
 <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityProviderException)

FOUNDATION_EXPORT void JavaSecurityProviderException_init(JavaSecurityProviderException *self);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_init(void);

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithNSString_(JavaSecurityProviderException *self, NSString *s);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithNSString_withJavaLangThrowable_(JavaSecurityProviderException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithJavaLangThrowable_(JavaSecurityProviderException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityProviderException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityProviderException")
