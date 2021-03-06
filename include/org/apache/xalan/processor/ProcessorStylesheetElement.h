//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorStylesheetElement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorStylesheetElement")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorStylesheetElement
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorStylesheetElement 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorStylesheetElement 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorStylesheetElement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorStylesheetElement_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorStylesheetElement || defined(INCLUDE_OrgApacheXalanProcessorProcessorStylesheetElement))
#define OrgApacheXalanProcessorProcessorStylesheetElement_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "org/apache/xalan/processor/XSLTElementProcessor.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesStylesheet;
@protocol OrgXmlSaxAttributes;

/*!
 @brief TransformerFactory for xsl:stylesheet or xsl:transform markup.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#stylesheet-element">stylesheet-element in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorStylesheetElement : OrgApacheXalanProcessorXSLTElementProcessor
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Receive notification of the end of an element.
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
 @brief Receive notification of the start of an strip-space element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the         element has no Namespace URI or if Namespace
          processing is not being performed.
 @param localName The local name (without prefix), or the         empty string if Namespace processing is not being
          performed.
 @param rawName The raw XML 1.0 name (with prefix), or the         empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If         there are no attributes, it shall be an empty
          Attributes object.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Protected

/*!
 @brief This method can be over-ridden by a class that extends this one.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheetRootWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorStylesheetElement)

inline jlong OrgApacheXalanProcessorProcessorStylesheetElement_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorStylesheetElement_serialVersionUID -877798927447840792LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorStylesheetElement, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorStylesheetElement_init(OrgApacheXalanProcessorProcessorStylesheetElement *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorStylesheetElement *new_OrgApacheXalanProcessorProcessorStylesheetElement_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorStylesheetElement *create_OrgApacheXalanProcessorProcessorStylesheetElement_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorStylesheetElement)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorStylesheetElement")
