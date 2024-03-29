//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/KeyGenerator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoKeyGenerator")
#ifdef RESTRICT_JavaxCryptoKeyGenerator
#define INCLUDE_ALL_JavaxCryptoKeyGenerator 0
#else
#define INCLUDE_ALL_JavaxCryptoKeyGenerator 1
#endif
#undef RESTRICT_JavaxCryptoKeyGenerator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoKeyGenerator_) && (INCLUDE_ALL_JavaxCryptoKeyGenerator || defined(INCLUDE_JavaxCryptoKeyGenerator))
#define JavaxCryptoKeyGenerator_

@class JavaLangInteger;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@class JavaxCryptoKeyGeneratorSpi;
@protocol JavaSecuritySpecAlgorithmParameterSpec;
@protocol JavaxCryptoSecretKey;

/*!
 @brief This class provides the functionality of a secret (symmetric) key generator.
 <p>Key generators are constructed using one of the <code>getInstance</code>
  class methods of this class. 
 <p>KeyGenerator objects are reusable, i.e., after a key has been
  generated, the same KeyGenerator object can be re-used to generate further
  keys. 
 <p>There are two ways to generate a key: in an algorithm-independent
  manner, and in an algorithm-specific manner.
  The only difference between the two is the initialization of the object: 
 <ul>
  <li><b>Algorithm-Independent Initialization</b>
  <p>All key generators share the concepts of a <i>keysize</i> and a 
 <i>source of randomness</i>.
  There is an 
 <code>init</code>
  method in this KeyGenerator class that takes these two universally
  shared types of arguments. There is also one that takes just a 
 <code>keysize</code> argument, and uses the SecureRandom implementation
  of the highest-priority installed provider as the source of randomness
  (or a system-provided source of randomness if none of the installed
  providers supply a SecureRandom implementation), and one that takes just a
  source of randomness. 
 <p>Since no other parameters are specified when you call the above
  algorithm-independent <code>init</code> methods, it is up to the
  provider what to do about the algorithm-specific parameters (if any) to be
  associated with each of the keys. 
 <li><b>Algorithm-Specific Initialization</b>
  <p>For situations where a set of algorithm-specific parameters already
  exists, there are two 
 <code>init</code>
  methods that have an <code>AlgorithmParameterSpec</code>
  argument. One also has a <code>SecureRandom</code> argument, while the
  other uses the SecureRandom implementation
  of the highest-priority installed provider as the source of randomness
  (or a system-provided source of randomness if none of the installed
  providers supply a SecureRandom implementation). 
 </ul>
  
 <p>In case the client does not explicitly initialize the KeyGenerator
  (via a call to an <code>init</code> method), each provider must
  supply (and document) a default initialization. 
 <p> Android provides the following <code>KeyGenerator</code> algorithms: 
 <table>
    <thead>
      <tr>
        <th>Algorithm</th>
        <th>Supported API Levels</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>AES</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>AESWRAP</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>ARC4</td>
        <td>14+</td>
      </tr>
      <tr>
        <td>BLOWFISH</td>
        <td>10+</td>
      </tr>
      <tr>
        <td>ChaCha20</td>
        <td>28+</td>
      </tr>
      <tr>
        <td>DES</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>DESede</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>DESedeWRAP</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>HmacMD5</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>HmacSHA1</td>
        <td>11+</td>
      </tr>
      <tr>
        <td>HmacSHA224</td>
        <td>1-8,22+</td>
      </tr>
      <tr>
        <td>HmacSHA256</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>HmacSHA384</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>HmacSHA512</td>
        <td>1+</td>
      </tr>
      <tr class="deprecated">
        <td>RC4</td>
        <td>10-13</td>
      </tr>
    </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#KeyGenerator">
  KeyGenerator section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Jan Luehe
 - seealso: SecretKey
 @since 1.4
 */
@interface JavaxCryptoKeyGenerator : NSObject

#pragma mark Public

/*!
 @brief Generates a secret key.
 @return the new key
 */
- (id<JavaxCryptoSecretKey>)generateKey;

