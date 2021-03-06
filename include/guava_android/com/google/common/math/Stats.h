//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/math/Stats.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathStats")
#ifdef RESTRICT_ComGoogleCommonMathStats
#define INCLUDE_ALL_ComGoogleCommonMathStats 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathStats 1
#endif
#undef RESTRICT_ComGoogleCommonMathStats

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathStats_) && (INCLUDE_ALL_ComGoogleCommonMathStats || defined(INCLUDE_ComGoogleCommonMathStats))
#define ComGoogleCommonMathStats_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSByteArray;
@class IOSDoubleArray;
@class IOSIntArray;
@class IOSLongArray;
@class JavaNioByteBuffer;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

/*!
 @brief A bundle of statistical summary values -- sum, count, mean/average, min and max, and several
  forms of variance -- that were computed from a single set of zero or more floating-point values.
 <p>There are two ways to obtain a <code>Stats</code> instance: 
 <ul>
    <li>If all the values you want to summarize are already known, use the appropriate <code>Stats.of</code>
  factory method below. Primitive arrays, iterables and iterators of any kind of
        <code>Number</code>, and primitive varargs are supported.
    <li>Or, to avoid storing up all the data first, create a <code>StatsAccumulator</code> instance,
        feed values to it as you get them, then call <code>StatsAccumulator.snapshot</code>.
  </ul>
  
 <p>Static convenience methods called <code>meanOf</code> are also provided for users who wish to
  calculate <i>only</i> the mean. 
 <p><b>Java 8 users:</b> If you are not using any of the variance statistics, you may wish to use
  built-in JDK libraries instead of this class.
 @author Pete Gillin
 @author Kevin Bourrillion
 @since 20.0
 */
@interface ComGoogleCommonMathStats : NSObject < JavaIoSerializable >
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);

#pragma mark Public

/*!
 @brief Returns the number of values.
 */
- (jlong)count;

/*!
 @brief <p><b>Note:</b> This tests exact equality of the calculated statistics, including the floating
  point values.
 Two instances are guaranteed to be considered equal if one is copied from the
  other using <code>second = new StatsAccumulator().addAll(first).snapshot()</code>, if both were
  obtained by calling <code>snapshot()</code> on the same <code>StatsAccumulator</code> without adding any
  values in between the two calls, or if one is obtained from the other after round-tripping
  through java serialization. However, floating point rounding errors mean that it may be false
  for some instances where the statistics are mathematically equal, including instances
  constructed from the same values in a different order... or (in the general case) even in the
  same order. (It is guaranteed to return true for instances constructed from the same values in
  the same order if <code>strictfp</code> is in effect, or if the system architecture guarantees 
 <code>strictfp</code>-like semantics.)
 */
- (jboolean)isEqual:(id __nullable)obj;

/*!
 @brief Creates a Stats instance from the given byte representation which was obtained by <code>toByteArray</code>
 .
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 */
+ (ComGoogleCommonMathStats *)fromByteArrayWithByteArray:(IOSByteArray * __nonnull)byteArray;

/*!
 @brief <p><b>Note:</b> This hash code is consistent with exact equality of the calculated statistics,
  including the floating point values.
 See the note on <code>equals</code> for details.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the highest value in the dataset.The count must be non-zero.
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains <code>Double.NaN</code> then the result is <code>Double.NaN</code>. If it
  contains <code>Double.POSITIVE_INFINITY</code> and not <code>Double.NaN</code> then the result is <code>Double.POSITIVE_INFINITY</code>
 . If it contains <code>Double.NEGATIVE_INFINITY</code> and finite values
  only then the result is the highest finite value. If it contains <code>Double.NEGATIVE_INFINITY</code>
  only then the result is <code>Double.NEGATIVE_INFINITY</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)max;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>If these values are a sample drawn from a population, this is also an unbiased estimator of
  the arithmetic mean of the population. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains <code>Double.NaN</code> then the result is <code>Double.NaN</code>. If it
  contains both <code>Double.POSITIVE_INFINITY</code> and <code>Double.NEGATIVE_INFINITY</code> then the
  result is <code>Double.NaN</code>. If it contains <code>Double.POSITIVE_INFINITY</code> and finite values
  only or <code>Double.POSITIVE_INFINITY</code> only, the result is <code>Double.POSITIVE_INFINITY</code>.
  If it contains <code>Double.NEGATIVE_INFINITY</code> and finite values only or <code>Double.NEGATIVE_INFINITY</code>
  only, the result is <code>Double.NEGATIVE_INFINITY</code>.
  
 <p>If you only want to calculate the mean, use <code>meanOf</code> instead of creating a <code>Stats</code>
  instance.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)mean;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>The definition of the mean is the same as <code>Stats.mean</code>.
 @param values a series of values
 @throw IllegalArgumentExceptionif the dataset is empty
 */
+ (jdouble)meanOfWithDoubleArray:(IOSDoubleArray * __nonnull)values;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>The definition of the mean is the same as <code>Stats.mean</code>.
 @param values a series of values
 @throw IllegalArgumentExceptionif the dataset is empty
 */
+ (jdouble)meanOfWithIntArray:(IOSIntArray * __nonnull)values;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>The definition of the mean is the same as <code>Stats.mean</code>.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision)
 @throw IllegalArgumentExceptionif the dataset is empty
 */
+ (jdouble)meanOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>The definition of the mean is the same as <code>Stats.mean</code>.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision)
 @throw IllegalArgumentExceptionif the dataset is empty
 */
+ (jdouble)meanOfWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)values;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Arithmetic_mean">arithmetic mean</a> of the
  values.The count must be non-zero.
 <p>The definition of the mean is the same as <code>Stats.mean</code>.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision for longs of magnitude over 2^53 (slightly over 9e15))
 @throw IllegalArgumentExceptionif the dataset is empty
 */
+ (jdouble)meanOfWithLongArray:(IOSLongArray * __nonnull)values;

/*!
 @brief Returns the lowest value in the dataset.The count must be non-zero.
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains <code>Double.NaN</code> then the result is <code>Double.NaN</code>. If it
  contains <code>Double.NEGATIVE_INFINITY</code> and not <code>Double.NaN</code> then the result is <code>Double.NEGATIVE_INFINITY</code>
 . If it contains <code>Double.POSITIVE_INFINITY</code> and finite values
  only then the result is the lowest finite value. If it contains <code>Double.POSITIVE_INFINITY</code>
  only then the result is <code>Double.POSITIVE_INFINITY</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)min;

/*!
 @brief Returns statistics over a dataset containing the given values.
 @param values a series of values
 */
+ (ComGoogleCommonMathStats *)ofWithDoubleArray:(IOSDoubleArray * __nonnull)values;

/*!
 @brief Returns statistics over a dataset containing the given values.
 @param values a series of values
 */
+ (ComGoogleCommonMathStats *)ofWithIntArray:(IOSIntArray * __nonnull)values;

/*!
 @brief Returns statistics over a dataset containing the given values.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision)
 */
+ (ComGoogleCommonMathStats *)ofWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

/*!
 @brief Returns statistics over a dataset containing the given values.The iterator will be completely
  consumed by this method.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision)
 */
+ (ComGoogleCommonMathStats *)ofWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)values;

/*!
 @brief Returns statistics over a dataset containing the given values.
 @param values a series of values, which will be converted to <code>double</code>  values (this may
       cause loss of precision for longs of magnitude over 2^53 (slightly over 9e15))
 */
+ (ComGoogleCommonMathStats *)ofWithLongArray:(IOSLongArray * __nonnull)values;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Standard_deviation#Definition_of_population_values">
  population standard deviation</a> of the values.The count must be non-zero.
 <p>This is guaranteed to return zero if the dataset contains only exactly one finite value. It
  is not guaranteed to return zero when the dataset consists of the same value multiple times,
  due to numerical errors. However, it is guaranteed never to return a negative result. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)populationStandardDeviation;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Variance#Population_variance">population
  variance</a> of the values.The count must be non-zero.
 <p>This is guaranteed to return zero if the dataset contains only exactly one finite value. It
  is not guaranteed to return zero when the dataset consists of the same value multiple times,
  due to numerical errors. However, it is guaranteed never to return a negative result. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty
 */
- (jdouble)populationVariance;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Standard_deviation#Corrected_sample_standard_deviation">
  corrected sample standard deviation</a> of the values.If this dataset is a sample drawn from a
  population, this is an estimator of the population standard deviation of the population which
  is less biased than <code>populationStandardDeviation()</code> (the unbiased estimator depends on
  the distribution).
 The count must be greater than one. 
 <p>This is not guaranteed to return zero when the dataset consists of the same value multiple
  times, due to numerical errors. However, it is guaranteed never to return a negative result. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single value
 */
- (jdouble)sampleStandardDeviation;

/*!
 @brief Returns the <a href="http://en.wikipedia.org/wiki/Variance#Sample_variance">unbiased sample
  variance</a> of the values.If this dataset is a sample drawn from a population, this is an
  unbiased estimator of the population variance of the population.
 The count must be greater than
  one. 
 <p>This is not guaranteed to return zero when the dataset consists of the same value multiple
  times, due to numerical errors. However, it is guaranteed never to return a negative result. 
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains any non-finite values (<code>Double.POSITIVE_INFINITY</code>, <code>Double.NEGATIVE_INFINITY</code>
 , or <code>Double.NaN</code>) then the result is <code>Double.NaN</code>.
 @throw IllegalStateExceptionif the dataset is empty or contains a single value
 */
- (jdouble)sampleVariance;

/*!
 @brief Returns the sum of the values.
 <h3>Non-finite values</h3>
  
 <p>If the dataset contains <code>Double.NaN</code> then the result is <code>Double.NaN</code>. If it
  contains both <code>Double.POSITIVE_INFINITY</code> and <code>Double.NEGATIVE_INFINITY</code> then the
  result is <code>Double.NaN</code>. If it contains <code>Double.POSITIVE_INFINITY</code> and finite values
  only or <code>Double.POSITIVE_INFINITY</code> only, the result is <code>Double.POSITIVE_INFINITY</code>.
  If it contains <code>Double.NEGATIVE_INFINITY</code> and finite values only or <code>Double.NEGATIVE_INFINITY</code>
  only, the result is <code>Double.NEGATIVE_INFINITY</code>.
 */
- (jdouble)sum;

/*!
 @brief Gets a byte array representation of this instance.
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 */
- (IOSByteArray *)toByteArray;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Internal constructor.Users should use <code>of</code> or <code>StatsAccumulator.snapshot</code>.
 <p>To ensure that the created instance obeys its contract, the parameters should satisfy the
  following constraints. This is the callers responsibility and is not enforced here. 
 <ul>
    <li>If <code>count</code> is 0, <code>mean</code> may have any finite value (its only usage will be to
        get multiplied by 0 to calculate the sum), and the other parameters may have any values
        (they will not be used).   
 <li>If <code>count</code> is 1, <code>sumOfSquaresOfDeltas</code> must be exactly 0.0 or <code>Double.NaN</code>
 .
  </ul>
 */
- (instancetype __nonnull)initWithLong:(jlong)count
                            withDouble:(jdouble)mean
                            withDouble:(jdouble)sumOfSquaresOfDeltas
                            withDouble:(jdouble)min
                            withDouble:(jdouble)max;

/*!
 @brief Creates a Stats instance from the byte representation read from the given <code>ByteBuffer</code>.
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 @param buffer A <code>ByteBuffer</code>  with at least BYTES <code>ByteBuffer.remaining</code> , ordered as
       <code>ByteOrder.LITTLE_ENDIAN</code> , from which a BYTES-long byte representation of this      instance is read. In the process increases the position of 
 <code>ByteBuffer</code>  by BYTES.
 */
+ (ComGoogleCommonMathStats *)readFromWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)buffer;

- (jdouble)sumOfSquaresOfDeltas;

/*!
 @brief Writes to the given <code>ByteBuffer</code> a byte representation of this instance.
 <p><b>Note:</b> No guarantees are made regarding stability of the representation between
  versions.
 @param buffer A <code>ByteBuffer</code>  with at least BYTES <code>ByteBuffer.remaining</code> , ordered as
       <code>ByteOrder.LITTLE_ENDIAN</code> , to which a BYTES-long byte representation of this instance      is written. In the process increases the position of 
 <code>ByteBuffer</code>  by BYTES.
 */
- (void)writeToWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)buffer;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathStats)

/*!
 @brief The size of byte array representation in bytes.
 */
inline jint ComGoogleCommonMathStats_get_BYTES(void);
#define ComGoogleCommonMathStats_BYTES 40
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathStats, BYTES, jint)

FOUNDATION_EXPORT void ComGoogleCommonMathStats_initWithLong_withDouble_withDouble_withDouble_withDouble_(ComGoogleCommonMathStats *self, jlong count, jdouble mean, jdouble sumOfSquaresOfDeltas, jdouble min, jdouble max);

FOUNDATION_EXPORT ComGoogleCommonMathStats *new_ComGoogleCommonMathStats_initWithLong_withDouble_withDouble_withDouble_withDouble_(jlong count, jdouble mean, jdouble sumOfSquaresOfDeltas, jdouble min, jdouble max) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonMathStats *create_ComGoogleCommonMathStats_initWithLong_withDouble_withDouble_withDouble_withDouble_(jlong count, jdouble mean, jdouble sumOfSquaresOfDeltas, jdouble min, jdouble max);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_ofWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_ofWithJavaUtilIterator_(id<JavaUtilIterator> values);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_ofWithDoubleArray_(IOSDoubleArray *values);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_ofWithIntArray_(IOSIntArray *values);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_ofWithLongArray_(IOSLongArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathStats_meanOfWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathStats_meanOfWithJavaUtilIterator_(id<JavaUtilIterator> values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathStats_meanOfWithDoubleArray_(IOSDoubleArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathStats_meanOfWithIntArray_(IOSIntArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathStats_meanOfWithLongArray_(IOSLongArray *values);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_fromByteArrayWithByteArray_(IOSByteArray *byteArray);

FOUNDATION_EXPORT ComGoogleCommonMathStats *ComGoogleCommonMathStats_readFromWithJavaNioByteBuffer_(JavaNioByteBuffer *buffer);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathStats)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathStats")
