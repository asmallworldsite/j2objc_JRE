//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/WrappingExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentWrappingExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentWrappingExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentWrappingExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentWrappingExecutorService))
#define ComGoogleCommonUtilConcurrentWrappingExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

/*!
 @brief An abstract <code>ExecutorService</code> that allows subclasses to wrap
  tasks before they are submitted to the underlying executor.
 <p>Note that task wrapping may occur even if the task is never executed. 
 <p>For delegation without task-wrapping, see <code>ForwardingExecutorService</code>.
 @author Chris Nokleberg
 */
@interface ComGoogleCommonUtilConcurrentWrappingExecutorService : NSObject < JavaUtilConcurrentExecutorService >

#pragma mark Public

- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)task
                                                    withId:(id __nonnull)result;

#pragma mark Protected

- (instancetype __nonnull)initPackagePrivateWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService> __nonnull)delegate;

/*!
 @brief Wraps a <code>Callable</code> for submission to the underlying executor.This method is also applied
  to any <code>Runnable</code> passed to the default implementation of <code>wrapTask(Runnable)</code>.
 */
- (id<JavaUtilConcurrentCallable>)wrapTaskWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable;

/*!
 @brief Wraps a <code>Runnable</code> for submission to the underlying executor.The default implementation
  delegates to <code>wrapTask(Callable)</code>.
 */
- (id<JavaLangRunnable>)wrapTaskWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentWrappingExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentWrappingExecutorService_initPackagePrivateWithJavaUtilConcurrentExecutorService_(ComGoogleCommonUtilConcurrentWrappingExecutorService *self, id<JavaUtilConcurrentExecutorService> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentWrappingExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService")
