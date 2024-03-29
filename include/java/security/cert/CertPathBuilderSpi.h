//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathBuilderSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilderSpi")
#ifdef RESTRICT_JavaSecurityCertCertPathBuilderSpi
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilderSpi 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathBuilderSpi 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathBuilderSpi

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertPathBuilderSpi_) && (INCLUDE_ALL_JavaSecurityCertCertPathBuilderSpi || defined(INCLUDE_JavaSecurityCertCertPathBuilderSpi))
#define JavaSecurityCertCertPathBuilderSpi_

@protocol JavaSecurityCertCertPathBuilderResult;
@protocol JavaSecurityCertCertPathChecker;
@protocol JavaSecurityCertCertPathParameters;

/*!
 @brief The <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>CertPathBuilder</code> class.All
  <code>CertPathBuilder</code> implementations must include a class (the
  SPI class) that extends this class (<code>CertPathBuilderSpi</code>) and
  implements all of its methods.
 In general, instances of this class should
  only be accessed through the <code>CertPathBuilder</code> class. For
  details, see the Java Cryptography Architecture. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Instances of this class need not be protected against concurrent
  access from multiple threads. Threads that need to access a single 
 <code>CertPathBuilderSpi</code> instance concurrently should synchronize
  amongst themselves and provide the necessary locking before calling the
  wrapping <code>CertPathBuilder</code> object. 
 <p>
  However, implementations of <code>CertPathBuilderSpi</code> may still
  encounter concurrency issues, since multiple threads each
  manipulating a different <code>CertPathBuilderSpi</code> instance need not
  synchronize.
 @since 1.4
 @author Sean Mullan
 */
@interface JavaSecurityCertCertPathBuilderSpi : NSObject

#pragma mark Public

/*!
 @brief The default constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Attempts to build a certification path using the specified
  algorithm parameter set.
 @param params the algorithm parameters
 @return the result of the build algorithm
 @throw CertPathBuilderExceptionif the builder is unable to construct
  a certification path that satisfies the specified parameters
 @throw InvalidAlgorithmParameterExceptionif the specified parameters
  are inappropriate for this <code>CertPathBuilder</code>
 */
- (id<JavaSecurityCertCertPathBuilderResult>)engineBuildWithJavaSecurityCertCertPathParameters:(id<JavaSecurityCertCertPathParameters>)params;

/*!
 @brief Returns a <code>CertPathChecker</code> that this implementation uses to
  check the revocation status of certificates.A PKIX implementation
  returns objects of type <code>PKIXRevocationChecker</code>.
 <p>The primary purpose of this method is to allow callers to specify
  additional input parameters and options specific to revocation checking.
  See the class description of <code>CertPathBuilder</code> for an example. 
 <p>This method was added to version 1.8 of the Java Platform Standard
  Edition. In order to maintain backwards compatibility with existing
  service providers, this method cannot be abstract and by default throws
  an <code>UnsupportedOperationException</code>.
 @return a <code>CertPathChecker</code> that this implementation uses to
  check the revocation status of certificates
 @throw UnsupportedOperationExceptionif this method is not supported
 @since 1.8
 */
- (id<JavaSecurityCertCertPathChecker>)engineGetRevocationChecker;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathBuilderSpi)

FOUNDATION_EXPORT void JavaSecurityCertCertPathBuilderSpi_init(JavaSecurityCertCertPathBuilderSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathBuilderSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathBuilderSpi")
