//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/KeyManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslKeyManager")
#ifdef RESTRICT_JavaxNetSslKeyManager
#define INCLUDE_ALL_JavaxNetSslKeyManager 0
#else
#define INCLUDE_ALL_JavaxNetSslKeyManager 1
#endif
#undef RESTRICT_JavaxNetSslKeyManager

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslKeyManager_) && (INCLUDE_ALL_JavaxNetSslKeyManager || defined(INCLUDE_JavaxNetSslKeyManager))
#define JavaxNetSslKeyManager_

/*!
 @brief This is the base interface for JSSE key managers.
 <P>
  <code>KeyManager</code>s are responsible for managing the
  key material which is used to authenticate the local SSLSocket
  to its peer.  If no key material is available, the socket will
  be unable to present authentication credentials. 
 <P>
  <code>KeyManager</code>s are created by either
  using a <code>KeyManagerFactory</code>,
  or by implementing one of the <code>KeyManager</code> subclasses.
 @since 1.4
 - seealso: KeyManagerFactory
 */
@protocol JavaxNetSslKeyManager < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslKeyManager)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslKeyManager)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslKeyManager")
