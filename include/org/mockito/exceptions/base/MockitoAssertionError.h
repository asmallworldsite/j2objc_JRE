//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoAssertionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError")
#ifdef RESTRICT_OrgMockitoExceptionsBaseMockitoAssertionError
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError 1
#endif
#undef RESTRICT_OrgMockitoExceptionsBaseMockitoAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsBaseMockitoAssertionError_) && (INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError || defined(INCLUDE_OrgMockitoExceptionsBaseMockitoAssertionError))
#define OrgMockitoExceptionsBaseMockitoAssertionError_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

@class IOSObjectArray;
@class JavaLangThrowable;

/*!
 @brief Base class for verification errors emitted by Mockito.
 Verification errors are triggered by "verify" methods,
  for example <code>org.mockito.Mockito.verify(Object)</code> or <code>org.mockito.Mockito.verifyNoMoreInteractions(Object...)</code>.
  All error classes that inherit from this class will have the stack trace filtered.
  Filtering removes Mockito internal stack trace elements to provide clean stack traces and improve productivity. 
 <p>
  The stack trace is filtered from mockito calls if you are using <code>getStackTrace()</code>.
  For debugging purpose though you can still access the full stacktrace using <code>getUnfilteredStackTrace()</code>.
  However note that other calls related to the stackTrace will refer to the filter stacktrace. 
 <p>
  Advanced users and framework integrators can control stack trace filtering behavior
  via <code>org.mockito.plugins.StackTraceCleanerProvider</code> classpath plugin.
 */
@interface OrgMockitoExceptionsBaseMockitoAssertionError : JavaLangAssertionError

#pragma mark Public

/*!
 @brief Creates a copy of the given assertion error with the custom failure message prepended.
 @param error The assertion error to copy
 @param message The custom message to prepend
 @since 2.1.0
 */
- (instancetype __nonnull)initWithOrgMockitoExceptionsBaseMockitoAssertionError:(OrgMockitoExceptionsBaseMockitoAssertionError *)error
                                                                   withNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (IOSObjectArray *)getUnfilteredStackTrace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithBoolean:(jboolean)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithChar:(jchar)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithDouble:(jdouble)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithFloat:(jfloat)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithLong:(jlong)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgMockitoExceptionsBaseMockitoAssertionError)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *new_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *create_OrgMockitoExceptionsBaseMockitoAssertionError_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoAssertionError_initWithOrgMockitoExceptionsBaseMockitoAssertionError_withNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *self, OrgMockitoExceptionsBaseMockitoAssertionError *error, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *new_OrgMockitoExceptionsBaseMockitoAssertionError_initWithOrgMockitoExceptionsBaseMockitoAssertionError_withNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *error, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoAssertionError *create_OrgMockitoExceptionsBaseMockitoAssertionError_initWithOrgMockitoExceptionsBaseMockitoAssertionError_withNSString_(OrgMockitoExceptionsBaseMockitoAssertionError *error, NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoAssertionError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoAssertionError")
