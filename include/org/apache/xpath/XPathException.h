//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathException")
#ifdef RESTRICT_OrgApacheXpathXPathException
#define INCLUDE_ALL_OrgApacheXpathXPathException 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathException 1
#endif
#undef RESTRICT_OrgApacheXpathXPathException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathXPathException_) && (INCLUDE_ALL_OrgApacheXpathXPathException || defined(INCLUDE_OrgApacheXpathXPathException))
#define OrgApacheXpathXPathException_

#define RESTRICT_JavaxXmlTransformTransformerException 1
#define INCLUDE_JavaxXmlTransformTransformerException 1
#include "javax/xml/transform/TransformerException.h"

@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@class JavaLangException;
@class JavaLangThrowable;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXpathExpressionNode;
@protocol OrgW3cDomNode;

/*!
 @brief This class implements an exception object that all
  XPath classes will throw in case of an error.This class
  extends TransformerException, and may hold other exceptions.
 In the
  case of nested exceptions, printStackTrace will dump
  all the traces of the nested exceptions, not just the trace
  of this object.
 */
@interface OrgApacheXpathXPathException : JavaxXmlTransformTransformerException {
 @public
  /*!
   @brief The home of the expression that caused the error.
   */
  id m_styleNode_;
  /*!
   @brief A nested exception.
   */
  JavaLangException *m_exception_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Create an XPathException object that holds
  an error message.
 @param message The error message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Create an XPathException object that holds
  an error message, and another exception
  that caused this exception.
 @param message The error message.
 @param e The exception that caused this exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangException:(JavaLangException *)e;

/*!
 @brief Create an XPathException object that holds
  an error message.
 @param message The error message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
          withOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)ex;

/*!
 @brief Create an XPathException object that holds
  an error message, the stylesheet node that
  the error originated from, and another exception
  that caused this exception.
 @param message The error message.
 @param styleNode The stylesheet node that the error originated from.
 @param e The exception that caused this exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                         withOrgW3cDomNode:(id<OrgW3cDomNode>)styleNode
                     withJavaLangException:(JavaLangException *)e;

/*!
 @brief Create an XPathException object that holds
  an error message and the stylesheet node that
  the error originated from.
 @param message The error message.
 @param styleNode The stylesheet node that the error originated from.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                                    withId:(id)styleNode;

/*!
 @brief Return the embedded exception, if any.
 Overrides javax.xml.transform.TransformerException.getException().
 @return The embedded exception, or null if there is none.
 */
- (JavaLangThrowable *)getException;

/*!
 @brief Find the most contained message.
 @return The error message of the originating exception.
 */
- (NSString *)getMessage;

/*!
 @brief Get the stylesheet node from where this error originated.
 @return The stylesheet node from where this error originated, or null.
 */
- (id)getStylesheetNode;

/*!
 @brief Get the XSLT ElemVariable that this sub-expression references.In order for 
  this to work, the SourceLocator must be the owning ElemTemplateElement.
 @return The dereference to the ElemVariable, or null if not found.
 */
- (id<OrgW3cDomNode>)getStylesheetNodeWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)ex;

/*!
 @brief Print the the trace of methods from where the error
  originated.This will trace all nested exception
  objects, as well as this object.
 @param s The stream where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintStream:(JavaIoPrintStream *)s;

/*!
 @brief Print the the trace of methods from where the error
  originated.This will trace all nested exception
  objects, as well as this object.
 @param s The writer where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintWriter:(JavaIoPrintWriter *)s;

/*!
 @brief Set the stylesheet node from where this error originated.
 @param styleNode The stylesheet node from where this error originated, or null.
 */
- (void)setStylesheetNodeWithId:(id)styleNode;

#pragma mark Protected

/*!
 @brief Get the first non-Expression parent of this node.
 @return null or first ancestor that is not an Expression.
 */
- (id<OrgApacheXpathExpressionNode>)getExpressionOwnerWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)ex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
        withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
        withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)arg1
                     withJavaLangThrowable:(JavaLangThrowable *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathException)

J2OBJC_FIELD_SETTER(OrgApacheXpathXPathException, m_styleNode_, id)
J2OBJC_FIELD_SETTER(OrgApacheXpathXPathException, m_exception_, JavaLangException *)

inline jlong OrgApacheXpathXPathException_get_serialVersionUID(void);
#define OrgApacheXpathXPathException_serialVersionUID 4263549717619045963LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathXPathException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathXPathException_initWithNSString_withOrgApacheXpathExpressionNode_(OrgApacheXpathXPathException *self, NSString *message, id<OrgApacheXpathExpressionNode> ex);

FOUNDATION_EXPORT OrgApacheXpathXPathException *new_OrgApacheXpathXPathException_initWithNSString_withOrgApacheXpathExpressionNode_(NSString *message, id<OrgApacheXpathExpressionNode> ex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathException *create_OrgApacheXpathXPathException_initWithNSString_withOrgApacheXpathExpressionNode_(NSString *message, id<OrgApacheXpathExpressionNode> ex);

FOUNDATION_EXPORT void OrgApacheXpathXPathException_initWithNSString_(OrgApacheXpathXPathException *self, NSString *message);

FOUNDATION_EXPORT OrgApacheXpathXPathException *new_OrgApacheXpathXPathException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathException *create_OrgApacheXpathXPathException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgApacheXpathXPathException_initWithNSString_withId_(OrgApacheXpathXPathException *self, NSString *message, id styleNode);

FOUNDATION_EXPORT OrgApacheXpathXPathException *new_OrgApacheXpathXPathException_initWithNSString_withId_(NSString *message, id styleNode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathException *create_OrgApacheXpathXPathException_initWithNSString_withId_(NSString *message, id styleNode);

FOUNDATION_EXPORT void OrgApacheXpathXPathException_initWithNSString_withOrgW3cDomNode_withJavaLangException_(OrgApacheXpathXPathException *self, NSString *message, id<OrgW3cDomNode> styleNode, JavaLangException *e);

FOUNDATION_EXPORT OrgApacheXpathXPathException *new_OrgApacheXpathXPathException_initWithNSString_withOrgW3cDomNode_withJavaLangException_(NSString *message, id<OrgW3cDomNode> styleNode, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathException *create_OrgApacheXpathXPathException_initWithNSString_withOrgW3cDomNode_withJavaLangException_(NSString *message, id<OrgW3cDomNode> styleNode, JavaLangException *e);

FOUNDATION_EXPORT void OrgApacheXpathXPathException_initWithNSString_withJavaLangException_(OrgApacheXpathXPathException *self, NSString *message, JavaLangException *e);

FOUNDATION_EXPORT OrgApacheXpathXPathException *new_OrgApacheXpathXPathException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathException *create_OrgApacheXpathXPathException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathException")
