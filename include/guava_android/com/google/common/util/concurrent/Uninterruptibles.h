//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/Uninterruptibles.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUninterruptibles
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUninterruptibles

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentUninterruptibles_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles || defined(INCLUDE_ComGoogleCommonUtilConcurrentUninterruptibles))
#define ComGoogleCommonUtilConcurrentUninterruptibles_

@class JavaLangThread;
@class JavaUtilConcurrentCountDownLatch;
@class JavaUtilConcurrentSemaphore;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentLocksCondition;
@protocol JavaUtilConcurrentLocksLock;

/*!
 @brief Utilities for treating interruptible operations as uninterruptible.In all cases, if a thread is
  interrupted during such a call, the call continues to block until the result is available or the
  timeout elapses, and only then re-interrupts the thread.
 @author Anthony Zana
 @since 10.0
 */
@interface ComGoogleCommonUtilConcurrentUninterruptibles : NSObject

#pragma mark Public

/*!
 @brief Invokes <code>executor.
 </code><code>awaitTermination(long, TimeUnit)</code>
  uninterruptibly with no timeout.
 @since 30.0
 */
+ (void)awaitTerminationUninterruptiblyWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService> __nonnull)executor;

/*!
 @brief Invokes <code>executor.
 </code><code>awaitTermination(long, TimeUnit)</code>
  uninterruptibly.
 @since 30.0
 */
+ (jboolean)awaitTerminationUninterruptiblyWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService> __nonnull)executor
                                                                        withLong:(jlong)timeout
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>condition.
 </code><code>await(timeout, unit)</code>
  uninterruptibly.
 @since 23.6
 */
+ (jboolean)awaitUninterruptiblyWithJavaUtilConcurrentLocksCondition:(id<JavaUtilConcurrentLocksCondition> __nonnull)condition
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>latch.
 </code><code>await()</code> uninterruptibly.
 */
+ (void)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch * __nonnull)latch;

/*!
 @brief Invokes <code>latch.
 </code><code>await(timeout, unit)</code>
  uninterruptibly.
 */
+ (jboolean)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch * __nonnull)latch
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>future.
 </code><code>get()</code> uninterruptibly.
 <p>Similar methods: 
 <ul>
    <li>To retrieve a result from a <code>Future</code> that is already done, use <code>Futures.getDone</code>
 .
    <li>To treat <code>InterruptedException</code> uniformly with other exceptions, use <code>Futures.getChecked</code>
 .
    <li>To get uninterruptibility and remove checked exceptions, use <code>Futures.getUnchecked</code>
 .
  </ul>
 @throw ExecutionExceptionif the computation threw an exception
 @throw CancellationExceptionif the computation was cancelled
 */
+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture> __nonnull)future;

/*!
 @brief Invokes <code>future.
 </code><code>get(timeout, unit)</code> uninterruptibly.
 <p>Similar methods: 
 <ul>
    <li>To retrieve a result from a <code>Future</code> that is already done, use <code>Futures.getDone</code>
 .
    <li>To treat <code>InterruptedException</code> uniformly with other exceptions, use <code>Futures.getChecked</code>
 .
    <li>To get uninterruptibility and remove checked exceptions, use <code>Futures.getUnchecked</code>
 .
  </ul>
 @throw ExecutionExceptionif the computation threw an exception
 @throw CancellationExceptionif the computation was cancelled
 @throw TimeoutExceptionif the wait timed out
 */
+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture> __nonnull)future
                                            withLong:(jlong)timeout
                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>toJoin.
 </code><code>join()</code> uninterruptibly.
 */
+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread * __nonnull)toJoin;

/*!
 @brief Invokes <code>unit.
 </code><code>timedJoin(toJoin, timeout)</code>
  uninterruptibly.
 */
+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread * __nonnull)toJoin
                                     withLong:(jlong)timeout
               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>queue.
 </code><code>put(element)</code> uninterruptibly.
 @throw ClassCastExceptionif the class of the specified element prevents it from being added
      to the given queue
 @throw IllegalArgumentExceptionif some property of the specified element prevents it from
      being added to the given queue
 */
+ (void)putUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue> __nonnull)queue
                                                       withId:(id __nonnull)element;

/*!
 @brief Invokes <code>unit.
 </code><code>sleep(sleepFor)</code> uninterruptibly.
 */
+ (void)sleepUninterruptiblyWithLong:(jlong)sleepFor
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>queue.
 </code><code>take()</code> uninterruptibly.
 */
+ (id)takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue> __nonnull)queue;

/*!
 @brief Invokes <code>semaphore.
 </code><code>tryAcquire(permits,
  timeout, unit)</code>
  uninterruptibly.
 @since 18.0
 */
+ (jboolean)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(JavaUtilConcurrentSemaphore * __nonnull)semaphore
                                                             withInt:(jint)permits
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>semaphore.
 </code><code>tryAcquire(1,
  timeout, unit)</code>
  uninterruptibly.
 @since 18.0
 */
+ (jboolean)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(JavaUtilConcurrentSemaphore * __nonnull)semaphore
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Invokes <code>lock.
 </code><code>tryLock(timeout, unit)</code>
  uninterruptibly.
 @since 30.0
 */
+ (jboolean)tryLockUninterruptiblyWithJavaUtilConcurrentLocksLock:(id<JavaUtilConcurrentLocksLock> __nonnull)lock
                                                         withLong:(jlong)timeout
                                   withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUninterruptibles)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_(JavaUtilConcurrentCountDownLatch *latch);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentCountDownLatch *latch, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentLocksCondition_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentLocksCondition> condition, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_(JavaLangThread *toJoin);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_withLong_withJavaUtilConcurrentTimeUnit_(JavaLangThread *toJoin, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_(id<JavaUtilConcurrentFuture> future);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentFuture> future, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentBlockingQueue> queue);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_putUninterruptiblyWithJavaUtilConcurrentBlockingQueue_withId_(id<JavaUtilConcurrentBlockingQueue> queue, id element);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_sleepUninterruptiblyWithLong_withJavaUtilConcurrentTimeUnit_(jlong sleepFor, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentSemaphore *semaphore, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore_withInt_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentSemaphore *semaphore, jint permits, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_tryLockUninterruptiblyWithJavaUtilConcurrentLocksLock_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentLocksLock> lock, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_awaitTerminationUninterruptiblyWithJavaUtilConcurrentExecutorService_(id<JavaUtilConcurrentExecutorService> executor);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_awaitTerminationUninterruptiblyWithJavaUtilConcurrentExecutorService_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentExecutorService> executor, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUninterruptibles)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles")
