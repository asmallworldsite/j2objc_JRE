//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/TreeMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectTreeMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset || defined(INCLUDE_ComGoogleCommonCollectTreeMultiset))
#define ComGoogleCommonCollectTreeMultiset_

#define RESTRICT_ComGoogleCommonCollectAbstractSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectAbstractSortedMultiset 1
#include "com/google/common/collect/AbstractSortedMultiset.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectGeneralRange;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@class ComGoogleCommonCollectTreeMultiset_Reference;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

/*!
 @brief A multiset which maintains the ordering of its elements, according to either their natural order
  or an explicit <code>Comparator</code>.In all cases, this implementation uses <code>Comparable.compareTo</code>
  or <code>Comparator.compare</code> instead of <code>Object.equals</code> to determine
  equivalence of instances.
 <p><b>Warning:</b> The comparison must be <i>consistent with equals</i> as explained by the 
 <code>Comparable</code> class specification. Otherwise, the resulting multiset will violate the <code>java.util.Collection</code>
  contract, which is specified in terms of <code>Object.equals</code>.
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#multiset">
  <code>Multiset</code>
 </a>.
 @author Louis Wasserman
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectTreeMultiset : ComGoogleCommonCollectAbstractSortedMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(id __nullable)element
          withInt:(jint)occurrences;

- (void)clear;

- (jint)countWithId:(id __nullable)element;

/*!
 @brief Creates a new, empty multiset, sorted according to the elements' natural order.All elements
  inserted into the multiset must implement the <code>Comparable</code> interface.
 Furthermore, all
  such elements must be <i>mutually comparable</i>: <code>e1.compareTo(e2)</code> must not throw a 
 <code>ClassCastException</code> for any elements <code>e1</code> and <code>e2</code> in the multiset. If the
  user attempts to add an element to the multiset that violates this constraint (for example, the
  user attempts to add a string element to a set whose elements are integers), the <code>add(Object)</code>
  call will throw a <code>ClassCastException</code>.
  
 <p>The type specification is <code><E extends Comparable></code>, instead of the more specific 
 <code><E extends Comparable<? super E>></code>, to support classes defined without generics.
 */
+ (ComGoogleCommonCollectTreeMultiset *)create;

/*!
 @brief Creates a new, empty multiset, sorted according to the specified comparator.All elements
  inserted into the multiset must be <i>mutually comparable</i> by the specified comparator: 
 <code>comparator.compare(e1, e2)</code> must not throw a <code>ClassCastException</code> for any elements 
 <code>e1</code> and <code>e2</code> in the multiset.
 If the user attempts to add an element to the
  multiset that violates this constraint, the <code>add(Object)</code> call will throw a <code>ClassCastException</code>
 .
 @param comparator the comparator that will be used to sort this multiset. A null value      indicates that the elements' 
  <i> natural ordering </i>  should be used.
 */
+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaUtilComparator:(id<JavaUtilComparator> __nullable)comparator;

/*!
 @brief Creates an empty multiset containing the given initial elements, sorted according to the
  elements' natural order.
 <p>This implementation is highly efficient when <code>elements</code> is itself a <code>Multiset</code>.
  
 <p>The type specification is <code><E extends Comparable></code>, instead of the more specific 
 <code><E extends Comparable<? super E>></code>, to support classes defined without generics.
 */
+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaLangIterable:(id<JavaLangIterable> __nonnull)elements;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id __nullable)upperBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

- (id<JavaUtilIterator>)iterator;

- (jint)removeWithId:(id __nullable)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id __nullable)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id __nullable)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (jint)size;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id __nullable)lowerBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

- (instancetype __nonnull)initWithComGoogleCommonCollectTreeMultiset_Reference:(ComGoogleCommonCollectTreeMultiset_Reference * __nonnull)rootReference
                                        withComGoogleCommonCollectGeneralRange:(ComGoogleCommonCollectGeneralRange * __nonnull)range
                                withComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode * __nonnull)endLink;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)distinctElements;

+ (jint)distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode * __nullable)node;

- (id<JavaUtilIterator>)elementIterator;

- (id<JavaUtilIterator>)entryIterator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

- (instancetype __nonnull)initPackagePrivateWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset *self, ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *create_ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(ComGoogleCommonCollectTreeMultiset *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *create_ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT jint ComGoogleCommonCollectTreeMultiset_distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_AvlNode *node);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeMultiset")
