//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/extensions/RepeatedTest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitExtensionsRepeatedTest")
#ifdef RESTRICT_JunitExtensionsRepeatedTest
#define INCLUDE_ALL_JunitExtensionsRepeatedTest 0
#else
#define INCLUDE_ALL_JunitExtensionsRepeatedTest 1
#endif
#undef RESTRICT_JunitExtensionsRepeatedTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitExtensionsRepeatedTest_) && (INCLUDE_ALL_JunitExtensionsRepeatedTest || defined(INCLUDE_JunitExtensionsRepeatedTest))
#define JunitExtensionsRepeatedTest_

#define RESTRICT_JunitExtensionsTestDecorator 1
#define INCLUDE_JunitExtensionsTestDecorator 1
#include "junit/extensions/TestDecorator.h"

@class JunitFrameworkTestResult;
@protocol JunitFrameworkTest;

/*!
 @brief A Decorator that runs a test repeatedly.
 */
@interface JunitExtensionsRepeatedTest : JunitExtensionsTestDecorator

#pragma mark Public

- (instancetype __nonnull)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                                             withInt:(jint)repeat;

- (jint)countTestCases;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsRepeatedTest)

FOUNDATION_EXPORT void JunitExtensionsRepeatedTest_initWithJunitFrameworkTest_withInt_(JunitExtensionsRepeatedTest *self, id<JunitFrameworkTest> test, jint repeat);

FOUNDATION_EXPORT JunitExtensionsRepeatedTest *new_JunitExtensionsRepeatedTest_initWithJunitFrameworkTest_withInt_(id<JunitFrameworkTest> test, jint repeat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsRepeatedTest *create_JunitExtensionsRepeatedTest_initWithJunitFrameworkTest_withInt_(id<JunitFrameworkTest> test, jint repeat);

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsRepeatedTest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitExtensionsRepeatedTest")