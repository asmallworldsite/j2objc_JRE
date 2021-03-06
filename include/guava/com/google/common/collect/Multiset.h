//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/Multiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectMultiset || defined(INCLUDE_ComGoogleCommonCollectMultiset))
#define ComGoogleCommonCollectMultiset_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionObjIntConsumer;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;

/*!
 @brief A collection that supports order-independent equality, like <code>Set</code>, but may have duplicate
  elements.A multiset is also sometimes called a <i>bag</i>.
 <p>Elements of a multiset that are equal to one another are referred to as <i>occurrences</i> of
  the same single element. The total number of occurrences of an element in a multiset is called the 
 <i>count</i> of that element (the terms "frequency" and "multiplicity" are equivalent, but
  not used in this API). Since the count of an element is represented as an <code>int</code>, a multiset
  may never contain more than <code>Integer.MAX_VALUE</code> occurrences of any one element. 
 <p><code>Multiset</code> refines the specifications of several methods from <code>Collection</code>. It
  also defines an additional query operation, <code>count</code>, which returns the count of an
  element. There are five new bulk-modification operations, for example <code>add(Object, int)</code>,
  to add or remove multiple occurrences of an element at once, or to set the count of an element to
  a specific value. These modification operations are optional, but implementations which support
  the standard collection operations <code>add(Object)</code> or <code>remove(Object)</code> are encouraged
  to implement the related methods as well. Finally, two collection views are provided: <code>elementSet</code>
  contains the distinct elements of the multiset "with duplicates collapsed", and 
 <code>entrySet</code> is similar but contains <code>Multiset.Entry</code> instances, each providing
  both a distinct element and the count of that element. 
 <p>In addition to these required methods, implementations of <code>Multiset</code> are expected to
  provide two <code>static</code> creation methods: <code>create()</code>, returning an empty multiset, and 
 <code>create(Iterable<? extends E>)</code>, returning a multiset containing the given initial
  elements. This is simply a refinement of <code>Collection</code>'s constructor recommendations,
  reflecting the new developments of Java 5. 
 <p>As with other collection types, the modification operations are optional, and should throw 
 <code>UnsupportedOperationException</code> when they are not implemented. Most implementations should
  support either all add operations or none of them, all removal operations or none of them, and if
  and only if all of these are supported, the <code>setCount</code> methods as well. 
 <p>A multiset uses <code>Object.equals</code> to determine whether two instances should be considered
  "the same," <i>unless specified otherwise</i> by the implementation. 
 <p>Common implementations include <code>ImmutableMultiset</code>, <code>HashMultiset</code>, and <code>ConcurrentHashMultiset</code>
 .
  
 <p>If your values may be zero, negative, or outside the range of an int, you may wish to use 
 <code>com.google.common.util.concurrent.AtomicLongMap</code> instead. Note, however, that unlike 
 <code>Multiset</code>, <code>AtomicLongMap</code> does not automatically remove zeros. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#multiset">
  <code>Multiset</code>
 </a>.
 @author Kevin Bourrillion
 @since 2.0
 */
@protocol ComGoogleCommonCollectMultiset < JavaUtilCollection, JavaObject >

/*!
 @brief Returns the total number of all occurrences of all elements in this multiset.
 <p><b>Note:</b> this method does not return the number of <i>distinct elements</i> in the
  multiset, which is given by <code>entrySet().size()</code>.
 */
- (jint)size;

/*!
 @brief Returns the number of occurrences of an element in this multiset (the <i>count</i> of the
  element).Note that for an <code>Object.equals</code>-based multiset, this gives the same result as 
 <code>Collections.frequency</code> (which would presumably perform more poorly).
 <p><b>Note:</b> the utility method <code>Iterables.frequency</code> generalizes this operation; it
  correctly delegates to this method when dealing with a multiset, but it can also accept any
  other iterable type.
 @param element the element to count occurrences of
 @return the number of occurrences of the element in this multiset; possibly zero but never
      negative
 */
- (jint)countWithId:(id __nullable)element;

