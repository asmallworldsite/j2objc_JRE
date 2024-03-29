//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/RSAKeyGenParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecRSAKeyGenParameterSpec")
#ifdef RESTRICT_JavaSecuritySpecRSAKeyGenParameterSpec
#define INCLUDE_ALL_JavaSecuritySpecRSAKeyGenParameterSpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecRSAKeyGenParameterSpec 1
#endif
#undef RESTRICT_JavaSecuritySpecRSAKeyGenParameterSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecRSAKeyGenParameterSpec_) && (INCLUDE_ALL_JavaSecuritySpecRSAKeyGenParameterSpec || defined(INCLUDE_JavaSecuritySpecRSAKeyGenParameterSpec))
#define JavaSecuritySpecRSAKeyGenParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

@class JavaLangInteger;
@class JavaMathBigInteger;

/*!
 @brief This class specifies the set of parameters used to generate an RSA
  key pair.
 @author Jan Luehe
 - seealso: java.security.KeyPairGenerator#initialize(java.security.spec.AlgorithmParameterSpec)
 @since 1.3
 */
@interface JavaSecuritySpecRSAKeyGenParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Constructs a new <code>RSAParameterSpec</code> object from the
  given keysize and public-exponent value.
 @param keysize the modulus size (specified in number of bits)
 @param publicExponent the public exponent
 */
- (instancetype __nonnull)initWithInt:(jint)keysize
               withJavaMathBigInteger:(JavaMathBigInteger *)publicExponent;

/*!
 @brief Returns the keysize.
 @return the keysize.
 */
- (jint)getKeysize;

/*!
 @brief Returns the public-exponent value.
 @return the public-exponent value.
 */
- (JavaMathBigInteger *)getPublicExponent;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecRSAKeyGenParameterSpec)

/*!
 @brief The public-exponent value F0 = 3.
 */
inline JavaMathBigInteger *JavaSecuritySpecRSAKeyGenParameterSpec_get_F0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathBigInteger *JavaSecuritySpecRSAKeyGenParameterSpec_F0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecRSAKeyGenParameterSpec, F0, JavaMathBigInteger *)

/*!
 @brief The public exponent-value F4 = 65537.
 */
inline JavaMathBigInteger *JavaSecuritySpecRSAKeyGenParameterSpec_get_F4(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaMathBigInteger *JavaSecuritySpecRSAKeyGenParameterSpec_F4;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecRSAKeyGenParameterSpec, F4, JavaMathBigInteger *)

FOUNDATION_EXPORT void JavaSecuritySpecRSAKeyGenParameterSpec_initWithInt_withJavaMathBigInteger_(JavaSecuritySpecRSAKeyGenParameterSpec *self, jint keysize, JavaMathBigInteger *publicExponent);

FOUNDATION_EXPORT JavaSecuritySpecRSAKeyGenParameterSpec *new_JavaSecuritySpecRSAKeyGenParameterSpec_initWithInt_withJavaMathBigInteger_(jint keysize, JavaMathBigInteger *publicExponent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecRSAKeyGenParameterSpec *create_JavaSecuritySpecRSAKeyGenParameterSpec_initWithInt_withJavaMathBigInteger_(jint keysize, JavaMathBigInteger *publicExponent);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAKeyGenParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecRSAKeyGenParameterSpec")
