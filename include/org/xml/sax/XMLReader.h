//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/XMLReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxXMLReader")
#ifdef RESTRICT_OrgXmlSaxXMLReader
#define INCLUDE_ALL_OrgXmlSaxXMLReader 0
#else
#define INCLUDE_ALL_OrgXmlSaxXMLReader 1
#endif
#undef RESTRICT_OrgXmlSaxXMLReader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxXMLReader_) && (INCLUDE_ALL_OrgXmlSaxXMLReader || defined(INCLUDE_OrgXmlSaxXMLReader))
#define OrgXmlSaxXMLReader_

@class JavaLangBoolean;
@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

/*!
 @brief Interface for reading an XML document using callbacks.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p><strong>Note:</strong> despite its name, this interface does 
 <em>not</em> extend the standard Java <code>Reader</code>
  interface, because reading XML is a fundamentally different activity
  than reading character data.</p>
  
 <p>XMLReader is the interface that an XML parser's SAX2 driver must
  implement.  This interface allows an application to set and
  query features and properties in the parser, to register
  event handlers for document processing, and to initiate
  a document parse.</p>
  
 <p>All SAX interfaces are assumed to be synchronous: the 
 <code>parse</code> methods must not return until parsing
  is complete, and readers must wait for an event-handler callback
  to return before reporting the next event.</p>
  
 <p>This interface replaces the (now deprecated) SAX 1.0 <code>Parser</code>
  interface.  The XMLReader interface
  contains two important enhancements over the old Parser
  interface (as well as some minor ones):</p>
  
 <ol>
  <li>it adds a standard way to query and set features and
   properties; and</li>
  <li>it adds Namespace support, which is required for many
   higher-level XML standards.</li>
  </ol>
  
 <p>There are adapters available to convert a SAX1 Parser to
  a SAX2 XMLReader and vice-versa.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1+ (sax2r3pre1)
 - seealso: org.xml.sax.XMLFilter
 - seealso: org.xml.sax.helpers.ParserAdapter
 - seealso: org.xml.sax.helpers.XMLReaderAdapter
 */
@protocol OrgXmlSaxXMLReader < JavaObject >

/*!
 @brief Look up the value of a feature flag.
 <p>The feature name is any fully-qualified URI.  It is
  possible for an XMLReader to recognize a feature name but
  temporarily be unable to return its value.
  Some feature values may be available only in specific
  contexts, such as before, during, or after a parse.
  Also, some feature values may not be programmatically accessible.
  (In the case of an adapter for SAX1 <code>Parser</code>, there is no
  implementation-independent way to expose whether the underlying
  parser is performing validation, expanding external entities,
  and so forth.) </p>
  
 <p>All XMLReaders are required to recognize the
  http://xml.org/sax/features/namespaces and the
  http://xml.org/sax/features/namespace-prefixes feature names.</p>
  
 <p>Typical usage is something like this:</p>
  
 @code

  XMLReader r = new MySAXDriver();
                          // try to activate validation
  try {
    r.setFeature("http://xml.org/sax/features/validation", true);
  } catch (SAXException e) {
    System.err.println("Cannot activate validation.");
  }
                          // register event handlers
  r.setContentHandler(new MyContentHandler());
  r.setErrorHandler(new MyErrorHandler());
                          // parse the first document
  try {
    r.parse("http://www.foo.com/mydoc.xml");
  } catch (IOException e) {
    System.err.println("I/O exception reading XML document");
  } catch (SAXException e) {
    System.err.println("XML exception reading document.");
  } 
  
@endcode
  
 <p>Implementors are free (and encouraged) to invent their own features,
  using names built on their own URIs.</p>
 @param name The feature name, which is a fully-qualified URI.
 @return The current value of the feature (true or false).
 @throw org.xml.sax.SAXNotRecognizedExceptionIf the feature
             value can't be assigned or retrieved.
 @throw org.xml.sax.SAXNotSupportedExceptionWhen the
             XMLReader recognizes the feature name but
             cannot determine its value at this time.
 - seealso: #setFeature
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Set the value of a feature flag.
 <p>The feature name is any fully-qualified URI.  It is
  possible for an XMLReader to expose a feature value but
  to be unable to change the current value.
  Some feature values may be immutable or mutable only
  in specific contexts, such as before, during, or after
  a parse.</p>
  
 <p>All XMLReaders are required to support setting
  http://xml.org/sax/features/namespaces to true and
  http://xml.org/sax/features/namespace-prefixes to false.</p>
 @param name The feature name, which is a fully-qualified URI.
 @param value The requested value of the feature (true or false).
 @throw org.xml.sax.SAXNotRecognizedExceptionIf the feature
             value can't be assigned or retrieved.
 @throw org.xml.sax.SAXNotSupportedExceptionWhen the
             XMLReader recognizes the feature name but
             cannot set the requested value.
 - seealso: #getFeature
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Look up the value of a property.
 <p>The property name is any fully-qualified URI.  It is
  possible for an XMLReader to recognize a property name but
  temporarily be unable to return its value.
  Some property values may be available only in specific
  contexts, such as before, during, or after a parse.</p>
  
 <p>XMLReaders are not required to recognize any specific
  property names, though an initial core set is documented for
  SAX2.</p>
  
 <p>Implementors are free (and encouraged) to invent their own properties,
  using names built on their own URIs.</p>
 @param name The property name, which is a fully-qualified URI.
 @return The current value of the property.
 @throw org.xml.sax.SAXNotRecognizedExceptionIf the property
             value can't be assigned or retrieved.
 @throw org.xml.sax.SAXNotSupportedExceptionWhen the
             XMLReader recognizes the property name but
             cannot determine its value at this time.
 - seealso: #setProperty
 */
