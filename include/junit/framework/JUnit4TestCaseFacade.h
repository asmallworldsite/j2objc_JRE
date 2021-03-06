//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/JUnit4TestCaseFacade.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestCaseFacade")
#ifdef RESTRICT_JunitFrameworkJUnit4TestCaseFacade
#define INCLUDE_ALL_JunitFrameworkJUnit4TestCaseFacade 0
#else
#define INCLUDE_ALL_JunitFrameworkJUnit4TestCaseFacade 1
#endif
#undef RESTRICT_JunitFrameworkJUnit4TestCaseFacade

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitFrameworkJUnit4TestCaseFacade_) && (INCLUDE_ALL_JunitFrameworkJUnit4TestCaseFacade || defined(INCLUDE_JunitFrameworkJUnit4TestCaseFacade))
#define JunitFrameworkJUnit4TestCaseFacade_

#define RESTRICT_JunitFrameworkTest 1
#define INCLUDE_JunitFrameworkTest 1
#include "junit/framework/Test.h"

#define RESTRICT_OrgJunitRunnerDescribable 1
#define INCLUDE_OrgJunitRunnerDescribable 1
#include "org/junit/runner/Describable.h"

@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;

@interface JunitFrameworkJUnit4TestCaseFacade : NSObject < JunitFrameworkTest, OrgJunitRunnerDescribable >

#pragma mark Public

- (jint)countTestCases;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkJUnit4TestCaseFacade)

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestCaseFacade_initWithOrgJunitRunnerDescription_(JunitFrameworkJUnit4TestCaseFacade *self, OrgJunitRunnerDescription *description_);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestCaseFacade *new_JunitFrameworkJUnit4TestCaseFacade_initWithOrgJunitRunnerDescription_(OrgJunitRunnerDescription *description_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkJUnit4TestCaseFacade *create_JunitFrameworkJUnit4TestCaseFacade_initWithOrgJunitRunnerDescription_(OrgJunitRunnerDescription *description_);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkJUnit4TestCaseFacade)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestCaseFacade")
