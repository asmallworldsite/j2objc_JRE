//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/DoublePredicate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionDoublePredicate")
#ifdef RESTRICT_JavaUtilFunctionDoublePredicate
#define INCLUDE_ALL_JavaUtilFunctionDoublePredicate 0
#else
#define INCLUDE_ALL_JavaUtilFunctionDoublePredicate 1
#endif
#undef RESTRICT_JavaUtilFunctionDoublePredicate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionDoublePredicate_) && (INCLUDE_ALL_JavaUtilFunctionDoublePredicate || defined(INCLUDE_JavaUtilFunctionDoublePredicate))
#define JavaUtilFunctionDoublePredicate_

@class JavaLangBoolean;
@class JavaLangDouble;

/*!
 @brief Represents a predicate (boolean-valued function) of one <code>double</code>-valued
  argument.This is the <code>double</code>-consuming primitive type specialization
  of <code>Predicate</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>test(double)</code>.
 - seealso: Predicate
 @since 1.8
 */
@protocol JavaUtilFunctionDoublePredicate < JavaObject >

/*!
 @brief Evaluates this predicate on the given argument.
 @param value the input argument
 @return <code>true</code> if the input argument matches the predicate,
  otherwise <code>false</code>
 */
- (jboolean)testWithDouble:(jdouble)value;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
  AND of this predicate and another.When evaluating the composed
  predicate, if this predicate is <code>false</code>, then the <code>other</code>
  predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
  to the caller; if evaluation of this predicate throws an exception, the 
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ANDed with this               predicate
 @return a composed predicate that represents the short-circuiting logical
  AND of this predicate and the <code>other</code> predicate
 @throw NullPointerExceptionif other is null
 */
- (id<JavaUtilFunctionDoublePredicate>)and__WithJavaUtilFunctionDoublePredicate:(id<JavaUtilFunctionDoublePredicate>)other;

/*!
 @brief Returns a predicate that represents the logical negation of this
  predicate.
 @return a predicate that represents the logical negation of this predicate
 */
- (id<JavaUtilFunctionDoublePredicate>)negate;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
  OR of this predicate and another.When evaluating the composed
  predicate, if this predicate is <code>true</code>, then the <code>other</code>
  predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
  to the caller; if evaluation of this predicate throws an exception, the 
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ORed with this               predicate
 @return a composed predicate that represents the short-circuiting logical
  OR of this predicate and the <code>other</code> predicate
 @throw NullPointerExceptionif other is null
 */
- (id<JavaUtilFunctionDoublePredicate>)or__WithJavaUtilFunctionDoublePredicate:(id<JavaUtilFunctionDoublePredicate>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionDoublePredicate)

FOUNDATION_EXPORT id<JavaUtilFunctionDoublePredicate> JavaUtilFunctionDoublePredicate_and__WithJavaUtilFunctionDoublePredicate_(id<JavaUtilFunctionDoublePredicate> self, id<JavaUtilFunctionDoublePredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionDoublePredicate> JavaUtilFunctionDoublePredicate_negate(id<JavaUtilFunctionDoublePredicate> self);

FOUNDATION_EXPORT id<JavaUtilFunctionDoublePredicate> JavaUtilFunctionDoublePredicate_or__WithJavaUtilFunctionDoublePredicate_(id<JavaUtilFunctionDoublePredicate> self, id<JavaUtilFunctionDoublePredicate> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionDoublePredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionDoublePredicate")