/*!
 @brief Adds a number of occurrences of an element to this multiset.Note that if <code>occurrences ==
  1</code>
 , this method has the identical effect to <code>add(Object)</code>.
 This method is functionally
  equivalent (except in the case of overflow) to the call <code>addAll(Collections.nCopies(element, occurrences))</code>
 , which would presumably perform much more
  poorly.
 @param element the element to add occurrences of; may be null only if explicitly allowed by the      implementation
 @param occurrences the number of occurrences of the element to add. May be zero, in which case      no change will be made.
 @return the count of the element before the operation; possibly zero
 @throw IllegalArgumentExceptionif <code>occurrences</code> is negative, or if this operation would
      result in more than <code>Integer.MAX_VALUE</code> occurrences of the element
 @throw NullPointerExceptionif <code>element</code> is null and this implementation does not permit
      null elements. Note that if <code>occurrences</code> is zero, the implementation may opt to
      return normally.
 */
- (jint)addWithId:(id __nullable)element
          withInt:(jint)occurrences;

/*!
 @brief Adds a single occurrence of the specified element to this multiset.
 <p>This method refines <code>Collection.add</code>, which only <i>ensures</i> the presence of the
  element, to further specify that a successful call must always increment the count of the
  element, and the overall size of the collection, by one. 
 <p>To both add the element and obtain the previous count of that element, use <code>add</code>
 <code>(element, 1)</code> instead.
 @param element the element to add one occurrence of; may be null only if explicitly allowed by      the implementation
 @return <code>true</code> always, since this call is required to modify the multiset, unlike other
      <code>Collection</code> types
 @throw NullPointerExceptionif <code>element</code> is null and this implementation does not permit
      null elements
 @throw IllegalArgumentExceptionif <code>Integer.MAX_VALUE</code> occurrences of <code>element</code>
      are already contained in this multiset
 */
- (jboolean)addWithId:(id __nonnull)element;

/*!
 @brief Removes a number of occurrences of the specified element from this multiset.If the multiset
  contains fewer than this number of occurrences to begin with, all occurrences will be removed.
 Note that if <code>occurrences == 1</code>, this is functionally equivalent to the call <code>remove(element)</code>
 .
 @param element the element to conditionally remove occurrences of
 @param occurrences the number of occurrences of the element to remove. May be zero, in which      case no change will be made.
 @return the count of the element before the operation; possibly zero
 @throw IllegalArgumentExceptionif <code>occurrences</code> is negative
 */
- (jint)removeWithId:(id __nullable)element
             withInt:(jint)occurrences;

/*!
 @brief Removes a <i>single</i> occurrence of the specified element from this multiset, if present.
 <p>This method refines <code>Collection.remove</code> to further specify that it <b>may not</b>
  throw an exception in response to <code>element</code> being null or of the wrong type. 
 <p>To both remove the element and obtain the previous count of that element, use <code>remove</code>
 <code>(element, 1)</code> instead.
 @param element the element to remove one occurrence of
 @return <code>true</code> if an occurrence was found and removed
 */
- (jboolean)removeWithId:(id __nullable)element;

/*!
 @brief Adds or removes the necessary occurrences of an element such that the element attains the
  desired count.
 @param element the element to add or remove occurrences of; may be null only if explicitly      allowed by the implementation
 @param count the desired count of the element in this multiset
 @return the count of the element before the operation; possibly zero
 @throw IllegalArgumentExceptionif <code>count</code> is negative
 @throw NullPointerExceptionif <code>element</code> is null and this implementation does not permit
      null elements. Note that if <code>count</code> is zero, the implementor may optionally return
      zero instead.
 */
- (jint)setCountWithId:(id __nonnull)element
               withInt:(jint)count;

/*!
 @brief Conditionally sets the count of an element to a new value, as described in <code>setCount(Object, int)</code>
 , provided that the element has the expected current count.If the
  current count is not <code>oldCount</code>, no change is made.
 @param element the element to conditionally set the count of; may be null only if explicitly      allowed by the implementation
 @param oldCount the expected present count of the element in this multiset
 @param newCount the desired count of the element in this multiset
 @return <code>true</code> if the condition for modification was met. This implies that the multiset
      was indeed modified, unless <code>oldCount == newCount</code>.
 @throw IllegalArgumentExceptionif <code>oldCount</code> or <code>newCount</code> is negative
 @throw NullPointerExceptionif <code>element</code> is null and the implementation does not permit
      null elements. Note that if <code>oldCount</code> and <code>newCount</code> are both zero, the
      implementor may optionally return <code>true</code> instead.
 */
