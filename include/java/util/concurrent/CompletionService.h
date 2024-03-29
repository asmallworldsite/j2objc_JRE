//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/CompletionService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentCompletionService")
#ifdef RESTRICT_JavaUtilConcurrentCompletionService
#define INCLUDE_ALL_JavaUtilConcurrentCompletionService 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentCompletionService 1
#endif
#undef RESTRICT_JavaUtilConcurrentCompletionService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentCompletionService_) && (INCLUDE_ALL_JavaUtilConcurrentCompletionService || defined(INCLUDE_JavaUtilConcurrentCompletionService))
#define JavaUtilConcurrentCompletionService_

@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;

/*!
 @brief A service that decouples the production of new asynchronous tasks
  from the consumption of the results of completed tasks.Producers
  <code>submit</code> tasks for execution.
 Consumers <code>take</code>
  completed tasks and process their results in the order they
  complete.  A <code>CompletionService</code> can for example be used to
  manage asynchronous I/O, in which tasks that perform reads are
  submitted in one part of a program or system, and then acted upon
  in a different part of the program when the reads complete,
  possibly in a different order than they were requested. 
 <p>Typically, a <code>CompletionService</code> relies on a separate 
 <code>Executor</code> to actually execute the tasks, in which case the 
 <code>CompletionService</code> only manages an internal completion
  queue. The <code>ExecutorCompletionService</code> class provides an
  implementation of this approach. 
 <p>Memory consistency effects: Actions in a thread prior to
  submitting a task to a <code>CompletionService</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  actions taken by that task, which in turn <i>happen-before</i>
  actions following a successful return from the corresponding <code>take()</code>.
 @since 1.5
 */
@protocol JavaUtilConcurrentCompletionService < JavaObject >

/*!
 @brief Submits a value-returning task for execution and returns a Future
  representing the pending results of the task.Upon completion,
  this task may be taken or polled.
 @param task the task to submit
 @return a Future representing pending completion of the task
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif the task is null
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

/*!
 @brief Submits a Runnable task for execution and returns a Future
  representing that task.Upon completion, this task may be
  taken or polled.
 @param task the task to submit
 @param result the result to return upon successful completion
 @return a Future representing pending completion of the task,
          and whose <code>get()</code> method will return the given
          result value upon completion
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif the task is null
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

/*!
 @brief Retrieves and removes the Future representing the next
  completed task, waiting if none are yet present.
 @return the Future representing the next completed task
 @throw InterruptedExceptionif interrupted while waiting
 */
- (id<JavaUtilConcurrentFuture>)take;

/*!
 @brief Retrieves and removes the Future representing the next
  completed task, or <code>null</code> if none are present.
 @return the Future representing the next completed task, or
          <code>null</code> if none are present
 */
- (id<JavaUtilConcurrentFuture>)poll;

/*!
 @brief Retrieves and removes the Future representing the next
  completed task, waiting if necessary up to the specified wait
  time if none are yet present.
 @param timeout how long to wait before giving up, in units of         
 <code>unit</code>
 @param unit a <code>TimeUnit</code>  determining how to interpret the
          <code>timeout</code>  parameter
 @return the Future representing the next completed task or
          <code>null</code> if the specified waiting time elapses
          before one is present
 @throw InterruptedExceptionif interrupted while waiting
 */
- (id<JavaUtilConcurrentFuture>)pollWithLong:(jlong)timeout
              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCompletionService)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCompletionService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentCompletionService")
