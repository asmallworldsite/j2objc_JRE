//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/junit/framework/TestResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTestResult")
#ifdef RESTRICT_JunitFrameworkTestResult
#define INCLUDE_ALL_JunitFrameworkTestResult 0
#else
#define INCLUDE_ALL_JunitFrameworkTestResult 1
#endif
#undef RESTRICT_JunitFrameworkTestResult

#if !defined (JunitFrameworkTestResult_) && (INCLUDE_ALL_JunitFrameworkTestResult || defined(INCLUDE_JunitFrameworkTestResult))
#define JunitFrameworkTestResult_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThrowable;
@class JunitFrameworkAssertionFailedError;
@class JunitFrameworkTestCase;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;
@protocol JunitFrameworkProtectable;
@protocol JunitFrameworkTest;
@protocol JunitFrameworkTestListener;

@interface JunitFrameworkTestResult : NSObject {
 @public
  id<JavaUtilList> fFailures_;
  id<JavaUtilList> fErrors_;
  id<JavaUtilList> fListeners_;
  jint fRunTests_;
}

#pragma mark Public

- (instancetype)init;

- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)e;

- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)e;

- (void)addListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (jint)errorCount;

- (id<JavaUtilEnumeration>)errors;

- (jint)failureCount;

- (id<JavaUtilEnumeration>)failures;

- (void)removeListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

- (jint)runCount;

- (void)runProtectedWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
             withJunitFrameworkProtectable:(id<JunitFrameworkProtectable>)p;

- (jboolean)shouldStop;

- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)stop;

- (jboolean)wasSuccessful;

#pragma mark Protected

- (void)runWithJunitFrameworkTestCase:(JunitFrameworkTestCase *)test;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTestResult)

J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fFailures_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fErrors_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fListeners_, id<JavaUtilList>)

FOUNDATION_EXPORT void JunitFrameworkTestResult_init(JunitFrameworkTestResult *self);

FOUNDATION_EXPORT JunitFrameworkTestResult *new_JunitFrameworkTestResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkTestResult *create_JunitFrameworkTestResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTestResult)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTestResult")
