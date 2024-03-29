//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/parsers/DocumentBuilderFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlParsersDocumentBuilderFactory")
#ifdef RESTRICT_JavaxXmlParsersDocumentBuilderFactory
#define INCLUDE_ALL_JavaxXmlParsersDocumentBuilderFactory 0
#else
#define INCLUDE_ALL_JavaxXmlParsersDocumentBuilderFactory 1
#endif
#undef RESTRICT_JavaxXmlParsersDocumentBuilderFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlParsersDocumentBuilderFactory_) && (INCLUDE_ALL_JavaxXmlParsersDocumentBuilderFactory || defined(INCLUDE_JavaxXmlParsersDocumentBuilderFactory))
#define JavaxXmlParsersDocumentBuilderFactory_

@class JavaLangBoolean;
@class JavaLangClassLoader;
@class JavaxXmlParsersDocumentBuilder;
@class JavaxXmlValidationSchema;

/*!
 @brief Defines a factory API that enables applications to obtain a
  parser that produces DOM object trees from XML documents.
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 884950 $, $Date: 2009-11-27 10:46:18 -0800 (Fri, 27 Nov 2009) $
 */
@interface JavaxXmlParsersDocumentBuilderFactory : NSObject

#pragma mark Public

/*!
 @brief Allows the user to retrieve specific attributes on the underlying
  implementation.
 @param name The name of the attribute.
 @return value The value of the attribute.
 @throw IllegalArgumentExceptionthrown if the underlying
  implementation doesn't recognize the attribute.
 */
- (id)getAttributeWithNSString:(NSString *)name;

/*!
 @brief <p>Get the state of the named feature.
 </p>
  
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>ParserConfigurationException</code> is thrown if this <code>DocumentBuilderFactory</code> or the 
 <code>DocumentBuilder</code>s it creates cannot support the feature.
  It is possible for an <code>DocumentBuilderFactory</code> to expose a feature value but be unable to change its state. 
 </p>
 @param name Feature name.
 @return State of the named feature.
 @throw ParserConfigurationExceptionif this <code>DocumentBuilderFactory</code>
    or the <code>DocumentBuilder</code>s it creates cannot support this feature.
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Gets the <code>Schema</code> object specified through
  the <code>setSchema(Schema schema)</code> method.
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @return the <code>Schema</code> object that was last set through
       the <code>setSchema(Schema)</code> method, or null
       if the method was not invoked since a <code>DocumentBuilderFactory</code>
       is created.
 @since 1.5
 */
- (JavaxXmlValidationSchema *)getSchema;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which converts CDATA nodes to Text nodes and appends it to
  the adjacent (if any) Text node.
 @return true if the factory is configured to produce parsers
           which converts CDATA nodes to Text nodes and appends it to
           the adjacent (if any) Text node; false otherwise.
 */
- (jboolean)isCoalescing;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which expand entity reference nodes.
 @return true if the factory is configured to produce parsers
           which expand entity reference nodes; false otherwise.
 */
- (jboolean)isExpandEntityReferences;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which ignores comments.
 @return true if the factory is configured to produce parsers
           which ignores comments; false otherwise.
 */
- (jboolean)isIgnoringComments;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which ignore ignorable whitespace in element content.
 @return true if the factory is configured to produce parsers
           which ignore ignorable whitespace in element content;
           false otherwise.
 */
- (jboolean)isIgnoringElementContentWhitespace;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which are namespace aware.
 @return true if the factory is configured to produce parsers which
           are namespace aware; false otherwise.
 */
- (jboolean)isNamespaceAware;

/*!
 @brief Indicates whether or not the factory is configured to produce
  parsers which validate the XML content during parse.
 @return true if the factory is configured to produce parsers
           which validate the XML content during parse; false otherwise.
 */
- (jboolean)isValidating;

/*!
 @brief <p>Get state of XInclude processing.
 </p>
 @return current state of XInclude processing
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @since 1.5
 */
- (jboolean)isXIncludeAware;

