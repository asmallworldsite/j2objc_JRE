//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/XalanTransformState.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerXalanTransformState")
#ifdef RESTRICT_OrgApacheXalanTransformerXalanTransformState
#define INCLUDE_ALL_OrgApacheXalanTransformerXalanTransformState 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerXalanTransformState 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerXalanTransformState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTransformerXalanTransformState_) && (INCLUDE_ALL_OrgApacheXalanTransformerXalanTransformState || defined(INCLUDE_OrgApacheXalanTransformerXalanTransformState))
#define OrgApacheXalanTransformerXalanTransformState_

#define RESTRICT_OrgApacheXalanTransformerTransformState 1
#define INCLUDE_OrgApacheXalanTransformerTransformState 1
#include "org/apache/xalan/transformer/TransformState.h"

@class JavaxXmlTransformTransformer;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief Before the serializer merge, the TransformState interface was
  implemented by ResultTreeHandler.
 */
@interface OrgApacheXalanTransformerXalanTransformState : NSObject < OrgApacheXalanTransformerTransformState > {
 @public
  id<OrgW3cDomNode> m_node_;
  OrgApacheXalanTemplatesElemTemplateElement *m_currentElement_;
  OrgApacheXalanTemplatesElemTemplate *m_currentTemplate_;
  OrgApacheXalanTemplatesElemTemplate *m_matchedTemplate_;
  jint m_currentNodeHandle_;
  id<OrgW3cDomNode> m_currentNode_;
  jint m_matchedNode_;
  id<OrgApacheXmlDtmDTMIterator> m_contextNodeList_;
  jboolean m_elemPending_;
  OrgApacheXalanTransformerTransformerImpl *m_transformer_;
}

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getContextNodeList()
 */
- (id<OrgW3cDomTraversalNodeIterator>)getContextNodeList;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getCurrentElement()
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getCurrentElement;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getCurrentNode()
 */
- (id<OrgW3cDomNode>)getCurrentNode;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getCurrentTemplate()
 */
- (OrgApacheXalanTemplatesElemTemplate *)getCurrentTemplate;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getMatchedNode()
 */
- (id<OrgW3cDomNode>)getMatchedNode;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getMatchedTemplate()
 */
- (OrgApacheXalanTemplatesElemTemplate *)getMatchedTemplate;

/*!
 - seealso: org.apache.xalan.transformer.TransformState#getTransformer()
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 - seealso: org.apache.xml.serializer.TransformStateSetter#resetState(Transformer)
 */
- (void)resetStateWithJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)transformer;

/*!
 - seealso: org.apache.xml.serializer.TransformStateSetter#setCurrentNode(Node)
 */
- (void)setCurrentNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerXalanTransformState)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_node_, id<OrgW3cDomNode>)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_currentElement_, OrgApacheXalanTemplatesElemTemplateElement *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_currentTemplate_, OrgApacheXalanTemplatesElemTemplate *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_matchedTemplate_, OrgApacheXalanTemplatesElemTemplate *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_currentNode_, id<OrgW3cDomNode>)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_contextNodeList_, id<OrgApacheXmlDtmDTMIterator>)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerXalanTransformState, m_transformer_, OrgApacheXalanTransformerTransformerImpl *)

FOUNDATION_EXPORT void OrgApacheXalanTransformerXalanTransformState_init(OrgApacheXalanTransformerXalanTransformState *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerXalanTransformState *new_OrgApacheXalanTransformerXalanTransformState_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerXalanTransformState *create_OrgApacheXalanTransformerXalanTransformState_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerXalanTransformState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerXalanTransformState")