- (id)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Set the value of a property.
 <p>The property name is any fully-qualified URI.  It is
  possible for an XMLReader to recognize a property name but
  to be unable to change the current value.
  Some property values may be immutable or mutable only
  in specific contexts, such as before, during, or after
  a parse.</p>
  
 <p>XMLReaders are not required to recognize setting
  any specific property names, though a core set is defined by
  SAX2.</p>
  
 <p>This method is also the standard mechanism for setting
  extended handlers.</p>
 @param name The property name, which is a fully-qualified URI.
 @param value The requested value for the property.
 @throw org.xml.sax.SAXNotRecognizedExceptionIf the property
             value can't be assigned or retrieved.
 @throw org.xml.sax.SAXNotSupportedExceptionWhen the
             XMLReader recognizes the property name but
             cannot set the requested value.
 */
- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

/*!
 @brief Allow an application to register an entity resolver.
 <p>If the application does not register an entity resolver,
  the XMLReader will perform its own default resolution.</p>
  
 <p>Applications may register a new or different resolver in the
  middle of a parse, and the SAX parser must begin using the new
  resolver immediately.</p>
 @param resolver The entity resolver.
 - seealso: #getEntityResolver
 */
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

/*!
 @brief Return the current entity resolver.
 @return The current entity resolver, or null if none
          has been registered.
 - seealso: #setEntityResolver
 */
- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

/*!
 @brief Allow an application to register a DTD event handler.
 <p>If the application does not register a DTD handler, all DTD
  events reported by the SAX parser will be silently ignored.</p>
  
 <p>Applications may register a new or different handler in the
  middle of a parse, and the SAX parser must begin using the new
  handler immediately.</p>
 @param handler The DTD handler.
 - seealso: #getDTDHandler
 */
- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

/*!
 @brief Return the current DTD handler.
 @return The current DTD handler, or null if none
          has been registered.
 - seealso: #setDTDHandler
 */
- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

/*!
 @brief Allow an application to register a content event handler.
 <p>If the application does not register a content handler, all
  content events reported by the SAX parser will be silently
  ignored.</p>
  
 <p>Applications may register a new or different handler in the
  middle of a parse, and the SAX parser must begin using the new
  handler immediately.</p>
 @param handler The content handler.
 - seealso: #getContentHandler
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Return the current content handler.
 @return The current content handler, or null if none
          has been registered.
 - seealso: #setContentHandler
 */
- (id<OrgXmlSaxContentHandler>)getContentHandler;

/*!
 @brief Allow an application to register an error event handler.
 <p>If the application does not register an error handler, all
  error events reported by the SAX parser will be silently
  ignored; however, normal processing may not continue.  It is
  highly recommended that all SAX applications implement an
  error handler to avoid unexpected bugs.</p>
  
 <p>Applications may register a new or different handler in the
  middle of a parse, and the SAX parser must begin using the new
  handler immediately.</p>
 @param handler The error handler.
 - seealso: #getErrorHandler
 */
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

/*!
 @brief Return the current error handler.
 @return The current error handler, or null if none
          has been registered.
 - seealso: #setErrorHandler
 */
- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

/*!
 @brief Parse an XML document.
 <p>The application can use this method to instruct the XML
  reader to begin parsing an XML document from any valid input
  source (a character stream, a byte stream, or a URI).</p>
  
 <p>Applications may not invoke this method while a parse is in
  progress (they should create a new XMLReader instead for each
  nested XML document).  Once a parse is complete, an
  application may reuse the same XMLReader object, possibly with a
  different input source.
  Configuration of the XMLReader object (such as handler bindings and
  values established for feature flags and properties) is unchanged
  by completion of a parse, unless the definition of that aspect of
  the configuration explicitly specifies other behavior.
  (For example, feature flags or properties exposing
  characteristics of the document being parsed.) 
 </p>
  
 <p>During the parse, the XMLReader will provide information
  about the XML document through the registered event
  handlers.</p>
  
 <p>This method is synchronous: it will not return until parsing
  has ended.  If a client application wants to terminate
  parsing early, it should throw an exception.</p>
 @param input The input source for the top-level of the         XML document.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw java.io.IOExceptionAn IO exception from the parser,
             possibly from a byte stream or character stream
             supplied by the application.
 - seealso: org.xml.sax.InputSource
 - seealso: #parse(java.lang.String)
 - seealso: #setEntityResolver
 - seealso: #setDTDHandler
 - seealso: #setContentHandler
 - seealso: #setErrorHandler
 */
- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)input;

/*!
 @brief Parse an XML document from a system identifier (URI).
 <p>This method is a shortcut for the common case of reading a
  document from a system identifier.  It is the exact
  equivalent of the following:</p>
  
 @code

  parse(new InputSource(systemId)); 
  
@endcode
  
 <p>If the system identifier is a URL, it must be fully resolved
  by the application before it is passed to the parser.</p>
 @param systemId The system identifier (URI).
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw java.io.IOExceptionAn IO exception from the parser,
             possibly from a byte stream or character stream
             supplied by the application.
 - seealso: #parse(org.xml.sax.InputSource)
 */
- (void)parseWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxXMLReader)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxXMLReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxXMLReader")
