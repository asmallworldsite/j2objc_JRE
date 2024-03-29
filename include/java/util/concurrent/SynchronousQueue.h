//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/SynchronousQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue")
#ifdef RESTRICT_JavaUtilConcurrentSynchronousQueue
#define INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue 1
#endif
#undef RESTRICT_JavaUtilConcurrentSynchronousQueue
#ifdef INCLUDE_JavaUtilConcurrentSynchronousQueue_FifoWaitQueue
#define INCLUDE_JavaUtilConcurrentSynchronousQueue_WaitQueue 1
#endif
#ifdef INCLUDE_JavaUtilConcurrentSynchronousQueue_LifoWaitQueue
#define INCLUDE_JavaUtilConcurrentSynchronousQueue_WaitQueue 1
#endif
#ifdef INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferQueue
#define INCLUDE_JavaUtilConcurrentSynchronousQueue_Transferer 1
#endif
#ifdef INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferStack
#define INCLUDE_JavaUtilConcurrentSynchronousQueue_Transferer 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue))
#define JavaUtilConcurrentSynchronousQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "java/util/AbstractQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "java/util/concurrent/BlockingQueue.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief A blocking queue in which each insert
  operation must wait for a corresponding remove operation by another
  thread, and vice versa.A synchronous queue does not have any
  internal capacity, not even a capacity of one.
 You cannot 
 <code>peek</code> at a synchronous queue because an element is only
  present when you try to remove it; you cannot insert an element
  (using any method) unless another thread is trying to remove it;
  you cannot iterate as there is nothing to iterate.  The 
 <em>head</em> of the queue is the element that the first queued
  inserting thread is trying to add to the queue; if there is no such
  queued thread then no element is available for removal and 
 <code>poll()</code> will return <code>null</code>.  For purposes of other 
 <code>Collection</code> methods (for example <code>contains</code>), a 
 <code>SynchronousQueue</code> acts as an empty collection.  This queue
  does not permit <code>null</code> elements. 
 <p>Synchronous queues are similar to rendezvous channels used in
  CSP and Ada. They are well suited for handoff designs, in which an
  object running in one thread must sync up with an object running
  in another thread in order to hand it some information, event, or
  task. 
 <p>This class supports an optional fairness policy for ordering
  waiting producer and consumer threads.  By default, this ordering
  is not guaranteed. However, a queue constructed with fairness set
  to <code>true</code> grants threads access in FIFO order. 
 <p>This class and its iterator implement all of the <em>optional</em>
  methods of the <code>Collection</code> and <code>Iterator</code> interfaces. 
 <p>This class is a member of the 
 <a href="{@@docRoot}/java.base/java/util/package-summary.html#CollectionsFramework">
  Java Collections Framework</a>.
 @since 1.5
 @author Doug Lea and Bill Scherer and Michael Scott
 */
@interface JavaUtilConcurrentSynchronousQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a <code>SynchronousQueue</code> with nonfair access policy.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a <code>SynchronousQueue</code> with the specified fairness policy.
 @param fair if true, waiting threads contend in FIFO order for         access; otherwise the order is unspecified.
 */
- (instancetype __nonnull)initWithBoolean:(jboolean)fair;

/*!
 @brief Does nothing.
 A <code>SynchronousQueue</code> has no internal capacity.
 */
- (void)clear;

/*!
 @brief Always returns <code>false</code>.
 A <code>SynchronousQueue</code> has no internal capacity.
 @param o the element
 @return <code>false</code>
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns <code>false</code> unless the given collection is empty.
 A <code>SynchronousQueue</code> has no internal capacity.
 @param c the collection
 @return <code>false</code> unless given collection is empty
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throw UnsupportedOperationException
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throw UnsupportedOperationException
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

/*!
 @brief Always returns <code>true</code>.
 A <code>SynchronousQueue</code> has no internal capacity.
 @return <code>true</code>
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an empty iterator in which <code>hasNext</code> always returns 
 <code>false</code>.
 @return an empty iterator
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element into this queue, if another thread is
  waiting to receive it.
 @param e the element to add
 @return <code>true</code> if the element was added to this queue, else
          <code>false</code>
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue, waiting if necessary
  up to the specified wait time for another thread to receive it.
 @return <code>true</code> if successful, or <code>false</code> if the
          specified waiting time elapses before a consumer appears
 @throw InterruptedException
 @throw NullPointerException
 */
- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Always returns <code>null</code>.
 A <code>SynchronousQueue</code> does not return elements
  unless actively waited on.
 @return <code>null</code>
 */
- (id)peek;

/*!
 @brief Retrieves and removes the head of this queue, if another thread
  is currently making an element available.
 @return the head of this queue, or <code>null</code> if no
          element is available
 */
- (id)poll;

/*!
 @brief Retrieves and removes the head of this queue, waiting
  if necessary up to the specified wait time, for another thread
  to insert it.
 @return the head of this queue, or <code>null</code> if the
          specified waiting time elapses before an element is present
 @throw InterruptedException
 */
- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Adds the specified element to this queue, waiting if necessary for
  another thread to receive it.
 @throw InterruptedException
 @throw NullPointerException
 */
- (void)putWithId:(id)e;

/*!
 @brief Always returns zero.
 A <code>SynchronousQueue</code> has no internal capacity.
 @return zero
 */
- (jint)remainingCapacity;

/*!
 @brief Always returns <code>false</code>.
 A <code>SynchronousQueue</code> has no internal capacity.
 @param o the element to remove
 @return <code>false</code>
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Always returns <code>false</code>.
 A <code>SynchronousQueue</code> has no internal capacity.
 @param c the collection
 @return <code>false</code>
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Always returns <code>false</code>.
 A <code>SynchronousQueue</code> has no internal capacity.
 @param c the collection
 @return <code>false</code>
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Always returns zero.
 A <code>SynchronousQueue</code> has no internal capacity.
 @return zero
 */
- (jint)size;

/*!
 @brief Returns an empty spliterator in which calls to 
 <code>trySplit</code> always return <code>null</code>.
 @return an empty spliterator
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
  for another thread to insert it.
 @return the head of this queue
 @throw InterruptedException
 */
- (id)take;

/*!
 @brief Returns a zero-length array.
 @return a zero-length array
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Sets the zeroth element of the specified array to <code>null</code>
  (if the array has non-zero length) and returns it.
 @param a the array
 @return the specified array
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

/*!
 @brief Always returns <code>"[]"</code>.
 @return <code>"[]"</code>
 */
- (NSString *)description;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue)

/*!
 @brief The number of times to spin before blocking in timed waits.
 The value is empirically derived -- it works well across a
  variety of processors and OSes. Empirically, the best value
  seems not to vary with number of CPUs (beyond 2) so is just
  a constant.
 */
inline jint JavaUtilConcurrentSynchronousQueue_get_MAX_TIMED_SPINS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint JavaUtilConcurrentSynchronousQueue_MAX_TIMED_SPINS;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(JavaUtilConcurrentSynchronousQueue, MAX_TIMED_SPINS, jint)

/*!
 @brief The number of times to spin before blocking in untimed waits.
 This is greater than timed value because untimed waits spin
  faster since they don't need to check times on each spin.
 */
inline jint JavaUtilConcurrentSynchronousQueue_get_MAX_UNTIMED_SPINS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint JavaUtilConcurrentSynchronousQueue_MAX_UNTIMED_SPINS;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(JavaUtilConcurrentSynchronousQueue, MAX_UNTIMED_SPINS, jint)

/*!
 @brief The number of nanoseconds for which it is faster to spin
  rather than to use timed park.A rough estimate suffices.
 */
inline jlong JavaUtilConcurrentSynchronousQueue_get_SPIN_FOR_TIMEOUT_THRESHOLD(void);
#define JavaUtilConcurrentSynchronousQueue_SPIN_FOR_TIMEOUT_THRESHOLD 1000LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentSynchronousQueue, SPIN_FOR_TIMEOUT_THRESHOLD, jlong)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_init(JavaUtilConcurrentSynchronousQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *new_JavaUtilConcurrentSynchronousQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *create_JavaUtilConcurrentSynchronousQueue_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_initWithBoolean_(JavaUtilConcurrentSynchronousQueue *self, jboolean fair);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *new_JavaUtilConcurrentSynchronousQueue_initWithBoolean_(jboolean fair) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *create_JavaUtilConcurrentSynchronousQueue_initWithBoolean_(jboolean fair);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_Transferer_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_Transferer))
#define JavaUtilConcurrentSynchronousQueue_Transferer_

@class JavaLangBoolean;
@class JavaLangLong;

/*!
 @brief Shared internal API for dual stacks and queues.
 */
@interface JavaUtilConcurrentSynchronousQueue_Transferer : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Performs a put or take.
 @param e if non-null, the item to be handed to a consumer;           if null, requests that transfer return an item
            offered by producer.
 @param timed if this operation should timeout
 @param nanos the timeout, in nanoseconds
 @return if non-null, the item provided or received; if null,
          the operation failed due to timeout or interrupt --
          the caller can distinguish which of these occurred
          by checking Thread.interrupted.
 */
- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_Transferer)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_Transferer_init(JavaUtilConcurrentSynchronousQueue_Transferer *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_Transferer)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_TransferStack_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferStack))
#define JavaUtilConcurrentSynchronousQueue_TransferStack_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentSynchronousQueue_TransferStack_SNode;

/*!
 @brief Dual stack
 */
@interface JavaUtilConcurrentSynchronousQueue_TransferStack : JavaUtilConcurrentSynchronousQueue_Transferer {
 @public
  /*!
   @brief The head (top) of the stack
   */
  volatile_id head_;
}

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Spins/blocks until node s is matched by a fulfill operation.
 @param s the waiting node
 @param timed true if timed wait
 @param nanos timeout value
 @return matched node, or s if cancelled
 */
- (JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)awaitFulfillWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s
                                                                                                                       withBoolean:(jboolean)timed
                                                                                                                          withLong:(jlong)nanos;

- (jboolean)casHeadWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)h
                   withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)nh;

/*!
 @brief Unlinks s from the stack.
 */
- (void)cleanWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

/*!
 @brief Returns true if m has fulfilling bit set.
 */
+ (jboolean)isFulfillingWithInt:(jint)m;

/*!
 @brief Returns true if node s is at head or there is an active
  fulfiller.
 */
- (jboolean)shouldSpinWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

/*!
 @brief Creates or resets fields of a node.Called only from transfer
  where the node to push on stack is lazily created and
  reused when possible to help reduce intervals between reads
  and CASes of head and to avoid surges of garbage when CASes
  to push nodes fail due to contention.
 */
+ (JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)snodeWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s
                                                                                                                     withId:(id)e
                                                                 withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)next
                                                                                                                    withInt:(jint)mode;

/*!
 @brief Puts or takes an item.
 */
- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferStack)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack, head_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)

/*!
 @brief Node represents an unfulfilled consumer
 */
inline jint JavaUtilConcurrentSynchronousQueue_TransferStack_get_REQUEST(void);
#define JavaUtilConcurrentSynchronousQueue_TransferStack_REQUEST 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentSynchronousQueue_TransferStack, REQUEST, jint)

/*!
 @brief Node represents an unfulfilled producer
 */
inline jint JavaUtilConcurrentSynchronousQueue_TransferStack_get_DATA(void);
#define JavaUtilConcurrentSynchronousQueue_TransferStack_DATA 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentSynchronousQueue_TransferStack, DATA, jint)

/*!
 @brief Node is fulfilling another unfulfilled DATA or REQUEST
 */
inline jint JavaUtilConcurrentSynchronousQueue_TransferStack_get_FULFILLING(void);
#define JavaUtilConcurrentSynchronousQueue_TransferStack_FULFILLING 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentSynchronousQueue_TransferStack, FULFILLING, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferStack_init(JavaUtilConcurrentSynchronousQueue_TransferStack *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack *new_JavaUtilConcurrentSynchronousQueue_TransferStack_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack *create_JavaUtilConcurrentSynchronousQueue_TransferStack_init(void);

FOUNDATION_EXPORT jboolean JavaUtilConcurrentSynchronousQueue_TransferStack_isFulfillingWithInt_(jint m);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *JavaUtilConcurrentSynchronousQueue_TransferStack_snodeWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode_withId_withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode_withInt_(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *s, id e, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *next, jint mode);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferStack)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferStack_SNode))
#define JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThread;

/*!
 @brief Node class for TransferStacks.
 */
@interface JavaUtilConcurrentSynchronousQueue_TransferStack_SNode : NSObject {
 @public
  volatile_id next_;
  volatile_id match_;
  volatile_id waiter_;
  id item_;
  jint mode_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)item;

- (jboolean)casNextWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)cmp
                   withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)val;

- (jboolean)isCancelled;

/*!
 @brief Tries to cancel a wait by matching node to itself.
 */
- (void)tryCancel;

/*!
 @brief Tries to match node s to this node, if so, waking up thread.
 Fulfillers call tryMatch to identify their waiters.
  Waiters block until they have been matched.
 @param s the node to match
 @return true if successfully matched to s
 */
