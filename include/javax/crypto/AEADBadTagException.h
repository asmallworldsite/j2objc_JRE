//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/AEADBadTagException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoAEADBadTagException")
#ifdef RESTRICT_JavaxCryptoAEADBadTagException
#define INCLUDE_ALL_JavaxCryptoAEADBadTagException 0
#else
#define INCLUDE_ALL_JavaxCryptoAEADBadTagException 1
#endif
#undef RESTRICT_JavaxCryptoAEADBadTagException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoAEADBadTagException_) && (INCLUDE_ALL_JavaxCryptoAEADBadTagException || defined(INCLUDE_JavaxCryptoAEADBadTagException))
#define JavaxCryptoAEADBadTagException_

#define RESTRICT_JavaxCryptoBadPaddingException 1
#define INCLUDE_JavaxCryptoBadPaddingException 1
#include "javax/crypto/BadPaddingException.h"

/*!
 @brief This exception is thrown when a <code>Cipher</code> operating in
  an AEAD mode (such as GCM/CCM) is unable to verify the supplied
  authentication tag.
 @since 1.7
 */
@interface JavaxCryptoAEADBadTagException : JavaxCryptoBadPaddingException

#pragma mark Public

/*!
 @brief Constructs a AEADBadTagException with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a AEADBadTagException with the specified
  detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoAEADBadTagException)

FOUNDATION_EXPORT void JavaxCryptoAEADBadTagException_init(JavaxCryptoAEADBadTagException *self);

FOUNDATION_EXPORT JavaxCryptoAEADBadTagException *new_JavaxCryptoAEADBadTagException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoAEADBadTagException *create_JavaxCryptoAEADBadTagException_init(void);

FOUNDATION_EXPORT void JavaxCryptoAEADBadTagException_initWithNSString_(JavaxCryptoAEADBadTagException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoAEADBadTagException *new_JavaxCryptoAEADBadTagException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoAEADBadTagException *create_JavaxCryptoAEADBadTagException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoAEADBadTagException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoAEADBadTagException")