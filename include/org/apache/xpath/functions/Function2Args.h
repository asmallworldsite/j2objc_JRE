//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/Function2Args.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunction2Args
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunction2Args

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFunction2Args_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction2Args))
#define OrgApacheXpathFunctionsFunction2Args_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief Base class for functions that accept two arguments.
 */
@interface OrgApacheXpathFunctionsFunction2Args : OrgApacheXpathFunctionsFunctionOneArg {
 @public
  /*!
   @brief The second argument passed to the function (at index 1).
   */
  OrgApacheXpathExpression *m_arg1_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
  the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

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
 @brief Return the second argument passed to the function (at index 1).
 @return An expression that represents the second argument passed to the 
          function.
 */
- (OrgApacheXpathExpression *)getArg1;

/*!
 @brief Set an argument expression for a function.This method is called by the 
  XPath compiler.
 @param arg non-null expression that represents the argument.
 @param argNum The argument number index.
 @throw WrongNumberArgsExceptionIf the argNum parameter is greater than 1.
 */
- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction2Args)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunction2Args, m_arg1_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathFunctionsFunction2Args_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFunction2Args_serialVersionUID 5574294996842710641LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunction2Args, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction2Args_init(OrgApacheXpathFunctionsFunction2Args *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args *new_OrgApacheXpathFunctionsFunction2Args_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args *create_OrgApacheXpathFunctionsFunction2Args_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction2Args)

#endif

#if !defined (OrgApacheXpathFunctionsFunction2Args_Arg1Owner_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args || defined(INCLUDE_OrgApacheXpathFunctionsFunction2Args_Arg1Owner))
#define OrgApacheXpathFunctionsFunction2Args_Arg1Owner_

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class OrgApacheXpathExpression;
@class OrgApacheXpathFunctionsFunction2Args;

@interface OrgApacheXpathFunctionsFunction2Args_Arg1Owner : NSObject < OrgApacheXpathExpressionOwner >

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

- (instancetype __nonnull)initWithOrgApacheXpathFunctionsFunction2Args:(OrgApacheXpathFunctionsFunction2Args *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunction2Args_Arg1Owner)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args_Arg1Owner *self, OrgApacheXpathFunctionsFunction2Args *outer$);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args_Arg1Owner *new_OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunction2Args_Arg1Owner *create_OrgApacheXpathFunctionsFunction2Args_Arg1Owner_initWithOrgApacheXpathFunctionsFunction2Args_(OrgApacheXpathFunctionsFunction2Args *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunction2Args_Arg1Owner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunction2Args")
