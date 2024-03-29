//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Set.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSet")
#ifdef RESTRICT_JavaUtilSet
#define INCLUDE_ALL_JavaUtilSet 0
#else
#define INCLUDE_ALL_JavaUtilSet 1
#endif
#undef RESTRICT_JavaUtilSet

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilSet_) && (INCLUDE_ALL_JavaUtilSet || defined(INCLUDE_JavaUtilSet))
#define JavaUtilSet_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief A collection that contains no duplicate elements.More formally, sets
  contain no pair of elements <code>e1</code> and <code>e2</code> such that 
 <code>e1.equals(e2)</code>, and at most one null element.
 As implied by
  its name, this interface models the mathematical <i>set</i> abstraction. 
 <p>The <code>Set</code> interface places additional stipulations, beyond those
  inherited from the <code>Collection</code> interface, on the contracts of all
  constructors and on the contracts of the <code>add</code>, <code>equals</code> and 
 <code>hashCode</code> methods.  Declarations for other inherited methods are
  also included here for convenience.  (The specifications accompanying these
  declarations have been tailored to the <code>Set</code> interface, but they do
  not contain any additional stipulations.) 
 <p>The additional stipulation on constructors is, not surprisingly,
  that all constructors must create a set that contains no duplicate elements
  (as defined above). 
 <p>Note: Great care must be exercised if mutable objects are used as set
  elements.  The behavior of a set is not specified if the value of an object
  is changed in a manner that affects <code>equals</code> comparisons while the
  object is an element in the set.  A special case of this prohibition is
  that it is not permissible for a set to contain itself as an element. 
 <p>Some set implementations have restrictions on the elements that
  they may contain.  For example, some implementations prohibit null elements,
  and some have restrictions on the types of their elements.  Attempting to
  add an ineligible element throws an unchecked exception, typically 
 <code>NullPointerException</code> or <code>ClassCastException</code>.  Attempting
  to query the presence of an ineligible element may throw an exception,
  or it may simply return false; some implementations will exhibit the former
  behavior and some will exhibit the latter.  More generally, attempting an
  operation on an ineligible element whose completion would not result in
  the insertion of an ineligible element into the set may throw an
  exception or it may succeed, at the option of the implementation.
  Such exceptions are marked as "optional" in the specification for this
  interface. 
 <h2><a id="immutable">Immutable Set Static Factory Methods</a></h2>
  <p>The <code>Set.of()</code> static factory methods
  provide a convenient way to create immutable sets. The <code>Set</code>
  instances created by these methods have the following characteristics: 
 <ul>
  <li>They are <em>structurally immutable</em>. Elements cannot be added or
  removed. Calling any mutator method will always cause 
 <code>UnsupportedOperationException</code> to be thrown.
  However, if the contained elements are themselves mutable, this may cause the
  Set to behave inconsistently or its contents to appear to change. 
 <li>They disallow <code>null</code> elements. Attempts to create them with 
 <code>null</code> elements result in <code>NullPointerException</code>.
  <li>They are serializable if all elements are serializable. 
 <li>They reject duplicate elements at creation time. Duplicate elements
  passed to a static factory method result in <code>IllegalArgumentException</code>.
  <li>The iteration order of set elements is unspecified and is subject to change. 
 <li>They are <a href="../lang/doc-files/ValueBased.html">value-based</a>.
  Callers should make no assumptions about the identity of the returned instances.
  Factories are free to create new instances or reuse existing ones. Therefore,
  identity-sensitive operations on these instances (reference equality (<code>==</code>),
  identity hash code, and synchronization) are unreliable and should be avoided. 
 <li>They are serialized as specified on the 
 <a href="{@@docRoot}/serialized-form.html#java.util.CollSer">Serialized Form</a>
  page. 
 </ul>
  
 <p>This interface is a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 @author Neal Gafter
 - seealso: Collection
 - seealso: List
 - seealso: SortedSet
 - seealso: HashSet
 - seealso: TreeSet
 - seealso: AbstractSet
 - seealso: Collections#singleton(java.lang.Object)
 - seealso: Collections#EMPTY_SET
 @since 1.2
 */
@protocol JavaUtilSet < JavaUtilCollection, JavaObject >

/*!
 @brief Returns the number of elements in this set (its cardinality).If this
  set contains more than <code>Integer.MAX_VALUE</code> elements, returns 
 <code>Integer.MAX_VALUE</code>.
 @return the number of elements in this set (its cardinality)
 */
