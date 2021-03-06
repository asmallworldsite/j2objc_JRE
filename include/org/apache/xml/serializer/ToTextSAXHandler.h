//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToTextSAXHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToTextSAXHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerToTextSAXHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerToTextSAXHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToTextSAXHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToTextSAXHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerToTextSAXHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerToTextSAXHandler || defined(INCLUDE_OrgApacheXmlSerializerToTextSAXHandler))
#define OrgApacheXmlSerializerToTextSAXHandler_

#define RESTRICT_OrgApacheXmlSerializerToSAXHandler 1
#define INCLUDE_OrgApacheXmlSerializerToSAXHandler 1
#include "org/apache/xml/serializer/ToSAXHandler.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaUtilProperties;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;
@protocol OrgXmlSaxLocator;

/*!
 @brief This class converts SAX-like event to SAX events for
  xsl:output method "text".
 This class is only to be used internally. This class is not a public API.
 */
@interface OrgApacheXmlSerializerToTextSAXHandler : OrgApacheXmlSerializerToSAXHandler

#pragma mark Public

- (instancetype __nonnull)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)hdlr
                           withOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lex
                                             withNSString:(NSString *)encoding;

/*!
 @brief From XSLTC
 */
- (instancetype __nonnull)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler
                                             withNSString:(NSString *)encoding;

/*!
 @brief From XSLTC
 */
- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 - seealso: ExtendedContentHandler#addAttribute(String, String, String, String, String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#attributeDecl(String, String, String, String, String)
 */
- (void)attributeDeclWithNSString:(NSString *)arg0
                     withNSString:(NSString *)arg1
                     withNSString:(NSString *)arg2
                     withNSString:(NSString *)arg3
                     withNSString:(NSString *)arg4;

/*!
 - seealso: org.xml.sax.ContentHandler#characters(char[], int, int)
 */
- (void)charactersWithCharArray:(IOSCharArray *)characters
                        withInt:(jint)offset
                        withInt:(jint)length;

/*!
 - seealso: ExtendedContentHandler#characters(String)
 */
- (void)charactersWithNSString:(NSString *)characters;

- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

- (void)commentWithNSString:(NSString *)data;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#elementDecl(String, String)
 */
- (void)elementDeclWithNSString:(NSString *)arg0
                   withNSString:(NSString *)arg1;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#endCDATA()
 */
- (void)endCDATA;

/*!
 @brief From XSLTC
 - seealso: org.xml.sax.ContentHandler#endDocument()
 */
- (void)endDocument;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#endDTD()
 */
- (void)endDTD;

/*!
 @brief From XSLTC
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 - seealso: org.xml.sax.ContentHandler#endElement(String, String, String)
 */
- (void)endElementWithNSString:(NSString *)arg0
                  withNSString:(NSString *)arg1
                  withNSString:(NSString *)arg2;

/*!
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping(String)
 */
- (void)endPrefixMappingWithNSString:(NSString *)arg0;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl(String, String, String)
 */
- (void)externalEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1
                          withNSString:(NSString *)arg2;

/*!
 - seealso: Serializer#getOutputFormat()
 */
- (JavaUtilProperties *)getOutputFormat;

/*!
 - seealso: Serializer#getOutputStream()
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 - seealso: Serializer#getWriter()
 */
- (JavaIoWriter *)getWriter;

/*!
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace(char[], int, int)
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)arg0
                                 withInt:(jint)arg1
                                 withInt:(jint)arg2;

/*!
 @brief Does nothing because 
  the indent attribute is ignored for text output.
 */
- (void)indentWithInt:(jint)n;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl(String, String)
 */
- (void)internalEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1;

- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 @brief From XSLTC
 - seealso: org.xml.sax.ContentHandler#processingInstruction(String, String)
 */
- (void)processingInstructionWithNSString:(NSString *)arg0
                             withNSString:(NSString *)arg1;

/*!
 - seealso: Serializer#reset()
 */
- (jboolean)reset;

/*!
 - seealso: DOMSerializer#serialize(Node)
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator(Locator)
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)arg0;

/*!
 - seealso: SerializationHandler#setEscaping(boolean)
 */
- (jboolean)setEscapingWithBoolean:(jboolean)escape;

/*!
 - seealso: SerializationHandler#setIndent(boolean)
 */
- (void)setIndentWithBoolean:(jboolean)indent;

/*!
 - seealso: Serializer#setOutputFormat(Properties)
 */
- (void)setOutputFormatWithJavaUtilProperties:(JavaUtilProperties *)format;

/*!
 - seealso: Serializer#setOutputStream(OutputStream)
 */
- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)output;

/*!
 - seealso: Serializer#setWriter(Writer)
 */
- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 - seealso: org.xml.sax.ContentHandler#skippedEntity(String)
 */
- (void)skippedEntityWithNSString:(NSString *)arg0;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#startCDATA()
 */
- (void)startCDATA;

- (void)startElementWithNSString:(NSString *)elementName;

/*!
 @brief From XSLTC
 - seealso: ExtendedContentHandler#startElement(String)
 */
- (void)startElementWithNSString:(NSString *)elementNamespaceURI
                    withNSString:(NSString *)elementLocalName
                    withNSString:(NSString *)elementName;

/*!
 - seealso: org.xml.sax.ContentHandler#startElement(String, String, String, Attributes)
 */
- (void)startElementWithNSString:(NSString *)arg0
                    withNSString:(NSString *)arg1
                    withNSString:(NSString *)arg2
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)arg3;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#startEntity(String)
 */
- (void)startEntityWithNSString:(NSString *)arg0;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToTextSAXHandler)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(OrgApacheXmlSerializerToTextSAXHandler *self, id<OrgXmlSaxContentHandler> hdlr, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding);

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextSAXHandler *new_OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(id<OrgXmlSaxContentHandler> hdlr, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextSAXHandler *create_OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(id<OrgXmlSaxContentHandler> hdlr, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(OrgApacheXmlSerializerToTextSAXHandler *self, id<OrgXmlSaxContentHandler> handler, NSString *encoding);

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextSAXHandler *new_OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, NSString *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToTextSAXHandler *create_OrgApacheXmlSerializerToTextSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, NSString *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToTextSAXHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToTextSAXHandler")
