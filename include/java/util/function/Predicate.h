//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/Predicate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionPredicate")
#ifdef RESTRICT_JavaUtilFunctionPredicate
#define INCLUDE_ALL_JavaUtilFunctionPredicate 0
#else
#define INCLUDE_ALL_JavaUtilFunctionPredicate 1
#endif
#undef RESTRICT_JavaUtilFunctionPredicate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionPredicate_) && (INCLUDE_ALL_JavaUtilFunctionPredicate || defined(INCLUDE_JavaUtilFunctionPredicate))
#define JavaUtilFunctionPredicate_

@class JavaLangBoolean;

/*!
 @brief Represents a predicate (boolean-valued function) of one argument.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>test(Object)</code>.
 @since 1.8
 */
@protocol JavaUtilFunctionPredicate < JavaObject >

/*!
 @brief Evaluates this predicate on the given argument.
 @param t the input argument
 @return <code>true</code> if the input argument matches the predicate,
  otherwise <code>false</code>
 */
- (jboolean)testWithId:(id)t;

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
- (id<JavaUtilFunctionPredicate>)and__WithJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)other;

/*!
 @brief Returns a predicate that represents the logical negation of this
  predicate.
 @return a predicate that represents the logical negation of this predicate
 */
- (id<JavaUtilFunctionPredicate>)negate;

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
- (id<JavaUtilFunctionPredicate>)or__WithJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)other;

@end

@interface JavaUtilFunctionPredicate : NSObject

/*!
 @brief Returns a predicate that tests if two arguments are equal according
  to <code>Objects.equals(Object, Object)</code>.
 @param targetRef the object reference with which to compare for equality,                which may be 
 <code>null</code>
 @return a predicate that tests if two arguments are equal according
  to <code>Objects.equals(Object, Object)</code>
 */
+ (id<JavaUtilFunctionPredicate>)isEqualWithId:(id)targetRef;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionPredicate)

FOUNDATION_EXPORT id<JavaUtilFunctionPredicate> JavaUtilFunctionPredicate_and__WithJavaUtilFunctionPredicate_(id<JavaUtilFunctionPredicate> self, id<JavaUtilFunctionPredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionPredicate> JavaUtilFunctionPredicate_negate(id<JavaUtilFunctionPredicate> self);

FOUNDATION_EXPORT id<JavaUtilFunctionPredicate> JavaUtilFunctionPredicate_or__WithJavaUtilFunctionPredicate_(id<JavaUtilFunctionPredicate> self, id<JavaUtilFunctionPredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionPredicate> JavaUtilFunctionPredicate_isEqualWithId_(id targetRef);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionPredicate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionPredicate")
