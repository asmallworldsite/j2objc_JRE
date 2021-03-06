//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/TransformerHandlerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerHandlerImpl")
#ifdef RESTRICT_OrgApacheXalanTransformerTransformerHandlerImpl
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerHandlerImpl 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerHandlerImpl 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerTransformerHandlerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerTransformerHandlerImpl_) && (INCLUDE_ALL_OrgApacheXalanTransformerTransformerHandlerImpl || defined(INCLUDE_OrgApacheXalanTransformerTransformerHandlerImpl))
#define OrgApacheXalanTransformerTransformerHandlerImpl_

#define RESTRICT_OrgXmlSaxEntityResolver 1
#define INCLUDE_OrgXmlSaxEntityResolver 1
#include "org/xml/sax/EntityResolver.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "org/xml/sax/DTDHandler.h"

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "org/xml/sax/ContentHandler.h"

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "org/xml/sax/ErrorHandler.h"

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "org/xml/sax/ext/LexicalHandler.h"

#define RESTRICT_JavaxXmlTransformSaxTransformerHandler 1
#define INCLUDE_JavaxXmlTransformSaxTransformerHandler 1
#include "javax/xml/transform/sax/TransformerHandler.h"

#define RESTRICT_OrgXmlSaxExtDeclHandler 1
#define INCLUDE_OrgXmlSaxExtDeclHandler 1
#include "org/xml/sax/ext/DeclHandler.h"

@class IOSCharArray;
@class JavaxXmlTransformTransformer;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXException;
@class OrgXmlSaxSAXParseException;
@protocol JavaxXmlTransformResult;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

/*!
 @brief A TransformerHandler
  listens for SAX ContentHandler parse events and transforms
  them to a Result.
 */
@interface OrgApacheXalanTransformerTransformerHandlerImpl : NSObject < OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxContentHandler, OrgXmlSaxErrorHandler, OrgXmlSaxExtLexicalHandler, JavaxXmlTransformSaxTransformerHandler, OrgXmlSaxExtDeclHandler > {
 @public
  /*!
   @brief The Document Table Instance we are transforming.
   */
  id<OrgApacheXmlDtmDTM> m_dtm_;
}

#pragma mark Public

/*!
 @brief Construct a TransformerHandlerImpl.
 @param transformer Non-null reference to the Xalan transformer impl.
 @param doFragment True if the result should be a document fragement.
 @param baseSystemID The system ID to use as the base for relative URLs.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                               withBoolean:(jboolean)doFragment
                                                              withNSString:(NSString *)baseSystemID;

/*!
 @brief Report an attribute type declaration.
 <p>Only the effective (first) declaration for an attribute will
  be reported.  The type will be one of the strings "CDATA",
  "ID", "IDREF", "IDREFS", "NMTOKEN", "NMTOKENS", "ENTITY",
  "ENTITIES", or "NOTATION", or a parenthesized token group with
  the separator "|" and all whitespace removed.</p>
 @param eName The name of the associated element.
 @param aName The name of the attribute.
 @param type A string representing the attribute type.
 @param valueDefault A string representing the attribute default         ("#IMPLIED", "#REQUIRED", or "#FIXED") or null if
          none of these applies.
 @param value A string representing the attribute's default value,         or null if there is none.
 @throw SAXExceptionThe application may raise an exception.
 */
- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)valueDefault
                     withNSString:(NSString *)value;

/*!
 @brief Filter a character data event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#characters
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Report an XML comment anywhere in the document.
 <p>This callback will be used for comments inside or outside the
  document element, including comments in the external DTD
  subset (if read).</p>
 @param ch An array holding the characters in the comment.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throw SAXExceptionThe application may raise an exception.
 */
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

/*!
 @brief Report an element type declaration.
 <p>The content model will consist of the string "EMPTY", the
  string "ANY", or a parenthesised group, optionally followed
  by an occurrence indicator.  The model will be normalized so
  that all whitespace is removed,and will include the enclosing
  parentheses.</p>
 @param name The element type name.
 @param model The content model as a normalized string.
 @throw SAXExceptionThe application may raise an exception.
 */
- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;

/*!
 @brief Report the end of a CDATA section.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #startCDATA
 */
- (void)endCDATA;

/*!
 @brief Filter an end document event.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#endDocument
 */
- (void)endDocument;

/*!
 @brief Report the end of DTD declarations.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #startDTD
 */
- (void)endDTD;

/*!
 @brief Filter an end element event.
 @param uri The element's Namespace URI, or the empty string.
 @param localName The element's local name, or the empty string.
 @param qName The element's qualified (prefixed) name, or the empty         string.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#endElement
 */
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 @brief Report the end of an entity.
 @param name The name of the entity that is ending.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #startEntity
 */
- (void)endEntityWithNSString:(NSString *)name;

/*!
 @brief Filter an end Namespace prefix mapping event.
 @param prefix The Namespace prefix.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 @brief Filter an error event.
 @param e The error as an exception.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ErrorHandler#error
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Report a parsed external entity declaration.
 <p>Only the effective (first) declaration for each entity
  will be reported.</p>
 @param name The name of the entity.  If it is a parameter         entity, the name will begin with '%'.
 @param publicId The declared public identifier of the entity, or         null if none was declared.
 @param systemId The declared system identifier of the entity.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #internalEntityDecl
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

/*!
 @brief Filter a fatal error event.
 @param e The error as an exception.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ErrorHandler#fatalError
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

/*!
 @brief Get the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief Get the Transformer associated with this handler, which
  is needed in order to set parameters and output properties.
 @return The Transformer associated with this handler
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Filter an ignorable whitespace event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Report an internal entity declaration.
 <p>Only the effective (first) declaration for each entity
  will be reported.</p>
 @param name The name of the entity.  If it is a parameter         entity, the name will begin with '%'.
 @param value The replacement text of the entity.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #externalEntityDecl
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;

/*!
 @brief Filter a notation declaration event.
 @param name The notation name.
 @param publicId The notation's public identifier, or null.
 @param systemId The notation's system identifier, or null.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.DTDHandler#notationDecl
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Filter a processing instruction event.
 @param target The processing instruction target.
 @param data The text following the target.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#processingInstruction
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Filter an external entity resolution.
 @param publicId The entity's public identifier, or null.
 @param systemId The entity's system identifier.
 @return A new InputSource or null for the default.
 @throw IOException
 @throw SAXExceptionThe client may throw
             an exception during processing.
 @throw java.io.IOExceptionThe client may throw an
             I/O-related exception while obtaining the
             new InputSource.
 - seealso: org.xml.sax.EntityResolver#resolveEntity
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

/*!
 @brief Filter a new document locator event.
 @param locator The document locator.
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Enables the user of the TransformerHandler to set the
  to set the Result for the transformation.
 @param result A Result instance, should not be null.
 @throw IllegalArgumentExceptionif result is invalid for some reason.
 */
- (void)setResultWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)result;

/*!
 @brief Set the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @param systemID Base URI for the source tree.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

/*!
 @brief Filter a skipped entity event.
 @param name The name of the skipped entity.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#skippedEntity
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Report the start of a CDATA section.
 <p>The contents of the CDATA section will be reported through
  the regular <code>characters</code>
  event.</p>
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #endCDATA
 */
- (void)startCDATA;

/*!
 @brief Filter a start document event.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#startDocument
 */
- (void)startDocument;

/*!
 @brief Report the start of DTD declarations, if any.
 <p>Any declarations are assumed to be in the internal subset
  unless otherwise indicated by a <code>startEntity</code>
  event.</p>
  
 <p>Note that the start/endDTD events will appear within
  the start/endDocument events from ContentHandler and
  before the first startElement event.</p>
 @param name The document type name.
 @param publicId The declared public identifier for the         external DTD subset, or null if none was declared.
 @param systemId The declared system identifier for the         external DTD subset, or null if none was declared.
 @throw SAXExceptionThe application may raise an
             exception.
 - seealso: #endDTD
 - seealso: #startEntity
 */
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

/*!
 @brief Filter a start element event.
 @param uri The element's Namespace URI, or the empty string.
 @param localName The element's local name, or the empty string.
 @param qName The element's qualified (prefixed) name, or the empty         string.
 @param atts The element's attributes.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#startElement
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Report the beginning of an entity in content.
 <p><strong>NOTE:</entity> entity references in attribute
  values -- and the start and end of the document entity --
  are never reported.</p>
  
 <p>The start and end of the external DTD subset are reported
  using the pseudo-name "[dtd]".  All other events must be
  properly nested within start/end entity events.</p>
  
 <p>Note that skipped entities will be reported through the 
 <code>skippedEntity</code>
  event, which is part of the ContentHandler interface.</p>
 @param name The name of the entity.  If it is a parameter         entity, the name will begin with '%'.
 @throw SAXExceptionThe application may raise an exception.
 - seealso: #endEntity
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl
 */
- (void)startEntityWithNSString:(NSString *)name;

/*!
 @brief Filter a start Namespace prefix mapping event.
 @param prefix The Namespace prefix.
 @param uri The Namespace URI.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Filter an unparsed entity declaration event.
 @param name The entity name.
 @param publicId The entity's public identifier, or null.
 @param systemId The entity's system identifier, or null.
 @param notationName The name of the associated notation.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

/*!
 @brief Filter a warning event.
 @param e The nwarning as an exception.
 @throw SAXExceptionThe client may throw
             an exception during processing.
 - seealso: org.xml.sax.ErrorHandler#warning
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

#pragma mark Protected

/*!
 @brief Do what needs to be done to shut down the CoRoutine management.
 */
- (void)clearCoRoutine;

/*!
 @brief Do what needs to be done to shut down the CoRoutine management.
 */
- (void)clearCoRoutineWithOrgXmlSaxSAXException:(OrgXmlSaxSAXException *)ex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerTransformerHandlerImpl)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerHandlerImpl, m_dtm_, id<OrgApacheXmlDtmDTM>)

FOUNDATION_EXPORT void OrgApacheXalanTransformerTransformerHandlerImpl_initWithOrgApacheXalanTransformerTransformerImpl_withBoolean_withNSString_(OrgApacheXalanTransformerTransformerHandlerImpl *self, OrgApacheXalanTransformerTransformerImpl *transformer, jboolean doFragment, NSString *baseSystemID);

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerHandlerImpl *new_OrgApacheXalanTransformerTransformerHandlerImpl_initWithOrgApacheXalanTransformerTransformerImpl_withBoolean_withNSString_(OrgApacheXalanTransformerTransformerImpl *transformer, jboolean doFragment, NSString *baseSystemID) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerHandlerImpl *create_OrgApacheXalanTransformerTransformerHandlerImpl_initWithOrgApacheXalanTransformerTransformerImpl_withBoolean_withNSString_(OrgApacheXalanTransformerTransformerImpl *transformer, jboolean doFragment, NSString *baseSystemID);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerTransformerHandlerImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerHandlerImpl")
