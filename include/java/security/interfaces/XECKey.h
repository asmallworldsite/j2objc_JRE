//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/XECKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesXECKey")
#ifdef RESTRICT_JavaSecurityInterfacesXECKey
#define INCLUDE_ALL_JavaSecurityInterfacesXECKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesXECKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesXECKey

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInterfacesXECKey_) && (INCLUDE_ALL_JavaSecurityInterfacesXECKey || defined(INCLUDE_JavaSecurityInterfacesXECKey))
#define JavaSecurityInterfacesXECKey_

@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief An interface for an elliptic curve public/private key as defined by
  RFC 7748.These keys are distinct from the keys represented by 
 <code>ECKey</code>, and they are intended for use with algorithms based on RFC
  7748 such as the XDH <code>KeyAgreement</code> algorithm.
 This interface allows
  access to the algorithm parameters associated with the key.
 @since 11
 */
@protocol JavaSecurityInterfacesXECKey < JavaObject >

/*!
 @brief Returns the algorithm parameters associated
  with the key.
 @return the associated algorithm parameters
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)getParams;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesXECKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesXECKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesXECKey")
