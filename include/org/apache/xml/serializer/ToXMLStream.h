//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToXMLStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToXMLStream")
#ifdef RESTRICT_OrgApacheXmlSerializerToXMLStream
#define INCLUDE_ALL_OrgApacheXmlSerializerToXMLStream 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToXMLStream 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToXMLStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerToXMLStream_) && (INCLUDE_ALL_OrgApacheXmlSerializerToXMLStream || defined(INCLUDE_OrgApacheXmlSerializerToXMLStream))
#define OrgApacheXmlSerializerToXMLStream_

#define RESTRICT_OrgApacheXmlSerializerToStream 1
#define INCLUDE_OrgApacheXmlSerializerToStream 1
#include "org/apache/xml/serializer/ToStream.h"

/*!
 @brief This class converts SAX or SAX-like calls to a 
  serialized xml document.The xsl:output method is "xml".
 This class is used explicitly in code generated by XSLTC, 
  so it is "public", but it should 
  be viewed as internal or package private, this is not an API.
 */
@interface OrgApacheXmlSerializerToXMLStream : OrgApacheXmlSerializerToStream

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Add an attribute to the current element.
 @param uri the URI associated with the element name
 @param localName local part of the attribute name
 @param rawName prefix:localName
 @param type
 @param value the value of the attribute
 @param xslAttribute true if this attribute is from an xsl:attribute,  false if declared within the elements opening tag.
 @throw SAXException
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)xslAttribute;

/*!
 @brief This method is used to add an attribute to the currently open element.
 The caller has guaranted that this attribute is unique, which means that it
  not been seen before and will not be seen again.
 @param name the qualified name of the attribute
 @param value the value of the attribute which can contain only  ASCII printable characters characters in the range 32 to 127 inclusive.
 @param flags the bit values of this integer give optimization information.
 */
- (void)addUniqueAttributeWithNSString:(NSString *)name
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 @brief Copy properties from another SerializerToXML.
 @param xmlListener non-null reference to a SerializerToXML object.
 */
- (void)CopyFromWithOrgApacheXmlSerializerToXMLStream:(OrgApacheXmlSerializerToXMLStream *)xmlListener;

/*!
 @brief Receive notification of the end of a document.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)endDocument;

/*!
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 @brief Ends a whitespace preserving section.
 - seealso: #startPreserving
 @throw org.xml.sax.SAXException
 */
- (void)endPreserving;

/*!
 @brief Receive notivication of a entityReference.
 @param name The name of the entity.
 @throw org.xml.sax.SAXException
 */
- (void)entityReferenceWithNSString:(NSString *)name;

/*!
 @brief This method is used to notify the serializer of a namespace mapping (or node)
  that applies to the current element whose startElement() call has already been seen.
 The official SAX startPrefixMapping(prefix,uri) is to define a mapping for a child
  element that is soon to be seen with a startElement() call. The official SAX call 
  does not apply to the current element, hence the reason for this method.
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 @brief Receive notification of a processing instruction.
 @param target The processing instruction target.
 @param data The processing instruction data, or null if         none was supplied.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Try's to reset the super class and reset this class for 
  re-use, so that you don't need to create a new serializer 
  (mostly for performance reasons).
 @return true if the class was successfuly reset.
 */
- (jboolean)reset;

/*!
 @brief Receive notification of the beginning of a document.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)startDocumentInternal;

/*!
 @brief Starts a whitespace preserving section.All characters printed
  within a preserving section are printed without indentation and
  without consolidating multiple spaces.
 This is equivalent to
  the <tt>xml:space=&quot;preserve&quot;</tt> attribute. Only XML
  and HTML serializers need to support this method. 
 <p>
  The contents of the whitespace preserving section will be delivered
  through the regular <tt>characters</tt> event.
 @throw org.xml.sax.SAXException
 */
- (void)startPreserving;

#pragma mark Protected

/*!
 @brief From XSLTC
  Declare a prefix to point to a namespace URI.Inform SAX handler
  if this is a new prefix mapping.
 */
- (jboolean)pushNamespaceWithNSString:(NSString *)prefix
                         withNSString:(NSString *)uri;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerToXMLStream)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToXMLStream_init(OrgApacheXmlSerializerToXMLStream *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLStream *new_OrgApacheXmlSerializerToXMLStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLStream *create_OrgApacheXmlSerializerToXMLStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToXMLStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToXMLStream")
