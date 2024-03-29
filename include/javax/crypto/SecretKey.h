//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/SecretKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSecretKey")
#ifdef RESTRICT_JavaxCryptoSecretKey
#define INCLUDE_ALL_JavaxCryptoSecretKey 0
#else
#define INCLUDE_ALL_JavaxCryptoSecretKey 1
#endif
#undef RESTRICT_JavaxCryptoSecretKey

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSecretKey_) && (INCLUDE_ALL_JavaxCryptoSecretKey || defined(INCLUDE_JavaxCryptoSecretKey))
#define JavaxCryptoSecretKey_

#define RESTRICT_JavaSecurityKey 1
#define INCLUDE_JavaSecurityKey 1
#include "java/security/Key.h"

#define RESTRICT_JavaxSecurityAuthDestroyable 1
#define INCLUDE_JavaxSecurityAuthDestroyable 1
#include "javax/security/auth/Destroyable.h"

@class JavaLangLong;

/*!
 @brief A secret (symmetric) key.
 The purpose of this interface is to group (and provide type safety
  for) all secret key interfaces. 
 <p>
  Provider implementations of this interface must overwrite the 
 <code>equals</code> and <code>hashCode</code> methods inherited from 
 <code>java.lang.Object</code>, so that secret keys are compared based on
  their underlying key material and not based on reference.
  Implementations should override the default <code>destroy</code> and 
 <code>isDestroyed</code> methods from the 
 <code>javax.security.auth.Destroyable</code> interface to enable
  sensitive key information to be destroyed, cleared, or in the case
  where such information is immutable, unreferenced.
  Finally, since <code>SecretKey</code> is <code>Serializable</code>, implementations
  should also override 
 <code>java.io.ObjectOutputStream.writeObject(java.lang.Object)</code>
  to prevent keys that have been destroyed from being serialized. 
 <p>Keys that implement this interface return the string <code>RAW</code>
  as their encoding format (see <code>getFormat</code>), and return the
  raw key bytes as the result of a <code>getEncoded</code> method call. (The 
 <code>getFormat</code> and <code>getEncoded</code> methods are inherited
  from the <code>java.security.Key</code> parent interface.)
 @author Jan Luehe
 - seealso: SecretKeyFactory
 - seealso: Cipher
 @since 1.4
 */
@protocol JavaxCryptoSecretKey < JavaSecurityKey, JavaxSecurityAuthDestroyable, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSecretKey)

/*!
 @brief The class fingerprint that is set to indicate serialization
  compatibility since J2SE 1.4.
 */
inline jlong JavaxCryptoSecretKey_get_serialVersionUID(void);
#define JavaxCryptoSecretKey_serialVersionUID -4795878709595146952LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaxCryptoSecretKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSecretKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSecretKey")
