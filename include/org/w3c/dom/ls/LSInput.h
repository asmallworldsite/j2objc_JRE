//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/ls/LSInput.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomLsLSInput")
#ifdef RESTRICT_OrgW3cDomLsLSInput
#define INCLUDE_ALL_OrgW3cDomLsLSInput 0
#else
#define INCLUDE_ALL_OrgW3cDomLsLSInput 1
#endif
#undef RESTRICT_OrgW3cDomLsLSInput

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomLsLSInput_) && (INCLUDE_ALL_OrgW3cDomLsLSInput || defined(INCLUDE_OrgW3cDomLsLSInput))
#define OrgW3cDomLsLSInput_

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaLangBoolean;

/*!
 @brief This interface represents an input source for data.
 <p> This interface allows an application to encapsulate information about
  an input source in a single object, which may include a public
  identifier, a system identifier, a byte stream (possibly with a specified
  encoding), a base URI, and/or a character stream. 
 <p> The exact definitions of a byte stream and a character stream are
  binding dependent. 
 <p> The application is expected to provide objects that implement this
  interface whenever such objects are needed. The application can either
  provide its own objects that implement this interface, or it can use the
  generic factory method <code>DOMImplementationLS.createLSInput()</code>
  to create objects that implement this interface. 
 <p> The <code>LSParser</code> will use the <code>LSInput</code> object to
  determine how to read data. The <code>LSParser</code> will look at the
  different inputs specified in the <code>LSInput</code> in the following
  order to know which one to read from, the first one that is not null and
  not an empty string will be used: 
 <ol>
  <li> <code>LSInput.characterStream</code>
  </li>
  <li>
  <code>LSInput.byteStream</code>
  </li>
  <li> <code>LSInput.stringData</code>
  </li>
  <li>
  <code>LSInput.systemId</code>
  </li>
  <li> <code>LSInput.publicId</code>
  </li>
  </ol>
  <p> If all inputs are null, the <code>LSParser</code> will report a 
 <code>DOMError</code> with its <code>DOMError.type</code> set to 
 <code>"no-input-specified"</code> and its <code>DOMError.severity</code>
  set to <code>DOMError.SEVERITY_FATAL_ERROR</code>.
  <p> <code>LSInput</code> objects belong to the application. The DOM
  implementation will never modify them (though it may make copies and
  modify the copies, if necessary). 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@protocol OrgW3cDomLsLSInput < JavaObject >

/*!
 @brief An attribute of a language and binding dependent type that represents
  a stream of 16-bit units.The application must encode the stream
  using UTF-16 (defined in [Unicode] and in [ISO/IEC 10646]).
 It is not a requirement to have an XML declaration when
  using character streams. If an XML declaration is present, the value
  of the encoding attribute will be ignored.
 */
- (JavaIoReader *)getCharacterStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a stream of 16-bit units.The application must encode the stream
  using UTF-16 (defined in [Unicode] and in [ISO/IEC 10646]).
 It is not a requirement to have an XML declaration when
  using character streams. If an XML declaration is present, the value
  of the encoding attribute will be ignored.
 */
- (void)setCharacterStreamWithJavaIoReader:(JavaIoReader *)characterStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a stream of bytes.
 <br> If the application knows the character encoding of the byte
  stream, it should set the encoding attribute. Setting the encoding in
  this way will override any encoding specified in an XML declaration
  in the data.
 */
- (JavaIoInputStream *)getByteStream;

/*!
 @brief An attribute of a language and binding dependent type that represents
  a stream of bytes.
 <br> If the application knows the character encoding of the byte
  stream, it should set the encoding attribute. Setting the encoding in
  this way will override any encoding specified in an XML declaration
  in the data.
 */
- (void)setByteStreamWithJavaIoInputStream:(JavaIoInputStream *)byteStream;

/*!
 @brief String data to parse.If provided, this will always be treated as a
  sequence of 16-bit units (UTF-16 encoded characters).
 It is not a
  requirement to have an XML declaration when using 
 <code>stringData</code>. If an XML declaration is present, the value
  of the encoding attribute will be ignored.
 */
- (NSString *)getStringData;

/*!
 @brief String data to parse.If provided, this will always be treated as a
  sequence of 16-bit units (UTF-16 encoded characters).
 It is not a
  requirement to have an XML declaration when using 
 <code>stringData</code>. If an XML declaration is present, the value
  of the encoding attribute will be ignored.
 */
- (void)setStringDataWithNSString:(NSString *)stringData;

