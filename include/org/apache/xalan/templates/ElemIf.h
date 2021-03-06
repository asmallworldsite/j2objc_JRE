//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemIf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemIf")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemIf
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemIf 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemIf 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemIf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemIf_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemIf || defined(INCLUDE_OrgApacheXalanTemplatesElemIf))
#define OrgApacheXalanTemplatesElemIf_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPath;

/*!
 @brief Implement xsl:if.
 @code

   <!ELEMENT xsl:if %template;>
   <!ATTLIST xsl:if
    test %expr; #REQUIRED
    %space-att; 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Conditional-Processing-with-xsl:if">XXX in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemIf : OrgApacheXalanTemplatesElemTemplateElement
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 @param sroot The root stylesheet.
 @throw TransformerException
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Conditionally execute a sub-template.
 The expression is evaluated and the resulting object is converted
  to a boolean as if by a call to the boolean function. If the result
  is true, then the content template is instantiated; otherwise, nothing
  is created.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return the element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "test" attribute.
 The xsl:if element must have a test attribute, which specifies an expression.
 @return the "test" attribute for this element.
 */
- (OrgApacheXpathXPath *)getTest;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "test" attribute.
 The xsl:if element must have a test attribute, which specifies an expression.
 @param v test attribute to set
 */
- (void)setTestWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

#pragma mark Protected

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemIf)

inline jlong OrgApacheXalanTemplatesElemIf_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemIf_serialVersionUID 2158774632427453022LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemIf, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemIf_init(OrgApacheXalanTemplatesElemIf *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemIf *new_OrgApacheXalanTemplatesElemIf_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemIf *create_OrgApacheXalanTemplatesElemIf_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemIf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemIf")
