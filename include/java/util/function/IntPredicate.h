//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntPredicate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntPredicate")
#ifdef RESTRICT_JavaUtilFunctionIntPredicate
#define INCLUDE_ALL_JavaUtilFunctionIntPredicate 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntPredicate 1
#endif
#undef RESTRICT_JavaUtilFunctionIntPredicate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionIntPredicate_) && (INCLUDE_ALL_JavaUtilFunctionIntPredicate || defined(INCLUDE_JavaUtilFunctionIntPredicate))
#define JavaUtilFunctionIntPredicate_

@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Represents a predicate (boolean-valued function) of one <code>int</code>-valued
  argument.This is the <code>int</code>-consuming primitive type specialization of 
 <code>Predicate</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>test(int)</code>.
 - seealso: Predicate
 @since 1.8
 */
@protocol JavaUtilFunctionIntPredicate < JavaObject >

/*!
 @brief Evaluates this predicate on the given argument.
 @param value the input argument
 @return <code>true</code> if the input argument matches the predicate,
  otherwise <code>false</code>
 */
- (jboolean)testWithInt:(jint)value;

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
- (id<JavaUtilFunctionIntPredicate>)and__WithJavaUtilFunctionIntPredicate:(id<JavaUtilFunctionIntPredicate>)other;

/*!
 @brief Returns a predicate that represents the logical negation of this
  predicate.
 @return a predicate that represents the logical negation of this predicate
 */
- (id<JavaUtilFunctionIntPredicate>)negate;

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
- (id<JavaUtilFunctionIntPredicate>)or__WithJavaUtilFunctionIntPredicate:(id<JavaUtilFunctionIntPredicate>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntPredicate)

FOUNDATION_EXPORT id<JavaUtilFunctionIntPredicate> JavaUtilFunctionIntPredicate_and__WithJavaUtilFunctionIntPredicate_(id<JavaUtilFunctionIntPredicate> self, id<JavaUtilFunctionIntPredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionIntPredicate> JavaUtilFunctionIntPredicate_negate(id<JavaUtilFunctionIntPredicate> self);

FOUNDATION_EXPORT id<JavaUtilFunctionIntPredicate> JavaUtilFunctionIntPredicate_or__WithJavaUtilFunctionIntPredicate_(id<JavaUtilFunctionIntPredicate> self, id<JavaUtilFunctionIntPredicate> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntPredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntPredicate")
