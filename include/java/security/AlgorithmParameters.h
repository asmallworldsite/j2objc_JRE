//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/AlgorithmParameters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAlgorithmParameters")
#ifdef RESTRICT_JavaSecurityAlgorithmParameters
#define INCLUDE_ALL_JavaSecurityAlgorithmParameters 0
#else
#define INCLUDE_ALL_JavaSecurityAlgorithmParameters 1
#endif
#undef RESTRICT_JavaSecurityAlgorithmParameters

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityAlgorithmParameters_) && (INCLUDE_ALL_JavaSecurityAlgorithmParameters || defined(INCLUDE_JavaSecurityAlgorithmParameters))
#define JavaSecurityAlgorithmParameters_

@class IOSByteArray;
@class IOSClass;
@class JavaSecurityAlgorithmParametersSpi;
@class JavaSecurityProvider;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class is used as an opaque representation of cryptographic parameters.
 <p>An <code>AlgorithmParameters</code> object for managing the parameters
  for a particular algorithm can be obtained by
  calling one of the <code>getInstance</code> factory methods
  (static methods that return instances of a given class). 
 <p>Once an <code>AlgorithmParameters</code> object is obtained, it must be
  initialized via a call to <code>init</code>, using an appropriate parameter
  specification or parameter encoding. 
 <p>A transparent parameter specification is obtained from an 
 <code>AlgorithmParameters</code> object via a call to 
 <code>getParameterSpec</code>, and a byte encoding of the parameters is
  obtained via a call to <code>getEncoded</code>.
  
 <p> Android provides the following <code>AlgorithmParameters</code> algorithms: 
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
      <tr>
        <td>DH</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>DSA</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>EC</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>GCM</td>
        <td>22+</td>
      </tr>
      <tr class="deprecated">
        <td>IES</td>
        <td>1-8</td>
      </tr>
      <tr>
        <td>OAEP</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA1AndAES_128</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA1AndAES_256</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA224AndAES_128</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA224AndAES_256</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA256AndAES_128</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA256AndAES_256</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA384AndAES_128</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA384AndAES_256</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA512AndAES_128</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PBEwithHmacSHA512AndAES_256</td>
        <td>26+</td>
      </tr>
      <tr>
        <td>PKCS12PBE</td>
        <td>1+</td>
      </tr>
      <tr>
        <td>PSS</td>
        <td>1-8,24+</td>
      </tr>
    </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#AlgorithmParameters">
  AlgorithmParameters section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Jan Luehe
 - seealso: java.security.spec.AlgorithmParameterSpec
 - seealso: java.security.spec.DSAParameterSpec
 - seealso: KeyPairGenerator
 @since 1.2
 */
@interface JavaSecurityAlgorithmParameters : NSObject

#pragma mark Public

/*!
 @brief Returns the name of the algorithm associated with this parameter object.
 @return the algorithm name.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the parameters in their primary encoding format.
 The primary encoding format for parameters is ASN.1, if an ASN.1
  specification for this type of parameters exists.
 @return the parameters encoded using their primary encoding format.
 @throw IOExceptionon encoding errors, or if this parameter object
  has not been initialized.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the parameters encoded in the specified scheme.
 If <code>format</code> is null, the
  primary encoding format for parameters is used. The primary encoding
  format is ASN.1, if an ASN.1 specification for these parameters
  exists.
 @param format the name of the encoding format.
 @return the parameters encoded using the specified encoding scheme.
 @throw IOExceptionon encoding errors, or if this parameter object
  has not been initialized.
 */
- (IOSByteArray *)getEncodedWithNSString:(NSString *)format;