/*!
 @brief Creates a new instance of a <code>javax.xml.parsers.DocumentBuilder</code>
  using the currently configured parameters.
 @throw ParserConfigurationExceptionif a DocumentBuilder
  cannot be created which satisfies the configuration requested.
 @return A new instance of a DocumentBuilder.
 */
- (JavaxXmlParsersDocumentBuilder *)newDocumentBuilder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns Android's implementation of <code>DocumentBuilderFactory</code>.
 Unlike other Java implementations, this method does not consult system
  properties, property files, or the services API.
 @return a new DocumentBuilderFactory.
 */
+ (JavaxXmlParsersDocumentBuilderFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an instance of the named implementation of <code>DocumentBuilderFactory</code>.
 @throw FactoryConfigurationErrorif <code>factoryClassName</code> is not available or cannot be
      instantiated.
 @since 1.6
 */
+ (JavaxXmlParsersDocumentBuilderFactory *)newInstanceWithNSString:(NSString *)factoryClassName
                                           withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Allows the user to set specific attributes on the underlying
  implementation.
 @param name The name of the attribute.
 @param value The value of the attribute.
 @throw IllegalArgumentExceptionthrown if the underlying
  implementation doesn't recognize the attribute.
 */
- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Specifies that the parser produced by this code will
  convert CDATA nodes to Text nodes and append it to the
  adjacent (if any) text node.By default the value of this is set to 
 <code>false</code>
 @param coalescing true if the parser produced will convert CDATA nodes                     to Text nodes and append it to the adjacent (if any)
                      text node; false otherwise.
 */
- (void)setCoalescingWithBoolean:(jboolean)coalescing;

/*!
 @brief Specifies that the parser produced by this code will
  expand entity reference nodes.By default the value of this is set to 
 <code>true</code>
 @param expandEntityRef true if the parser produced will expand entity                         reference nodes; false otherwise.
 */
- (void)setExpandEntityReferencesWithBoolean:(jboolean)expandEntityRef;

/*!
 @brief <p>Set a feature for this <code>DocumentBuilderFactory</code> and <code>DocumentBuilder</code>s created by this factory.
 </p>
  
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>ParserConfigurationException</code> is thrown if this <code>DocumentBuilderFactory</code> or the 
 <code>DocumentBuilder</code>s it creates cannot support the feature.
  It is possible for an <code>DocumentBuilderFactory</code> to expose a feature value but be unable to change its state. 
 </p>
  
 <p>
  Earlier versions of this documentation have mandated support for the 
 <code>javax.xml.XMLConstants.FEATURE_SECURE_PROCESSING</code> feature, but this is not a
  supported feature on any version of Android. 
 </p>
 @param name Feature name.
 @param value Is feature state  <code> true </code>  or  <code> false </code>
  .
 @throw ParserConfigurationExceptionif this <code>DocumentBuilderFactory</code> or the <code>DocumentBuilder</code>s
    it creates cannot support this feature.
 @throw NullPointerExceptionIf the <code>name</code> parameter is null.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief <p>Specifies that the parser produced by this code will
  ignore comments.By default the value of this is set to <code>false
  </code>.
 </p>
 @param ignoreComments <code> boolean </code>  value to ignore comments during processing
 */
- (void)setIgnoringCommentsWithBoolean:(jboolean)ignoreComments;

/*!
 @brief Specifies that the parsers created by this  factory must eliminate
  whitespace in element content (sometimes known loosely as
  'ignorable whitespace') when parsing XML documents (see XML Rec
  2.10).Note that only whitespace which is directly contained within
  element content that has an element only content model (see XML
  Rec 3.2.1) will be eliminated.
 Due to reliance on the content model
  this setting requires the parser to be in validating mode. By default
  the value of this is set to <code>false</code>.
 @param whitespace true if the parser created must eliminate whitespace                    in the element content when parsing XML documents;
                     false otherwise.
 */
- (void)setIgnoringElementContentWhitespaceWithBoolean:(jboolean)whitespace;

/*!
 @brief Specifies that the parser produced by this code will
  provide support for XML namespaces.By default the value of this is set
  to <code>false</code>
 @param awareness true if the parser produced will provide support                   for XML namespaces; false otherwise.
 */
- (void)setNamespaceAwareWithBoolean:(jboolean)awareness;

/*!
 @brief <p>Set the <code>Schema</code> to be used by parsers created
  from this factory.
 <p>
  When a <code>Schema</code> is non-null, a parser will use a validator
  created from it to validate documents before it passes information
  down to the application. 
 <p>When errors are found by the validator, the parser is responsible
  to report them to the user-specified <code>org.xml.sax.ErrorHandler</code>
  (or if the error handler is not set, ignore them or throw them), just
  like any other errors found by the parser itself.
  In other words, if the user-specified <code>org.xml.sax.ErrorHandler</code>
  is set, it must receive those errors, and if not, they must be
  treated according to the implementation specific
  default error handling rules. 
 <p>
  A validator may modify the outcome of a parse (for example by
  adding default values that were missing in documents), and a parser
  is responsible to make sure that the application will receive
  modified DOM trees. 
 <p>
  Initially, null is set as the <code>Schema</code>.
  
 <p>
  This processing will take effect even if
  the <code>isValidating()</code> method returns <tt>false</tt>.
  
 <p>It is an error to use
  the <code>http://java.sun.com/xml/jaxp/properties/schemaSource</code>
  property and/or the <code>http://java.sun.com/xml/jaxp/properties/schemaLanguage</code>
  property in conjunction with a <code>Schema</code> object.
  Such configuration will cause a <code>ParserConfigurationException</code>
  exception when the <code>newDocumentBuilder()</code> is invoked.</p>
  
 <h4>Note for implementors</h4>
  <p>
  A parser must be able to work with any <code>Schema</code>
  implementation. However, parsers and schemas are allowed
  to use implementation-specific custom mechanisms
  as long as they yield the result described in the specification.
 @param schema <code> Schema </code>  to use or  <code> null </code>  to remove a schema.
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @since 1.5
 */
- (void)setSchemaWithJavaxXmlValidationSchema:(JavaxXmlValidationSchema *)schema;

/*!
 @brief Specifies that the parser produced by this code will
  validate documents as they are parsed.By default the value of this
  is set to <code>false</code>.
 <p>
  Note that "the validation" here means 
 <a href="http://www.w3.org/TR/REC-xml#proc-types">a validating
  parser</a> as defined in the XML recommendation.
  In other words, it essentially just controls the DTD validation.
  (except the legacy two properties defined in JAXP 1.2.
  See <a href="#validationCompatibility">here</a> for more details.) 
 </p>
  
 <p>
  To use modern schema languages such as W3C XML Schema or
  RELAX NG instead of DTD, you can configure your parser to be
  a non-validating parser by leaving the <code>setValidating(boolean)</code>
  method <tt>false</tt>, then use the <code>setSchema(Schema)</code>
  method to associate a schema to a parser. 
 </p>
 @param validating true if the parser produced will validate documents                    as they are parsed; false otherwise.
 */
- (void)setValidatingWithBoolean:(jboolean)validating;

/*!
 @brief <p>Set state of XInclude processing.
 </p>
  
 <p>If XInclude markup is found in the document instance, should it be
  processed as specified in <a href="http://www.w3.org/TR/xinclude/">
  XML Inclusions (XInclude) Version 1.0</a>.</p>
  
 <p>XInclude processing defaults to <code>false</code>.</p>
 @param state Set XInclude processing to  <code> true </code>  or
      <code> false </code>
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @since 1.5
 */
- (void)setXIncludeAwareWithBoolean:(jboolean)state;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersDocumentBuilderFactory)

FOUNDATION_EXPORT void JavaxXmlParsersDocumentBuilderFactory_init(JavaxXmlParsersDocumentBuilderFactory *self);

FOUNDATION_EXPORT JavaxXmlParsersDocumentBuilderFactory *JavaxXmlParsersDocumentBuilderFactory_newInstance(void);

FOUNDATION_EXPORT JavaxXmlParsersDocumentBuilderFactory *JavaxXmlParsersDocumentBuilderFactory_newInstanceWithNSString_withJavaLangClassLoader_(NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersDocumentBuilderFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlParsersDocumentBuilderFactory")
