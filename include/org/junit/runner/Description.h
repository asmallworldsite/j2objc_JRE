//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/Description.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerDescription")
#ifdef RESTRICT_OrgJunitRunnerDescription
#define INCLUDE_ALL_OrgJunitRunnerDescription 0
#else
#define INCLUDE_ALL_OrgJunitRunnerDescription 1
#endif
#undef RESTRICT_OrgJunitRunnerDescription

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerDescription_) && (INCLUDE_ALL_OrgJunitRunnerDescription || defined(INCLUDE_OrgJunitRunnerDescription))
#define OrgJunitRunnerDescription_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilArrayList;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilCollection;

/*!
 @brief A <code>Description</code> describes a test which is to be run or has been run.
 <code>Descriptions</code>
  can be atomic (a single test) or compound (containing children tests). <code>Descriptions</code> are used
  to provide feedback about the tests that are about to run (for example, the tree view
  visible in many IDEs) or tests that have been run (for example, the failures view). 
 <p>
  <code>Descriptions</code> are implemented as a single class rather than a Composite because
  they are entirely informational. They contain no logic aside from counting their tests. 
 <p>
  In the past, we used the raw <code>junit.framework.TestCase</code>s and <code>junit.framework.TestSuite</code>s
  to display the tree of tests. This was no longer viable in JUnit 4 because atomic tests no longer have
  a superclass below <code>Object</code>. We needed a way to pass a class and name together. Description
  emerged from this.
 - seealso: org.junit.runner.Request
 - seealso: org.junit.runner.Runner
 @since 4.0
 */
@interface OrgJunitRunnerDescription : NSObject < JavaIoSerializable >
@property (readonly, class, strong) OrgJunitRunnerDescription *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class, strong) OrgJunitRunnerDescription *TEST_MECHANISM NS_SWIFT_NAME(TEST_MECHANISM);

#pragma mark Public

/*!
 @brief Add <code>Description</code> as a child of the receiver.
 @param description_ the soon-to-be child.
 */
- (void)addChildWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @return a copy of this description, with no children (on the assumption that some of the
          children will be added back)
 */
- (OrgJunitRunnerDescription *)childlessCopy;

/*!
 @brief Create a <code>Description</code> named after <code>testClass</code>
 @param testClass A <code>Class</code>  containing tests
 @return a <code>Description</code> of <code>testClass</code>
 */
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass;

/*!
 @brief Create a <code>Description</code> named after <code>testClass</code>
 @param testClass A not null <code>Class</code>  containing tests
 @param annotations meta-data about the test, for downstream interpreters
 @return a <code>Description</code> of <code>testClass</code>
 */
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

/*!
 @brief Create a <code>Description</code> named <code>name</code>.
 Generally, you will add children to this <code>Description</code>.
 @param name the name of the  <code> Description </code>
 @param annotations meta-data about the test, for downstream interpreters
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

/*!
 @brief Create a <code>Description</code> named <code>name</code>.
 Generally, you will add children to this <code>Description</code>.
 @param name the name of the  <code> Description </code>
 @param uniqueId an arbitrary object used to define uniqueness (in <code>equals(Object)</code>
 @param annotations meta-data about the test, for downstream interpreters
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                                           withJavaIoSerializable:(id<JavaIoSerializable>)uniqueId
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

/*!
 @brief Create a <code>Description</code> of a single test named <code>name</code> in the class <code>clazz</code>.
 Generally, this will be a leaf <code>Description</code>.
  (This remains for binary compatibility with clients of JUnit 4.3)
 @param clazz the class of the test
 @param name the name of the test (a method name for test annotated with <code>org.junit.Test</code> )
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name;

/*!
 @brief Create a <code>Description</code> of a single test named <code>name</code> in the class <code>clazz</code>.
 Generally, this will be a leaf <code>Description</code>.
 @param clazz the class of the test
 @param name the name of the test (a method name for test annotated with <code>org.junit.Test</code> )
 @param annotations meta-data about the test, for downstream interpreters
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

/*!
 @brief Create a <code>Description</code> of a single test named <code>name</code> in the 'class' named 
 <code>className</code>.Generally, this will be a leaf <code>Description</code>.
 This method is a better choice
  than <code>createTestDescription(Class, String, Annotation...)</code> for test runners whose test cases are not
  defined in an actual Java <code>Class</code>.
 @param className_ the class name of the test
 @param name the name of the test (a method name for test annotated with <code>org.junit.Test</code> )
 @param annotations meta-data about the test, for downstream interpreters
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createTestDescriptionWithNSString:(NSString *)className_
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

/*!
 @brief Create a <code>Description</code> of a single test named <code>name</code> in the class <code>clazz</code>.
 Generally, this will be a leaf <code>Description</code>.
 @param name the name of the test (a method name for test annotated with <code>org.junit.Test</code> )
 @return a <code>Description</code> named <code>name</code>
 */
+ (OrgJunitRunnerDescription *)createTestDescriptionWithNSString:(NSString *)className_
                                                    withNSString:(NSString *)name
                                          withJavaIoSerializable:(id<JavaIoSerializable>)uniqueId;

- (jboolean)isEqual:(id)obj;

/*!
 @return the annotation of type annotationType that is attached to this description node,
          or null if none exists
 */
- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

/*!
 @return all of the annotations attached to this description node
 */
- (id<JavaUtilCollection>)getAnnotations;

/*!
 @brief Gets the copy of the children of this <code>Description</code>.
 Returns an empty list if there are no children.
 */
- (JavaUtilArrayList *)getChildren;

/*!
 @return If this describes a method invocation,
          the name of the class of the test instance
 */
- (NSString *)getClassName;

/*!
 @return a user-understandable label
 */
- (NSString *)getDisplayName;

/*!
 @return If this describes a method invocation,
          the name of the method (or null if not)
 */
- (NSString *)getMethodName;

/*!
 @return If this describes a method invocation,
          the class of the test instance.
 */
- (IOSClass *)getTestClass;

- (NSUInteger)hash;

/*!
 @return true if this is a description of a Runner that runs no tests
 */
- (jboolean)isEmpty;

/*!
 @return <code>true</code> if the receiver is a suite
 */
- (jboolean)isSuite;

/*!
 @return <code>true</code> if the receiver is an atomic test
 */
- (jboolean)isTest;

/*!
 @return the total number of atomic tests in the receiver
 */
- (jint)testCount;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerDescription)

/*!
 @brief Describes a Runner which runs no tests
 */
inline OrgJunitRunnerDescription *OrgJunitRunnerDescription_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnerDescription, EMPTY, OrgJunitRunnerDescription *)

/*!
 @brief Describes a step in the test-running mechanism that goes so wrong no
  other description can be used (for example, an exception thrown from a Runner's
  constructor
 */
inline OrgJunitRunnerDescription *OrgJunitRunnerDescription_get_TEST_MECHANISM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_TEST_MECHANISM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnerDescription, TEST_MECHANISM, OrgJunitRunnerDescription *)

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithNSString_withJavaLangAnnotationAnnotationArray_(NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithNSString_withJavaIoSerializable_withJavaLangAnnotationAnnotationArray_(NSString *name, id<JavaIoSerializable> uniqueId, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithNSString_withNSString_withJavaLangAnnotationAnnotationArray_(NSString *className_, NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_withJavaLangAnnotationAnnotationArray_(IOSClass *clazz, NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_(IOSClass *clazz, NSString *name);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithNSString_withNSString_withJavaIoSerializable_(NSString *className_, NSString *name, id<JavaIoSerializable> uniqueId);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithIOSClass_(IOSClass *testClass);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithIOSClass_withJavaLangAnnotationAnnotationArray_(IOSClass *testClass, IOSObjectArray *annotations);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerDescription)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerDescription")
