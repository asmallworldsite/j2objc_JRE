//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/SimpleTimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSimpleTimeLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSimpleTimeLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSimpleTimeLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSimpleTimeLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSimpleTimeLimiter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSimpleTimeLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSimpleTimeLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentSimpleTimeLimiter))
#define ComGoogleCommonUtilConcurrentSimpleTimeLimiter_

#define RESTRICT_ComGoogleCommonUtilConcurrentTimeLimiter 1
#define INCLUDE_ComGoogleCommonUtilConcurrentTimeLimiter 1
#include "com/google/common/util/concurrent/TimeLimiter.h"

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutorService;

/*!
 @brief A TimeLimiter that runs method calls in the background using an <code>ExecutorService</code>.If the
  time limit expires for a given method call, the thread running the call will be interrupted.
 @author Kevin Bourrillion
 @author Jens Nyman
 @since 1.0
 */
@interface ComGoogleCommonUtilConcurrentSimpleTimeLimiter : NSObject < ComGoogleCommonUtilConcurrentTimeLimiter >

#pragma mark Public

- (id)callUninterruptiblyWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable
                                                          withLong:(jlong)timeoutDuration
                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)timeoutUnit;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable
                                           withLong:(jlong)timeoutDuration
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)timeoutUnit;

/*!
 @brief Creates a TimeLimiter instance using the given executor service to execute method calls.
 <p><b>Warning:</b> using a bounded executor may be counterproductive! If the thread pool fills
  up, any time callers spend waiting for a thread may count toward their time limit, and in this
  case the call may even time out before the target method is ever invoked.
 @param executor the ExecutorService that will execute the method calls on the target objects;      for example, a 
 <code>Executors.newCachedThreadPool()</code> .
 @since 22.0
 */
+ (ComGoogleCommonUtilConcurrentSimpleTimeLimiter *)createWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService> __nonnull)executor;

- (id)newProxyWithId:(id __nonnull)target
        withIOSClass:(IOSClass * __nonnull)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)timeoutUnit OBJC_METHOD_FAMILY_NONE;

- (void)runUninterruptiblyWithTimeoutWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)runnable
                                                 withLong:(jlong)timeoutDuration
                           withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)timeoutUnit;

- (void)runWithTimeoutWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)runnable
                                  withLong:(jlong)timeoutDuration
            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)timeoutUnit;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSimpleTimeLimiter)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSimpleTimeLimiter *ComGoogleCommonUtilConcurrentSimpleTimeLimiter_createWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSimpleTimeLimiter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSimpleTimeLimiter")
