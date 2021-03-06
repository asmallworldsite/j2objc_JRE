//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/TestCase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTestCase")
#ifdef RESTRICT_JunitFrameworkTestCase
#define INCLUDE_ALL_JunitFrameworkTestCase 0
#else
#define INCLUDE_ALL_JunitFrameworkTestCase 1
#endif
#undef RESTRICT_JunitFrameworkTestCase

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitFrameworkTestCase_) && (INCLUDE_ALL_JunitFrameworkTestCase || defined(INCLUDE_JunitFrameworkTestCase))
#define JunitFrameworkTestCase_

#define RESTRICT_JunitFrameworkAssert 1
#define INCLUDE_JunitFrameworkAssert 1
#include "junit/framework/Assert.h"

#define RESTRICT_JunitFrameworkTest 1
#define INCLUDE_JunitFrameworkTest 1
#include "junit/framework/Test.h"

@class JunitFrameworkTestResult;

/*!
 @brief A test case defines the fixture to run multiple tests.To define a test case<br>
  <ol>
    <li>implement a subclass of <code>TestCase</code></li>
    <li>define instance variables that store the state of the fixture</li>
    <li>initialize the fixture state by overriding <code>setUp()</code></li>
    <li>clean-up after a test by overriding <code>tearDown()</code>.
 </li>
  </ol>
  Each test runs in its own fixture so there
  can be no side effects among test runs.
  Here is an example: 
 @code

  public class MathTest extends TestCase {
     protected double fValue1;
     protected double fValue2;
     protected void setUp() {
        fValue1= 2.0;
        fValue2= 3.0;
     }   }   
  
@endcode
  For each test implement a method which interacts
  with the fixture. Verify the expected results with assertions specified
  by calling <code>junit.framework.Assert.assertTrue(String, boolean)</code> with a boolean. 
 @code

     public void testAdd() {
        double result= fValue1 + fValue2;
        assertTrue(result == 5.0);
     } 
  
@endcode
  Once the methods are defined you can run them. The framework supports
  both a static type safe and more dynamic way to run a test.
  In the static way you override the runTest method and define the method to
  be invoked. A convenient way to do so is with an anonymous inner class. 
 @code

  TestCase test= new MathTest("add") {
     public void runTest() {
        testAdd();
     }
  };
  test.run(); 
  
@endcode
  The dynamic way uses reflection to implement <code>runTest()</code>. It dynamically finds
  and invokes a method.
  In this case the name of the test case has to correspond to the test method
  to be run. 
 @code

  TestCase test= new MathTest("testAdd");
  test.run(); 
  
@endcode
  The tests to be run can be collected into a TestSuite. JUnit provides
  different <i>test runners</i> which can run a test suite and collect the results.
  A test runner either expects a static method <code>suite</code> as the entry
  point to get a test to run or it will extract the suite automatically. 
 @code

  public static Test suite() {
     suite.addTest(new MathTest("testAdd"));
     suite.addTest(new MathTest("testDivideByZero"));
     return suite;
  } 
  
@endcode
 - seealso: TestResult
 - seealso: TestSuite
 */
@interface JunitFrameworkTestCase : JunitFrameworkAssert < JunitFrameworkTest >

#pragma mark Public

/*!
 @brief No-arg constructor to enable serialization.This method
  is not intended to be used by mere mortals without calling setName().
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a test case with the given name.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Asserts that two booleans are equal.
 */
+ (void)assertEqualsWithBoolean:(jboolean)expected
                    withBoolean:(jboolean)actual;

/*!
 @brief Asserts that two bytes are equal.
 */
+ (void)assertEqualsWithByte:(jbyte)expected
                    withByte:(jbyte)actual;

/*!
 @brief Asserts that two chars are equal.
 */
+ (void)assertEqualsWithChar:(jchar)expected
                    withChar:(jchar)actual;

/*!
 @brief Asserts that two doubles are equal concerning a delta.If the expected
  value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithDouble:(jdouble)expected
                    withDouble:(jdouble)actual
                    withDouble:(jdouble)delta;

/*!
 @brief Asserts that two floats are equal concerning a delta.If the expected
  value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithFloat:(jfloat)expected
                    withFloat:(jfloat)actual
                    withFloat:(jfloat)delta;

/*!
 @brief Asserts that two ints are equal.
 */
+ (void)assertEqualsWithInt:(jint)expected
                    withInt:(jint)actual;

/*!
 @brief Asserts that two longs are equal.
 */
+ (void)assertEqualsWithLong:(jlong)expected
                    withLong:(jlong)actual;

/*!
 @brief Asserts that two objects are equal.If they are not
  an AssertionFailedError is thrown.
 */
+ (void)assertEqualsWithId:(id)expected
                    withId:(id)actual;

/*!
 @brief Asserts that two shorts are equal.
 */
+ (void)assertEqualsWithShort:(jshort)expected
                    withShort:(jshort)actual;

/*!
 @brief Asserts that two booleans are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                     withBoolean:(jboolean)expected
                     withBoolean:(jboolean)actual;

/*!
 @brief Asserts that two bytes are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withByte:(jbyte)expected
                        withByte:(jbyte)actual;

/*!
 @brief Asserts that two chars are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withChar:(jchar)expected
                        withChar:(jchar)actual;

/*!
 @brief Asserts that two doubles are equal concerning a delta.If they are not
  an AssertionFailedError is thrown with the given message.
 If the expected
  value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                      withDouble:(jdouble)expected
                      withDouble:(jdouble)actual
                      withDouble:(jdouble)delta;

/*!
 @brief Asserts that two floats are equal concerning a positive delta.If they
  are not an AssertionFailedError is thrown with the given message.
 If the
  expected value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                       withFloat:(jfloat)expected
                       withFloat:(jfloat)actual
                       withFloat:(jfloat)delta;

/*!
 @brief Asserts that two ints are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                         withInt:(jint)expected
                         withInt:(jint)actual;

/*!
 @brief Asserts that two longs are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withLong:(jlong)expected
                        withLong:(jlong)actual;

/*!
 @brief Asserts that two objects are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

/*!
 @brief Asserts that two shorts are equal.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                       withShort:(jshort)expected
                       withShort:(jshort)actual;

/*!
 @brief Asserts that two Strings are equal.
 */
+ (void)assertEqualsWithNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

/*!
 @brief Asserts that two Strings are equal.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

/*!
 @brief Asserts that a condition is false.If it isn't it throws
  an AssertionFailedError.
 */
+ (void)assertFalseWithBoolean:(jboolean)condition;

/*!
 @brief Asserts that a condition is false.If it isn't it throws
  an AssertionFailedError with the given message.
 */
+ (void)assertFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)condition;

/*!
 @brief Asserts that an object isn't null.
 */
+ (void)assertNotNullWithId:(id)object;

/*!
 @brief Asserts that an object isn't null.If it is
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertNotNullWithNSString:(NSString *)message
                           withId:(id)object;

/*!
 @brief Asserts that two objects do not refer to the same object.If they do
  refer to the same object an AssertionFailedError is thrown.
 */
+ (void)assertNotSameWithId:(id)expected
                     withId:(id)actual;

/*!
 @brief Asserts that two objects do not refer to the same object.If they do
  refer to the same object an AssertionFailedError is thrown with the
  given message.
 */
+ (void)assertNotSameWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

/*!
 @brief Asserts that an object is null.If it isn't an <code>AssertionError</code> is
  thrown.
 Message contains: Expected: <null> but was: object
 @param object Object to check or  <code> null </code>
 */
+ (void)assertNullWithId:(id)object;