/*!
 @brief Returns a parameter object for the specified algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new AlgorithmParameters object encapsulating the
  AlgorithmParametersSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p> The returned parameter object must be initialized via a call to 
 <code>init</code>, using an appropriate parameter specification or
  parameter encoding.
 @param algorithm the name of the algorithm requested.  See the AlgorithmParameters section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#AlgorithmParameters">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return the new parameter object.
 @throw NoSuchAlgorithmExceptionif no Provider supports an
           AlgorithmParametersSpi implementation for the
           specified algorithm.
 - seealso: Provider
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a parameter object for the specified algorithm.
 <p> A new AlgorithmParameters object encapsulating the
  AlgorithmParametersSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list. 
 <p>The returned parameter object must be initialized via a call to 
 <code>init</code>, using an appropriate parameter specification or
  parameter encoding.
 @param algorithm the name of the algorithm requested.  See the AlgorithmParameters section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#AlgorithmParameters">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new parameter object.
 @throw NoSuchAlgorithmExceptionif an AlgorithmParameterGeneratorSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the provider is null.
 - seealso: Provider
 @since 1.4
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm
                                    withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a parameter object for the specified algorithm.
 <p> A new AlgorithmParameters object encapsulating the
  AlgorithmParametersSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p>The returned parameter object must be initialized via a call to 
 <code>init</code>, using an appropriate parameter specification or
  parameter encoding.
 @param algorithm the name of the algorithm requested.  See the AlgorithmParameters section in the 
  <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html#AlgorithmParameters">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the name of the provider.
 @return the new parameter object.
 @throw NoSuchAlgorithmExceptionif an AlgorithmParametersSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null
           or empty.
 - seealso: Provider
 */
+ (JavaSecurityAlgorithmParameters *)getInstanceWithNSString:(NSString *)algorithm
                                                withNSString:(NSString *)provider;

/*!
 @brief Returns a (transparent) specification of this parameter object.
 <code>paramSpec</code> identifies the specification class in which
  the parameters should be returned. It could, for example, be 
 <code>DSAParameterSpec.class</code>, to indicate that the
  parameters should be returned in an instance of the 
 <code>DSAParameterSpec</code> class.
 @param paramSpec the specification class in which  the parameters should be returned.
 @return the parameter specification.
 @throw InvalidParameterSpecExceptionif the requested parameter
  specification is inappropriate for this parameter object, or if this
  parameter object has not been initialized.
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)getParameterSpecWithIOSClass:(IOSClass *)paramSpec;

/*!
 @brief Returns the provider of this parameter object.
 @return the provider of this parameter object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this parameter object using the parameters
  specified in <code>paramSpec</code>.
 @param paramSpec the parameter specification.
 @throw InvalidParameterSpecExceptionif the given parameter
  specification is inappropriate for the initialization of this parameter
  object, or if this parameter object has already been initialized.
 */
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)paramSpec OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Imports the specified parameters and decodes them according to the
  primary decoding format for parameters.The primary decoding
  format for parameters is ASN.1, if an ASN.1 specification for this type
  of parameters exists.
 @param params the encoded parameters.
 @throw IOExceptionon decoding errors, or if this parameter object
  has already been initialized.
 */
- (void)init__WithByteArray:(IOSByteArray *)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Imports the parameters from <code>params</code> and decodes them
  according to the specified decoding scheme.
 If <code>format</code> is null, the
  primary decoding format for parameters is used. The primary decoding
  format is ASN.1, if an ASN.1 specification for these parameters
  exists.
 @param params the encoded parameters.
 @param format the name of the decoding scheme.
 @throw IOExceptionon decoding errors, or if this parameter object
  has already been initialized.
 */
- (void)init__WithByteArray:(IOSByteArray *)params
               withNSString:(NSString *)format OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a formatted string describing the parameters.
 @return a formatted string describing the parameters, or null if this
  parameter object has not been initialized.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates an AlgorithmParameters object.
 @param paramSpi the delegate
 @param provider the provider
 @param algorithm the algorithm
 */
- (instancetype __nonnull)initWithJavaSecurityAlgorithmParametersSpi:(JavaSecurityAlgorithmParametersSpi *)paramSpi
                                            withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                        withNSString:(NSString *)algorithm;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAlgorithmParameters)

FOUNDATION_EXPORT void JavaSecurityAlgorithmParameters_initWithJavaSecurityAlgorithmParametersSpi_withJavaSecurityProvider_withNSString_(JavaSecurityAlgorithmParameters *self, JavaSecurityAlgorithmParametersSpi *paramSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *new_JavaSecurityAlgorithmParameters_initWithJavaSecurityAlgorithmParametersSpi_withJavaSecurityProvider_withNSString_(JavaSecurityAlgorithmParametersSpi *paramSpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *create_JavaSecurityAlgorithmParameters_initWithJavaSecurityAlgorithmParametersSpi_withJavaSecurityProvider_withNSString_(JavaSecurityAlgorithmParametersSpi *paramSpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityAlgorithmParameters *JavaSecurityAlgorithmParameters_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAlgorithmParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAlgorithmParameters")
