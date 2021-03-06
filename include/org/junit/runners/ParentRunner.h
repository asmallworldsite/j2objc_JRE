//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/ParentRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersParentRunner")
#ifdef RESTRICT_OrgJunitRunnersParentRunner
#define INCLUDE_ALL_OrgJunitRunnersParentRunner 0
#else
#define INCLUDE_ALL_OrgJunitRunnersParentRunner 1
#endif
#undef RESTRICT_OrgJunitRunnersParentRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersParentRunner_) && (INCLUDE_ALL_OrgJunitRunnersParentRunner || defined(INCLUDE_OrgJunitRunnersParentRunner))
#define OrgJunitRunnersParentRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

#define RESTRICT_OrgJunitRunnerManipulationOrderable 1
#define INCLUDE_OrgJunitRunnerManipulationOrderable 1
#include "org/junit/runner/manipulation/Orderable.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationOrderer;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelStatement;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;
@protocol OrgJunitRunnersModelRunnerScheduler;

/*!
 @brief Provides most of the functionality specific to a Runner that implements a
  "parent node" in the test tree, with children defined by objects of some data
  type <code>T</code>.
 (For <code>BlockJUnit4ClassRunner</code>, <code>T</code> is 
 <code>Method</code> . For <code>Suite</code>, <code>T</code> is <code>Class</code>.) Subclasses
  must implement finding the children of the node, describing each child, and
  running each child. ParentRunner will filter and sort children, handle 
 <code>@@BeforeClass</code> and <code>@@AfterClass</code> methods,
  handle annotated <code>ClassRule</code>s, create a composite 
 <code>Description</code>, and run children sequentially.
 @since 4.5
 */
@interface OrgJunitRunnersParentRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationOrderable >

#pragma mark Public

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

/*!
 @brief Returns a <code>TestClass</code> object wrapping the class to be executed.
 */
- (OrgJunitRunnersModelTestClass *)getTestClass;

/*!
 @brief Implementation of <code>Orderable.order(Orderer)</code>.
 @since 4.13
 */
- (void)orderWithOrgJunitRunnerManipulationOrderer:(OrgJunitRunnerManipulationOrderer *)orderer;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @brief Sets a scheduler that determines the order and parallelization
  of children.Highly experimental feature that may change.
 */
- (void)setSchedulerWithOrgJunitRunnersModelRunnerScheduler:(id<OrgJunitRunnersModelRunnerScheduler>)scheduler;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

#pragma mark Protected

/*!
 @brief Constructs a new <code>ParentRunner</code> that will run <code>@@TestClass</code>
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)testClass;

/*!
 @brief Constructs a new <code>ParentRunner</code> that will run the <code>TestClass</code>.
 @since 4.13
 */
- (instancetype __nonnull)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

/*!
 @brief Returns a <code>Statement</code>: Call <code>runChild(Object, RunNotifier)</code>
  on each object returned by <code>getChildren()</code> (subject to any imposed
  filter and sort)
 */
- (OrgJunitRunnersModelStatement *)childrenInvokerWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @brief Constructs a <code>Statement</code> to run all of the tests in the test class.
 Override to add pre-/post-processing. Here is an outline of the
  implementation: 
 <ol>
  <li>Determine the children to be run using <code>getChildren()</code>
  (subject to any imposed filter and sort).</li>
  <li>If there are any children remaining after filtering and ignoring,
  construct a statement that will: 
 <ol>
  <li>Apply all <code>ClassRule</code>s on the test-class and superclasses.</li>
  <li>Run all non-overridden <code>@@BeforeClass</code> methods on the test-class
  and superclasses; if any throws an Exception, stop execution and pass the
  exception on.</li>
  <li>Run all remaining tests on the test-class.</li>
  <li>Run all non-overridden <code>@@AfterClass</code> methods on the test-class
  and superclasses: exceptions thrown by previous steps are combined, if
  necessary, with exceptions from AfterClass methods into a 
 <code>org.junit.runners.model.MultipleFailureException</code>.</li>
  </ol>
  </li>
  </ol>
 @return <code>Statement</code>
 */