- (jboolean)setCountWithId:(id __nonnull)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

/*!
 @brief Returns the set of distinct elements contained in this multiset.The element set is backed by
  the same data as the multiset, so any change to either is immediately reflected in the other.
 The order of the elements in the element set is unspecified. 
 <p>If the element set supports any removal operations, these necessarily cause <b>all</b>
  occurrences of the removed element(s) to be removed from the multiset. Implementations are not
  expected to support the add operations, although this is possible. 
 <p>A common use for the element set is to find the number of distinct elements in the multiset: 
 <code>elementSet().size()</code>.
 @return a view of the set of distinct elements in this multiset
 */
- (id<JavaUtilSet>)elementSet;

/*!
 @brief Returns a view of the contents of this multiset, grouped into <code>Multiset.Entry</code> instances,
  each providing an element of the multiset and the count of that element.This set contains
  exactly one entry for each distinct element in the multiset (thus it always has the same size
  as the <code>elementSet</code>).
 The order of the elements in the element set is unspecified. 
 <p>The entry set is backed by the same data as the multiset, so any change to either is
  immediately reflected in the other. However, multiset changes may or may not be reflected in
  any <code>Entry</code> instances already retrieved from the entry set (this is
  implementation-dependent). Furthermore, implementations are not required to support
  modifications to the entry set at all, and the <code>Entry</code> instances themselves don't even
  have methods for modification. See the specific implementation class for more details on how
  its entry set handles modifications.
 @return a set of entries representing the data of this multiset
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Runs the specified action for each distinct element in this multiset, and the number of
  occurrences of that element.For some <code>Multiset</code> implementations, this may be more
  efficient than iterating over the <code>entrySet()</code> either explicitly or with <code>entrySet().forEach(action)</code>
 .
 @since 21.0
 */
- (void)forEachEntryWithJavaUtilFunctionObjIntConsumer:(id<JavaUtilFunctionObjIntConsumer> __nonnull)action;

/*!
 @brief Compares the specified object with this multiset for equality.Returns <code>true</code> if the
  given object is also a multiset and contains equal elements with equal counts, regardless of
  order.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the hash code for this multiset.This is defined as the sum of 
 @code
 ((element == null) ?
 0 : element.hashCode()) ^ count(element) 
 
@endcode
  
 <p>over all distinct elements in the multiset. It follows that a multiset and its entry set
  always have the same hash code.
 */
- (NSUInteger)hash;

/*!
 @brief <p>It is recommended, though not mandatory, that this method return the result of invoking 
 <code>toString</code> on the <code>entrySet</code>, yielding a result such as <code>[a x 3, c, d x 2,
  e]</code>
 .
 */
- (NSString *)description;

/*!
 @brief <p>Elements that occur multiple times in the multiset will appear multiple times in this
  iterator, though not necessarily sequentially.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Determines whether this multiset contains the specified element.
 <p>This method refines <code>Collection.contains</code> to further specify that it <b>may not</b>
  throw an exception in response to <code>element</code> being null or of the wrong type.
 @param element the element to check for
 @return <code>true</code> if this multiset contains at least one occurrence of the element
 */
- (jboolean)containsWithId:(id __nullable)element;