/*!
 @brief The system identifier, a URI reference [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>], for this
  input source.The system identifier is optional if there is a byte
  stream, a character stream, or string data.
 It is still useful to
  provide one, since the application will use it to resolve any
  relative URIs and can include it in error messages and warnings. (The
  LSParser will only attempt to fetch the resource identified by the
  URI reference if there is no other input available in the input
  source.) 
 <br> If the application knows the character encoding of the object
  pointed to by the system identifier, it can set the encoding using the 
 <code>encoding</code> attribute. 
 <br> If the specified system ID is a relative URI reference (see
  section 5 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]), the DOM
  implementation will attempt to resolve the relative URI with the 
 <code>baseURI</code> as the base, if that fails, the behavior is
  implementation dependent.
 */
- (NSString *)getSystemId;

/*!
 @brief The system identifier, a URI reference [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>], for this
  input source.The system identifier is optional if there is a byte
  stream, a character stream, or string data.
 It is still useful to
  provide one, since the application will use it to resolve any
  relative URIs and can include it in error messages and warnings. (The
  LSParser will only attempt to fetch the resource identified by the
  URI reference if there is no other input available in the input
  source.) 
 <br> If the application knows the character encoding of the object
  pointed to by the system identifier, it can set the encoding using the 
 <code>encoding</code> attribute. 
 <br> If the specified system ID is a relative URI reference (see
  section 5 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]), the DOM
  implementation will attempt to resolve the relative URI with the 
 <code>baseURI</code> as the base, if that fails, the behavior is
  implementation dependent.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief The public identifier for this input source.This may be mapped to an
  input source using an implementation dependent mechanism (such as
  catalogues or other mappings).
 The public identifier, if specified,
  may also be reported as part of the location information when errors
  are reported.
 */
- (NSString *)getPublicId;

/*!
 @brief The public identifier for this input source.This may be mapped to an
  input source using an implementation dependent mechanism (such as
  catalogues or other mappings).
 The public identifier, if specified,
  may also be reported as part of the location information when errors
  are reported.
 */
- (void)setPublicIdWithNSString:(NSString *)publicId;

/*!
 @brief The base URI to be used (see section 5.1.4 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]) for
  resolving a relative <code>systemId</code> to an absolute URI.
 <br> If, when used, the base URI is itself a relative URI, an empty
  string, or null, the behavior is implementation dependent.
 */
- (NSString *)getBaseURI;

/*!
 @brief The base URI to be used (see section 5.1.4 in [<a href='http://www.ietf.org/rfc/rfc2396.txt'>IETF RFC 2396</a>]) for
  resolving a relative <code>systemId</code> to an absolute URI.
 <br> If, when used, the base URI is itself a relative URI, an empty
  string, or null, the behavior is implementation dependent.
 */
- (void)setBaseURIWithNSString:(NSString *)baseURI;

/*!
 @brief The character encoding, if known.The encoding must be a string
  acceptable for an XML encoding declaration ([<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>] section
  4.3.3 "Character Encoding in Entities").
 <br> This attribute has no effect when the application provides a
  character stream or string data. For other sources of input, an
  encoding specified by means of this attribute will override any
  encoding specified in the XML declaration or the Text declaration, or
  an encoding obtained from a higher level protocol, such as HTTP [<a href='http://www.ietf.org/rfc/rfc2616.txt'>IETF RFC 2616</a>].
 */
- (NSString *)getEncoding;

/*!
 @brief The character encoding, if known.The encoding must be a string
  acceptable for an XML encoding declaration ([<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>] section
  4.3.3 "Character Encoding in Entities").
 <br> This attribute has no effect when the application provides a
  character stream or string data. For other sources of input, an
  encoding specified by means of this attribute will override any
  encoding specified in the XML declaration or the Text declaration, or
  an encoding obtained from a higher level protocol, such as HTTP [<a href='http://www.ietf.org/rfc/rfc2616.txt'>IETF RFC 2616</a>].
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief If set to true, assume that the input is certified (see section 2.13
  in [<a href='http://www.w3.org/TR/2004/REC-xml11-20040204/'>XML 1.1</a>]) when
  parsing [<a href='http://www.w3.org/TR/2004/REC-xml11-20040204/'>XML 1.1</a>].
 */
- (jboolean)getCertifiedText;

/*!
 @brief If set to true, assume that the input is certified (see section 2.13
  in [<a href='http://www.w3.org/TR/2004/REC-xml11-20040204/'>XML 1.1</a>]) when
  parsing [<a href='http://www.w3.org/TR/2004/REC-xml11-20040204/'>XML 1.1</a>].
 */
- (void)setCertifiedTextWithBoolean:(jboolean)certifiedText;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSInput)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSInput)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomLsLSInput")
