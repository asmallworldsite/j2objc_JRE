//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/TestSuite.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTestSuite")
#ifdef RESTRICT_JunitFrameworkTestSuite
#define INCLUDE_ALL_JunitFrameworkTestSuite 0
#else
#define INCLUDE_ALL_JunitFrameworkTestSuite 1
#endif
#undef RESTRICT_JunitFrameworkTestSuite

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitFrameworkTestSuite_) && (INCLUDE_ALL_JunitFrameworkTestSuite || defined(INCLUDE_JunitFrameworkTestSuite))
#define JunitFrameworkTestSuite_

#define RESTRICT_JunitFrameworkTest 1
#define INCLUDE_JunitFrameworkTest 1
#include "junit/framework/Test.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class JunitFrameworkTestResult;
@protocol JavaUtilEnumeration;

/*!
 @brief A <code>TestSuite</code> is a <code>Composite</code> of Tests.
 It runs a collection of test cases. Here is an example using
  the dynamic test definition. 
 @code

  TestSuite suite= new TestSuite();
  suite.addTest(new MathTest("testAdd"));
  suite.addTest(new MathTest("testDivideByZero")); 
  
@endcode
  <p>
  Alternatively, a TestSuite can extract the tests to be run automatically.
  To do so you pass the class of your TestCase class to the
  TestSuite constructor. 
 @code

  TestSuite suite= new TestSuite(MathTest.class); 
  
@endcode
  <p>
  This constructor creates a suite with all the methods
  starting with "test" that take no arguments. 
 <p>
  A final option is to do the same for a large array of test classes. 
 @code

  Class[] testClasses = { MathTest.class, AnotherTest.class };
  TestSuite suite= new TestSuite(testClasses); 
  
@endcode
 - seealso: Test
 */
@interface JunitFrameworkTestSuite : NSObject < JunitFrameworkTest >

#pragma mark Public

/*!
 @brief Constructs an empty TestSuite.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a TestSuite from the given class.Adds all the methods
  starting with "test" as test cases to the suite.
 Parts of this method were written at 2337 meters in the Hueffihuette,
  Kanton Uri
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)theClass;

/*!
 @brief Constructs a TestSuite from the given array of classes.
 @param classes<code>TestCase</code> s
 */
- (instancetype __nonnull)initWithIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Constructs a TestSuite from the given class with the given name.
 - seealso: TestSuite#TestSuite(Class)
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)theClass
                              withNSString:(NSString *)name;

/*!
 @brief Constructs a TestSuite from the given array of classes with the given name.
 - seealso: TestSuite#TestSuite(Class[])
 */
- (instancetype __nonnull)initWithIOSClassArray:(IOSObjectArray *)classes
                                   withNSString:(NSString *)name;

/*!
 @brief Constructs an empty TestSuite.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Adds a test to the suite.
 */
- (void)addTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

/*!
 @brief Adds the tests from the given class to the suite.
 */
- (void)addTestSuiteWithIOSClass:(IOSClass *)testClass;

/*!
 @brief Counts the number of test cases that will be run by this test.
 */
- (jint)countTestCases;

/*!
 @brief ...as the moon sets over the early morning Merlin, Oregon
  mountains, our intrepid adventurers type...
 */
+ (id<JunitFrameworkTest>)createTestWithIOSClass:(IOSClass *)theClass
                                    withNSString:(NSString *)name;

/*!
 @brief Returns the name of the suite.Not all
  test suites have a name and this method
  can return null.
 */
- (NSString *)getName;

/*!
 @brief Gets a constructor which takes a single String as
  its argument or a no arg constructor.
 */
+ (JavaLangReflectConstructor *)getTestConstructorWithIOSClass:(IOSClass *)theClass;

/*!
 @brief Runs the tests and collects their result in a TestResult.
 */
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)runTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
         withJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

/*!
 @brief Sets the name of the suite.
 @param name the name to set
 */
- (void)setNameWithNSString:(NSString *)name;

/*!
 @brief Returns the test at the given index.
 */
- (id<JunitFrameworkTest>)testAtWithInt:(jint)index;

/*!
 @brief Returns the number of tests in this suite.
 */
- (jint)testCount;

/*!
 @brief Returns the tests as an enumeration.
 */
- (id<JavaUtilEnumeration>)tests;

/*!
 */
- (NSString *)description;

/*!
 @brief Returns a test which will fail and log a warning message.
 */
+ (id<JunitFrameworkTest>)warningWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestSuite)

FOUNDATION_EXPORT id<JunitFrameworkTest> JunitFrameworkTestSuite_createTestWithIOSClass_withNSString_(IOSClass *theClass, NSString *name);

FOUNDATION_EXPORT JavaLangReflectConstructor *JunitFrameworkTestSuite_getTestConstructorWithIOSClass_(IOSClass *theClass);

FOUNDATION_EXPORT id<JunitFrameworkTest> JunitFrameworkTestSuite_warningWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_init(JunitFrameworkTestSuite *self);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_init(void);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_initWithIOSClass_(JunitFrameworkTestSuite *self, IOSClass *theClass);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_initWithIOSClass_(IOSClass *theClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_initWithIOSClass_(IOSClass *theClass);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_initWithIOSClass_withNSString_(JunitFrameworkTestSuite *self, IOSClass *theClass, NSString *name);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_initWithIOSClass_withNSString_(IOSClass *theClass, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_initWithIOSClass_withNSString_(IOSClass *theClass, NSString *name);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_initWithNSString_(JunitFrameworkTestSuite *self, NSString *name);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_initWithIOSClassArray_(JunitFrameworkTestSuite *self, IOSObjectArray *classes);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_initWithIOSClassArray_(IOSObjectArray *classes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_initWithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT void JunitFrameworkTestSuite_initWithIOSClassArray_withNSString_(JunitFrameworkTestSuite *self, IOSObjectArray *classes, NSString *name);

FOUNDATION_EXPORT JunitFrameworkTestSuite *new_JunitFrameworkTestSuite_initWithIOSClassArray_withNSString_(IOSObjectArray *classes, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestSuite *create_JunitFrameworkTestSuite_initWithIOSClassArray_withNSString_(IOSObjectArray *classes, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestSuite)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTestSuite")
