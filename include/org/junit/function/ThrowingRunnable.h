//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/function/ThrowingRunnable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitFunctionThrowingRunnable")
#ifdef RESTRICT_OrgJunitFunctionThrowingRunnable
#define INCLUDE_ALL_OrgJunitFunctionThrowingRunnable 0
#else
#define INCLUDE_ALL_OrgJunitFunctionThrowingRunnable 1
#endif
#undef RESTRICT_OrgJunitFunctionThrowingRunnable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitFunctionThrowingRunnable_) && (INCLUDE_ALL_OrgJunitFunctionThrowingRunnable || defined(INCLUDE_OrgJunitFunctionThrowingRunnable))
#define OrgJunitFunctionThrowingRunnable_

/*!
 @brief This interface facilitates the use of 
 <code>org.junit.Assert.assertThrows(Class, ThrowingRunnable)</code> from Java 8.It allows method
  references to void methods (that declare checked exceptions) to be passed directly into 
 <code>assertThrows</code>
  without wrapping.
 It is not meant to be implemented directly.
 @since 4.13
 */
@protocol OrgJunitFunctionThrowingRunnable < JavaObject >

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitFunctionThrowingRunnable)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitFunctionThrowingRunnable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitFunctionThrowingRunnable")
