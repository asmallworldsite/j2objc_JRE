//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/math/IntMath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathIntMath")
#ifdef RESTRICT_ComGoogleCommonMathIntMath
#define INCLUDE_ALL_ComGoogleCommonMathIntMath 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathIntMath 1
#endif
#undef RESTRICT_ComGoogleCommonMathIntMath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathIntMath_) && (INCLUDE_ALL_ComGoogleCommonMathIntMath || defined(INCLUDE_ComGoogleCommonMathIntMath))
#define ComGoogleCommonMathIntMath_

@class IOSByteArray;
@class IOSIntArray;
@class JavaMathRoundingMode;

/*!
 @brief A class for arithmetic on values of type <code>int</code>.Where possible, methods are defined and
  named analogously to their <code>BigInteger</code> counterparts.
 <p>The implementations of many methods in this class are based on material from Henry S. Warren,
  Jr.'s <i>Hacker's Delight</i>, (Addison Wesley, 2002). 
 <p>Similar functionality for <code>long</code> and for <code>BigInteger</code> can be found in <code>LongMath</code>
  and <code>BigIntegerMath</code> respectively. For other common operations on <code>int</code>
  values, see <code>com.google.common.primitives.Ints</code>.
 @author Louis Wasserman
 @since 11.0
 */
@interface ComGoogleCommonMathIntMath : NSObject
@property (readonly, class) jint MAX_SIGNED_POWER_OF_TWO NS_SWIFT_NAME(MAX_SIGNED_POWER_OF_TWO);
@property (readonly, class) jint MAX_POWER_OF_SQRT2_UNSIGNED NS_SWIFT_NAME(MAX_POWER_OF_SQRT2_UNSIGNED);
@property (readonly, class, strong) IOSByteArray *maxLog10ForLeadingZeros NS_SWIFT_NAME(maxLog10ForLeadingZeros);
@property (readonly, class, strong) IOSIntArray *powersOf10 NS_SWIFT_NAME(powersOf10);
@property (readonly, class, strong) IOSIntArray *halfPowersOf10 NS_SWIFT_NAME(halfPowersOf10);
@property (readonly, class) jint FLOOR_SQRT_MAX_INT NS_SWIFT_NAME(FLOOR_SQRT_MAX_INT);
@property (class, strong) IOSIntArray *biggestBinomials NS_SWIFT_NAME(biggestBinomials);

#pragma mark Public

/*!
 @brief Returns <code>n</code> choose <code>k</code>, also known as the binomial coefficient of <code>n</code> and 
 <code>k</code>, or <code>Integer.MAX_VALUE</code> if the result does not fit in an <code>int</code>.
 @throw IllegalArgumentExceptionif <code>n < 0</code>, <code>k < 0</code> or <code>k > n</code>
 */
+ (jint)binomialWithInt:(jint)n
                withInt:(jint)k;

/*!
 @brief Returns the smallest power of two greater than or equal to <code>x</code>.This is equivalent to 
 <code>checkedPow(2, log2(x, CEILING))</code>.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionof the next-higher power of two is not representable as an <code>int</code>
 , i.e. when <code>x > 2^30</code>
 @since 20.0
 */
+ (jint)ceilingPowerOfTwoWithInt:(jint)x;

/*!
 @brief Returns the sum of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a + b</code> overflows in signed <code>int</code> arithmetic
 */
+ (jint)checkedAddWithInt:(jint)a
                  withInt:(jint)b;

/*!
 @brief Returns the product of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a * b</code> overflows in signed <code>int</code> arithmetic
 */
+ (jint)checkedMultiplyWithInt:(jint)a
                       withInt:(jint)b;

/*!
 @brief Returns the <code>b</code> to the <code>k</code>th power, provided it does not overflow.
 <p><code>pow</code> may be faster, but does not check for overflow.
 @throw ArithmeticExceptionif <code>b</code> to the <code>k</code>th power overflows in signed <code>int</code>
  arithmetic
 */
+ (jint)checkedPowWithInt:(jint)b
                  withInt:(jint)k;

/*!
 @brief Returns the difference of <code>a</code> and <code>b</code>, provided it does not overflow.
 @throw ArithmeticExceptionif <code>a - b</code> overflows in signed <code>int</code> arithmetic
 */
+ (jint)checkedSubtractWithInt:(jint)a
                       withInt:(jint)b;

/*!
 @brief Returns the result of dividing <code>p</code> by <code>q</code>, rounding using the specified <code>RoundingMode</code>
 .
 @throw ArithmeticExceptionif <code>q == 0</code>, or if <code>mode == UNNECESSARY</code> and <code>a</code>
      is not an integer multiple of <code>b</code>
 */
+ (jint)divideWithInt:(jint)p
              withInt:(jint)q
withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

/*!
 @brief Returns <code>n!
 </code>, that is, the product of the first <code>n</code> positive integers, <code>1</code> if 
 <code>n == 0</code>, or <code>Integer.MAX_VALUE</code> if the result does not fit in a <code>int</code>.
 @throw IllegalArgumentExceptionif <code>n < 0</code>
 */
+ (jint)factorialWithInt:(jint)n;

/*!
 @brief Returns the largest power of two less than or equal to <code>x</code>.This is equivalent to <code>checkedPow(2, log2(x, FLOOR))</code>
 .
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @since 20.0
 */
+ (jint)floorPowerOfTwoWithInt:(jint)x;

/*!
 @brief Returns the greatest common divisor of <code>a, b</code>.Returns <code>0</code> if <code>a == 0 && b == 0</code>
 .
 @throw IllegalArgumentExceptionif <code>a < 0</code> or <code>b < 0</code>
 */
+ (jint)gcdWithInt:(jint)a
           withInt:(jint)b;

/*!
 @brief Returns <code>true</code> if <code>x</code> represents a power of two.
 <p>This differs from <code>Integer.bitCount(x) == 1</code>, because <code>Integer.bitCount(Integer.MIN_VALUE) == 1</code>
 , but <code>Integer.MIN_VALUE</code> is not a power of two.
 */
+ (jboolean)isPowerOfTwoWithInt:(jint)x;

/*!
 @brief Returns <code>true</code> if <code>n</code> is a <a href="http://mathworld.wolfram.com/PrimeNumber.html">
 prime number</a>: an integer <i>greater
  than one</i> that cannot be factored into a product of <i>smaller</i> positive integers.
 Returns <code>false</code> if <code>n</code> is zero, one, or a composite number (one which <i>can</i> be
  factored into smaller positive integers). 
 <p>To test larger numbers, use <code>LongMath.isPrime</code> or <code>BigInteger.isProbablePrime</code>.
 @throw IllegalArgumentExceptionif <code>n</code> is negative
 @since 20.0
 */
+ (jboolean)isPrimeWithInt:(jint)n;

/*!
 @brief Returns the base-10 logarithm of <code>x</code>, rounded according to the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>x</code>
      is not a power of ten
 */
+ (jint)log10WithInt:(jint)x
withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

/*!
 @brief Returns the base-2 logarithm of <code>x</code>, rounded according to the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x <= 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>x</code>
      is not a power of two
 */
+ (jint)log2WithInt:(jint)x
withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

/*!
 @brief Returns the arithmetic mean of <code>x</code> and <code>y</code>, rounded towards negative infinity.This
  method is overflow resilient.
 @since 14.0
 */
+ (jint)meanWithInt:(jint)x
            withInt:(jint)y;

/*!
 @brief Returns <code>x mod m</code>, a non-negative value less than <code>m</code>.This differs from <code>x %
  m</code>
 , which might be negative.
 <p>For example: 
 @code
 mod(7, 4) == 3
  mod(-7, 4) == 1
  mod(-1, 4) == 3
  mod(-8, 4) == 0
  mod(8, 4) == 0 
 
@endcode
 @throw ArithmeticExceptionif <code>m <= 0</code>
 - seealso: <a href="http://docs.oracle.com/javase/specs/jls/se7/html/jls-15.html#jls-15.17.3">
      Remainder Operator</a>
 */
+ (jint)modWithInt:(jint)x
           withInt:(jint)m;

/*!
 @brief Returns <code>b</code> to the <code>k</code>th power.Even if the result overflows, it will be equal to 
 <code>BigInteger.valueOf(b).pow(k).intValue()</code>.
 This implementation runs in <code>O(log k)</code>
  time. 
 <p>Compare <code>checkedPow</code>, which throws an <code>ArithmeticException</code> upon overflow.
 @throw IllegalArgumentExceptionif <code>k < 0</code>
 */
+ (jint)powWithInt:(jint)b
           withInt:(jint)k;

/*!
 @brief Returns the sum of <code>a</code> and <code>b</code> unless it would overflow or underflow in which case 
 <code>Integer.MAX_VALUE</code> or <code>Integer.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jint)saturatedAddWithInt:(jint)a
                    withInt:(jint)b;

/*!
 @brief Returns the product of <code>a</code> and <code>b</code> unless it would overflow or underflow in which
  case <code>Integer.MAX_VALUE</code> or <code>Integer.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jint)saturatedMultiplyWithInt:(jint)a
                         withInt:(jint)b;

/*!
 @brief Returns the <code>b</code> to the <code>k</code>th power, unless it would overflow or underflow in which
  case <code>Integer.MAX_VALUE</code> or <code>Integer.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jint)saturatedPowWithInt:(jint)b
                    withInt:(jint)k;

/*!
 @brief Returns the difference of <code>a</code> and <code>b</code> unless it would overflow or underflow in
  which case <code>Integer.MAX_VALUE</code> or <code>Integer.MIN_VALUE</code> is returned, respectively.
 @since 20.0
 */
+ (jint)saturatedSubtractWithInt:(jint)a
                         withInt:(jint)b;

/*!
 @brief Returns the square root of <code>x</code>, rounded with the specified rounding mode.
 @throw IllegalArgumentExceptionif <code>x < 0</code>
 @throw ArithmeticExceptionif <code>mode</code> is <code>RoundingMode.UNNECESSARY</code> and <code>sqrt(x)</code>
  is not an integer
 */
+ (jint)sqrtWithInt:(jint)x
withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

#pragma mark Package-Private

/*!
 @brief Returns 1 if <code>x < y</code> as unsigned integers, and 0 otherwise.Assumes that x - y fits into
  a signed int.
 The implementation is branch-free, and benchmarks suggest it is measurably (if
  narrowly) faster than the straightforward ternary expression.
 */
+ (jint)lessThanBranchFreeWithInt:(jint)x
                          withInt:(jint)y;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathIntMath)

inline jint ComGoogleCommonMathIntMath_get_MAX_SIGNED_POWER_OF_TWO(void);
#define ComGoogleCommonMathIntMath_MAX_SIGNED_POWER_OF_TWO 1073741824
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathIntMath, MAX_SIGNED_POWER_OF_TWO, jint)

/*!
 @brief The biggest half power of two that can fit in an unsigned int.
 */
inline jint ComGoogleCommonMathIntMath_get_MAX_POWER_OF_SQRT2_UNSIGNED(void);
#define ComGoogleCommonMathIntMath_MAX_POWER_OF_SQRT2_UNSIGNED -1257966797
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathIntMath, MAX_POWER_OF_SQRT2_UNSIGNED, jint)

inline IOSByteArray *ComGoogleCommonMathIntMath_get_maxLog10ForLeadingZeros(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonMathIntMath_maxLog10ForLeadingZeros;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathIntMath, maxLog10ForLeadingZeros, IOSByteArray *)

inline IOSIntArray *ComGoogleCommonMathIntMath_get_powersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathIntMath_powersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathIntMath, powersOf10, IOSIntArray *)

inline IOSIntArray *ComGoogleCommonMathIntMath_get_halfPowersOf10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathIntMath_halfPowersOf10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathIntMath, halfPowersOf10, IOSIntArray *)

inline jint ComGoogleCommonMathIntMath_get_FLOOR_SQRT_MAX_INT(void);
#define ComGoogleCommonMathIntMath_FLOOR_SQRT_MAX_INT 46340
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathIntMath, FLOOR_SQRT_MAX_INT, jint)

inline IOSIntArray *ComGoogleCommonMathIntMath_get_biggestBinomials(void);
inline IOSIntArray *ComGoogleCommonMathIntMath_set_biggestBinomials(IOSIntArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonMathIntMath_biggestBinomials;
J2OBJC_STATIC_FIELD_OBJ(ComGoogleCommonMathIntMath, biggestBinomials, IOSIntArray *)

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_ceilingPowerOfTwoWithInt_(jint x);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_floorPowerOfTwoWithInt_(jint x);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathIntMath_isPowerOfTwoWithInt_(jint x);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_lessThanBranchFreeWithInt_withInt_(jint x, jint y);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_log2WithInt_withJavaMathRoundingMode_(jint x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_log10WithInt_withJavaMathRoundingMode_(jint x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_powWithInt_withInt_(jint b, jint k);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_sqrtWithInt_withJavaMathRoundingMode_(jint x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_divideWithInt_withInt_withJavaMathRoundingMode_(jint p, jint q, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_modWithInt_withInt_(jint x, jint m);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_gcdWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_checkedAddWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_checkedSubtractWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_checkedMultiplyWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_checkedPowWithInt_withInt_(jint b, jint k);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_saturatedAddWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_saturatedSubtractWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_saturatedMultiplyWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_saturatedPowWithInt_withInt_(jint b, jint k);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_binomialWithInt_withInt_(jint n, jint k);

FOUNDATION_EXPORT jint ComGoogleCommonMathIntMath_meanWithInt_withInt_(jint x, jint y);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathIntMath_isPrimeWithInt_(jint n);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathIntMath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathIntMath")
