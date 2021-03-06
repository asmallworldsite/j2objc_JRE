//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemCopyOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemCopyOf
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemCopyOf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemCopyOf_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf || defined(INCLUDE_OrgApacheXalanTemplatesElemCopyOf))
#define OrgApacheXalanTemplatesElemCopyOf_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPath;

/*!
 @brief Implement xsl:copy-of.
 @code

   <!ELEMENT xsl:copy-of EMPTY>
   <!ATTLIST xsl:copy-of select %expr; #REQUIRED>
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#copy-of">copy-of in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemCopyOf : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  /*!
   @brief The required select attribute contains an expression.
   */
  OrgApacheXpathXPath *m_selectExpression_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Add a child to the child list.
 @param newChild Child to add to this node's child list
 @return Child just added to child list
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief The xsl:copy-of element can be used to insert a result tree
  fragment into the result tree, without first converting it to
  a string as xsl:value-of does (see [7.6.1 Generating Text with
  xsl:value-of]).
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "select" attribute.
 The required select attribute contains an expression.
 @return Expression for select attribute
 */
- (OrgApacheXpathXPath *)getSelect;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "select" attribute.
 The required select attribute contains an expression.
 @param expr Expression for select attribute
 */
- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)expr;

#pragma mark Protected

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemCopyOf)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemCopyOf, m_selectExpression_, OrgApacheXpathXPath *)

inline jlong OrgApacheXalanTemplatesElemCopyOf_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemCopyOf_serialVersionUID -7433828829497411127LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemCopyOf, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemCopyOf_init(OrgApacheXalanTemplatesElemCopyOf *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCopyOf *new_OrgApacheXalanTemplatesElemCopyOf_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCopyOf *create_OrgApacheXalanTemplatesElemCopyOf_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemCopyOf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCopyOf")
