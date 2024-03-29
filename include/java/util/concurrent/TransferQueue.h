//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/TransferQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentTransferQueue")
#ifdef RESTRICT_JavaUtilConcurrentTransferQueue
#define INCLUDE_ALL_JavaUtilConcurrentTransferQueue 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentTransferQueue 1
#endif
#undef RESTRICT_JavaUtilConcurrentTransferQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentTransferQueue_) && (INCLUDE_ALL_JavaUtilConcurrentTransferQueue || defined(INCLUDE_JavaUtilConcurrentTransferQueue))
#define JavaUtilConcurrentTransferQueue_

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "java/util/concurrent/BlockingQueue.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A <code>BlockingQueue</code> in which producers may wait for consumers
  to receive elements.A <code>TransferQueue</code> may be useful for
  example in message passing applications in which producers
  sometimes (using method <code>transfer</code>) await receipt of
  elements by consumers invoking <code>take</code> or <code>poll</code>, while
  at other times enqueue elements (via method <code>put</code>) without
  waiting for receipt.
 Non-blocking and 
 time-out versions of 
 <code>tryTransfer</code> are also available.
  A <code>TransferQueue</code> may also be queried, via <code>hasWaitingConsumer</code>
 , whether there are any threads waiting for
  items, which is a converse analogy to a <code>peek</code> operation. 
 <p>Like other blocking queues, a <code>TransferQueue</code> may be
  capacity bounded.  If so, an attempted transfer operation may
  initially block waiting for available space, and/or subsequently
  block waiting for reception by a consumer.  Note that in a queue
  with zero capacity, such as <code>SynchronousQueue</code>, <code>put</code>
  and <code>transfer</code> are effectively synonymous. 
 <p>This interface is a member of the 
 <a href="{@@docRoot}/java.base/java/util/package-summary.html#CollectionsFramework">
  Java Collections Framework</a>.
 @since 1.7
 @author Doug Lea
 */
@protocol JavaUtilConcurrentTransferQueue < JavaUtilConcurrentBlockingQueue, JavaObject >

/*!
 @brief Transfers the element to a waiting consumer immediately, if possible.
 <p>More precisely, transfers the specified element immediately
  if there exists a consumer already waiting to receive it (in 
 <code>take</code> or timed <code>poll</code>),
  otherwise returning <code>false</code> without enqueuing the element.
 @param e the element to transfer
 @return <code>true</code> if the element was transferred, else
          <code>false</code>
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this queue
 */
- (jboolean)tryTransferWithId:(id)e;

/*!
 @brief Transfers the element to a consumer, waiting if necessary to do so.
 <p>More precisely, transfers the specified element immediately
  if there exists a consumer already waiting to receive it (in 
 <code>take</code> or timed <code>poll</code>),
  else waits until the element is received by a consumer.
 @param e the element to transfer
 @throw InterruptedExceptionif interrupted while waiting,
          in which case the element is not left enqueued
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this queue
 */
- (void)transferWithId:(id)e;

/*!
 @brief Transfers the element to a consumer if it is possible to do so
  before the timeout elapses.
 <p>More precisely, transfers the specified element immediately
  if there exists a consumer already waiting to receive it (in 
 <code>take</code> or timed <code>poll</code>),
  else waits until the element is received by a consumer,
  returning <code>false</code> if the specified wait time elapses
  before the element can be transferred.
 @param e the element to transfer
 @param timeout how long to wait before giving up, in units of         
 <code>unit</code>
 @param unit a <code>TimeUnit</code>  determining how to interpret the
          <code>timeout</code>  parameter
 @return <code>true</code> if successful, or <code>false</code> if
          the specified waiting time elapses before completion,
          in which case the element is not left enqueued
 @throw InterruptedExceptionif interrupted while waiting,
          in which case the element is not left enqueued
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null
 @throw IllegalArgumentExceptionif some property of the specified
          element prevents it from being added to this queue
 */
- (jboolean)tryTransferWithId:(id)e
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Returns <code>true</code> if there is at least one consumer waiting
  to receive an element via <code>take</code> or
  timed <code>poll</code>.
 The return value represents a momentary state of affairs.
 @return <code>true</code> if there is at least one waiting consumer
 */
- (jboolean)hasWaitingConsumer;

/*!
 @brief Returns an estimate of the number of consumers waiting to
  receive elements via <code>take</code> or timed 
 <code>poll</code>.The return value is an
  approximation of a momentary state of affairs, that may be
  inaccurate if consumers have completed or given up waiting.
 The value may be useful for monitoring and heuristics, but
  not for synchronization control.  Implementations of this
  method are likely to be noticeably slower than those for 
 <code>hasWaitingConsumer</code>.
 @return the number of consumers waiting to receive elements
 */
- (jint)getWaitingConsumerCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentTransferQueue)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTransferQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentTransferQueue")
