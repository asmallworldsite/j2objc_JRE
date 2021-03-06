//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/StrictRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalRunnersStrictRunner")
#ifdef RESTRICT_OrgMockitoInternalRunnersStrictRunner
#define INCLUDE_ALL_OrgMockitoInternalRunnersStrictRunner 0
#else
#define INCLUDE_ALL_OrgMockitoInternalRunnersStrictRunner 1
#endif
#undef RESTRICT_OrgMockitoInternalRunnersStrictRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalRunnersStrictRunner_) && (INCLUDE_ALL_OrgMockitoInternalRunnersStrictRunner || defined(INCLUDE_OrgMockitoInternalRunnersStrictRunner))
#define OrgMockitoInternalRunnersStrictRunner_

#define RESTRICT_OrgMockitoInternalRunnersInternalRunner 1
#define INCLUDE_OrgMockitoInternalRunnersInternalRunner 1
#include "org/mockito/internal/runners/InternalRunner.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgMockitoInternalRunnersStrictRunner : NSObject < OrgMockitoInternalRunnersInternalRunner >

#pragma mark Public

/*!
 @param runner - the runner to wrap around
 @param testClass - for reporting purposes
 */
- (instancetype __nonnull)initWithOrgMockitoInternalRunnersInternalRunner:(id<OrgMockitoInternalRunnersInternalRunner>)runner
                                                             withIOSClass:(IOSClass *)testClass;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersStrictRunner)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersStrictRunner_initWithOrgMockitoInternalRunnersInternalRunner_withIOSClass_(OrgMockitoInternalRunnersStrictRunner *self, id<OrgMockitoInternalRunnersInternalRunner> runner, IOSClass *testClass);

FOUNDATION_EXPORT OrgMockitoInternalRunnersStrictRunner *new_OrgMockitoInternalRunnersStrictRunner_initWithOrgMockitoInternalRunnersInternalRunner_withIOSClass_(id<OrgMockitoInternalRunnersInternalRunner> runner, IOSClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalRunnersStrictRunner *create_OrgMockitoInternalRunnersStrictRunner_initWithOrgMockitoInternalRunnersInternalRunner_withIOSClass_(id<OrgMockitoInternalRunnersInternalRunner> runner, IOSClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersStrictRunner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalRunnersStrictRunner")