- (jint)size;

/*!
 @brief Returns <code>true</code> if this set contains no elements.
 @return <code>true</code> if this set contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns <code>true</code> if this set contains the specified element.
 More formally, returns <code>true</code> if and only if this set
  contains an element <code>e</code> such that 
 <code>Objects.equals(o, e)</code>.
 @param o element whose presence in this set is to be tested
 @return <code>true</code> if this set contains the specified element
 @throw ClassCastExceptionif the type of the specified element
          is incompatible with this set
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          set does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this set.The elements are
  returned in no particular order (unless this set is an instance of some
  class that provides a guarantee).
 @return an iterator over the elements in this set
 */
- (id<JavaUtilIterator> __nonnull)iterator;

/*!
 @brief Returns an array containing all of the elements in this set.
 If this set makes any guarantees as to what order its elements
  are returned by its iterator, this method must return the
  elements in the same order. 
 <p>The returned array will be "safe" in that no references to it
  are maintained by this set.  (In other words, this method must
  allocate a new array even if this set is backed by an array).
  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all the elements in this set
 */
- (IOSObjectArray * __nonnull)toArray;

/*!
 @brief Returns an array containing all of the elements in this set; the
  runtime type of the returned array is that of the specified array.
 If the set fits in the specified array, it is returned therein.
  Otherwise, a new array is allocated with the runtime type of the
  specified array and the size of this set. 
 <p>If this set fits in the specified array with room to spare
  (i.e., the array has more elements than this set), the element in
  the array immediately following the end of the set is set to 
 <code>null</code>.  (This is useful in determining the length of this
  set <i>only</i> if the caller knows that this set does not contain
  any null elements.) 
 <p>If this set makes any guarantees as to what order its elements
  are returned by its iterator, this method must return the elements
  in the same order. 
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
  array-based and collection-based APIs.  Further, this method allows
  precise control over the runtime type of the output array, and may,
  under certain circumstances, be used to save allocation costs. 
 <p>Suppose <code>x</code> is a set known to contain only strings.
  The following code can be used to dump the set into a newly allocated
  array of <code>String</code>:
  
 @code

      String[] y = x.toArray(new String[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of this set are to be         stored, if it is big enough; otherwise, a new array of the same
          runtime type is allocated for this purpose.
 @return an array containing all the elements in this set
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in this
          set
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray * __nonnull)toArrayWithNSObjectArray:(IOSObjectArray *)a;

/*!
 @brief Adds the specified element to this set if it is not already present
  (optional operation).More formally, adds the specified element 
 <code>e</code> to this set if the set contains no element <code>e2</code>
  such that 
 <code>Objects.equals(e, e2)</code>.
 If this set already contains the element, the call leaves the set
  unchanged and returns <code>false</code>.  In combination with the
  restriction on constructors, this ensures that sets never contain
  duplicate elements. 
 <p>The stipulation above does not imply that sets must accept all
  elements; sets may refuse to add any particular element, including 
 <code>null</code>, and throw an exception, as described in the
  specification for <code>Collection.add</code>.
  Individual set implementations should clearly document any
  restrictions on the elements that they may contain.
 @param e element to be added to this set
 @return <code>true</code> if this set did not already contain the specified
          element
 @throw UnsupportedOperationExceptionif the <code>add</code> operation
          is not supported by this set
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this set
 @throw NullPointerExceptionif the specified element is null and this
          set does not permit null elements
 @throw IllegalArgumentExceptionif some property of the specified element
          prevents it from being added to this set
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Removes the specified element from this set if it is present
  (optional operation).More formally, removes an element <code>e</code>
  such that 
 <code>Objects.equals(o, e)</code>, if
  this set contains such an element.
 Returns <code>true</code> if this set
  contained the element (or equivalently, if this set changed as a
  result of the call).  (This set will not contain the element once the
  call returns.)
 @param o object to be removed from this set, if present
 @return <code>true</code> if this set contained the specified element
 @throw ClassCastExceptionif the type of the specified element
          is incompatible with this set
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified element is null and this
          set does not permit null elements
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw UnsupportedOperationExceptionif the <code>remove</code> operation
          is not supported by this set
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns <code>true</code> if this set contains all of the elements of the
  specified collection.If the specified collection is also a set, this
  method returns <code>true</code> if it is a <i>subset</i> of this set.
 @param c collection to be checked for containment in this set
 @return <code>true</code> if this set contains all of the elements of the
          specified collection
 @throw ClassCastExceptionif the types of one or more elements
          in the specified collection are incompatible with this
          set
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif the specified collection contains one
          or more null elements and this set does not permit null
          elements
  (<a href="Collection.html#optional-restrictions">optional</a>),
          or if the specified collection is null
 - seealso: #contains(Object)
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Adds all of the elements in the specified collection to this set if
  they're not already present (optional operation).If the specified
  collection is also a set, the <code>addAll</code> operation effectively
  modifies this set so that its value is the <i>union</i> of the two
  sets.
 The behavior of this operation is undefined if the specified
  collection is modified while the operation is in progress.
 @param c collection containing elements to be added to this set
 @return <code>true</code> if this set changed as a result of the call
 @throw UnsupportedOperationExceptionif the <code>addAll</code> operation
          is not supported by this set
 @throw ClassCastExceptionif the class of an element of the
          specified collection prevents it from being added to this set
 @throw NullPointerExceptionif the specified collection contains one
          or more null elements and this set does not permit null
          elements, or if the specified collection is null
 @throw IllegalArgumentExceptionif some property of an element of the
          specified collection prevents it from being added to this set
 - seealso: #add(Object)
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Retains only the elements in this set that are contained in the
  specified collection (optional operation).In other words, removes
  from this set all of its elements that are not contained in the
  specified collection.
 If the specified collection is also a set, this
  operation effectively modifies this set so that its value is the 
 <i>intersection</i> of the two sets.
 @param c collection containing elements to be retained in this set
 @return <code>true</code> if this set changed as a result of the call
 @throw UnsupportedOperationExceptionif the <code>retainAll</code> operation
          is not supported by this set
 @throw ClassCastExceptionif the class of an element of this set
          is incompatible with the specified collection
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif this set contains a null element and the
          specified collection does not permit null elements
          (<a href="Collection.html#optional-restrictions">optional</a>),
          or if the specified collection is null
 - seealso: #remove(Object)
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes from this set all of its elements that are contained in the
  specified collection (optional operation).If the specified
  collection is also a set, this operation effectively modifies this
  set so that its value is the <i>asymmetric set difference</i> of
  the two sets.
 @param c collection containing elements to be removed from this set
 @return <code>true</code> if this set changed as a result of the call
 @throw UnsupportedOperationExceptionif the <code>removeAll</code> operation
          is not supported by this set
 @throw ClassCastExceptionif the class of an element of this set
          is incompatible with the specified collection
  (<a href="Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif this set contains a null element and the
          specified collection does not permit null elements
          (<a href="Collection.html#optional-restrictions">optional</a>),
          or if the specified collection is null
 - seealso: #remove(Object)
 - seealso: #contains(Object)
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes all of the elements from this set (optional operation).
 The set will be empty after this call returns.
 @throw UnsupportedOperationExceptionif the <code>clear</code> method
          is not supported by this set
 */