/*!
 @brief Returns the algorithm name of this <code>KeyGenerator</code> object.
 <p>This is the same name that was specified in one of the 
 <code>getInstance</code> calls that created this 
 <code>KeyGenerator</code> object.
 @return the algorithm name of this <code>KeyGenerator</code> object.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a <code>KeyGenerator</code> object that generates secret keys
  for the specified algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new KeyGenerator object encapsulating the
  KeyGeneratorSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested key algorithm.  See the KeyGenerator section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#KeyGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return the new <code>KeyGenerator</code> object.
 @throw NullPointerExceptionif the specified algorithm is null.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           KeyGeneratorSpi implementation for the
           specified algorithm.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyGenerator *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a <code>KeyGenerator</code> object that generates secret keys
  for the specified algorithm.
 <p> A new KeyGenerator object encapsulating the
  KeyGeneratorSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard name of the requested key algorithm.  See the KeyGenerator section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#KeyGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return the new <code>KeyGenerator</code> object.
 @throw NullPointerExceptionif the specified algorithm is null.
 @throw NoSuchAlgorithmExceptionif a KeyGeneratorSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyGenerator *)getInstanceWithNSString:(NSString *)algorithm
                            withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a <code>KeyGenerator</code> object that generates secret keys
  for the specified algorithm.
 <p> A new KeyGenerator object encapsulating the
  KeyGeneratorSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard name of the requested key algorithm.  See the KeyGenerator section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#KeyGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new <code>KeyGenerator</code> object.
 @throw NullPointerExceptionif the specified algorithm is null.
 @throw NoSuchAlgorithmExceptionif a KeyGeneratorSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the <code>provider</code>
           is null or empty.
 - seealso: java.security.Provider
 */
+ (JavaxCryptoKeyGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                        withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this <code>KeyGenerator</code> object.
 @return the provider of this <code>KeyGenerator</code> object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this key generator with the specified parameter set.
 <p> If this key generator requires any random bytes, it will get them
  using the 
 <code>java.security.SecureRandom</code>
  implementation of the highest-priority installed
  provider as the source of randomness.
  (If none of the installed providers supply an implementation of
  SecureRandom, a system-provided source of randomness will be used.)
 @param params the key generation parameters
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key generator
 */
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key generator with the specified parameter
  set and a user-provided source of randomness.
 @param params the key generation parameters
 @param random the source of randomness for this key generator
 @throw InvalidAlgorithmParameterExceptionif <code>params</code> is
  inappropriate for this key generator
 */
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
                            withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key generator for a certain keysize.
 <p> If this key generator requires any random bytes, it will get them
  using the 
 <code>java.security.SecureRandom</code>
  implementation of the highest-priority installed
  provider as the source of randomness.
  (If none of the installed providers supply an implementation of
  SecureRandom, a system-provided source of randomness will be used.)
 @param keysize the keysize. This is an algorithm-specific metric,  specified in number of bits.
 @throw InvalidParameterExceptionif the keysize is wrong or not
  supported.
 */
- (void)init__WithInt:(jint)keysize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key generator for a certain keysize, using a
  user-provided source of randomness.
 @param keysize the keysize. This is an algorithm-specific metric,  specified in number of bits.
 @param random the source of randomness for this key generator
 @throw InvalidParameterExceptionif the keysize is wrong or not
  supported.
 */
- (void)init__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this key generator.
 @param random the source of randomness for this generator
 */
- (void)init__WithJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Creates a KeyGenerator object.
 @param keyGenSpi the delegate
 @param provider the provider
 @param algorithm the algorithm
 */
- (instancetype __nonnull)initWithJavaxCryptoKeyGeneratorSpi:(JavaxCryptoKeyGeneratorSpi *)keyGenSpi
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                withNSString:(NSString *)algorithm;

#pragma mark Package-Private

- (void)disableFailover;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoKeyGenerator)

FOUNDATION_EXPORT void JavaxCryptoKeyGenerator_initWithJavaxCryptoKeyGeneratorSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyGenerator *self, JavaxCryptoKeyGeneratorSpi *keyGenSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyGenerator *new_JavaxCryptoKeyGenerator_initWithJavaxCryptoKeyGeneratorSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyGeneratorSpi *keyGenSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoKeyGenerator *create_JavaxCryptoKeyGenerator_initWithJavaxCryptoKeyGeneratorSpi_withJavaSecurityProvider_withNSString_(JavaxCryptoKeyGeneratorSpi *keyGenSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyGenerator *JavaxCryptoKeyGenerator_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoKeyGenerator *JavaxCryptoKeyGenerator_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxCryptoKeyGenerator *JavaxCryptoKeyGenerator_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoKeyGenerator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoKeyGenerator")