- (OrgJunitRunnersModelStatement *)classBlockWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @return the <code>ClassRule</code>s that can transform the block that runs
          each method in the tested class.
 */
- (id<JavaUtilList>)classRules;

/*!
 @brief Adds to <code>errors</code> a throwable for each problem noted with the test class (available from <code>getTestClass()</code>).
 Default implementation adds an error for each method annotated with 
 <code>@@BeforeClass</code> or <code>@@AfterClass</code> that is not 
 <code>public static void</code> with no arguments.
 */
- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @since 4.12
 */
- (OrgJunitRunnersModelTestClass *)createTestClassWithIOSClass:(IOSClass *)testClass __attribute__((deprecated));

/*!
 @brief Returns a <code>Description</code> for <code>child</code>, which can be assumed to
  be an element of the list returned by <code>ParentRunner.getChildren()</code>
 */
- (OrgJunitRunnerDescription *)describeChildWithId:(id)child;

/*!
 @brief Returns a list of objects that define the children of this Runner.
 */
- (id<JavaUtilList>)getChildren;

/*!
 @brief Returns a name used to describe this Runner
 */
- (NSString *)getName;

/*!
 @return the annotations that should be attached to this runner's
          description.
 */
- (IOSObjectArray *)getRunnerAnnotations;

/*!
 @brief Evaluates whether a child is ignored.The default implementation always
  returns <code>false</code>.
 <p><code>BlockJUnit4ClassRunner</code>, for example, overrides this method to
  filter tests based on the <code>Ignore</code> annotation.
 */
- (jboolean)isIgnoredWithId:(id)child;

/*!
 @brief Runs the test corresponding to <code>child</code>, which can be assumed to be
  an element of the list returned by <code>ParentRunner.getChildren()</code>.
 Subclasses are responsible for making sure that relevant test events are
  reported through <code>notifier</code>
 */
- (void)runChildWithId:(id)child
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @brief Runs a <code>Statement</code> that represents a leaf (aka atomic) test.
 */
- (void)runLeafWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement
                   withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
       withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @brief Adds to <code>errors</code> if any method in this class is annotated with 
 <code>annotation</code>, but: 
 <ul>
  <li>is not public, or 
 <li>takes parameters, or 
 <li>returns something other than void, or 
 <li>is static (given <code>isStatic is false</code>), or 
 <li>is not static (given <code>isStatic is true</code>).
 </ul>
 */
- (void)validatePublicVoidNoArgMethodsWithIOSClass:(IOSClass *)annotation
                                       withBoolean:(jboolean)isStatic
                                  withJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @brief Returns a <code>Statement</code>: run all non-overridden <code>@@AfterClass</code> methods on this class
  and superclasses after executing <code>statement</code>; all AfterClass methods are
  always executed: exceptions thrown by previous steps are combined, if
  necessary, with exceptions from AfterClass methods into a 
 <code>org.junit.runners.model.MultipleFailureException</code>.
 */
- (OrgJunitRunnersModelStatement *)withAfterClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

/*!
 @brief Returns a <code>Statement</code>: run all non-overridden <code>@@BeforeClass</code> methods on this class
  and superclasses before executing <code>statement</code>; if any throws an
  Exception, stop execution and pass the exception on.
 */
- (OrgJunitRunnersModelStatement *)withBeforeClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

/*!
 @return a <code>Statement</code>: clears interrupt status of current thread after execution of statement
 */
- (OrgJunitRunnersModelStatement *)withInterruptIsolationWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnersParentRunner)

FOUNDATION_EXPORT void OrgJunitRunnersParentRunner_initWithIOSClass_(OrgJunitRunnersParentRunner *self, IOSClass *testClass);

FOUNDATION_EXPORT void OrgJunitRunnersParentRunner_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersParentRunner *self, OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersParentRunner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersParentRunner")
