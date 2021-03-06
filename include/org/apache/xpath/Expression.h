//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/Expression.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathExpression")
#ifdef RESTRICT_OrgApacheXpathExpression
#define INCLUDE_ALL_OrgApacheXpathExpression 0
#else
#define INCLUDE_ALL_OrgApacheXpathExpression 1
#endif
#undef RESTRICT_OrgApacheXpathExpression

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathExpression_) && (INCLUDE_ALL_OrgApacheXpathExpression || defined(INCLUDE_OrgApacheXpathExpression))
#define OrgApacheXpathExpression_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_OrgApacheXpathExpressionNode 1
#define INCLUDE_OrgApacheXpathExpressionNode 1
#include "org/apache/xpath/ExpressionNode.h"

#define RESTRICT_OrgApacheXpathXPathVisitable 1
#define INCLUDE_OrgApacheXpathXPathVisitable 1
#include "org/apache/xpath/XPathVisitable.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This abstract class serves as the base for all expression objects.An
  Expression can be executed to return a <code>org.apache.xpath.objects.XObject</code>,
  normally has a location within a document or DOM, can send error and warning
  events, and normally do not hold state and are meant to be immutable once
  construction has completed.
 An exception to the immutibility rule is iterators
  and walkers, which must be cloned in order to be used -- the original must
  still be immutable.
 */
@interface OrgApacheXpathExpression : NSObject < JavaIoSerializable, OrgApacheXpathExpressionNode, OrgApacheXpathXPathVisitable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Given an select expression and a context, evaluate the XPath
  and return the resulting iterator.
 @param xctxt The execution context.
 @param contextNode The node that "." expresses.
 @return A valid DTMIterator.
 @throw TransformerExceptionthrown if the active ProblemListener decides
  the error condition is severe enough to halt processing.
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgApacheXmlDtmDTMIterator>)asIteratorWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                   withInt:(jint)contextNode;

/*!
 @brief Given an select expression and a context, evaluate the XPath
  and return the resulting iterator, but do not clone.
 @param xctxt The execution context.
 @param contextNode The node that "." expresses.
 @return A valid DTMIterator.
 @throw TransformerExceptionthrown if the active ProblemListener decides
  the error condition is severe enough to halt processing.
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgApacheXmlDtmDTMIterator>)asIteratorRawWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                      withInt:(jint)contextNode;

/*!
 @brief Return the first node out of the nodeset, if this expression is
  a nodeset expression.
 @param xctxt The XPath runtime context.
 @return the first node out of the nodeset, or DTM.NULL.
 @throw javax.xml.transform.TransformerException
 */
- (jint)asNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Tell the user of an assertion error, and probably throw an
  exception.
 @param b If false, a runtime exception will be thrown.
 @param msg The assertion message, which should be informative.
 @throw RuntimeExceptionif the b argument is false.
 @throw javax.xml.transform.TransformerException
 */
- (void)assertionWithBoolean:(jboolean)b
                withNSString:(NSString *)msg;

/*!
 @brief Evaluate expression to a boolean.
 @param xctxt The XPath runtime context.
 @return false
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Compare this object with another object and see 
  if they are equal, include the sub heararchy.
 @param expr Another expression object.
 @return true if this objects class and the expr
  object's class are the same, and the data contained 
  within both objects are considered equal.
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param xctxt The XPath runtime context.
 @param msg An error msgkey that corresponds to one of the constants found             in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is             a key for a format string.
 @param args An array of arguments represented in the format string, which              may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to
                               throw an exception.
 @throw javax.xml.transform.TransformerException
 */
- (void)errorWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                               withNSString:(NSString *)msg
                          withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression.
 @param xctxt The XPath runtime context.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression, but tell that a "safe" object doesn't have 
  to be returned.The default implementation just calls execute(xctxt).
 @param xctxt The XPath runtime context.
 @param destructiveOK true if a "safe" object doesn't need to be returned.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                            withBoolean:(jboolean)destructiveOK;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression.
 @param xctxt The XPath runtime context.
 @param currentNode The currentNode.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)currentNode;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression.
 @param xctxt The XPath runtime context.
 @param currentNode The currentNode.
 @param dtm The DTM of the current node.
 @param expType The expanded type ID of the current node.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                withInt:(jint)currentNode
                                                 withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                                                withInt:(jint)expType;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
  result of the expression.
 @param xctxt The XPath runtime context.  NEEDSDOC @@param handler
 @return The result of the expression in the form of a <code>XObject</code>.
 @throw javax.xml.transform.TransformerExceptionif a runtime exception
          occurs.
 @throw org.xml.sax.SAXException
 */
- (void)executeCharsToContentHandlerWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                       withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief This method tells the node to add its argument to the node's
     list of children.
 */
- (void)exprAddChildWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)n
                                             withInt:(jint)i;

/*!
 @brief This method returns a child node.The children are numbered
      from zero, left to right.
 */
- (id<OrgApacheXpathExpressionNode>)exprGetChildWithInt:(jint)i;

/*!
 @brief Return the number of children the node has.
 */
- (jint)exprGetNumChildren;

- (id<OrgApacheXpathExpressionNode>)exprGetParent;

/*!
 @brief This pair of methods are used to inform the node of its
     parent.
 */
- (void)exprSetParentWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)n;

/*!
 @brief This function is used to fixup variables from QNames to stack frame
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list  should be searched backwards for the first qualified name that
   corresponds to the variable reference qname.  The position of the
   QName in the vector from the start of the vector will be its position
   in the stack frame (but variables above the globalsTop value will need
   to be offset to the current stack frame).
   NEEDSDOC @@param globalsSize
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Return the character position where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
  is intended only as an approximation for the sake of error
  reporting; it is not intended to provide sufficient information
  to edit the character content of the original XML document.</p>
  
 <p>The return value is an approximation of the column number
  in the document entity or external parsed entity where the
  markup that triggered the event appears.</p>
 @return The column number, or -1 if none is available.
 - seealso: #getLineNumber
 */
- (jint)getColumnNumber;

/*!
 @brief Get the first non-Expression parent of this node.
 @return null or first ancestor that is not an Expression.
 */
- (id<OrgApacheXpathExpressionNode>)getExpressionOwner;

/*!
 @brief Return the line number where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
  is intended only as an approximation for the sake of error
  reporting; it is not intended to provide sufficient information
  to edit the character content of the original XML document.</p>
  
 <p>The return value is an approximation of the line number
  in the document entity or external parsed entity where the
  markup that triggered the event appears.</p>
 @return The line number, or -1 if none is available.
 - seealso: #getColumnNumber
 */
- (jint)getLineNumber;

/*!
 @brief Return the public identifier for the current document event.
 <p>The return value is the public identifier of the document
  entity or of the external parsed entity in which the markup that
  triggered the event appears.</p>
 @return A string containing the public identifier, or
          null if none is available.
 - seealso: #getSystemId
 */
- (NSString *)getPublicId;

/*!
 @brief Return the system identifier for the current document event.
 <p>The return value is the system identifier of the document
  entity or of the external parsed entity in which the markup that
  triggered the event appears.</p>
  
 <p>If the system identifier is a URL, the parser must resolve it
  fully before passing it to the application.</p>
 @return A string containing the system identifier, or null
          if none is available.
 - seealso: #getPublicId
 */
- (NSString *)getSystemId;

/*!
 @brief Tell if the expression is a nodeset expression.In other words, tell
  if you can execute <code>asNode</code> without an exception.
 @return true if the expression can be represented as a nodeset.
 */
- (jboolean)isNodesetExpr;

/*!
 @brief Tell if this expression returns a stable number that will not change during 
  iterations within the expression.This is used to determine if a proximity 
  position predicate can indicate that no more searching has to occur.
 @return true if the expression represents a stable number.
 */
- (jboolean)isStableNumber;

/*!
 @brief Evaluate expression to a number.
 @param xctxt The XPath runtime context.
 @return The expression evaluated as a double.
 @throw javax.xml.transform.TransformerException
 */
- (jdouble)numWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Warn the user of an problem.
 @param xctxt The XPath runtime context.
 @param msg An error msgkey that corresponds to one of the conststants found             in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is             a key for a format string.
 @param args An array of arguments represented in the format string, which              may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to
                               throw an exception.
 @throw javax.xml.transform.TransformerException
 */
- (void)warnWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                              withNSString:(NSString *)msg
                         withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Cast result object to a string.
 @param xctxt The XPath runtime context.
 @return The string this wraps or the empty string if null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgApacheXmlUtilsXMLString>)xstrWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

#pragma mark Protected

/*!
 @brief This is a utility method to tell if the passed in 
  class is the same class as this.It is to be used by
  the deepEquals method.
 I'm bottlenecking it here 
  because I'm not totally confident that comparing the 
  class objects is the best way to do this.
 @return true of the passed in class is the exact same 
  class as this class.
 */
- (jboolean)isSameClassWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathExpression)

inline jlong OrgApacheXpathExpression_get_serialVersionUID(void);
#define OrgApacheXpathExpression_serialVersionUID 565665869777906902LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathExpression, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathExpression_init(OrgApacheXpathExpression *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathExpression)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathExpression")
