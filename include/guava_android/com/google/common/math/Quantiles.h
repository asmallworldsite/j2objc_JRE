//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/math/Quantiles.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathQuantiles")
#ifdef RESTRICT_ComGoogleCommonMathQuantiles
#define INCLUDE_ALL_ComGoogleCommonMathQuantiles 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathQuantiles 1
#endif
#undef RESTRICT_ComGoogleCommonMathQuantiles

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathQuantiles_) && (INCLUDE_ALL_ComGoogleCommonMathQuantiles || defined(INCLUDE_ComGoogleCommonMathQuantiles))
#define ComGoogleCommonMathQuantiles_

@class ComGoogleCommonMathQuantiles_Scale;
@class ComGoogleCommonMathQuantiles_ScaleAndIndex;

/*!
 @brief Provides a fluent API for calculating <a href="http://en.wikipedia.org/wiki/Quantile">
 quantiles</a>.
 <h3>Examples</h3>
  
 <p>To compute the median: 
 @code
 double myMedian = median().compute(myDataset); 
 
@endcode
  where <code>median()</code> has been statically imported. 
 <p>To compute the 99th percentile: 
 @code
 double myPercentile99 = percentiles().index(99).compute(myDataset); 
 
@endcode
  where <code>percentiles()</code> has been statically imported. 
 <p>To compute median and the 90th and 99th percentiles: 
 @code
 Map<Integer, Double> myPercentiles =
      percentiles().indexes(50, 90, 99).compute(myDataset); 
 
@endcode
  where <code>percentiles()</code> has been statically imported: <code>myPercentiles</code> maps the keys
  50, 90, and 99, to their corresponding quantile values. 
 <p>To compute quartiles, use <code>quartiles()</code> instead of <code>percentiles()</code>. To compute
  arbitrary q-quantiles, use <code>scale(q)</code>.
  
 <p>These examples all take a copy of your dataset. If you have a double array, you are okay with
  it being arbitrarily reordered, and you want to avoid that copy, you can use <code>computeInPlace</code>
  instead of <code>compute</code>.
  
 <h3>Definition and notes on interpolation</h3>
  
 <p>The definition of the kth q-quantile of N values is as follows: define x = k * (N - 1) / q; if
  x is an integer, the result is the value which would appear at index x in the sorted dataset
  (unless there are <code>NaN</code> values, see below); otherwise, the result is the average
  of the values which would appear at the indexes floor(x) and ceil(x) weighted by (1-frac(x)) and
  frac(x) respectively. This is the same definition as used by Excel and by S, it is the Type 7
  definition in <a href="http://stat.ethz.ch/R-manual/R-devel/library/stats/html/quantile.html">
 R</a>, and it is
  described by <a href="http://en.wikipedia.org/wiki/Quantile#Estimating_the_quantiles_of_a_population">
  wikipedia</a> as providing "Linear interpolation of the modes for the order statistics for the
  uniform distribution on [0,1]." 
 <h3>Handling of non-finite values</h3>
  
 <p>If any values in the input are <code>NaN</code> then all values returned are <code>NaN</code>
 . (This is the one occasion when the behaviour is not the same as you'd get from
  sorting with <code>Arrays.sort(double[])</code> or <code>Collections.sort(List&lt;Double&gt;)</code>
  and selecting
  the required value(s). Those methods would sort <code>NaN</code> as if it is greater than
  any other value and place them at the end of the dataset, even after <code>POSITIVE_INFINITY</code>
 .)
  
 <p>Otherwise, <code>NEGATIVE_INFINITY</code> and <code>POSITIVE_INFINITY</code>
  sort to the beginning and the end of the dataset, as
  you would expect. 
 <p>If required to do a weighted average between an infinity and a finite value, or between an
  infinite value and itself, the infinite value is returned. If required to do a weighted average
  between <code>NEGATIVE_INFINITY</code> and <code>POSITIVE_INFINITY</code>
 , <code>NaN</code> is returned (note that this will only happen if the
  dataset contains no finite values). 
 <h3>Performance</h3>
  
 <p>The average time complexity of the computation is O(N) in the size of the dataset. There is a
  worst case time complexity of O(N^2). You are extremely unlikely to hit this quadratic case on
  randomly ordered data (the probability decreases faster than exponentially in N), but if you are
  passing in unsanitized user data then a malicious user could force it. A light shuffle of the
  data using an unpredictable seed should normally be enough to thwart this attack. 
 <p>The time taken to compute multiple quantiles on the same dataset using <code>indexes</code>
  is generally less than the total time taken to compute each of them separately, and
  sometimes much less. For example, on a large enough dataset, computing the 90th and 99th
  percentiles together takes about 55% as long as computing them separately. 
 <p>When calling <code>ScaleAndIndex.compute</code> (in either
  form
 ), the memory requirement is 8*N bytes for the copy of the dataset plus an overhead which is
  independent of N (but depends on the quantiles being computed). When calling <code>computeInPlace</code>
  (in either form
 ), only the overhead is required. The number of object allocations is independent of
  N in both cases.
 @author Pete Gillin
 @since 20.0
 */
@interface ComGoogleCommonMathQuantiles : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Specifies the computation of a median (i.e.the 1st 2-quantile).
 */
+ (ComGoogleCommonMathQuantiles_ScaleAndIndex *)median;

/*!
 @brief Specifies the computation of percentiles (i.e.100-quantiles).
 */
+ (ComGoogleCommonMathQuantiles_Scale *)percentiles;

/*!
 @brief Specifies the computation of quartiles (i.e.4-quantiles).
 */
+ (ComGoogleCommonMathQuantiles_Scale *)quartiles;

/*!
 @brief Specifies the computation of q-quantiles.
 @param scale_ the scale for the quantiles to be calculated, i.e. the q of the q-quantiles, which      must be positive
 */
+ (ComGoogleCommonMathQuantiles_Scale *)scale__WithInt:(jint)scale_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathQuantiles)

FOUNDATION_EXPORT void ComGoogleCommonMathQuantiles_init(ComGoogleCommonMathQuantiles *self);

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles *new_ComGoogleCommonMathQuantiles_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles *create_ComGoogleCommonMathQuantiles_init(void);

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles_ScaleAndIndex *ComGoogleCommonMathQuantiles_median(void);

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles_Scale *ComGoogleCommonMathQuantiles_quartiles(void);

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles_Scale *ComGoogleCommonMathQuantiles_percentiles(void);

FOUNDATION_EXPORT ComGoogleCommonMathQuantiles_Scale *ComGoogleCommonMathQuantiles_scale__WithInt_(jint scale_);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathQuantiles)

#endif

#if !defined (ComGoogleCommonMathQuantiles_Scale_) && (INCLUDE_ALL_ComGoogleCommonMathQuantiles || defined(INCLUDE_ComGoogleCommonMathQuantiles_Scale))
#define ComGoogleCommonMathQuantiles_Scale_

@class ComGoogleCommonMathQuantiles_ScaleAndIndex;
@class ComGoogleCommonMathQuantiles_ScaleAndIndexes;
@class IOSIntArray;
@protocol JavaUtilCollection;

/*!
 @brief Describes the point in a fluent API chain where only the scale (i.e.the q in q-quantiles) has
  been specified.
 @since 20.0
 */
@interface ComGoogleCommonMathQuantiles_Scale : NSObject

#pragma mark Public

/*!
 @brief Specifies a single quantile index to be calculated, i.e.the k in the kth q-quantile.
 @param index the quantile index, which must be in the inclusive range [0, q] for q-quantiles
 */
- (ComGoogleCommonMathQuantiles_ScaleAndIndex *)indexWithInt:(jint)index;

/*!
 @brief Specifies multiple quantile indexes to be calculated, each index being the k in the kth
  q-quantile.
 @param indexes the quantile indexes, each of which must be in the inclusive range [0, q] for      q-quantiles; the order of the indexes is unimportant, duplicates will be ignored, and the
       set will be snapshotted when this method is called
 @throw IllegalArgumentExceptionif <code>indexes</code> is empty
 */
- (ComGoogleCommonMathQuantiles_ScaleAndIndexes *)indexesWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)indexes;

/*!
 @brief Specifies multiple quantile indexes to be calculated, each index being the k in the kth
  q-quantile.
 @param indexes the quantile indexes, each of which must be in the inclusive range [0, q] for      q-quantiles; the order of the indexes is unimportant, duplicates will be ignored, and the
       set will be snapshotted when this method is called
 @throw IllegalArgumentExceptionif <code>indexes</code> is empty
 */
- (ComGoogleCommonMathQuantiles_ScaleAndIndexes *)indexesWithIntArray:(IOSIntArray * __nonnull)indexes;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathQuantiles_Scale)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathQuantiles_Scale)

#endif

#if !defined (ComGoogleCommonMathQuantiles_ScaleAndIndex_) && (INCLUDE_ALL_ComGoogleCommonMathQuantiles || defined(INCLUDE_ComGoogleCommonMathQuantiles_ScaleAndIndex))
#define ComGoogleCommonMathQuantiles_ScaleAndIndex_

@class IOSDoubleArray;
@class IOSIntArray;
@class IOSLongArray;
@protocol JavaUtilCollection;

/*!
 @brief Describes the point in a fluent API chain where the scale and a single quantile index (i.e.the
  q and the k in the kth q-quantile) have been specified.
 @since 20.0
 */
@interface ComGoogleCommonMathQuantiles_ScaleAndIndex : NSObject

#pragma mark Public

/*!
 @brief Computes the quantile value of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles (with any associated lost of precision), and which will not be mutated by
       this call (it is copied instead)
 @return the quantile value
 */
- (jdouble)computeWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)dataset;

/*!
 @brief Computes the quantile value of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will not      be mutated by this call (it is copied instead)
 @return the quantile value
 */
- (jdouble)computeWithDoubleArray:(IOSDoubleArray * __nonnull)dataset;

/*!
 @brief Computes the quantile value of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles, and which will not be mutated by this call (it is copied instead)
 @return the quantile value
 */
- (jdouble)computeWithIntArray:(IOSIntArray * __nonnull)dataset;

/*!
 @brief Computes the quantile value of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles (with any associated lost of precision), and which will not be mutated by
       this call (it is copied instead)
 @return the quantile value
 */
- (jdouble)computeWithLongArray:(IOSLongArray * __nonnull)dataset;

/*!
 @brief Computes the quantile value of the given dataset, performing the computation in-place.
 @param dataset the dataset to do the calculation on, which must be non-empty, and which will      be arbitrarily reordered by this method call
 @return the quantile value
 */
- (jdouble)computeInPlaceWithDoubleArray:(IOSDoubleArray * __nonnull)dataset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathQuantiles_ScaleAndIndex)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathQuantiles_ScaleAndIndex)

#endif

#if !defined (ComGoogleCommonMathQuantiles_ScaleAndIndexes_) && (INCLUDE_ALL_ComGoogleCommonMathQuantiles || defined(INCLUDE_ComGoogleCommonMathQuantiles_ScaleAndIndexes))
#define ComGoogleCommonMathQuantiles_ScaleAndIndexes_

@class IOSDoubleArray;
@class IOSIntArray;
@class IOSLongArray;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

/*!
 @brief Describes the point in a fluent API chain where the scale and a multiple quantile indexes (i.e.
 the q and a set of values for the k in the kth q-quantile) have been specified.
 @since 20.0
 */
@interface ComGoogleCommonMathQuantiles_ScaleAndIndexes : NSObject

#pragma mark Public

/*!
 @brief Computes the quantile values of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles (with any associated lost of precision), and which will not be mutated by
       this call (it is copied instead)
 @return an unmodifiable, ordered map of results: the keys will be the specified quantile
      indexes, and the values the corresponding quantile values. When iterating, entries in the
      map are ordered by quantile index in the same order they were passed to the <code>indexes</code>
  method.
 */
- (id<JavaUtilMap>)computeWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)dataset;

/*!
 @brief Computes the quantile values of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will not      be mutated by this call (it is copied instead)
 @return an unmodifiable, ordered map of results: the keys will be the specified quantile
      indexes, and the values the corresponding quantile values. When iterating, entries in the
      map are ordered by quantile index in the same order they were passed to the <code>indexes</code>
  method.
 */
- (id<JavaUtilMap>)computeWithDoubleArray:(IOSDoubleArray * __nonnull)dataset;

/*!
 @brief Computes the quantile values of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles, and which will not be mutated by this call (it is copied instead)
 @return an unmodifiable, ordered map of results: the keys will be the specified quantile
      indexes, and the values the corresponding quantile values. When iterating, entries in the
      map are ordered by quantile index in the same order they were passed to the <code>indexes</code>
  method.
 */
- (id<JavaUtilMap>)computeWithIntArray:(IOSIntArray * __nonnull)dataset;

/*!
 @brief Computes the quantile values of the given dataset.
 @param dataset the dataset to do the calculation on, which must be non-empty, which will be      cast to doubles (with any associated lost of precision), and which will not be mutated by
       this call (it is copied instead)
 @return an unmodifiable, ordered map of results: the keys will be the specified quantile
      indexes, and the values the corresponding quantile values. When iterating, entries in the
      map are ordered by quantile index in the same order they were passed to the <code>indexes</code>
  method.
 */
- (id<JavaUtilMap>)computeWithLongArray:(IOSLongArray * __nonnull)dataset;

/*!
 @brief Computes the quantile values of the given dataset, performing the computation in-place.
 @param dataset the dataset to do the calculation on, which must be non-empty, and which will      be arbitrarily reordered by this method call
 @return an unmodifiable, ordered map of results: the keys will be the specified quantile
      indexes, and the values the corresponding quantile values. When iterating, entries in the
      map are ordered by quantile index in the same order that the indexes were passed to the     
 <code>indexes</code> method.
 */
- (id<JavaUtilMap>)computeInPlaceWithDoubleArray:(IOSDoubleArray * __nonnull)dataset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathQuantiles_ScaleAndIndexes)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathQuantiles_ScaleAndIndexes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathQuantiles")