/*!
 @brief Returns <code>true</code> if this multiset contains at least one occurrence of each element in the
  specified collection.
 <p>This method refines <code>Collection.containsAll</code> to further specify that it <b>may not</b>
  throw an exception in response to any of <code>elements</code> being null or of the wrong type. 
 <p><b>Note:</b> this method does not take into account the occurrence count of an element in
  the two collections; it may still return <code>true</code> even if <code>elements</code> contains several
  occurrences of an element and this multiset contains only one. This is no different than any
  other collection type like <code>List</code>, but it may be unexpected to the user of a multiset.
 @param elements the collection of elements to be checked for containment in this multiset
 @return <code>true</code> if this multiset contains at least one occurrence of each element
      contained in <code>elements</code>
 @throw NullPointerExceptionif <code>elements</code> is null
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)elements;

/*!
 @brief <p><b>Note:</b> This method ignores how often any element might appear in <code>c</code>, and only
  cares whether or not an element appears at all.
 If you wish to remove one occurrence in this
  multiset for every occurrence in <code>c</code>, see <code>Multisets.removeOccurrences(Multiset,
 Multiset)</code>
 .
  
 <p>This method refines <code>Collection.removeAll</code> to further specify that it <b>may not</b>
  throw an exception in response to any of <code>elements</code> being null or of the wrong type.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

/*!
 @brief <p><b>Note:</b> This method ignores how often any element might appear in <code>c</code>, and only
  cares whether or not an element appears at all.
 If you wish to remove one occurrence in this
  multiset for every occurrence in <code>c</code>, see <code>Multisets.retainOccurrences(Multiset,
 Multiset)</code>
 .
  
 <p>This method refines <code>Collection.retainAll</code> to further specify that it <b>may not</b>
  throw an exception in response to any of <code>elements</code> being null or of the wrong type.
 - seealso: Multisets#retainOccurrences(Multiset, Multiset)
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

/*!
 @brief <p>Elements that occur multiple times in the multiset will be passed to the <code>Consumer</code>
  correspondingly many times, though not necessarily sequentially.
 */
- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer> __nonnull)action;

- (id<JavaUtilSpliterator>)spliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultiset_forEachEntryWithJavaUtilFunctionObjIntConsumer_(id<ComGoogleCommonCollectMultiset> self, id<JavaUtilFunctionObjIntConsumer> action);

FOUNDATION_EXPORT void ComGoogleCommonCollectMultiset_forEachWithJavaUtilFunctionConsumer_(id<ComGoogleCommonCollectMultiset> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT id<JavaUtilSpliterator> ComGoogleCommonCollectMultiset_spliterator(id<ComGoogleCommonCollectMultiset> self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultiset)

#endif

#if !defined (ComGoogleCommonCollectMultiset_Entry_) && (INCLUDE_ALL_ComGoogleCommonCollectMultiset || defined(INCLUDE_ComGoogleCommonCollectMultiset_Entry))
#define ComGoogleCommonCollectMultiset_Entry_

/*!
 @brief An unmodifiable element-count pair for a multiset.The <code>Multiset.entrySet</code> method returns
  a view of the multiset whose elements are of this class.
 A multiset implementation may return
  Entry instances that are either live "read-through" views to the Multiset, or immutable
  snapshots. Note that this type is unrelated to the similarly-named type <code>Map.Entry</code>.
 @since 2.0
 */
@protocol ComGoogleCommonCollectMultiset_Entry < JavaObject >

/*!
 @brief Returns the multiset element corresponding to this entry.Multiple calls to this method
  always return the same instance.
 @return the element corresponding to this entry
 */
- (id)getElement;

/*!
 @brief Returns the count of the associated element in the underlying multiset.This count may either
  be an unchanging snapshot of the count at the time the entry was retrieved, or a live view of
  the current count of the element in the multiset, depending on the implementation.
 Note that
  in the former case, this method can never return zero, while in the latter, it will return
  zero if all occurrences of the element were since removed from the multiset.
 @return the count of the element; never negative
 */
- (jint)getCount;

/*!
 @brief <p>Returns <code>true</code> if the given object is also a multiset entry and the two entries
  represent the same element and count.
 That is, two entries <code>a</code> and <code>b</code> are equal
  if: 
 @code
 Objects.equal(a.getElement(), b.getElement())
      && a.getCount() == b.getCount() 
 
@endcode
 */
- (jboolean)isEqual:(id __nonnull)o;

/*!
 @brief <p>The hash code of a multiset entry for element <code>element</code> and count <code>count</code> is
  defined as: 
 @code
 ((element == null) ?
 0 : element.hashCode()) ^ count 
 
@endcode
 */
- (NSUInteger)hash;

/*!
 @brief Returns the canonical string representation of this entry, defined as follows.If the count
  for this entry is one, this is simply the string representation of the corresponding element.
 Otherwise, it is the string representation of the element, followed by the three characters 
 <code>" x "</code> (space, letter x, space), followed by the count.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultiset_Entry)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultiset_Entry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultiset")
