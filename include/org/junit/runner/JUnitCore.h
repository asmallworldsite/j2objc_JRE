//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/JUnitCore.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCore")
#ifdef RESTRICT_OrgJunitRunnerJUnitCore
#define INCLUDE_ALL_OrgJunitRunnerJUnitCore 0
#else
#define INCLUDE_ALL_OrgJunitRunnerJUnitCore 1
#endif
#undef RESTRICT_OrgJunitRunnerJUnitCore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerJUnitCore_) && (INCLUDE_ALL_OrgJunitRunnerJUnitCore || defined(INCLUDE_OrgJunitRunnerJUnitCore))
#define OrgJunitRunnerJUnitCore_

@class IOSObjectArray;
@class OrgJunitRunnerComputer;
@class OrgJunitRunnerNotificationRunListener;
@class OrgJunitRunnerRequest;
@class OrgJunitRunnerResult;
@class OrgJunitRunnerRunner;
@protocol JunitFrameworkTest;
@protocol OrgJunitInternalJUnitSystem;

/*!
 @brief <code>JUnitCore</code> is a facade for running tests.It supports running JUnit 4 tests,
  JUnit 3.8.x tests, and mixtures.
 To run tests from the command line, run 
 <code>java org.junit.runner.JUnitCore TestClass1 TestClass2 ...</code>.
  For one-shot test runs, use the static method <code>runClasses(Class[])</code>.
  If you want to add special listeners,
  create an instance of <code>org.junit.runner.JUnitCore</code> first and use it to run the tests.
 - seealso: org.junit.runner.Result
 - seealso: org.junit.runner.notification.RunListener
 - seealso: org.junit.runner.Request
 @since 4.0
 */
@interface OrgJunitRunnerJUnitCore : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Add a listener to be notified as the tests run.
 @param listener the listener to add
 - seealso: org.junit.runner.notification.RunListener
 */
- (void)addListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

/*!
 @return the version number of this release
 */
- (NSString *)getVersion;

/*!
 @brief Run the tests contained in the classes named in the <code>args</code>.
 If all tests run successfully, exit with a status of 0. Otherwise exit with a status of 1.
  Write feedback while tests are running and write
  stack traces for all failed tests after the tests all complete.
 @param args names of classes in which to find tests to run
 */
+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

/*!
 @brief Remove a listener.
 @param listener the listener to remove
 */
- (void)removeListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

/*!
 @brief Run all the tests in <code>classes</code>.
 @param classes the classes containing tests
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
- (OrgJunitRunnerResult *)runWithIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Run all the tests in <code>classes</code>.
 @param computer Helps construct Runners from classes
 @param classes the classes containing tests
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
- (OrgJunitRunnerResult *)runWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                      withIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Run all the tests contained in <code>request</code>.
 @param request the request describing tests
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

/*!
 @brief Do not use.Testing purposes only.
 */
- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRunner:(OrgJunitRunnerRunner *)runner;

/*!
 @brief Run all the tests contained in JUnit 3.8.x <code>test</code>.Here for backward compatibility.
 @param test the old-style test
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
- (OrgJunitRunnerResult *)runWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief Run the tests contained in <code>classes</code>.Write feedback while the tests
  are running and write stack traces for all failed tests after all tests complete.
 This is
  similar to <code>main(String[])</code>, but intended to be used programmatically.
 @param classes Classes in which to find tests
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
+ (OrgJunitRunnerResult *)runClassesWithIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Run the tests contained in <code>classes</code>.Write feedback while the tests
  are running and write stack traces for all failed tests after all tests complete.
 This is
  similar to <code>main(String[])</code>, but intended to be used programmatically.
 @param computer Helps construct Runners from classes
 @param classes Classes in which to find tests
 @return a <code>Result</code> describing the details of the test run and the failed tests.
 */
+ (OrgJunitRunnerResult *)runClassesWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                             withIOSClassArray:(IOSObjectArray *)classes;

#pragma mark Package-Private

+ (OrgJunitRunnerComputer *)defaultComputer;

/*!
 @param system
 @param args from main()
 */
- (OrgJunitRunnerResult *)runMainWithOrgJunitInternalJUnitSystem:(id<OrgJunitInternalJUnitSystem>)system
                                               withNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerJUnitCore)

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCore_init(OrgJunitRunnerJUnitCore *self);

FOUNDATION_EXPORT OrgJunitRunnerJUnitCore *new_OrgJunitRunnerJUnitCore_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerJUnitCore *create_OrgJunitRunnerJUnitCore_init(void);

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCore_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT OrgJunitRunnerResult *OrgJunitRunnerJUnitCore_runClassesWithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerResult *OrgJunitRunnerJUnitCore_runClassesWithOrgJunitRunnerComputer_withIOSClassArray_(OrgJunitRunnerComputer *computer, IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerJUnitCore_defaultComputer(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerJUnitCore)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCore")
