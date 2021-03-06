//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ImmutableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMultiset))
#define ComGoogleCommonCollectImmutableSortedMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 1
#include "com/google/common/collect/ImmutableSortedMultisetFauxverideShim.h"

#define RESTRICT_ComGoogleCommonCollectSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectSortedMultiset 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedMultiset_Builder;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilStreamCollector;

/*!
 @brief A <code>SortedMultiset</code> whose contents will never change, with many other important properties
  detailed at <code>ImmutableCollection</code>.
 <p><b>Warning:</b> as with any sorted collection, you are strongly advised not to use a <code>Comparator</code>
  or <code>Comparable</code> type whose comparison behavior is <i>inconsistent with
  equals</i>. That is, <code>a.compareTo(b)</code> or <code>comparator.compare(a, b)</code> should equal zero 
 <i>if and only if</i> <code>a.equals(b)</code>. If this advice is not followed, the resulting
  collection will not correctly obey its specification. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/ImmutableCollectionsExplained">
  immutable collections</a>.
 @author Louis Wasserman
 @since 12.0
 */
@interface ComGoogleCommonCollectImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim < ComGoogleCommonCollectSortedMultiset > {
 @public
  volatile_id descendingMultiset_;
}

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by the given <code>Comparator</code>
 .This method iterates over <code>elements</code> at most once.
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change.
 @throw NullPointerExceptionif <code>comparator</code> or any of <code>elements</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
                                                           withJavaLangIterable:(id<JavaLangIterable> __nonnull)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by the given <code>Comparator</code>
 .
 @throw NullPointerExceptionif <code>comparator</code> or any of <code>elements</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
                                                           withJavaUtilIterator:(id<JavaUtilIterator> __nonnull)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any of <code>elements</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaLangComparableArray:(IOSObjectArray * __nonnull)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.To create a copy of a <code>SortedMultiset</code> that preserves the comparator, call 
 <code>copyOfSorted</code> instead.
 This method iterates over <code>elements</code> at most once. 
 <p>Note that if <code>s</code> is a <code>Multiset<String></code>, then <code>ImmutableSortedMultiset.copyOf(s)</code>
  returns an <code>ImmutableSortedMultiset<String></code>
  containing each of the strings in <code>s</code>, while <code>ImmutableSortedMultiset.of(s)</code>
  returns an <code>ImmutableSortedMultiset<Multiset<String>></code> containing one element (the given
  multiset itself). 
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change. 
 <p>This method is not type-safe, as it may be called on elements that are not mutually
  comparable.
 @throw ClassCastExceptionif the elements are not mutually comparable
 @throw NullPointerExceptionif any of <code>elements</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 <p>This method is not type-safe, as it may be called on elements that are not mutually
  comparable.
 @throw ClassCastExceptionif the elements are not mutually comparable
 @throw NullPointerExceptionif any of <code>elements</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable sorted multiset containing the elements of a sorted multiset, sorted by
  the same <code>Comparator</code>.That behavior differs from <code>copyOf(Iterable)</code>, which always
  uses the natural ordering of the elements.
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change. 
 <p>This method is safe to use even when <code>sortedMultiset</code> is a synchronized or concurrent
  collection that is currently being modified by another thread.
 @throw NullPointerExceptionif <code>sortedMultiset</code> or any of its elements is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfSortedWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset> __nonnull)sortedMultiset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSortedMultiset *)descendingMultiset;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id __nonnull)upperBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

