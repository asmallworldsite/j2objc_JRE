//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/ext/DefaultHandler2.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxExtDefaultHandler2")
#ifdef RESTRICT_OrgXmlSaxExtDefaultHandler2
#define INCLUDE_ALL_OrgXmlSaxExtDefaultHandler2 0
#else
#define INCLUDE_ALL_OrgXmlSaxExtDefaultHandler2 1
#endif
#undef RESTRICT_OrgXmlSaxExtDefaultHandler2

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxExtDefaultHandler2_) && (INCLUDE_ALL_OrgXmlSaxExtDefaultHandler2 || defined(INCLUDE_OrgXmlSaxExtDefaultHandler2))
#define OrgXmlSaxExtDefaultHandler2_

#define RESTRICT_OrgXmlSaxHelpersDefaultHandler 1
#define INCLUDE_OrgXmlSaxHelpersDefaultHandler 1
#include "org/xml/sax/helpers/DefaultHandler.h"

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "org/xml/sax/ext/LexicalHandler.h"

#define RESTRICT_OrgXmlSaxExtDeclHandler 1
#define INCLUDE_OrgXmlSaxExtDeclHandler 1
#include "org/xml/sax/ext/DeclHandler.h"

#define RESTRICT_OrgXmlSaxExtEntityResolver2 1
#define INCLUDE_OrgXmlSaxExtEntityResolver2 1
#include "org/xml/sax/ext/EntityResolver2.h"

@class IOSCharArray;
@class JavaLangInteger;
@class OrgXmlSaxInputSource;

/*!
 @brief This class extends the SAX2 base handler class to support the SAX2 
 <code>LexicalHandler</code>, <code>DeclHandler</code>, and 
 <code>EntityResolver2</code> extensions.Except for overriding the
  original SAX1 <code>resolveEntity()</code>
  method the added handler methods just return.
 Subclassers may
  override everything on a method-by-method basis. 
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  </blockquote>
  
 <p> <em>Note:</em> this class might yet learn that the 
 <em>ContentHandler.setDocumentLocator()</em> call might be passed a 
 <code>Locator2</code> object, and that the 
 <em>ContentHandler.startElement()</em> call might be passed a 
 <code>Attributes2</code> object.
 @since SAX 2.0 (extensions 1.1 alpha)
 @author David Brownell
 @version TBS
 */
@interface OrgXmlSaxExtDefaultHandler2 : OrgXmlSaxHelpersDefaultHandler < OrgXmlSaxExtLexicalHandler, OrgXmlSaxExtDeclHandler, OrgXmlSaxExtEntityResolver2 >

#pragma mark Public

/*!
 @brief Constructs a handler which ignores all parsing events.
 */
- (instancetype __nonnull)init;

- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)mode
                     withNSString:(NSString *)value;

- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;

- (void)endCDATA;

- (void)endDTD;

- (void)endEntityWithNSString:(NSString *)name;

- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

/*!
 @brief Tells the parser that if no external subset has been declared
  in the document text, none should be used.
 @param name Identifies the document root element.  This name comes     from a DOCTYPE declaration (where available) or from the actual
      root element. The parameter is ignored.
 @param baseURI The document's base URI, serving as an additional     hint for selecting the external subset.  This is always an absolute
      URI, unless it is null because the XMLReader was given an InputSource
      without one. The parameter is ignored.
 @return null (always).
 @throw SAXExceptionAny SAX exception, possibly wrapping
     another exception.
 @throw IOExceptionProbably indicating a failure to create
     a new InputStream or Reader, or an illegal URL.
 */
- (OrgXmlSaxInputSource *)getExternalSubsetWithNSString:(NSString *)name
                                           withNSString:(NSString *)baseURI;

- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;

/*!
 @brief Invokes
  <code>EntityResolver2.resolveEntity()</code>
  with null entity name and base URI.
 You only need to override that method to use this class.
 @param publicId The public identifier of the external entity being     referenced (normalized as required by the XML specification), or
      null if none was supplied.
 @param systemId The system identifier of the external entity     being referenced; either a relative or absolute URI.
    This is never null when invoked by a SAX2 parser; only declared
      entities, and any external subset, are resolved by such parsers.
 @return An InputSource object describing the new input source.
 @throw SAXExceptionAny SAX exception, possibly wrapping
     another exception.
 @throw IOExceptionProbably indicating a failure to create
     a new InputStream or Reader, or an illegal URL.
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

/*!
 @brief Tells the parser to resolve the systemId against the baseURI
  and read the entity text from that resulting absolute URI.
 Note that because the older 
 <code>DefaultHandler.resolveEntity()</code>,
  method is overridden to call this one, this method may sometimes
  be invoked with null <em>name</em> and <em>baseURI</em>, and
  with the <em>systemId</em> already absolutized.
 @param name Identifies the external entity being resolved.     Either "[dtd]" for the external subset, or a name starting
      with "%" to indicate a parameter entity, or else the name of
      a general entity.  This is never null when invoked by a SAX2
      parser.
 @param publicId The public identifier of the external entity being     referenced (normalized as required by the XML specification), or
      null if none was supplied.
 @param baseURI The URI with respect to which relative systemIDs     are interpreted.  This is always an absolute URI, unless it is
      null (likely because the XMLReader was given an InputSource without
    one).  This URI is defined by the XML specification to be the one
      associated with the "
  &lt; " starting the relevant declaration.
 @param systemId The system identifier of the external entity     being referenced; either a relative or absolute URI.
    This is never null when invoked by a SAX2 parser; only declared
      entities, and any external subset, are resolved by such parsers.
 @return An InputSource object describing the new input source.
 @throw SAXExceptionAny SAX exception, possibly wrapping
     another exception.
 @throw IOExceptionProbably indicating a failure to create
     a new InputStream or Reader, or an illegal URL.
 */
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)name
                                       withNSString:(NSString *)publicId
                                       withNSString:(NSString *)baseURI
                                       withNSString:(NSString *)systemId;

- (void)startCDATA;

- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

- (void)startEntityWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtDefaultHandler2)

FOUNDATION_EXPORT void OrgXmlSaxExtDefaultHandler2_init(OrgXmlSaxExtDefaultHandler2 *self);

FOUNDATION_EXPORT OrgXmlSaxExtDefaultHandler2 *new_OrgXmlSaxExtDefaultHandler2_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxExtDefaultHandler2 *create_OrgXmlSaxExtDefaultHandler2_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtDefaultHandler2)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxExtDefaultHandler2")
