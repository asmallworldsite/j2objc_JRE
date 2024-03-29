//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/ExemptionMechanism.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanism")
#ifdef RESTRICT_JavaxCryptoExemptionMechanism
#define INCLUDE_ALL_JavaxCryptoExemptionMechanism 0
#else
#define INCLUDE_ALL_JavaxCryptoExemptionMechanism 1
#endif
#undef RESTRICT_JavaxCryptoExemptionMechanism

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoExemptionMechanism_) && (INCLUDE_ALL_JavaxCryptoExemptionMechanism || defined(INCLUDE_JavaxCryptoExemptionMechanism))
#define JavaxCryptoExemptionMechanism_

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaSecurityAlgorithmParameters;
@class JavaSecurityProvider;
@class JavaxCryptoExemptionMechanismSpi;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class provides the functionality of an exemption mechanism, examples
  of which are <i>key recovery</i>, <i>key weakening</i>, and 
 <i>key escrow</i>.
 <p>Applications or applets that use an exemption mechanism may be granted
  stronger encryption capabilities than those which don't.
 @since 1.4
 */
@interface JavaxCryptoExemptionMechanism : NSObject

#pragma mark Public

/*!
 @brief Generates the exemption mechanism key blob.
 @return the new buffer with the result key blob.
 @throw IllegalStateExceptionif this exemption mechanism is in
  a wrong state (e.g., has not been initialized).
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of generating.
 */
- (IOSByteArray *)genExemptionBlob;

/*!
 @brief Generates the exemption mechanism key blob, and stores the result in the 
 <code>output</code> buffer.
 <p>If the <code>output</code> buffer is too small to hold the result,
  a <code>ShortBufferException</code> is thrown. In this case, repeat this
  call with a larger output buffer. Use 
 <code>getOutputSize</code> to determine how big
  the output buffer should be.
 @param output the buffer for the result
 @return the number of bytes stored in <code>output</code>
 @throw IllegalStateExceptionif this exemption mechanism is in
  a wrong state (e.g., has not been initialized).
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the result.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of generating.
 */
- (jint)genExemptionBlobWithByteArray:(IOSByteArray *)output;

/*!
 @brief Generates the exemption mechanism key blob, and stores the result in the 
 <code>output</code> buffer, starting at <code>outputOffset</code>
  inclusive.
 <p>If the <code>output</code> buffer is too small to hold the result,
  a <code>ShortBufferException</code> is thrown. In this case, repeat this
  call with a larger output buffer. Use 
 <code>getOutputSize</code> to determine how big
  the output buffer should be.
 @param output the buffer for the result
 @param outputOffset the offset in  <code> output </code>  where the result
   is stored
 @return the number of bytes stored in <code>output</code>
 @throw IllegalStateExceptionif this exemption mechanism is in
  a wrong state (e.g., has not been initialized).
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the result.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of generating.
 */
- (jint)genExemptionBlobWithByteArray:(IOSByteArray *)output
                              withInt:(jint)outputOffset;

/*!
 @brief Returns an <code>ExemptionMechanism</code> object that implements the
  specified exemption mechanism algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new ExemptionMechanism object encapsulating the
  ExemptionMechanismSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested exemption  mechanism.
   See the ExemptionMechanism section in the
    <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#Exemption">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard exemption mechanism names.
 @return the new <code>ExemptionMechanism</code> object.
 @throw NullPointerExceptionif <code>algorithm</code>
           is null.
 @throw NoSuchAlgorithmExceptionif no Provider supports an
           ExemptionMechanismSpi implementation for the
           specified algorithm.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoExemptionMechanism *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns an <code>ExemptionMechanism</code> object that implements the
  specified exemption mechanism algorithm.
 <p> A new ExemptionMechanism object encapsulating the
  ExemptionMechanismSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard name of the requested exemption mechanism.  See the ExemptionMechanism section in the
    <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#Exemption">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard exemption mechanism names.
 @param provider the provider.
 @return the new <code>ExemptionMechanism</code> object.
 @throw NullPointerExceptionif <code>algorithm</code>
           is null.
 @throw NoSuchAlgorithmExceptionif an ExemptionMechanismSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoExemptionMechanism *)getInstanceWithNSString:(NSString *)algorithm
                                  withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns an <code>ExemptionMechanism</code> object that implements the
  specified exemption mechanism algorithm.
 <p> A new ExemptionMechanism object encapsulating the
  ExemptionMechanismSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested exemption mechanism.  See the ExemptionMechanism section in the
    <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#Exemption">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard exemption mechanism names.
 @param provider the name of the provider.
 @return the new <code>ExemptionMechanism</code> object.
 @throw NullPointerExceptionif <code>algorithm</code>
           is null.
 @throw NoSuchAlgorithmExceptionif an ExemptionMechanismSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null or empty.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoExemptionMechanism *)getInstanceWithNSString:(NSString *)algorithm
                                              withNSString:(NSString *)provider;

/*!
 @brief Returns the exemption mechanism name of this 
 <code>ExemptionMechanism</code> object.
 <p>This is the same name that was specified in one of the 
 <code>getInstance</code> calls that created this 
 <code>ExemptionMechanism</code> object.
 @return the exemption mechanism name of this 
 <code>ExemptionMechanism</code> object.
 */
