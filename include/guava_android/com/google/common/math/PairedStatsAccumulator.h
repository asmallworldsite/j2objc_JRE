//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/math/PairedStatsAccumulator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathPairedStatsAccumulator")
#ifdef RESTRICT_ComGoogleCommonMathPairedStatsAccumulator
#define INCLUDE_ALL_ComGoogleCommonMathPairedStatsAccumulator 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathPairedStatsAccumulator 1
#endif
#undef RESTRICT_ComGoogleCommonMathPairedStatsAccumulator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathPairedStatsAccumulator_) && (INCLUDE_ALL_ComGoogleCommonMathPairedStatsAccumulator || defined(INCLUDE_ComGoogleCommonMathPairedStatsAccumulator))
#define ComGoogleCommonMathPairedStatsAccumulator_

@class ComGoogleCommonMathLinearTransformation;
@class ComGoogleCommonMathPairedStats;
@class ComGoogleCommonMathStats;

/*!
 @brief A mutable object which accumulates paired double values (e.g.points on a plane) and tracks some
  basic statistics over all the values added so far.
 This class is not thread safe.
 @author Pete Gillin
 @since 20.0
 */
@interface ComGoogleCommonMathPairedStatsAccumulator : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Adds the given pair of values to the dataset.
 */
- (void)addWithDouble:(jdouble)x
           withDouble:(jdouble)y;

/*!
 @brief Adds the given statistics to the dataset, as if the individual values used to compute the
  statistics had been added directly.
 */
- (void)addAllWithComGoogleCommonMathPairedStats:(ComGoogleCommonMathPairedStats * __nonnull)values;

/*!
 @brief Returns the number of pairs in the dataset.
 */
- (jlong)count;

/*!
 @brief Returns a linear transformation giving the best fit to the data according to <a href="http://mathworld.wolfram.com/LeastSquaresFitting.html">
 Ordinary Least Squares linear
  regression</a> of <code>y</code> as a function of <code>x</code>.The count must be greater than one, and
  either the <code>x</code> or <code>y</code> data must have a non-zero population variance (i.e.
 <code>xStats().populationVariance() > 0.0 || yStats().populationVariance() > 0.0</code>
 ). The result is
  guaranteed to be horizontal if there is variance in the <code>x</code> data but not the <code>y</code>
  data, and vertical if there is variance in the <code>y</code> data but not the <code>x</code> data. 
 <p>This fit minimizes the root-mean-square error in <code>y</code> as a function of <code>x</code>. This
  error is defined as the square root of the mean of the squares of the differences between the
  actual <code>y</code> values of the data and the values predicted by the fit for the <code>x</code>
  values (i.e. it is the square root of the mean of the squares of the vertical distances between
  the data points and the best fit line). For this fit, this error is a fraction <code>sqrt(1 -
  R*R)</code>
  of the population standard deviation of <code>y</code>, where <code>R</code> is the Pearson's
  correlation coefficient (as given by <code>pearsonsCorrelationCoefficient()</code>).
  
 <p>The corresponding root-mean-square error in <code>x</code> as a function of <code>y</code> is a
  fraction <code>sqrt(1/(R*R) - 1)</code> of the population standard deviation of <code>x</code>. This fit
  does not normally minimize that error: to do that, you should swap the roles of <code>x</code> and 
 <code>y</code>.
  
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>LinearTransformation.forNaN()</code>
 .
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values, or
      both the <code>x</code> and <code>y</code> dataset have zero population variance
 */
- (ComGoogleCommonMathLinearTransformation *)leastSquaresFit;

/*!
 @brief Returns the <a href="http://mathworld.wolfram.com/CorrelationCoefficient.html">Pearson's or
  product-moment correlation coefficient</a> of the values.The count must greater than one, and
  the <code>x</code> and <code>y</code> values must both have non-zero population variance (i.e.
 <code>xStats().populationVariance() > 0.0 && yStats().populationVariance() > 0.0</code>
 ). The result is not
  guaranteed to be exactly +/-1 even when the data are perfectly (anti-)correlated, due to
  numerical errors. However, it is guaranteed to be in the inclusive range [-1, +1]. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values, or
      either the <code>x</code> and <code>y</code> dataset has zero population variance
 */
- (jdouble)pearsonsCorrelationCoefficient;

/*!
 @brief Returns the population covariance of the values.The count must be non-zero.
 <p>This is guaranteed to return zero if the dataset contains a single pair of finite values. It
  is not guaranteed to return zero when the dataset consists of the same pair of values multiple
  times, due to numerical errors. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)populationCovariance;

/*!
 @brief Returns the sample covariance of the values.The count must be greater than one.
 <p>This is not guaranteed to return zero when the dataset consists of the same pair of values
  multiple times, due to numerical errors. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single pair of values
 */
- (jdouble)sampleCovariance;

/*!
 @brief Returns an immutable snapshot of the current statistics.
 */
- (ComGoogleCommonMathPairedStats *)snapshot;

/*!
 @brief Returns an immutable snapshot of the statistics on the <code>x</code> values alone.
 */
- (ComGoogleCommonMathStats *)xStats;

/*!
 @brief Returns an immutable snapshot of the statistics on the <code>y</code> values alone.
 */
- (ComGoogleCommonMathStats *)yStats;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathPairedStatsAccumulator)

FOUNDATION_EXPORT void ComGoogleCommonMathPairedStatsAccumulator_init(ComGoogleCommonMathPairedStatsAccumulator *self);

FOUNDATION_EXPORT ComGoogleCommonMathPairedStatsAccumulator *new_ComGoogleCommonMathPairedStatsAccumulator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonMathPairedStatsAccumulator *create_ComGoogleCommonMathPairedStatsAccumulator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathPairedStatsAccumulator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathPairedStatsAccumulator")