- (void)clear;

/*!
 @brief Compares the specified object with this set for equality.Returns
  <code>true</code> if the specified object is also a set, the two sets
  have the same size, and every member of the specified set is
  contained in this set (or equivalently, every member of this set is
  contained in the specified set).
 This definition ensures that the
  equals method works properly across different implementations of the
  set interface.
 @param o object to be compared for equality with this set
 @return <code>true</code> if the specified object is equal to this set
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the hash code value for this set.The hash code of a set is
  defined to be the sum of the hash codes of the elements in the set,
  where the hash code of a <code>null</code> element is defined to be zero.
 This ensures that <code>s1.equals(s2)</code> implies that 
 <code>s1.hashCode()==s2.hashCode()</code> for any two sets <code>s1</code>
  and <code>s2</code>, as required by the general contract of 
 <code>Object.hashCode</code>.
 @return the hash code value for this set
 - seealso: Object#equals(Object)
 - seealso: Set#equals(Object)
 */
- (NSUInteger)hash;

/*!
 @brief Creates a <code>Spliterator</code> over the elements in this set.
 <p>The <code>Spliterator</code> reports <code>Spliterator.DISTINCT</code>.
  Implementations should document the reporting of additional
  characteristic values.
 @return a <code>Spliterator</code> over the elements in this set
 @since 1.8
 */
- (id<JavaUtilSpliterator> __nonnull)spliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSet)

FOUNDATION_EXPORT id<JavaUtilSpliterator> JavaUtilSet_spliterator(id<JavaUtilSet> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilSet")
