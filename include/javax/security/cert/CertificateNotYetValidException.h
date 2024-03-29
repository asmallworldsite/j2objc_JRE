//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/cert/CertificateNotYetValidException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException")
#ifdef RESTRICT_JavaxSecurityCertCertificateNotYetValidException
#define INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateNotYetValidException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificateNotYetValidException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException || defined(INCLUDE_JavaxSecurityCertCertificateNotYetValidException))
#define JavaxSecurityCertCertificateNotYetValidException_

#define RESTRICT_JavaxSecurityCertCertificateException 1
#define INCLUDE_JavaxSecurityCertCertificateException 1
#include "javax/security/cert/CertificateException.h"

/*!
 @brief Certificate is not yet valid exception.This is thrown whenever
  the current <code>Date</code> or the specified <code>Date</code>
  is before the <code>notBefore</code> date/time in the Certificate
  validity period.
 <p><em>Note: The classes in the package <code>javax.security.cert</code>
  exist for compatibility with earlier versions of the
  Java Secure Sockets Extension (JSSE). New applications should instead
  use the standard Java SE certificate classes located in 
 <code>java.security.cert</code>.</em></p>
 @since 1.4
 @author Hemma Prafullchandra
 */
@interface JavaxSecurityCertCertificateNotYetValidException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Constructs a CertificateNotYetValidException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a CertificateNotYetValidException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateNotYetValidException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_init(JavaxSecurityCertCertificateNotYetValidException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *create_JavaxSecurityCertCertificateNotYetValidException_init(void);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(JavaxSecurityCertCertificateNotYetValidException *self, NSString *message);

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *new_JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateNotYetValidException *create_JavaxSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateNotYetValidException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateNotYetValidException")
