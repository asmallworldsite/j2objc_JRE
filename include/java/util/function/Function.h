//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/Function.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionFunction")
#ifdef RESTRICT_JavaUtilFunctionFunction
#define INCLUDE_ALL_JavaUtilFunctionFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionFunction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionFunction_) && (INCLUDE_ALL_JavaUtilFunctionFunction || defined(INCLUDE_JavaUtilFunctionFunction))
#define JavaUtilFunctionFunction_

/*!
 @brief Represents a function that accepts one argument and produces a result.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>apply(Object)</code>.
 @since 1.8
 */
@protocol JavaUtilFunctionFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param t the function argument
 @return the function result
 */
- (id)applyWithId:(id)t;

/*!
 @brief Returns a composed function that first applies the <code>before</code>
  function to its input, and then applies this function to the result.
 If evaluation of either function throws an exception, it is relayed to
  the caller of the composed function.
 @param before the function to apply before this function is applied
 @return a composed function that first applies the <code>before</code>
  function and then applies this function
 @throw NullPointerExceptionif before is null
 - seealso: #andThen(Function)
 */
- (id<JavaUtilFunctionFunction>)composeWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)before;

/*!
 @brief Returns a composed function that first applies this function to
  its input, and then applies the <code>after</code> function to the result.
 If evaluation of either function throws an exception, it is relayed to
  the caller of the composed function.
 @param after the function to apply after this function is applied
 @return a composed function that first applies this function and then
  applies the <code>after</code> function
 @throw NullPointerExceptionif after is null
 - seealso: #compose(Function)
 */
- (id<JavaUtilFunctionFunction>)andThenWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)after;

@end

@interface JavaUtilFunctionFunction : NSObject

/*!
 @brief Returns a function that always returns its input argument.
 @return a function that always returns its input argument
 */
+ (id<JavaUtilFunctionFunction>)identity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionFunction)

FOUNDATION_EXPORT id<JavaUtilFunctionFunction> JavaUtilFunctionFunction_composeWithJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> self, id<JavaUtilFunctionFunction> before);

FOUNDATION_EXPORT id<JavaUtilFunctionFunction> JavaUtilFunctionFunction_andThenWithJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> self, id<JavaUtilFunctionFunction> after);

FOUNDATION_EXPORT id<JavaUtilFunctionFunction> JavaUtilFunctionFunction_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionFunction")
