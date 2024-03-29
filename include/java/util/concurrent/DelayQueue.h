//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/DelayQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentDelayQueue")
#ifdef RESTRICT_JavaUtilConcurrentDelayQueue
#define INCLUDE_ALL_JavaUtilConcurrentDelayQueue 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentDelayQueue 1
#endif
#undef RESTRICT_JavaUtilConcurrentDelayQueue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentDelayQueue_) && (INCLUDE_ALL_JavaUtilConcurrentDelayQueue || defined(INCLUDE_JavaUtilConcurrentDelayQueue))
#define JavaUtilConcurrentDelayQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "java/util/AbstractQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "java/util/concurrent/BlockingQueue.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentDelayed;
@protocol JavaUtilIterator;

/*!
 @brief An unbounded blocking queue of 
 <code>Delayed</code> elements, in which an element can only be taken
  when its delay has expired.The <em>head</em> of the queue is that 
 <code>Delayed</code> element whose delay expired furthest in the
  past.
 If no delay has expired there is no head and <code>poll</code>
  will return <code>null</code>. Expiration occurs when an element's 
 <code>getDelay(TimeUnit.NANOSECONDS)</code> method returns a value less
  than or equal to zero.  Even though unexpired elements cannot be
  removed using <code>take</code> or <code>poll</code>, they are otherwise
  treated as normal elements. For example, the <code>size</code> method
  returns the count of both expired and unexpired elements.
  This queue does not permit null elements. 
 <p>This class and its iterator implement all of the <em>optional</em>
  methods of the <code>Collection</code> and <code>Iterator</code> interfaces.
  The Iterator provided in method <code>iterator()</code> is <em>not</em>
  guaranteed to traverse the elements of the DelayQueue in any
  particular order. 
 <p>This class is a member of the 
 <a href="{@@docRoot}/java.base/java/util/package-summary.html#CollectionsFramework">
  Java Collections Framework</a>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentDelayQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

/*!
 @brief Creates a new <code>DelayQueue</code> that is initially empty.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a <code>DelayQueue</code> initially containing the elements of the
  given collection of <code>Delayed</code> instances.
 @param c the collection of elements to initially contain
 @throw NullPointerExceptionif the specified collection or any
          of its elements are null
 */
- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element into this delay queue.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)addWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Atomically removes all of the elements from this delay queue.
 The queue will be empty after this call returns.
  Elements with an unexpired delay are not waited for; they are
  simply discarded from the queue.
 */
- (void)clear;

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

- (id<JavaUtilConcurrentDelayed>)element;

/*!
 @brief Returns an iterator over all the elements (both expired and
  unexpired) in this queue.The iterator does not return the
  elements in any particular order.
 <p>The returned iterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
 @return an iterator over the elements in this queue
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element into this delay queue.
 @param e the element to add
 @return <code>true</code>
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Inserts the specified element into this delay queue.As the queue is
  unbounded this method will never block.
 @param e the element to add
 @param timeout This parameter is ignored as the method never blocks
 @param unit This parameter is ignored as the method never blocks
 @return <code>true</code>
 @throw NullPointerException
 */
- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Retrieves, but does not remove, the head of this queue, or
  returns <code>null</code> if this queue is empty.Unlike
  <code>poll</code>, if no expired elements are available in the queue,
  this method returns the element that will expire next,
  if one exists.
 @return the head of this queue, or <code>null</code> if this
          queue is empty
 */
- (id<JavaUtilConcurrentDelayed>)peek;

/*!
 @brief Retrieves and removes the head of this queue, or returns <code>null</code>
  if this queue has no elements with an expired delay.
 @return the head of this queue, or <code>null</code> if this
          queue has no elements with an expired delay
 */
- (id<JavaUtilConcurrentDelayed>)poll;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
  until an element with an expired delay is available on this queue,
  or the specified wait time expires.
 @return the head of this queue, or <code>null</code> if the
          specified waiting time elapses before an element with
          an expired delay becomes available
 @throw InterruptedException
 */
- (id<JavaUtilConcurrentDelayed>)pollWithLong:(jlong)timeout
               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Inserts the specified element into this delay queue.As the queue is
  unbounded this method will never block.
 @param e the element to add
 @throw NullPointerException
 */
- (void)putWithId:(id<JavaUtilConcurrentDelayed>)e;

/*!
 @brief Always returns <code>Integer.MAX_VALUE</code> because
  a <code>DelayQueue</code> is not capacity constrained.
 @return <code>Integer.MAX_VALUE</code>
 */
- (jint)remainingCapacity;

- (id<JavaUtilConcurrentDelayed>)remove;

/*!
 @brief Removes a single instance of the specified element from this
  queue, if it is present, whether or not it has expired.
 */
- (jboolean)removeWithId:(id)o;

- (jint)size;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
  until an element with an expired delay is available on this queue.
 @return the head of this queue
 @throw InterruptedException
 */
- (id<JavaUtilConcurrentDelayed>)take;

/*!
 @brief Returns an array containing all of the elements in this queue.
 The returned array elements are in no particular order. 
 <p>The returned array will be "safe" in that no references to it are
  maintained by this queue.  (In other words, this method must allocate
  a new array).  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all of the elements in this queue
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this queue; the
  runtime type of the returned array is that of the specified array.
 The returned array elements are in no particular order.
  If the queue fits in the specified array, it is returned therein.
  Otherwise, a new array is allocated with the runtime type of the
  specified array and the size of this queue. 
 <p>If this queue fits in the specified array with room to spare
  (i.e., the array has more elements than this queue), the element in
  the array immediately following the end of the queue is set to 
 <code>null</code>.
  
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
  array-based and collection-based APIs.  Further, this method allows
  precise control over the runtime type of the output array, and may,
  under certain circumstances, be used to save allocation costs. 
 <p>The following code can be used to dump a delay queue into a newly
  allocated array of <code>Delayed</code>:
  
 @code
 Delayed[] a = q.toArray(new Delayed[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of the queue are to           be stored, if it is big enough; otherwise, a new array of the
            same runtime type is allocated for this purpose
 @return an array containing all of the elements in this queue
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in
          this queue
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

/*!
 @brief Identity-based version for use in Itr.remove.
 */
- (void)removeEQWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_init(JavaUtilConcurrentDelayQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *create_JavaUtilConcurrentDelayQueue_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(JavaUtilConcurrentDelayQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *create_JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentDelayQueue")
