//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/cert/CertificateParsingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateParsingException")
#ifdef RESTRICT_JavaxSecurityCertCertificateParsingException
#define INCLUDE_ALL_JavaxSecurityCertCertificateParsingException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateParsingException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateParsingException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificateParsingException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateParsingException || defined(INCLUDE_JavaxSecurityCertCertificateParsingException))
#define JavaxSecurityCertCertificateParsingException_

#define RESTRICT_JavaxSecurityCertCertificateException 1
#define INCLUDE_JavaxSecurityCertCertificateException 1
#include "javax/security/cert/CertificateException.h"

/*!
 @brief Certificate Parsing Exception.This is thrown whenever
  invalid DER encoded certificate is parsed or unsupported DER features
  are found in the Certificate.
 <p><em>Note: The classes in the package <code>javax.security.cert</code>
  exist for compatibility with earlier versions of the
  Java Secure Sockets Extension (JSSE). New applications should instead
  use the standard Java SE certificate classes located in 
 <code>java.security.cert</code>.</em></p>
 @since 1.4
 @author Hemma Prafullchandra
 */
@interface JavaxSecurityCertCertificateParsingException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Constructs a CertificateParsingException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a CertificateParsingException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateParsingException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateParsingException_init(JavaxSecurityCertCertificateParsingException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateParsingException *new_JavaxSecurityCertCertificateParsingException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateParsingException *create_JavaxSecurityCertCertificateParsingException_init(void);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateParsingException_initWithNSString_(JavaxSecurityCertCertificateParsingException *self, NSString *message);

FOUNDATION_EXPORT JavaxSecurityCertCertificateParsingException *new_JavaxSecurityCertCertificateParsingException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateParsingException *create_JavaxSecurityCertCertificateParsingException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateParsingException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateParsingException")