- (jboolean)tryMatchWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, next_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, match_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, waiter_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, item_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_initWithId_(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *self, id item);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *new_JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_initWithId_(id item) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *create_JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_initWithId_(id item);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_TransferQueue_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferQueue))
#define JavaUtilConcurrentSynchronousQueue_TransferQueue_

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode;

/*!
 @brief Dual Queue
 */
@interface JavaUtilConcurrentSynchronousQueue_TransferQueue : JavaUtilConcurrentSynchronousQueue_Transferer {
 @public
  /*!
   @brief Head of queue
   */
  volatile_id head_;
  /*!
   @brief Tail of queue
   */
  volatile_id tail_;
  /*!
   @brief Reference to a cancelled node that might not yet have been
  unlinked from queue because it was the last inserted node
  when it was cancelled.
   */
  volatile_id cleanMe_;
}

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Tries to cas nh as new head; if successful, unlink
  old head's next node to avoid garbage retention.
 */
- (void)advanceHeadWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)h
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)nh;

/*!
 @brief Tries to cas nt as new tail.
 */
- (void)advanceTailWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)t
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)nt;

/*!
 @brief Spins/blocks until node s is fulfilled.
 @param s the waiting node
 @param e the comparison value for checking match
 @param timed true if timed wait
 @param nanos timeout value
 @return matched item, or s if cancelled
 */
- (id)awaitFulfillWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)s
                                                                      withId:(id)e
                                                                 withBoolean:(jboolean)timed
                                                                    withLong:(jlong)nanos;

/*!
 @brief Tries to CAS cleanMe slot.
 */
- (jboolean)casCleanMeWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)cmp
                      withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)val;

/*!
 @brief Gets rid of cancelled node s with original predecessor pred.
 */
- (void)cleanWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)pred
             withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)s;

/*!
 @brief Puts or takes an item.
 */
- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferQueue)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, head_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, tail_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, cleanMe_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferQueue_init(JavaUtilConcurrentSynchronousQueue_TransferQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue *new_JavaUtilConcurrentSynchronousQueue_TransferQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue *create_JavaUtilConcurrentSynchronousQueue_TransferQueue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferQueue)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode))
#define JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_

@class JavaLangBoolean;
@class JavaLangThread;

/*!
 @brief Node class for TransferQueue.
 */
@interface JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode : NSObject {
 @public
  volatile_id next_;
  volatile_id item_;
  volatile_id waiter_;
  jboolean isData_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id)item
                         withBoolean:(jboolean)isData;

- (jboolean)casItemWithId:(id)cmp
                   withId:(id)val;

- (jboolean)casNextWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)cmp
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)val;

- (jboolean)isCancelled;

/*!
 @brief Returns true if this node is known to be off the queue
  because its next pointer has been forgotten due to
  an advanceHead operation.
 */
- (jboolean)isOffList;

/*!
 @brief Tries to cancel by CAS'ing ref to this as item.
 */
- (void)tryCancelWithId:(id)cmp;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, next_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, item_, id)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, waiter_, JavaLangThread *)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_initWithId_withBoolean_(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *self, id item, jboolean isData);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *new_JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_initWithId_withBoolean_(id item, jboolean isData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *create_JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_initWithId_withBoolean_(id item, jboolean isData);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_WaitQueue_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_WaitQueue))
#define JavaUtilConcurrentSynchronousQueue_WaitQueue_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface JavaUtilConcurrentSynchronousQueue_WaitQueue : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_WaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_WaitQueue_init(JavaUtilConcurrentSynchronousQueue_WaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_WaitQueue *new_JavaUtilConcurrentSynchronousQueue_WaitQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_WaitQueue *create_JavaUtilConcurrentSynchronousQueue_WaitQueue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_WaitQueue)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_LifoWaitQueue))
#define JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_

@interface JavaUtilConcurrentSynchronousQueue_LifoWaitQueue : JavaUtilConcurrentSynchronousQueue_WaitQueue

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_init(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_LifoWaitQueue *new_JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_LifoWaitQueue *create_JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue)

#endif

#if !defined (JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_) && (INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue || defined(INCLUDE_JavaUtilConcurrentSynchronousQueue_FifoWaitQueue))
#define JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_

@interface JavaUtilConcurrentSynchronousQueue_FifoWaitQueue : JavaUtilConcurrentSynchronousQueue_WaitQueue

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_init(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_FifoWaitQueue *new_JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_FifoWaitQueue *create_JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentSynchronousQueue")
