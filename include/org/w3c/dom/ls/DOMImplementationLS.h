//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/ls/DOMImplementationLS.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomLsDOMImplementationLS")
#ifdef RESTRICT_OrgW3cDomLsDOMImplementationLS
#define INCLUDE_ALL_OrgW3cDomLsDOMImplementationLS 0
#else
#define INCLUDE_ALL_OrgW3cDomLsDOMImplementationLS 1
#endif
#undef RESTRICT_OrgW3cDomLsDOMImplementationLS

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomLsDOMImplementationLS_) && (INCLUDE_ALL_OrgW3cDomLsDOMImplementationLS || defined(INCLUDE_OrgW3cDomLsDOMImplementationLS))
#define OrgW3cDomLsDOMImplementationLS_

@class JavaLangShort;
@protocol OrgW3cDomLsLSInput;
@protocol OrgW3cDomLsLSOutput;
@protocol OrgW3cDomLsLSParser;
@protocol OrgW3cDomLsLSSerializer;

/*!
 @brief <code>DOMImplementationLS</code> contains the factory methods for creating
  Load and Save objects.
 <p> The expectation is that an instance of the 
 <code>DOMImplementationLS</code> interface can be obtained by using
  binding-specific casting methods on an instance of the 
 <code>DOMImplementation</code> interface or, if the <code>Document</code>
  supports the feature <code>"Core"</code> version <code>"3.0"</code>
  defined in [<a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>DOM Level 3 Core</a>]
  , by using the method <code>DOMImplementation.getFeature</code> with
  parameter values <code>"LS"</code> (or <code>"LS-Async"</code>) and 
 <code>"3.0"</code> (respectively). 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@protocol OrgW3cDomLsDOMImplementationLS < JavaObject >

/*!
 @brief Create a new <code>LSParser</code>.The newly constructed parser may
  then be configured by means of its <code>DOMConfiguration</code>
  object, and used to parse documents by means of its <code>parse</code>
   method.
 @param mode The  <code> mode </code>  argument is either
      <code> MODE_SYNCHRONOUS </code>  or  <code> MODE_ASYNCHRONOUS </code> , if
      <code> mode </code>  is  <code> MODE_SYNCHRONOUS </code>  then the
      <code> LSParser </code>  that is created will operate in synchronous
     mode, if it's  <code> MODE_ASYNCHRONOUS </code>  then the
      <code> LSParser </code>  that is created will operate in asynchronous
     mode.
 @param schemaType An absolute URI representing the type of the schema    language used during the load of a 
  <code> Document </code>  using the    newly created 
  <code> LSParser </code> . Note that no lexical checking    is done on the absolute URI. In order to create a
      <code> LSParser
  </code>  for any kind of schema types (i.e. the    LSParser will be free to use any schema found), use the value
      <code> null </code>
  .   <p> <b> Note: </b>
      For W3C XML Schema [ <a href='http://www.w3.org/TR/2001/REC-xmlschema-1-20010502/'> XML Schema Part 1 </a> ]    , applications must use the value
      <code> "http://www.w3.org/2001/XMLSchema"
  </code> . For XML DTD [ <a href='http://www.w3.org/TR/2004/REC-xml-20040204'> XML 1.0 </a> ],    applications must use the value
      <code> "http://www.w3.org/TR/REC-xml"
  </code> . Other Schema languages    are outside the scope of the W3C and therefore should recommend an
     absolute URI in order to use this method.
 @return The newly created <code>LSParser</code> object. This
    <code>LSParser</code> is either synchronous or asynchronous
    depending on the value of the <code>mode</code> argument. 
 <p><b>Note:</b>    By default, the newly created <code>LSParser</code>
    does not contain a <code>DOMErrorHandler</code>, i.e. the value of
    the "<a href='http://www.w3.org/TR/DOM-Level-3-Core/core.html#parameter-error-handler'>
    error-handler</a>" configuration parameter is <code>null</code>. However, implementations
    may provide a default error handler at creation time. In that case,
    the initial value of the <code>"error-handler"</code> configuration
    parameter on the new <code>LSParser</code> object contains a
    reference to the default error handler.
 @throw DOMException
 NOT_SUPPORTED_ERR: Raised if the requested mode or schema type is
    not supported.
 */
- (id<OrgW3cDomLsLSParser>)createLSParserWithShort:(jshort)mode
                                      withNSString:(NSString *)schemaType;

/*!
 @brief Create a new <code>LSSerializer</code> object.
 @return The newly created <code>LSSerializer</code> object. 
 <p><b>Note:</b>    By default, the newly created   
 <code>LSSerializer</code> has no <code>DOMErrorHandler</code>, i.e.
    the value of the <code>"error-handler"</code> configuration
    parameter is <code>null</code>. However, implementations may
    provide a default error handler at creation time. In that case, the
    initial value of the <code>"error-handler"</code> configuration
    parameter on the new <code>LSSerializer</code> object contains a
    reference to the default error handler.
 */
- (id<OrgW3cDomLsLSSerializer>)createLSSerializer;

/*!
 @brief Create a new empty input source object where 
 <code>LSInput.characterStream</code>, <code>LSInput.byteStream</code>
  , <code>LSInput.stringData</code> <code>LSInput.systemId</code>,
  <code>LSInput.publicId</code>, <code>LSInput.baseURI</code>, and 
 <code>LSInput.encoding</code> are null, and 
 <code>LSInput.certifiedText</code> is false.
 @return The newly created input object.
 */
- (id<OrgW3cDomLsLSInput>)createLSInput;

/*!
 @brief Create a new empty output destination object where 
 <code>LSOutput.characterStream</code>,
  <code>LSOutput.byteStream</code>, <code>LSOutput.systemId</code>,
  <code>LSOutput.encoding</code> are null.
 @return The newly created output object.
 */
- (id<OrgW3cDomLsLSOutput>)createLSOutput;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsDOMImplementationLS)

/*!
 @brief Create a synchronous <code>LSParser</code>.
 */
inline jshort OrgW3cDomLsDOMImplementationLS_get_MODE_SYNCHRONOUS(void);
#define OrgW3cDomLsDOMImplementationLS_MODE_SYNCHRONOUS 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsDOMImplementationLS, MODE_SYNCHRONOUS, jshort)

/*!
 @brief Create an asynchronous <code>LSParser</code>.
 */
inline jshort OrgW3cDomLsDOMImplementationLS_get_MODE_ASYNCHRONOUS(void);
#define OrgW3cDomLsDOMImplementationLS_MODE_ASYNCHRONOUS 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsDOMImplementationLS, MODE_ASYNCHRONOUS, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsDOMImplementationLS)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomLsDOMImplementationLS")
