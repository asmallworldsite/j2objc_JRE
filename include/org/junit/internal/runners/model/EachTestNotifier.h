//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/model/EachTestNotifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelEachTestNotifier")
#ifdef RESTRICT_OrgJunitInternalRunnersModelEachTestNotifier
#define INCLUDE_ALL_OrgJunitInternalRunnersModelEachTestNotifier 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersModelEachTestNotifier 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersModelEachTestNotifier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersModelEachTestNotifier_) && (INCLUDE_ALL_OrgJunitInternalRunnersModelEachTestNotifier || defined(INCLUDE_OrgJunitInternalRunnersModelEachTestNotifier))
#define OrgJunitInternalRunnersModelEachTestNotifier_

@class JavaLangThrowable;
@class OrgJunitInternalAssumptionViolatedException;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgJunitInternalRunnersModelEachTestNotifier : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier
                                          withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)addFailedAssumptionWithOrgJunitInternalAssumptionViolatedException:(OrgJunitInternalAssumptionViolatedException *)e;

- (void)addFailureWithJavaLangThrowable:(JavaLangThrowable *)targetException;

- (void)fireTestFinished;

- (void)fireTestIgnored;

- (void)fireTestStarted;

/*!
 @brief Calls <code>RunNotifier.fireTestSuiteFinished(Description)</code>, passing the 
 <code>Description</code> that was passed to the <code>EachTestNotifier</code> constructor.
 This should be called when a test suite has finished, whether the test suite succeeds
  or fails.
 - seealso: RunNotifier#fireTestSuiteFinished(Description)
 @since 4.13
 */
- (void)fireTestSuiteFinished;

/*!
 @brief Calls <code>RunNotifier.fireTestSuiteStarted(Description)</code>, passing the 
 <code>Description</code> that was passed to the <code>EachTestNotifier</code> constructor.
 This should be called when a test suite is about to be started.
 - seealso: RunNotifier#fireTestSuiteStarted(Description)
 @since 4.13
 */
- (void)fireTestSuiteStarted;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersModelEachTestNotifier)

FOUNDATION_EXPORT void OrgJunitInternalRunnersModelEachTestNotifier_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(OrgJunitInternalRunnersModelEachTestNotifier *self, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_);

FOUNDATION_EXPORT OrgJunitInternalRunnersModelEachTestNotifier *new_OrgJunitInternalRunnersModelEachTestNotifier_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersModelEachTestNotifier *create_OrgJunitInternalRunnersModelEachTestNotifier_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersModelEachTestNotifier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelEachTestNotifier")
