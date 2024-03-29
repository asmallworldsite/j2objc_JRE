//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/cert/Certificate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificate")
#ifdef RESTRICT_JavaxSecurityCertCertificate
#define INCLUDE_ALL_JavaxSecurityCertCertificate 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificate 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificate_) && (INCLUDE_ALL_JavaxSecurityCertCertificate || defined(INCLUDE_JavaxSecurityCertCertificate))
#define JavaxSecurityCertCertificate_

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaSecurityPublicKey;

/*!
 @brief <p>Abstract class for managing a variety of identity certificates.
 An identity certificate is a guarantee by a principal that
  a public key is that of another principal.  (A principal represents
  an entity such as an individual user, a group, or a corporation.)
 <p>
  This class is an abstraction for certificates that have different
  formats but important common uses.  For example, different types of
  certificates, such as X.509 and PGP, share general certificate
  functionality (like encoding and verifying) and
  some types of information (like a public key). 
 <p>
  X.509, PGP, and SDSI certificates can all be implemented by
  subclassing the Certificate class, even though they contain different
  sets of information, and they store and retrieve the information in
  different ways. 
 <p><em>Note: The classes in the package <code>javax.security.cert</code>
  exist for compatibility with earlier versions of the
  Java Secure Sockets Extension (JSSE). New applications should instead
  use the standard Java SE certificate classes located in 
 <code>java.security.cert</code>.</em></p>
 @since 1.4
 - seealso: X509Certificate
 @author Hemma Prafullchandra
 */
@interface JavaxSecurityCertCertificate : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Compares this certificate for equality with the specified
  object.If the <code>other</code> object is an 
 <code>instanceof</code> <code>Certificate</code>, then
  its encoded form is retrieved and compared with the
  encoded form of this certificate.
 @param other the object to test for equality with this certificate.
 @return true if the encoded forms of the two certificates
          match, false otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the encoded form of this certificate.It is
  assumed that each certificate type would have only a single
  form of encoding; for example, X.509 certificates would
  be encoded as ASN.1 DER.
 @return encoded form of this certificate
 @throw CertificateEncodingExceptionon internal certificate
             encoding failure
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Gets the public key from this certificate.
 @return the public key.
 */
- (id<JavaSecurityPublicKey>)getPublicKey;

/*!
 @brief Returns a hashcode value for this certificate from its
  encoded form.
 @return the hashcode value.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string representation of this certificate.
 @return a string representation of this certificate.
 */
- (NSString *)description;

/*!
 @brief Verifies that this certificate was signed using the
  private key that corresponds to the specified public key.
 @param key the PublicKey used to carry out the verification.
 @throw NoSuchAlgorithmExceptionon unsupported signature
  algorithms.
 @throw InvalidKeyExceptionon incorrect key.
 @throw NoSuchProviderExceptionif there's no default provider.
 @throw SignatureExceptionon signature errors.
 @throw CertificateExceptionon encoding errors.
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

/*!
 @brief Verifies that this certificate was signed using the
  private key that corresponds to the specified public key.
 This method uses the signature verification engine
  supplied by the specified provider.
 @param key the PublicKey used to carry out the verification.
 @param sigProvider the name of the signature provider.
 @throw NoSuchAlgorithmExceptionon unsupported signature algorithms.
 @throw InvalidKeyExceptionon incorrect key.
 @throw NoSuchProviderExceptionon incorrect provider.
 @throw SignatureExceptionon signature errors.
 @throw CertificateExceptionon encoding errors.
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificate)

FOUNDATION_EXPORT void JavaxSecurityCertCertificate_init(JavaxSecurityCertCertificate *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificate")
