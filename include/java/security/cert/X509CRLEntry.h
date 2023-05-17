//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/X509CRLEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertX509CRLEntry")
#ifdef RESTRICT_JavaSecurityCertX509CRLEntry
#define INCLUDE_ALL_JavaSecurityCertX509CRLEntry 0
#else
#define INCLUDE_ALL_JavaSecurityCertX509CRLEntry 1
#endif
#undef RESTRICT_JavaSecurityCertX509CRLEntry

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertX509CRLEntry_) && (INCLUDE_ALL_JavaSecurityCertX509CRLEntry || defined(INCLUDE_JavaSecurityCertX509CRLEntry))
#define JavaSecurityCertX509CRLEntry_

#define RESTRICT_JavaSecurityCertX509Extension 1
#define INCLUDE_JavaSecurityCertX509Extension 1
#include "java/security/cert/X509Extension.h"

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaMathBigInteger;
@class JavaSecurityCertCRLReason;
@class JavaUtilDate;
@class JavaxSecurityAuthX500X500Principal;

/*!
 @brief <p>Abstract class for a revoked certificate in a CRL (Certificate
  Revocation List).
 The ASN.1 definition for <em>revokedCertificates</em> is: 
 @code

  revokedCertificates    SEQUENCE OF SEQUENCE  {
      userCertificate    CertificateSerialNumber,
      revocationDate     ChoiceOfTime,
      crlEntryExtensions Extensions OPTIONAL
                         -- if present, must be v2
  }  OPTIONAL
  CertificateSerialNumber  ::=  INTEGER
  Extensions  ::=  SEQUENCE SIZE (1..MAX) OF Extension
  Extension  ::=  SEQUENCE  {
      extnId        OBJECT IDENTIFIER,
      critical      BOOLEAN DEFAULT FALSE,
      extnValue     OCTET STRING
                    -- contains a DER encoding of a value
                    -- of the type registered for use with
                    -- the extnId object identifier value
  } 
  
@endcode
 - seealso: X509CRL
 - seealso: X509Extension
 @author Hemma Prafullchandra
 @since 1.2
 */
@interface JavaSecurityCertX509CRLEntry : NSObject < JavaSecurityCertX509Extension >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Compares this CRL entry for equality with the given
  object.If the <code>other</code> object is an 
 <code>instanceof</code> <code>X509CRLEntry</code>, then
  its encoded form (the inner SEQUENCE) is retrieved and compared
  with the encoded form of this CRL entry.
 @param other the object to test for equality with this CRL entry.
 @return true iff the encoded forms of the two CRL entries
  match, false otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Get the issuer of the X509Certificate described by this entry.If
  the certificate issuer is also the CRL issuer, this method returns
  null.
 <p>This method is used with indirect CRLs. The default implementation
  always returns null. Subclasses that wish to support indirect CRLs
  should override it.
 @return the issuer of the X509Certificate described by this entry
  or null if it is issued by the CRL issuer.
 @since 1.5
 */
- (JavaxSecurityAuthX500X500Principal *)getCertificateIssuer;

/*!
 @brief Returns the ASN.1 DER-encoded form of this CRL Entry,
  that is the inner SEQUENCE.
 @return the encoded form of this certificate
 @throw CRLExceptionif an encoding error occurs.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Gets the revocation date from this X509CRLEntry, the 
 <em>revocationDate</em>.
 @return the revocation date.
 */
- (JavaUtilDate *)getRevocationDate;

/*!
 @brief Returns the reason the certificate has been revoked, as specified
  in the Reason Code extension of this CRL entry.
 @return the reason the certificate has been revoked, or
     <code>null</code> if this CRL entry does not have
     a Reason Code extension
 @since 1.7
 */
- (JavaSecurityCertCRLReason *)getRevocationReason;

/*!
 @brief Gets the serial number from this X509CRLEntry, the 
 <em>userCertificate</em>.
 @return the serial number.
 */
- (JavaMathBigInteger *)getSerialNumber;

/*!
 @brief Returns true if this CRL entry has extensions.
 @return true if this entry has extensions, false otherwise.
 */
- (jboolean)hasExtensions;

/*!
 @brief Returns a hashcode value for this CRL entry from its
  encoded form.
 @return the hashcode value.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string representation of this CRL entry.
 @return a string representation of this CRL entry.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509CRLEntry)

FOUNDATION_EXPORT void JavaSecurityCertX509CRLEntry_init(JavaSecurityCertX509CRLEntry *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509CRLEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertX509CRLEntry")