/*!
 @brief Asserts that an object is null.If it is not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertNullWithNSString:(NSString *)message
                        withId:(id)object;

/*!
 @brief Asserts that two objects refer to the same object.If they are not
  the same an AssertionFailedError is thrown.
 */
+ (void)assertSameWithId:(id)expected
                  withId:(id)actual;

/*!
 @brief Asserts that two objects refer to the same object.If they are not
  an AssertionFailedError is thrown with the given message.
 */
+ (void)assertSameWithNSString:(NSString *)message
                        withId:(id)expected
                        withId:(id)actual;

/*!
 @brief Asserts that a condition is true.If it isn't it throws
  an AssertionFailedError.
 */
+ (void)assertTrueWithBoolean:(jboolean)condition;

/*!
 @brief Asserts that a condition is true.If it isn't it throws
  an AssertionFailedError with the given message.
 */
+ (void)assertTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)condition;

/*!
 @brief Counts the number of test cases executed by run(TestResult result).
 */
- (jint)countTestCases;

/*!
 @brief Fails a test with no message.
 */
+ (void)fail;

/*!
 @brief Fails a test with the given message.
 */
+ (void)failWithNSString:(NSString *)message;

+ (void)failNotEqualsWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

+ (void)failNotSameWithNSString:(NSString *)message
                         withId:(id)expected
                         withId:(id)actual;

+ (void)failSameWithNSString:(NSString *)message;

+ (NSString *)formatWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

/*!
 @brief Gets the name of a TestCase.
 @return the name of the TestCase
 */
- (NSString *)getName;

/*!
 @brief A convenience method to run this test, collecting the results with a
  default TestResult object.
 - seealso: TestResult
 */
- (JunitFrameworkTestResult *)run;

/*!
 @brief Runs the test case and collects the results in TestResult.
 */
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

/*!
 @brief Runs the bare test sequence.
 @throw Throwableif any exception is thrown
 */
- (void)runBare;

/*!
 @brief Sets the name of a TestCase.
 @param name the name to set
 */
- (void)setNameWithNSString:(NSString *)name;

/*!
 @brief Returns a string representation of the test case.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates a default TestResult object.
 - seealso: TestResult
 */
- (JunitFrameworkTestResult *)createResult;

/*!
 @brief Override to run the test and assert its state.
 @throw Throwableif any exception is thrown
 */
- (void)runTest;

/*!
 @brief Sets up the fixture, for example, open a network connection.
 This method is called before a test is executed.
 */
- (void)setUp;

/*!
 @brief Tears down the fixture, for example, close a network connection.
 This method is called after a test is executed.
 */
- (void)tearDown;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestCase)

FOUNDATION_EXPORT void JunitFrameworkTestCase_init(JunitFrameworkTestCase *self);

FOUNDATION_EXPORT void JunitFrameworkTestCase_initWithNSString_(JunitFrameworkTestCase *self, NSString *name);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertTrueWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertTrueWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertFalseWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertFalseWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkTestCase_failWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkTestCase_fail(void);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withNSString_(NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withDouble_withDouble_withDouble_(NSString *message, jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithDouble_withDouble_withDouble_(jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withFloat_withFloat_withFloat_(NSString *message, jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithFloat_withFloat_withFloat_(jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withLong_withLong_(NSString *message, jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithLong_withLong_(jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withBoolean_withBoolean_(NSString *message, jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithBoolean_withBoolean_(jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withByte_withByte_(NSString *message, jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithByte_withByte_(jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withChar_withChar_(NSString *message, jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithChar_withChar_(jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withShort_withShort_(NSString *message, jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithShort_withShort_(jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithNSString_withInt_withInt_(NSString *message, jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertEqualsWithInt_withInt_(jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNotNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNotNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_assertNotSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_failSameWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkTestCase_failNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkTestCase_failNotEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT NSString *JunitFrameworkTestCase_formatWithNSString_withId_withId_(NSString *message, id expected, id actual);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestCase)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTestCase")