/*!
 @brief Returns a builder that creates immutable sorted multisets whose elements are ordered by their
  natural ordering.The sorted multisets use <code>Ordering.natural()</code> as the comparator.
 This
  method provides more type-safety than <code>builder</code>, as it can be called only for classes
  that implement <code>Comparable</code>.
  
 <p>Note: the type parameter <code>E</code> extends <code>Comparable<?></code> rather than <code>Comparable<? super E></code>
  as a workaround for javac <a href="http://bugs.sun.com/bugdatabase/view_bug.do?bug_id=6468354">
 bug 6468354</a>.
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)naturalOrder;

/*!
 @brief Returns the empty immutable sorted multiset.
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)of;

/*!
 @brief Returns an immutable sorted multiset containing a single element.
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)element;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any element is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)e1
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e2;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any element is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)e1
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e2
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e3;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any element is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)e1
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e2
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e3
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e4;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any element is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)e1
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e2
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e3
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e4
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e5;

/*!
 @brief Returns an immutable sorted multiset containing the given elements sorted by their natural
  ordering.
 @throw NullPointerExceptionif any element is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithJavaLangComparable:(id<JavaLangComparable> __nonnull)e1
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e2
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e3
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e4
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e5
                                                     withJavaLangComparable:(id<JavaLangComparable> __nonnull)e6
                                                withJavaLangComparableArray:(IOSObjectArray * __nonnull)remaining;

/*!
 @brief Returns a builder that creates immutable sorted multisets with an explicit comparator.If the
  comparator has a more general type than the set being generated, such as creating a <code>SortedMultiset<Integer></code>
  with a <code>Comparator<Number></code>, use the <code>Builder</code> constructor
  instead.
 @throw NullPointerExceptionif <code>comparator</code> is null
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief <p>This implementation is guaranteed to throw an <code>UnsupportedOperationException</code>.
 @throw UnsupportedOperationExceptionalways
 */
- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry __attribute__((deprecated));

/*!
 @brief <p>This implementation is guaranteed to throw an <code>UnsupportedOperationException</code>.
 @throw UnsupportedOperationExceptionalways
 */
- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry __attribute__((deprecated));

/*!
 @brief Returns a builder that creates immutable sorted multisets whose elements are ordered by the
  reverse of their natural ordering.
 <p>Note: the type parameter <code>E</code> extends <code>Comparable<?></code> rather than <code>Comparable<? super E></code>
  as a workaround for javac <a href="http://bugs.sun.com/bugdatabase/view_bug.do?bug_id=6468354">
 bug 6468354</a>.
 */
+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)reverseOrder;

- (ComGoogleCommonCollectImmutableSortedMultiset *)subMultisetWithId:(id __nonnull)lowerBound
                                 withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)lowerBoundType
                                                              withId:(id __nonnull)upperBound
                                 withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)upperBoundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id __nonnull)lowerBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

/*!
 @brief Returns a <code>Collector</code> that accumulates the input elements into a new <code>ImmutableMultiset</code>
 .Elements are sorted by the specified comparator.
 <p><b>Warning:</b> <code>comparator</code> should be <i>consistent with <code>equals</code></i> as
  explained in the <code>Comparator</code> documentation.
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableSortedMultisetWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief Returns a <code>Collector</code> that accumulates elements into an <code>ImmutableSortedMultiset</code>
  whose elements are the result of applying <code>elementFunction</code> to the inputs, with counts
  equal to the result of applying <code>countFunction</code> to the inputs.
 <p>If the mapped elements contain duplicates (according to <code>comparator</code>), the first
  occurrence in encounter order appears in the resulting multiset, with count equal to the sum of
  the outputs of <code>countFunction.applyAsInt(t)</code> for each <code>t</code> mapped to that element.
 @since 22.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableSortedMultisetWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
                                                  withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)elementFunction
                                             withJavaUtilFunctionToIntFunction:(id<JavaUtilFunctionToIntFunction> __nonnull)countFunction;

#pragma mark Package-Private

- (instancetype __nonnull)init;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)emptyMultisetWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultiset)

J2OBJC_VOLATILE_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedMultiset, descendingMultiset_, ComGoogleCommonCollectImmutableSortedMultiset *)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSortedMultiset_toImmutableSortedMultisetWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSortedMultiset_toImmutableSortedMultisetWithJavaUtilComparator_withJavaUtilFunctionFunction_withJavaUtilFunctionToIntFunction_(id<JavaUtilComparator> comparator, id<JavaUtilFunctionFunction> elementFunction, id<JavaUtilFunctionToIntFunction> countFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_(id<JavaLangComparable> element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparableArray_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5, id<JavaLangComparable> e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaLangComparableArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilComparator_withJavaUtilIterator_(id<JavaUtilComparator> comparator, id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfWithJavaUtilComparator_withJavaLangIterable_(id<JavaUtilComparator> comparator, id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_copyOfSortedWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> sortedMultiset);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultiset_emptyMultisetWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMultiset_init(ComGoogleCommonCollectImmutableSortedMultiset *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_reverseOrder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultiset_naturalOrder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMultiset)

#endif

#if !defined (ComGoogleCommonCollectImmutableSortedMultiset_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMultiset_Builder))
#define ComGoogleCommonCollectImmutableSortedMultiset_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset_Builder 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSortedMultiset;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

/*!
 @brief A builder for creating immutable multiset instances, especially <code>public static final</code>
  multisets ("constant multisets").Example:
  
 @code
 public static final ImmutableSortedMultiset<Bean> BEANS =
      new ImmutableSortedMultiset.Builder<Bean>(colorComparator())
          .addCopies(Bean.COCOA, 4)
          .addCopies(Bean.GARDEN, 6)
          .addCopies(Bean.RED, 8)
          .addCopies(Bean.BLACK_EYED, 10)
          .build(); 
 
@endcode
  
 <p>Builder instances can be reused; it is safe to call <code>build</code> multiple times to build
  multiple multisets in series.
 @since 12.0
 */
@interface ComGoogleCommonCollectImmutableSortedMultiset_Builder : ComGoogleCommonCollectImmutableMultiset_Builder

#pragma mark Public

/*!
 @brief Creates a new builder.The returned builder is equivalent to the builder generated by <code>ImmutableSortedMultiset.orderedBy(Comparator)</code>
 .
 */
- (instancetype __nonnull)initWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief Adds <code>element</code> to the <code>ImmutableSortedMultiset</code>.
 @param element the element to add
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>element</code> is null
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addWithId:(id __nonnull)element;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableSortedMultiset</code>.
 @param elements the elements to add
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addWithNSObjectArray:(IOSObjectArray * __nonnull)elements;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableSortedMultiset</code>.
 @param elements the <code>Iterable</code>  to add to the <code>ImmutableSortedMultiset</code>
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)elements;

/*!
 @brief Adds each element of <code>elements</code> to the <code>ImmutableSortedMultiset</code>.
 @param elements the elements to add to the <code>ImmutableSortedMultiset</code>
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>elements</code> is null or contains a null element
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)elements;

/*!
 @brief Adds a number of occurrences of an element to this <code>ImmutableSortedMultiset</code>.
 @param element the element to add
 @param occurrences the number of occurrences of the element to add. May be zero, in which      case no change will be made.
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>element</code> is null
 @throw IllegalArgumentExceptionif <code>occurrences</code> is negative, or if this operation
      would result in more than <code>Integer.MAX_VALUE</code> occurrences of the element
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)addCopiesWithId:(id __nonnull)element
                                                                   withInt:(jint)occurrences;

/*!
 @brief Returns a newly-created <code>ImmutableSortedMultiset</code> based on the contents of the <code>Builder</code>
 .
 */
- (ComGoogleCommonCollectImmutableSortedMultiset *)build;

/*!
 @brief Adds or removes the necessary occurrences of an element such that the element attains the
  desired count.
 @param element the element to add or remove occurrences of
 @param count the desired count of the element in this multiset
 @return this <code>Builder</code> object
 @throw NullPointerExceptionif <code>element</code> is null
 @throw IllegalArgumentExceptionif <code>count</code> is negative
 */
- (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)setCountWithId:(id __nonnull)element
                                                                  withInt:(jint)count;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset> __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultiset_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMultiset_Builder_initWithJavaUtilComparator_(ComGoogleCommonCollectImmutableSortedMultiset_Builder *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *new_ComGoogleCommonCollectImmutableSortedMultiset_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *create_ComGoogleCommonCollectImmutableSortedMultiset_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMultiset_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultiset")
