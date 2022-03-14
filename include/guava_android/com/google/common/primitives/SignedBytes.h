//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/primitives/SignedBytes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes")
#ifdef RESTRICT_ComGoogleCommonPrimitivesSignedBytes
#define INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesSignedBytes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesSignedBytes_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes || defined(INCLUDE_ComGoogleCommonPrimitivesSignedBytes))
#define ComGoogleCommonPrimitivesSignedBytes_

@class IOSByteArray;
@protocol JavaUtilComparator;

/*!
 @brief Static utility methods pertaining to <code>byte</code> primitives that interpret values as signed.The
  corresponding methods that treat the values as unsigned are found in <code>UnsignedBytes</code>, and
  the methods for which signedness is not an issue are in <code>Bytes</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesSignedBytes : NSObject
@property (readonly, class) jbyte MAX_POWER_OF_TWO NS_SWIFT_NAME(MAX_POWER_OF_TWO);

#pragma mark Public

/*!
 @brief Returns the <code>byte</code> value that is equal to <code>value</code>, if possible.
 @param value any value in the range of the <code>byte</code>  type
 @return the <code>byte</code> value that equals <code>value</code>
 @throw IllegalArgumentExceptionif <code>value</code> is greater than <code>Byte.MAX_VALUE</code> or
      less than <code>Byte.MIN_VALUE</code>
 */
+ (jbyte)checkedCastWithLong:(jlong)value;

/*!
 @brief Compares the two specified <code>byte</code> values.The sign of the value returned is the same as
  that of <code>((Byte) a).compareTo(b)</code>.
 <p><b>Note:</b> this method behaves identically to the JDK 7 method <code>Byte.compare</code>.
 @param a the first <code>byte</code>  to compare
 @param b the second <code>byte</code>  to compare
 @return a negative value if <code>a</code> is less than <code>b</code>; a positive value if <code>a</code> is
      greater than <code>b</code>; or zero if they are equal
 */
+ (jint)compareWithByte:(jbyte)a
               withByte:(jbyte)b;

/*!
 @brief Returns a string containing the supplied <code>byte</code> values separated by <code>separator</code>.
 For example, <code>join(":", 0x01, 0x02, -0x01)</code> returns the string <code>"1:2:-1"</code>.
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>byte</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString * __nonnull)separator
                 withByteArray:(IOSByteArray * __nonnull)array;

/*!
 @brief Returns a comparator that compares two <code>byte</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>compare(byte, byte)</code>), the first pair of values that follow any common
  prefix, or when one array is a prefix of the other, treats the shorter array as the lesser.
 For
  example, <code>[] < [0x01] < [0x01, 0x80] < [0x01, 0x7F] < [0x02]</code>. Values are treated as
  signed. 
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>java.util.Arrays.equals(byte[], byte[])</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Returns the greatest value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>byte</code>  values
 @return the value present in <code>array</code> that is greater than or equal to every other value
      in the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jbyte)maxWithByteArray:(IOSByteArray * __nonnull)array;

/*!
 @brief Returns the least value present in <code>array</code>.
 @param array a  <i> nonempty </i>  array of <code>byte</code>  values
 @return the value present in <code>array</code> that is less than or equal to every other value in
      the array
 @throw IllegalArgumentExceptionif <code>array</code> is empty
 */
+ (jbyte)minWithByteArray:(IOSByteArray * __nonnull)array;

/*!
 @brief Returns the <code>byte</code> nearest in value to <code>value</code>.
 @param value any <code>long</code>  value
 @return the same value cast to <code>byte</code> if it is in the range of the <code>byte</code> type,
      <code>Byte.MAX_VALUE</code> if it is too large, or <code>Byte.MIN_VALUE</code> if it is too small
 */
+ (jbyte)saturatedCastWithLong:(jlong)value;

/*!
 @brief Sorts the elements of <code>array</code> in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithByteArray:(IOSByteArray * __nonnull)array;

/*!
 @brief Sorts the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive in descending order.
 @since 23.1
 */
+ (void)sortDescendingWithByteArray:(IOSByteArray * __nonnull)array
                            withInt:(jint)fromIndex
                            withInt:(jint)toIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesSignedBytes)

/*!
 @brief The largest power of two that can be represented as a signed <code>byte</code>.
 @since 10.0
 */
inline jbyte ComGoogleCommonPrimitivesSignedBytes_get_MAX_POWER_OF_TWO(void);
#define ComGoogleCommonPrimitivesSignedBytes_MAX_POWER_OF_TWO 64
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesSignedBytes, MAX_POWER_OF_TWO, jbyte)

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesSignedBytes_compareWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_minWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_maxWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesSignedBytes_joinWithNSString_withByteArray_(NSString *separator, IOSByteArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesSignedBytes_lexicographicalComparator(void);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesSignedBytes_sortDescendingWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesSignedBytes_sortDescendingWithByteArray_withInt_withInt_(IOSByteArray *array, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesSignedBytes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesSignedBytes")