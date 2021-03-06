//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/TopKSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTopKSelector")
#ifdef RESTRICT_ComGoogleCommonCollectTopKSelector
#define INCLUDE_ALL_ComGoogleCommonCollectTopKSelector 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTopKSelector 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTopKSelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTopKSelector_) && (INCLUDE_ALL_ComGoogleCommonCollectTopKSelector || defined(INCLUDE_ComGoogleCommonCollectTopKSelector))
#define ComGoogleCommonCollectTopKSelector_

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief An accumulator that selects the "top" <code>k</code> elements added to it, relative to a provided
  comparator."
 Top" can mean the greatest or the lowest elements, specified in the factory used to
  create the <code>TopKSelector</code> instance. 
 <p>If your input data is available as a <code>Stream</code>, prefer passing <code>Comparators.least(int)</code>
  to <code>Stream.collect(java.util.stream.Collector)</code>. If it is available
  as an <code>Iterable</code> or <code>Iterator</code>, prefer <code>Ordering.leastOf(Iterable, int)</code>.
  
 <p>This uses the same efficient implementation as <code>Ordering.leastOf(Iterable, int)</code>,
  offering expected O(n + k log k) performance (worst case O(n log k)) for n calls to <code>offer</code>
  and a call to <code>topK</code>, with O(k) memory. In comparison, quickselect has the same
  asymptotics but requires O(n) memory, and a <code>PriorityQueue</code> implementation takes O(n log
  k). In benchmarks, this implementation performs at least as well as either implementation, and
  degrades more gracefully for worst-case input. 
 <p>The implementation does not necessarily use a <i>stable</i> sorting algorithm; when multiple
  equivalent elements are added to it, it is undefined which will come first in the output.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectTopKSelector : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>TopKSelector</code> that collects the greatest <code>k</code> elements added to it,
  relative to the natural ordering of the elements, and returns them via <code>topK</code> in
  descending order.
 @throw IllegalArgumentExceptionif <code>k < 0</code> or <code>k > Integer.MAX_VALUE / 2</code>
 */
+ (ComGoogleCommonCollectTopKSelector *)greatestWithInt:(jint)k;

/*!
 @brief Returns a <code>TopKSelector</code> that collects the greatest <code>k</code> elements added to it,
  relative to the specified comparator, and returns them via <code>topK</code> in descending order.
 @throw IllegalArgumentExceptionif <code>k < 0</code> or <code>k > Integer.MAX_VALUE / 2</code>
 */
+ (ComGoogleCommonCollectTopKSelector *)greatestWithInt:(jint)k
                                 withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief Returns a <code>TopKSelector</code> that collects the lowest <code>k</code> elements added to it,
  relative to the natural ordering of the elements, and returns them via <code>topK</code> in
  ascending order.
 @throw IllegalArgumentExceptionif <code>k < 0</code> or <code>k > Integer.MAX_VALUE / 2</code>
 */
+ (ComGoogleCommonCollectTopKSelector *)leastWithInt:(jint)k;

/*!
 @brief Returns a <code>TopKSelector</code> that collects the lowest <code>k</code> elements added to it,
  relative to the specified comparator, and returns them via <code>topK</code> in ascending order.
 @throw IllegalArgumentExceptionif <code>k < 0</code> or <code>k > Integer.MAX_VALUE / 2</code>
 */
+ (ComGoogleCommonCollectTopKSelector *)leastWithInt:(jint)k
                              withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

/*!
 @brief Adds <code>elem</code> as a candidate for the top <code>k</code> elements.This operation takes amortized
  O(1) time.
 */
- (void)offerWithId:(id __nullable)elem;

/*!
 @brief Adds each member of <code>elements</code> as a candidate for the top <code>k</code> elements.This
  operation takes amortized linear time in the length of <code>elements</code>.
 <p>If all input data to this <code>TopKSelector</code> is in a single <code>Iterable</code>, prefer 
 <code>Ordering.leastOf(Iterable, int)</code>, which provides a simpler API for that use case.
 */
- (void)offerAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)elements;

/*!
 @brief Adds each member of <code>elements</code> as a candidate for the top <code>k</code> elements.This
  operation takes amortized linear time in the length of <code>elements</code>.
 The iterator is
  consumed after this operation completes. 
 <p>If all input data to this <code>TopKSelector</code> is in a single <code>Iterator</code>, prefer 
 <code>Ordering.leastOf(Iterator, int)</code>, which provides a simpler API for that use case.
 */
- (void)offerAllWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)elements;

/*!
 @brief Returns the top <code>k</code> elements offered to this <code>TopKSelector</code>, or all elements if
  fewer than <code>k</code> have been offered, in the order specified by the factory used to create
  this <code>TopKSelector</code>.
 <p>The returned list is an unmodifiable copy and will not be affected by further changes to
  this <code>TopKSelector</code>. This method returns in O(k log k) time.
 */
- (id<JavaUtilList>)topK;

#pragma mark Package-Private

- (ComGoogleCommonCollectTopKSelector *)combineWithComGoogleCommonCollectTopKSelector:(ComGoogleCommonCollectTopKSelector * __nonnull)other;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTopKSelector)

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_leastWithInt_(jint k);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_leastWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_greatestWithInt_(jint k);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_greatestWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTopKSelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTopKSelector")
