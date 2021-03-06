//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/NotifiedMethodInvocationReport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNotifiedMethodInvocationReport")
#ifdef RESTRICT_OrgMockitoInternalHandlerNotifiedMethodInvocationReport
#define INCLUDE_ALL_OrgMockitoInternalHandlerNotifiedMethodInvocationReport 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerNotifiedMethodInvocationReport 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerNotifiedMethodInvocationReport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalHandlerNotifiedMethodInvocationReport_) && (INCLUDE_ALL_OrgMockitoInternalHandlerNotifiedMethodInvocationReport || defined(INCLUDE_OrgMockitoInternalHandlerNotifiedMethodInvocationReport))
#define OrgMockitoInternalHandlerNotifiedMethodInvocationReport_

#define RESTRICT_OrgMockitoListenersMethodInvocationReport 1
#define INCLUDE_OrgMockitoListenersMethodInvocationReport 1
#include "org/mockito/listeners/MethodInvocationReport.h"

@class JavaLangThrowable;
@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief Report on a method call
 */
@interface OrgMockitoInternalHandlerNotifiedMethodInvocationReport : NSObject < OrgMockitoListenersMethodInvocationReport >

#pragma mark Public

/*!
 @brief Build a new <code>org.mockito.listeners.MethodInvocationReport</code> with a return value.
 @param invocation Information on the method call
 @param returnedValue The value returned by the method invocation
 */
- (instancetype __nonnull)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                          withId:(id)returnedValue;

/*!
 @brief Build a new <code>org.mockito.listeners.MethodInvocationReport</code> with a return value.
 @param invocation Information on the method call
 @param throwable Tha throwable raised by the method invocation
 */
- (instancetype __nonnull)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (jboolean)isEqual:(id)o;

- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

- (NSString *)getLocationOfStubbing;

- (id)getReturnedValue;

- (JavaLangThrowable *)getThrowable;

- (NSUInteger)hash;

- (jboolean)threwException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerNotifiedMethodInvocationReport)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(OrgMockitoInternalHandlerNotifiedMethodInvocationReport *self, id<OrgMockitoInvocationInvocation> invocation, id returnedValue);

FOUNDATION_EXPORT OrgMockitoInternalHandlerNotifiedMethodInvocationReport *new_OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(id<OrgMockitoInvocationInvocation> invocation, id returnedValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerNotifiedMethodInvocationReport *create_OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(id<OrgMockitoInvocationInvocation> invocation, id returnedValue);

FOUNDATION_EXPORT void OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withJavaLangThrowable_(OrgMockitoInternalHandlerNotifiedMethodInvocationReport *self, id<OrgMockitoInvocationInvocation> invocation, JavaLangThrowable *throwable);

FOUNDATION_EXPORT OrgMockitoInternalHandlerNotifiedMethodInvocationReport *new_OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withJavaLangThrowable_(id<OrgMockitoInvocationInvocation> invocation, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerNotifiedMethodInvocationReport *create_OrgMockitoInternalHandlerNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withJavaLangThrowable_(id<OrgMockitoInvocationInvocation> invocation, JavaLangThrowable *throwable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerNotifiedMethodInvocationReport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNotifiedMethodInvocationReport")
