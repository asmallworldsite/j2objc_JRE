//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/locks/AbstractQueuedLongSynchronizer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer")
#ifdef RESTRICT_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer
#define INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_) && (INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer || defined(INCLUDE_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer))
#define JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_

#define RESTRICT_JavaUtilConcurrentLocksAbstractOwnableSynchronizer 1
#define INCLUDE_JavaUtilConcurrentLocksAbstractOwnableSynchronizer 1
#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangThread;
@class JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject;
@class JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node;
@protocol JavaUtilCollection;

/*!
 @brief A version of <code>AbstractQueuedSynchronizer</code> in
  which synchronization state is maintained as a <code>long</code>.
 This class has exactly the same structure, properties, and methods
  as <code>AbstractQueuedSynchronizer</code> with the exception
  that all state-related parameters and results are defined
  as <code>long</code> rather than <code>int</code>. This class
  may be useful when creating synchronizers such as
  multilevel locks and barriers that require
  64 bits of state. 
 <p>See <code>AbstractQueuedSynchronizer</code> for usage
  notes and examples.
 @since 1.6
 @author Doug Lea
 */
@interface JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer : JavaUtilConcurrentLocksAbstractOwnableSynchronizer < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Acquires in exclusive mode, ignoring interrupts.Implemented
  by invoking at least once <code>tryAcquire</code>,
  returning on success.
 Otherwise the thread is queued, possibly
  repeatedly blocking and unblocking, invoking <code>tryAcquire</code>
  until success.  This method can be used
  to implement method <code>Lock.lock</code>.
 @param arg the acquire argument.  This value is conveyed to         
 <code>tryAcquire</code>  but is otherwise uninterpreted and         can represent anything you like.
 */
- (void)acquireWithLong:(jlong)arg;

/*!
 @brief Acquires in exclusive mode, aborting if interrupted.
 Implemented by first checking interrupt status, then invoking
  at least once <code>tryAcquire</code>, returning on
  success.  Otherwise the thread is queued, possibly repeatedly
  blocking and unblocking, invoking <code>tryAcquire</code>
  until success or the thread is interrupted.  This method can be
  used to implement method <code>Lock.lockInterruptibly</code>.
 @param arg the acquire argument.  This value is conveyed to         
 <code>tryAcquire</code>  but is otherwise uninterpreted and         can represent anything you like.
 @throw InterruptedExceptionif the current thread is interrupted
 */
- (void)acquireInterruptiblyWithLong:(jlong)arg;

/*!
 @brief Acquires in shared mode, ignoring interrupts.Implemented by
  first invoking at least once <code>tryAcquireShared</code>,
  returning on success.
 Otherwise the thread is queued, possibly
  repeatedly blocking and unblocking, invoking <code>tryAcquireShared</code>
  until success.
 @param arg the acquire argument.  This value is conveyed to         
 <code>tryAcquireShared</code>  but is otherwise uninterpreted         and can represent anything you like.
 */
- (void)acquireSharedWithLong:(jlong)arg;

/*!
 @brief Acquires in shared mode, aborting if interrupted.Implemented
  by first checking interrupt status, then invoking at least once 
 <code>tryAcquireShared</code>, returning on success.
 Otherwise the
  thread is queued, possibly repeatedly blocking and unblocking,
  invoking <code>tryAcquireShared</code> until success or the thread
  is interrupted.
 @param arg the acquire argument.  This value is conveyed to 
 <code>tryAcquireShared</code>  but is  otherwise uninterpreted and can represent anything
   you like.
 @throw InterruptedExceptionif the current thread is interrupted
 */
- (void)acquireSharedInterruptiblyWithLong:(jlong)arg;

/*!
 @brief Returns a collection containing threads that may be waiting to
  acquire in exclusive mode.This has the same properties
  as <code>getQueuedThreads</code> except that it only returns
  those threads waiting due to an exclusive acquire.
 @return the collection of threads
 */
- (id<JavaUtilCollection>)getExclusiveQueuedThreads;

/*!
 @brief Returns the first (longest-waiting) thread in the queue, or 
 <code>null</code> if no threads are currently queued.
 <p>In this implementation, this operation normally returns in
  constant time, but may iterate upon contention if other threads are
  concurrently modifying the queue.
 @return the first (longest-waiting) thread in the queue, or
          <code>null</code> if no threads are currently queued
 */
- (JavaLangThread *)getFirstQueuedThread;

/*!
 @brief Returns a collection containing threads that may be waiting to
  acquire.Because the actual set of threads may change
  dynamically while constructing this result, the returned
  collection is only a best-effort estimate.
 The elements of the
  returned collection are in no particular order.  This method is
  designed to facilitate construction of subclasses that provide
  more extensive monitoring facilities.
 @return the collection of threads
 */
- (id<JavaUtilCollection>)getQueuedThreads;

/*!
 @brief Returns an estimate of the number of threads waiting to
  acquire.The value is only an estimate because the number of
  threads may change dynamically while this method traverses
  internal data structures.
 This method is designed for use in
  monitoring system state, not for synchronization control.
 @return the estimated number of threads waiting to acquire
 */
- (jint)getQueueLength;

/*!
 @brief Returns a collection containing threads that may be waiting to
  acquire in shared mode.This has the same properties
  as <code>getQueuedThreads</code> except that it only returns
  those threads waiting due to a shared acquire.
 @return the collection of threads
 */
- (id<JavaUtilCollection>)getSharedQueuedThreads;

/*!
 @brief Returns a collection containing those threads that may be
  waiting on the given condition associated with this
  synchronizer.Because the actual set of threads may change
  dynamically while constructing this result, the returned
  collection is only a best-effort estimate.
 The elements of the
  returned collection are in no particular order.
 @param condition the condition
 @return the collection of threads
 @throw IllegalMonitorStateExceptionif exclusive synchronization
          is not held
 @throw IllegalArgumentExceptionif the given condition is
          not associated with this synchronizer
 @throw NullPointerExceptionif the condition is null
 */
- (id<JavaUtilCollection>)getWaitingThreadsWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *)condition;

/*!
 @brief Returns an estimate of the number of threads waiting on the
  given condition associated with this synchronizer.Note that
  because timeouts and interrupts may occur at any time, the
  estimate serves only as an upper bound on the actual number of
  waiters.
 This method is designed for use in monitoring system
  state, not for synchronization control.
 @param condition the condition
 @return the estimated number of waiting threads
 @throw IllegalMonitorStateExceptionif exclusive synchronization
          is not held
 @throw IllegalArgumentExceptionif the given condition is
          not associated with this synchronizer
 @throw NullPointerExceptionif the condition is null
 */
- (jint)getWaitQueueLengthWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *)condition;

/*!
 @brief Queries whether any threads have ever contended to acquire this
  synchronizer; that is, if an acquire method has ever blocked.
 <p>In this implementation, this operation returns in
  constant time.
 @return <code>true</code> if there has ever been contention
 */
- (jboolean)hasContended;

/*!
 @brief Queries whether any threads have been waiting to acquire longer
  than the current thread.
 <p>An invocation of this method is equivalent to (but may be
  more efficient than): 
 @code
  getFirstQueuedThread() != Thread.currentThread()
    && hasQueuedThreads()
 
@endcode
  
 <p>Note that because cancellations due to interrupts and
  timeouts may occur at any time, a <code>true</code> return does not
  guarantee that some other thread will acquire before the current
  thread.  Likewise, it is possible for another thread to win a
  race to enqueue after this method has returned <code>false</code>,
  due to the queue being empty. 
 <p>This method is designed to be used by a fair synchronizer to
  avoid <a href="AbstractQueuedSynchronizer.html#barging">barging</a>.
  Such a synchronizer's <code>tryAcquire</code> method should return 
 <code>false</code>, and its <code>tryAcquireShared</code> method should
  return a negative value, if this method returns <code>true</code>
  (unless this is a reentrant acquire).  For example, the <code>tryAcquire</code>
  method for a fair, reentrant, exclusive mode
  synchronizer might look like this: 
 @code
  protected boolean tryAcquire(int arg) {
    if (isHeldExclusively()) {
      // A reentrant acquire; increment hold count
      return true;
    } else if (hasQueuedPredecessors()) {
      return false;
    } else {
      // try to acquire normally
    }  }
 
@endcode
 @return <code>true</code> if there is a queued thread preceding the
          current thread, and <code>false</code> if the current thread
          is at the head of the queue or the queue is empty
 @since 1.7
 */
- (jboolean)hasQueuedPredecessors;

/*!
 @brief Queries whether any threads are waiting to acquire.Note that
  because cancellations due to interrupts and timeouts may occur
  at any time, a <code>true</code> return does not guarantee that any
  other thread will ever acquire.
 <p>In this implementation, this operation returns in
  constant time.
 @return <code>true</code> if there may be other threads waiting to acquire
 */
- (jboolean)hasQueuedThreads;

/*!
 @brief Queries whether any threads are waiting on the given condition
  associated with this synchronizer.Note that because timeouts
  and interrupts may occur at any time, a <code>true</code> return
  does not guarantee that a future <code>signal</code> will awaken
  any threads.
 This method is designed primarily for use in
  monitoring of the system state.
 @param condition the condition
 @return <code>true</code> if there are any waiting threads
 @throw IllegalMonitorStateExceptionif exclusive synchronization
          is not held
 @throw IllegalArgumentExceptionif the given condition is
          not associated with this synchronizer
 @throw NullPointerExceptionif the condition is null
 */
- (jboolean)hasWaitersWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *)condition;

/*!
 @brief Returns true if the given thread is currently queued.
 <p>This implementation traverses the queue to determine
  presence of the given thread.
 @param thread the thread
 @return <code>true</code> if the given thread is on the queue
 @throw NullPointerExceptionif the thread is null
 */
- (jboolean)isQueuedWithJavaLangThread:(JavaLangThread *)thread;

/*!
 @brief Queries whether the given ConditionObject
  uses this synchronizer as its lock.
 @param condition the condition
 @return <code>true</code> if owned
 @throw NullPointerExceptionif the condition is null
 */
- (jboolean)ownsWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *)condition;

/*!
 @brief Releases in exclusive mode.Implemented by unblocking one or
  more threads if <code>tryRelease</code> returns true.
 This method can be used to implement method <code>Lock.unlock</code>.
 @param arg the release argument.  This value is conveyed to         
 <code>tryRelease</code>  but is otherwise uninterpreted and         can represent anything you like.
 @return the value returned from <code>tryRelease</code>
 */
- (jboolean)release__WithLong:(jlong)arg;

/*!
 @brief Releases in shared mode.Implemented by unblocking one or more
  threads if <code>tryReleaseShared</code> returns true.
 @param arg the release argument.  This value is conveyed to         
 <code>tryReleaseShared</code>  but is otherwise uninterpreted         and can represent anything you like.
 @return the value returned from <code>tryReleaseShared</code>
 */
- (jboolean)releaseSharedWithLong:(jlong)arg;

/*!
 @brief Returns a string identifying this synchronizer, as well as its state.
 The state, in brackets, includes the String <code>"State ="</code>
  followed by the current value of <code>getState</code>, and either 
 <code>"nonempty"</code> or <code>"empty"</code> depending on whether the
  queue is empty.
 @return a string identifying this synchronizer, as well as its state
 */
- (NSString *)description;

/*!
 @brief Attempts to acquire in exclusive mode, aborting if interrupted,
  and failing if the given timeout elapses.Implemented by first
  checking interrupt status, then invoking at least once <code>tryAcquire</code>
 , returning on success.
 Otherwise, the thread is
  queued, possibly repeatedly blocking and unblocking, invoking 
 <code>tryAcquire</code> until success or the thread is interrupted
  or the timeout elapses.  This method can be used to implement method 
 <code>Lock.tryLock(long, TimeUnit)</code>.
 @param arg the acquire argument.  This value is conveyed to         
 <code>tryAcquire</code>  but is otherwise uninterpreted and         can represent anything you like.
 @param nanosTimeout the maximum number of nanoseconds to wait
 @return <code>true</code> if acquired; <code>false</code> if timed out
 @throw InterruptedExceptionif the current thread is interrupted
 */
- (jboolean)tryAcquireNanosWithLong:(jlong)arg
                           withLong:(jlong)nanosTimeout;

/*!
 @brief Attempts to acquire in shared mode, aborting if interrupted, and
  failing if the given timeout elapses.Implemented by first
  checking interrupt status, then invoking at least once <code>tryAcquireShared</code>
 , returning on success.
 Otherwise, the
  thread is queued, possibly repeatedly blocking and unblocking,
  invoking <code>tryAcquireShared</code> until success or the thread
  is interrupted or the timeout elapses.
 @param arg the acquire argument.  This value is conveyed to         
 <code>tryAcquireShared</code>  but is otherwise uninterpreted         and can represent anything you like.
 @param nanosTimeout the maximum number of nanoseconds to wait
 @return <code>true</code> if acquired; <code>false</code> if timed out
 @throw InterruptedExceptionif the current thread is interrupted
 */
- (jboolean)tryAcquireSharedNanosWithLong:(jlong)arg
                                 withLong:(jlong)nanosTimeout;

#pragma mark Protected

/*!
 @brief Creates a new <code>AbstractQueuedLongSynchronizer</code> instance
  with initial synchronization state of zero.
 */
- (instancetype __nonnull)init;

/*!
 @brief Atomically sets synchronization state to the given updated
  value if the current state value equals the expected value.
 This operation has memory semantics of a <code>volatile</code> read
  and write.
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful. False return indicates that the actual
          value was not equal to the expected value.
 */
- (jboolean)compareAndSetStateWithLong:(jlong)expect
                              withLong:(jlong)update;

/*!
 @brief Returns the current value of synchronization state.
 This operation has memory semantics of a <code>volatile</code> read.
 @return current state value
 */
- (jlong)getState;

/*!
 @brief Returns <code>true</code> if synchronization is held exclusively with
  respect to the current (calling) thread.This method is invoked
  upon each call to a non-waiting <code>ConditionObject</code> method.
 (Waiting methods instead invoke <code>release</code>.)
  
 <p>The default implementation throws <code>UnsupportedOperationException</code>
 . This method is invoked
  internally only within <code>ConditionObject</code> methods, so need
  not be defined if conditions are not used.
 @return <code>true</code> if synchronization is held exclusively;
          <code>false</code> otherwise
 @throw UnsupportedOperationExceptionif conditions are not supported
 */
- (jboolean)isHeldExclusively;

/*!
 @brief Sets the value of synchronization state.
 This operation has memory semantics of a <code>volatile</code> write.
 @param newState the new state value
 */
- (void)setStateWithLong:(jlong)newState;

/*!
 @brief Attempts to acquire in exclusive mode.This method should query
  if the state of the object permits it to be acquired in the
  exclusive mode, and if so to acquire it.
 <p>This method is always invoked by the thread performing
  acquire.  If this method reports failure, the acquire method
  may queue the thread, if it is not already queued, until it is
  signalled by a release from some other thread. This can be used
  to implement method <code>Lock.tryLock()</code>.
  
 <p>The default
  implementation throws <code>UnsupportedOperationException</code>.
 @param arg the acquire argument. This value is always the one         passed to an acquire method, or is the value saved on entry
          to a condition wait.  The value is otherwise uninterpreted
          and can represent anything you like.
 @return <code>true</code> if successful. Upon success, this object has
          been acquired.
 @throw IllegalMonitorStateExceptionif acquiring would place this
          synchronizer in an illegal state. This exception must be
          thrown in a consistent fashion for synchronization to work
          correctly.
 @throw UnsupportedOperationExceptionif exclusive mode is not supported
 */
- (jboolean)tryAcquireWithLong:(jlong)arg;

/*!
 @brief Attempts to acquire in shared mode.This method should query if
  the state of the object permits it to be acquired in the shared
  mode, and if so to acquire it.
 <p>This method is always invoked by the thread performing
  acquire.  If this method reports failure, the acquire method
  may queue the thread, if it is not already queued, until it is
  signalled by a release from some other thread. 
 <p>The default implementation throws <code>UnsupportedOperationException</code>
 .
 @param arg the acquire argument. This value is always the one         passed to an acquire method, or is the value saved on entry
          to a condition wait.  The value is otherwise uninterpreted
          and can represent anything you like.
 @return a negative value on failure; zero if acquisition in shared
          mode succeeded but no subsequent shared-mode acquire can
          succeed; and a positive value if acquisition in shared
          mode succeeded and subsequent shared-mode acquires might
          also succeed, in which case a subsequent waiting thread
          must check availability. (Support for three different
          return values enables this method to be used in contexts
          where acquires only sometimes act exclusively.)  Upon
          success, this object has been acquired.
 @throw IllegalMonitorStateExceptionif acquiring would place this
          synchronizer in an illegal state. This exception must be
          thrown in a consistent fashion for synchronization to work
          correctly.
 @throw UnsupportedOperationExceptionif shared mode is not supported
 */
- (jlong)tryAcquireSharedWithLong:(jlong)arg;

/*!
 @brief Attempts to set the state to reflect a release in exclusive
  mode.
 <p>This method is always invoked by the thread performing release. 
 <p>The default implementation throws 
 <code>UnsupportedOperationException</code>.
 @param arg the release argument. This value is always the one         passed to a release method, or the current state value upon
          entry to a condition wait.  The value is otherwise
          uninterpreted and can represent anything you like.
 @return <code>true</code> if this object is now in a fully released
          state, so that any waiting threads may attempt to acquire;
          and <code>false</code> otherwise.
 @throw IllegalMonitorStateExceptionif releasing would place this
          synchronizer in an illegal state. This exception must be
          thrown in a consistent fashion for synchronization to work
          correctly.
 @throw UnsupportedOperationExceptionif exclusive mode is not supported
 */
- (jboolean)tryReleaseWithLong:(jlong)arg;

/*!
 @brief Attempts to set the state to reflect a release in shared mode.
 <p>This method is always invoked by the thread performing release. 
 <p>The default implementation throws 
 <code>UnsupportedOperationException</code>.
 @param arg the release argument. This value is always the one         passed to a release method, or the current state value upon
          entry to a condition wait.  The value is otherwise
          uninterpreted and can represent anything you like.
 @return <code>true</code> if this release of shared mode may permit a
          waiting acquire (shared or exclusive) to succeed; and         
 <code>false</code> otherwise
 @throw IllegalMonitorStateExceptionif releasing would place this
          synchronizer in an illegal state. This exception must be
          thrown in a consistent fashion for synchronization to work
          correctly.
 @throw UnsupportedOperationExceptionif shared mode is not supported
 */
- (jboolean)tryReleaseSharedWithLong:(jlong)arg;

#pragma mark Package-Private

/*!
 @brief Acquires in exclusive uninterruptible mode for thread already in
  queue.Used by condition wait methods as well as acquire.
 @param node the node
 @param arg the acquire argument
 @return <code>true</code> if interrupted while waiting
 */
- (jboolean)acquireQueuedWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *)node
                                                                           withLong:(jlong)arg;

/*!
 @brief Returns <code>true</code> if the apparent first queued thread, if one
  exists, is waiting in exclusive mode.If this method returns 
 <code>true</code>, and the current thread is attempting to acquire in
  shared mode (that is, this method is invoked from <code>tryAcquireShared</code>
 ) then it is guaranteed that the current thread
  is not the first queued thread.
 Used only as a heuristic in
  ReentrantReadWriteLock.
 */
- (jboolean)apparentlyFirstQueuedIsExclusive;

/*!
 @brief Invokes release with current state value; returns saved state.
 Cancels node and throws exception on failure.
 @param node the condition node for this wait
 @return previous sync state
 */
- (jlong)fullyReleaseWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *)node;

/*!
 @brief Returns true if a node, always one that was initially placed on
  a condition queue, is now waiting to reacquire on sync queue.
 @param node the node
 @return true if is reacquiring
 */
- (jboolean)isOnSyncQueueWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *)node;

/*!
 @brief Convenience method to interrupt current thread.
 */
+ (void)selfInterrupt;

/*!
 @brief Transfers node, if necessary, to sync queue after a cancelled wait.
 Returns true if thread was cancelled before being signalled.
 @param node the node
 @return true if cancelled before the node was signalled
 */
- (jboolean)transferAfterCancelledWaitWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *)node;

/*!
 @brief Transfers a node from a condition queue onto sync queue.
 Returns true if successful.
 @param node the node
 @return true if successfully transferred (else the node was
  cancelled before signal)
 */
- (jboolean)transferForSignalWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *)node;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer)

/*!
 @brief The number of nanoseconds for which it is faster to spin
  rather than to use timed park.A rough estimate suffices
  to improve responsiveness with very short timeouts.
 */
inline jlong JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_get_SPIN_FOR_TIMEOUT_THRESHOLD(void);
#define JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_SPIN_FOR_TIMEOUT_THRESHOLD 1000LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer, SPIN_FOR_TIMEOUT_THRESHOLD, jlong)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_init(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *self);

FOUNDATION_EXPORT void JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_selfInterrupt(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer)

#endif

#if !defined (JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject_) && (INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer || defined(INCLUDE_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject))
#define JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject_

#define RESTRICT_JavaUtilConcurrentLocksCondition 1
#define INCLUDE_JavaUtilConcurrentLocksCondition 1
#include "java/util/concurrent/locks/Condition.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer;
@class JavaUtilConcurrentTimeUnit;
@class JavaUtilDate;
@protocol JavaUtilCollection;

/*!
 @brief Condition implementation for a <code>AbstractQueuedLongSynchronizer</code>
  serving as the basis of a <code>Lock</code>
  implementation.
 <p>Method documentation for this class describes mechanics,
  not behavioral specifications from the point of view of Lock
  and Condition users. Exported versions of this class will in
  general need to be accompanied by documentation describing
  condition semantics that rely on those of the associated 
 <code>AbstractQueuedLongSynchronizer</code>.
  
 <p>This class is Serializable, but all fields are transient,
  so deserialized conditions have no waiters.
 @since 1.6
 */
@interface JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject : NSObject < JavaUtilConcurrentLocksCondition, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new <code>ConditionObject</code> instance.
 */
- (instancetype __nonnull)initWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *)outer$;

/*!
 @brief Implements interruptible condition wait.
 <ol>
  <li>If current thread is interrupted, throw InterruptedException. 
 <li>Save lock state returned by <code>getState</code>.
  <li>Invoke <code>release</code> with saved state as argument,
      throwing IllegalMonitorStateException if it fails. 
 <li>Block until signalled or interrupted. 
 <li>Reacquire by invoking specialized version of
      <code>acquire</code> with saved state as argument. 
 <li>If interrupted while blocked in step 4, throw InterruptedException. 
 </ol>
 */
- (void)await;

/*!
 @brief Implements timed condition wait.
 <ol>
  <li>If current thread is interrupted, throw InterruptedException. 
 <li>Save lock state returned by <code>getState</code>.
  <li>Invoke <code>release</code> with saved state as argument,
      throwing IllegalMonitorStateException if it fails. 
 <li>Block until signalled, interrupted, or timed out. 
 <li>Reacquire by invoking specialized version of
      <code>acquire</code> with saved state as argument. 
 <li>If interrupted while blocked in step 4, throw InterruptedException. 
 <li>If timed out while blocked in step 4, return false, else true. 
 </ol>
 */
- (jboolean)awaitWithLong:(jlong)time
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Implements timed condition wait.
 <ol>
  <li>If current thread is interrupted, throw InterruptedException. 
 <li>Save lock state returned by <code>getState</code>.
  <li>Invoke <code>release</code> with saved state as argument,
      throwing IllegalMonitorStateException if it fails. 
 <li>Block until signalled, interrupted, or timed out. 
 <li>Reacquire by invoking specialized version of
      <code>acquire</code> with saved state as argument. 
 <li>If interrupted while blocked in step 4, throw InterruptedException. 
 </ol>
 */
- (jlong)awaitNanosWithLong:(jlong)nanosTimeout;

/*!
 @brief Implements uninterruptible condition wait.
 <ol>
  <li>Save lock state returned by <code>getState</code>.
  <li>Invoke <code>release</code> with saved state as argument,
      throwing IllegalMonitorStateException if it fails. 
 <li>Block until signalled. 
 <li>Reacquire by invoking specialized version of
      <code>acquire</code> with saved state as argument. 
 </ol>
 */
- (void)awaitUninterruptibly;

/*!
 @brief Implements absolute timed condition wait.
 <ol>
  <li>If current thread is interrupted, throw InterruptedException. 
 <li>Save lock state returned by <code>getState</code>.
  <li>Invoke <code>release</code> with saved state as argument,
      throwing IllegalMonitorStateException if it fails. 
 <li>Block until signalled, interrupted, or timed out. 
 <li>Reacquire by invoking specialized version of
      <code>acquire</code> with saved state as argument. 
 <li>If interrupted while blocked in step 4, throw InterruptedException. 
 <li>If timed out while blocked in step 4, return false, else true. 
 </ol>
 */
- (jboolean)awaitUntilWithJavaUtilDate:(JavaUtilDate *)deadline;

/*!
 @brief Moves the longest-waiting thread, if one exists, from the
  wait queue for this condition to the wait queue for the
  owning lock.
 @throw IllegalMonitorStateExceptionif <code>isHeldExclusively</code>
          returns <code>false</code>
 */
- (void)signal;

/*!
 @brief Moves all threads from the wait queue for this condition to
  the wait queue for the owning lock.
 @throw IllegalMonitorStateExceptionif <code>isHeldExclusively</code>
          returns <code>false</code>
 */
- (void)signalAll;

#pragma mark Protected

/*!
 @brief Returns a collection containing those threads that may be
  waiting on this Condition.
 Implements <code>AbstractQueuedLongSynchronizer.getWaitingThreads(ConditionObject)</code>.
 @return the collection of threads
 @throw IllegalMonitorStateExceptionif <code>isHeldExclusively</code>
          returns <code>false</code>
 */
- (id<JavaUtilCollection>)getWaitingThreads;

/*!
 @brief Returns an estimate of the number of threads waiting on
  this condition.
 Implements <code>AbstractQueuedLongSynchronizer.getWaitQueueLength(ConditionObject)</code>.
 @return the estimated number of waiting threads
 @throw IllegalMonitorStateExceptionif <code>isHeldExclusively</code>
          returns <code>false</code>
 */
- (jint)getWaitQueueLength;

/*!
 @brief Queries whether any threads are waiting on this condition.
 Implements <code>AbstractQueuedLongSynchronizer.hasWaiters(ConditionObject)</code>.
 @return <code>true</code> if there are any waiting threads
 @throw IllegalMonitorStateExceptionif <code>isHeldExclusively</code>
          returns <code>false</code>
 */
- (jboolean)hasWaiters;

#pragma mark Package-Private

/*!
 @brief Returns true if this condition was created by the given
  synchronization object.
 @return <code>true</code> if owned
 */
- (jboolean)isOwnedByWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer:(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *)sync;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject_initWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *self, JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *outer$);

FOUNDATION_EXPORT JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *new_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject_initWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject *create_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject_initWithJavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer *outer$);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer_ConditionObject)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksAbstractQueuedLongSynchronizer")
