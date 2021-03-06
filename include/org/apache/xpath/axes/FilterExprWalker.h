//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/FilterExprWalker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker")
#ifdef RESTRICT_OrgApacheXpathAxesFilterExprWalker
#define INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker 1
#endif
#undef RESTRICT_OrgApacheXpathAxesFilterExprWalker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathAxesFilterExprWalker_) && (INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker || defined(INCLUDE_OrgApacheXpathAxesFilterExprWalker))
#define OrgApacheXpathAxesFilterExprWalker_

#define RESTRICT_OrgApacheXpathAxesAxesWalker 1
#define INCLUDE_OrgApacheXpathAxesAxesWalker 1
#include "org/apache/xpath/axes/AxesWalker.h"

@class JavaUtilVector;
@class OrgApacheXpathAxesLocPathIterator;
@class OrgApacheXpathAxesWalkingIterator;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief Walker for the OP_VARIABLE, or OP_EXTFUNCTION, or OP_FUNCTION, or OP_GROUP,
  op codes.
 - seealso: <a href="http://www.w3.org/TR/xpath#NT-FilterExpr">XPath FilterExpr descriptions</a>
 */
@interface OrgApacheXpathAxesFilterExprWalker : OrgApacheXpathAxesAxesWalker
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Construct a FilterExprWalker using a LocPathIterator.
 @param locPathIterator non-null reference to the parent iterator.
 */
- (instancetype __nonnull)initWithOrgApacheXpathAxesWalkingIterator:(OrgApacheXpathAxesWalkingIterator *)locPathIterator;

/*!
 @brief This method needs to override AxesWalker.acceptNode because FilterExprWalkers
  don't need to, and shouldn't, do a node test.
 @param n The node to check to see if it passes the filter or not.
 @return a constant to determine whether the node is accepted,
    rejected, or skipped, as defined  above .
 */
- (jshort)acceptNodeWithInt:(jint)n;

/*!
 @brief This will traverse the heararchy, calling the visitor for 
  each member.If the called visitor method returns 
  false, the subtree should not be called.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callPredicateVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Get a cloned FilterExprWalker.
 @return A new FilterExprWalker that can be used without mutating this one.
 @throw CloneNotSupportedException
 */
- (id)java_clone;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Detaches the walker from the set which it iterated over, releasing
  any computational resources and placing the iterator in the INVALID
  state.
 */
- (void)detach;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
  indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list   should be searched backwards for the first qualified name that 
   corresponds to the variable reference qname.  The position of the 
   QName in the vector from the start of the vector will be its position 
   in the stack frame (but variables above the globalsTop value will need 
   to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get the analysis bits for this walker, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
  types.
 */
- (jint)getAxis;

/*!
 @brief Get the inner contained expression of this filter.
 */
- (OrgApacheXpathExpression *)getInnerExpression;

/*!
 @brief Get the index of the last node that can be itterated to.
 @param xctxt XPath runtime context.
 @return the index of the last node that can be itterated to.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Moves the <code>TreeWalker</code> to the next visible node in document
  order relative to the current node, and returns the new node.If the
  current node has no next node,  or if the search for nextNode attempts
  to step upward from the TreeWalker's root node, returns 
 <code>null</code> , and retains the current node.
 @return The new node, or <code>null</code> if the current node has no
    next node  in the TreeWalker's logical view.
 */
- (jint)getNextNode;

/*!
 @brief Init a FilterExprWalker.
 @param compiler non-null reference to the Compiler that is constructing.
 @param opPos positive opcode position for this step.
 @param stepType The type of step.
 @throw javax.xml.transform.TransformerException
 */
- (void)init__WithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                         withInt:(jint)opPos
                                         withInt:(jint)stepType OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
  order.
 Warning: This can only be called after setRoot has been called!
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Set the inner contained expression of this filter.
 */
- (void)setInnerExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Set the root node of the TreeWalker.
 @param root non-null reference to the root, or starting point of          the query.
 */
- (void)setRootWithInt:(jint)root;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithOrgApacheXpathAxesLocPathIterator:(OrgApacheXpathAxesLocPathIterator *)arg0
                                                            withInt:(jint)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesFilterExprWalker)

inline jlong OrgApacheXpathAxesFilterExprWalker_get_serialVersionUID(void);
#define OrgApacheXpathAxesFilterExprWalker_serialVersionUID 5457182471424488375LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesFilterExprWalker, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesFilterExprWalker_initWithOrgApacheXpathAxesWalkingIterator_(OrgApacheXpathAxesFilterExprWalker *self, OrgApacheXpathAxesWalkingIterator *locPathIterator);

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprWalker *new_OrgApacheXpathAxesFilterExprWalker_initWithOrgApacheXpathAxesWalkingIterator_(OrgApacheXpathAxesWalkingIterator *locPathIterator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprWalker *create_OrgApacheXpathAxesFilterExprWalker_initWithOrgApacheXpathAxesWalkingIterator_(OrgApacheXpathAxesWalkingIterator *locPathIterator);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesFilterExprWalker)

#endif

#if !defined (OrgApacheXpathAxesFilterExprWalker_filterExprOwner_) && (INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker || defined(INCLUDE_OrgApacheXpathAxesFilterExprWalker_filterExprOwner))
#define OrgApacheXpathAxesFilterExprWalker_filterExprOwner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathAxesFilterExprWalker;
@class OrgApacheXpathExpression;

@interface OrgApacheXpathAxesFilterExprWalker_filterExprOwner : NSObject < OrgApacheXpathExpressionOwner >

#pragma mark Public

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgApacheXpathAxesFilterExprWalker:(OrgApacheXpathAxesFilterExprWalker *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesFilterExprWalker_filterExprOwner)

FOUNDATION_EXPORT void OrgApacheXpathAxesFilterExprWalker_filterExprOwner_initWithOrgApacheXpathAxesFilterExprWalker_(OrgApacheXpathAxesFilterExprWalker_filterExprOwner *self, OrgApacheXpathAxesFilterExprWalker *outer$);

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprWalker_filterExprOwner *new_OrgApacheXpathAxesFilterExprWalker_filterExprOwner_initWithOrgApacheXpathAxesFilterExprWalker_(OrgApacheXpathAxesFilterExprWalker *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesFilterExprWalker_filterExprOwner *create_OrgApacheXpathAxesFilterExprWalker_filterExprOwner_initWithOrgApacheXpathAxesFilterExprWalker_(OrgApacheXpathAxesFilterExprWalker *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesFilterExprWalker_filterExprOwner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesFilterExprWalker")
