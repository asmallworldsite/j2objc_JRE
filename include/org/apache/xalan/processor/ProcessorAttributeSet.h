//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorAttributeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorAttributeSet")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorAttributeSet
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorAttributeSet 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorAttributeSet 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorAttributeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorAttributeSet_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorAttributeSet || defined(INCLUDE_OrgApacheXalanProcessorProcessorAttributeSet))
#define OrgApacheXalanProcessorProcessorAttributeSet_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "org/apache/xalan/processor/XSLTElementProcessor.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This class processes parse events for an xsl:attribute-set.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorAttributeSet : OrgApacheXalanProcessorXSLTElementProcessor
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Receive notification of the end of an element.
 @param name The element type name.
 @param attributes The specified or defaulted attributes.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

/*!
 @brief Receive notification of the start of an xsl:attribute-set element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 - seealso: org.apache.xalan.processor.StylesheetHandler#startElement
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.Attributes
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorAttributeSet)

inline jlong OrgApacheXalanProcessorProcessorAttributeSet_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorAttributeSet_serialVersionUID -6473739251316787552LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorAttributeSet, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorAttributeSet_initPackagePrivate(OrgApacheXalanProcessorProcessorAttributeSet *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorAttributeSet *new_OrgApacheXalanProcessorProcessorAttributeSet_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorAttributeSet *create_OrgApacheXalanProcessorProcessorAttributeSet_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorAttributeSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorAttributeSet")
