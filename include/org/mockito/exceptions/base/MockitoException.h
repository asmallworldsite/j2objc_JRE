//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/base/MockitoException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoException")
#ifdef RESTRICT_OrgMockitoExceptionsBaseMockitoException
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsBaseMockitoException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsBaseMockitoException_) && (INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoException || defined(INCLUDE_OrgMockitoExceptionsBaseMockitoException))
#define OrgMockitoExceptionsBaseMockitoException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class IOSObjectArray;
@class JavaLangThrowable;

/*!
 @brief Raised by mockito to emit an error either due to Mockito, or due to the User.
 All exception classes that inherit from this class will have the stack trace filtered.
  Filtering removes Mockito internal stack trace elements to provide clean stack traces and improve productivity. 
 <p>
  The stack trace is filtered from mockito calls if you are using <code>getStackTrace()</code>.
  For debugging purpose though you can still access the full stacktrace using <code>getUnfilteredStackTrace()</code>.
  However note that other calls related to the stackTrace will refer to the filter stacktrace. 
 <p>
  Advanced users and framework integrators can control stack trace filtering behavior
  via <code>org.mockito.plugins.StackTraceCleanerProvider</code> classpath plugin.
 */
@interface OrgMockitoExceptionsBaseMockitoException : JavaLangRuntimeException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)t;

- (IOSObjectArray *)getUnfilteredStackTrace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsBaseMockitoException)

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoException_initWithNSString_withJavaLangThrowable_(OrgMockitoExceptionsBaseMockitoException *self, NSString *message, JavaLangThrowable *t);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *new_OrgMockitoExceptionsBaseMockitoException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *create_OrgMockitoExceptionsBaseMockitoException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *t);

FOUNDATION_EXPORT void OrgMockitoExceptionsBaseMockitoException_initWithNSString_(OrgMockitoExceptionsBaseMockitoException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *new_OrgMockitoExceptionsBaseMockitoException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsBaseMockitoException *create_OrgMockitoExceptionsBaseMockitoException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsBaseMockitoException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsBaseMockitoException")