- (NSString *)getName;

/*!
 @brief Returns the length in bytes that an output buffer would need to be in
  order to hold the result of the next 
 <code>genExemptionBlob</code>
  operation, given the input length <code>inputLen</code> (in bytes).
 <p>The actual output length of the next 
 <code>genExemptionBlob</code>
  call may be smaller than the length returned by this method.
 @param inputLen the input length (in bytes)
 @return the required output buffer size (in bytes)
 @throw IllegalStateExceptionif this exemption mechanism is in a
  wrong state (e.g., has not yet been initialized)
 */
- (jint)getOutputSizeWithInt:(jint)inputLen;

/*!
 @brief Returns the provider of this <code>ExemptionMechanism</code> object.
 @return the provider of this <code>ExemptionMechanism</code> object.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this exemption mechanism with a key.
 <p>If this exemption mechanism requires any algorithm parameters
  that cannot be derived from the given <code>key</code>, the
  underlying exemption mechanism implementation is supposed to
  generate the required parameters itself (using provider-specific
  default values); in the case that algorithm parameters must be
  specified by the caller, an <code>InvalidKeyException</code> is raised.
 @param key the key for this exemption mechanism
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this exemption mechanism with a key and a set of algorithm
  parameters.
 <p>If this exemption mechanism requires any algorithm parameters
  and <code>params</code> is null, the underlying exemption mechanism
  implementation is supposed to generate the required parameters itself
  (using provider-specific default values); in the case that algorithm
  parameters must be specified by the caller, an 
 <code>InvalidAlgorithmParameterException</code> is raised.
 @param key the key for this exemption mechanism
 @param params the algorithm parameters
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecurityAlgorithmParameters:(JavaSecurityAlgorithmParameters *)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this exemption mechanism with a key and a set of algorithm
  parameters.
 <p>If this exemption mechanism requires any algorithm parameters
  and <code>params</code> is null, the underlying exemption
  mechanism implementation is supposed to generate the required
  parameters itself (using provider-specific default values); in the case
  that algorithm parameters must be specified by the caller, an 
 <code>InvalidAlgorithmParameterException</code> is raised.
 @param key the key for this exemption mechanism
 @param params the algorithm parameters
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)init__WithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns whether the result blob has been generated successfully by this
  exemption mechanism.
 <p>The method also makes sure that the key passed in is the same as
  the one this exemption mechanism used in initializing and generating
  phases.
 @param key the key the crypto is going to use.
 @return whether the result blob of the same key has been generated
  successfully by this exemption mechanism; false if <code>key</code>
  is null.
 @throw ExemptionMechanismExceptionif problem(s) encountered
  while determining whether the result blob has been generated successfully
  by this exemption mechanism object.
 */
- (jboolean)isCryptoAllowedWithJavaSecurityKey:(id<JavaSecurityKey>)key;

#pragma mark Protected

/*!
 @brief Creates a ExemptionMechanism object.
 @param exmechSpi the delegate
 @param provider the provider
 @param mechanism the exemption mechanism
 */
- (instancetype __nonnull)initWithJavaxCryptoExemptionMechanismSpi:(JavaxCryptoExemptionMechanismSpi *)exmechSpi
                                          withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                      withNSString:(NSString *)mechanism;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoExemptionMechanism)

FOUNDATION_EXPORT void JavaxCryptoExemptionMechanism_initWithJavaxCryptoExemptionMechanismSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoExemptionMechanism *self, JavaxCryptoExemptionMechanismSpi *exmechSpi, JavaSecurityProvider *provider, NSString *mechanism);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanism *new_JavaxCryptoExemptionMechanism_initWithJavaxCryptoExemptionMechanismSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoExemptionMechanismSpi *exmechSpi, JavaSecurityProvider *provider, NSString *mechanism) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoExemptionMechanism *create_JavaxCryptoExemptionMechanism_initWithJavaxCryptoExemptionMechanismSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoExemptionMechanismSpi *exmechSpi, JavaSecurityProvider *provider, NSString *mechanism);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanism *JavaxCryptoExemptionMechanism_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanism *JavaxCryptoExemptionMechanism_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanism *JavaxCryptoExemptionMechanism_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoExemptionMechanism)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanism")
