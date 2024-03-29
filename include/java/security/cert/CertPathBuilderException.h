//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathBuilderException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilderException")
#ifdef RESTRICT_JavaSecurityCertCertPathBuilderException
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilderException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilderException 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathBuilderException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertPathBuilderException_) && (INCLUDE_ALL_JavaSecurityCertCertPathBuilderException || defined(INCLUDE_JavaSecurityCertCertPathBuilderException))
#define JavaSecurityCertCertPathBuilderException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief An exception indicating one of a variety of problems encountered when
  building a certification path with a <code>CertPathBuilder</code>.
 <p>
  A <code>CertPathBuilderException</code> provides support for wrapping
  exceptions. The <code>getCause</code> method returns the throwable,
  if any, that caused this exception to be thrown. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CertPathBuilder
 @since 1.4
 @author Sean Mullan
 */
@interface JavaSecurityCertCertPathBuilderException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a <code>CertPathBuilderException</code> with <code>null</code>
  as its detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a <code>CertPathBuilderException</code> with the given
  detail message.The detail message is a <code>String</code> that
  describes this particular exception in more detail.
 @param msg the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>CertPathBuilderException</code> with the specified
  detail message and cause.
 @param msg the detail message
 @param cause the cause (which is saved for later retrieval by the  
 <code>getCause()</code>  method). (A <code>null</code>  value is  permitted, and indicates that the cause is nonexistent or unknown.)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>CertPathBuilderException</code> that wraps the specified
  throwable.This allows any exception to be converted into a 
 <code>CertPathBuilderException</code>, while retaining information
  about the wrapped exception, which may be useful for debugging.
 The
  detail message is set to (<code>cause==null ? null : cause.toString()</code>)
  (which typically contains the class and detail message of
  cause).
 @param cause the cause (which is saved for later retrieval by the  
 <code>getCause()</code>  method). (A <code>null</code>  value is  permitted, and indicates that the cause is nonexistent or unknown.)
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathBuilderException)

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilderException_init(JavaSecurityCertCertPathBuilderException *self);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *new_JavaSecurityCertCertPathBuilderException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *create_JavaSecurityCertCertPathBuilderException_init(void);

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilderException_initWithNSString_(JavaSecurityCertCertPathBuilderException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *new_JavaSecurityCertCertPathBuilderException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *create_JavaSecurityCertCertPathBuilderException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilderException_initWithJavaLangThrowable_(JavaSecurityCertCertPathBuilderException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *new_JavaSecurityCertCertPathBuilderException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *create_JavaSecurityCertCertPathBuilderException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilderException_initWithNSString_withJavaLangThrowable_(JavaSecurityCertCertPathBuilderException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *new_JavaSecurityCertCertPathBuilderException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathBuilderException *create_JavaSecurityCertCertPathBuilderException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathBuilderException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilderException")
