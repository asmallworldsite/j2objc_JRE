//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/primitives/Booleans.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans")
#ifdef RESTRICT_ComGoogleCommonPrimitivesBooleans
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesBooleans

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesBooleans_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans || defined(INCLUDE_ComGoogleCommonPrimitivesBooleans))
#define ComGoogleCommonPrimitivesBooleans_

@class IOSBooleanArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static utility methods pertaining to <code>boolean</code> primitives, that are not already found in
  either <code>Boolean</code> or <code>Arrays</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/PrimitivesExplained">
 primitive utilities</a>.
 @author Kevin Bourrillion
 @since 1.0
 */
@interface ComGoogleCommonPrimitivesBooleans : NSObject

#pragma mark Public

/*!
 @brief Returns a fixed-size list backed by the specified array, similar to <code>Arrays.asList(Object[])</code>
 .The list supports <code>List.set(int, Object)</code>, but any attempt to
  set a value to <code>null</code> will result in a <code>NullPointerException</code>.
 <p>The returned list maintains the values, but not the identities, of <code>Boolean</code> objects
  written to or read from it. For example, whether <code>list.get(0) == list.get(0)</code> is true for
  the returned list is unspecified.
 @param backingArray the array to back the list
 @return a list view of the array
 */
+ (id<JavaUtilList>)asListWithBooleanArray:(IOSBooleanArray * __nonnull)backingArray;

/*!
 @brief Compares the two specified <code>boolean</code> values in the standard way (<code>false</code> is
  considered less than <code>true</code>).The sign of the value returned is the same as that of 
 <code>((Boolean) a).compareTo(b)</code>.
 <p><b>Note for Java 7 and later:</b> this method should be treated as deprecated; use the
  equivalent <code>Boolean.compare</code> method instead.
 @param a the first <code>boolean</code>  to compare
 @param b the second <code>boolean</code>  to compare
 @return a positive number if only <code>a</code> is <code>true</code>, a negative number if only <code>b</code>
  is true, or zero if <code>a == b</code>
 */
+ (jint)compareWithBoolean:(jboolean)a
               withBoolean:(jboolean)b;

/*!
 @brief Returns the values from each provided array combined into a single array.For example, <code>concat(new boolean[] {a, b}, new boolean[] {}, new boolean[] {c}</code>
  returns the array <code>{a,
  b, c}</code>
 .
 @param arrays zero or more <code>boolean</code>  arrays
 @return a single array containing all the values from the source arrays, in order
 */
+ (IOSBooleanArray *)concatWithBooleanArray2:(IOSObjectArray * __nonnull)arrays;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present as an element anywhere in <code>array</code>.
 <p><b>Note:</b> consider representing the array as a <code>java.util.BitSet</code> instead,
  replacing <code>Booleans.contains(array, true)</code> with <code>!bitSet.isEmpty()</code> and <code>Booleans.contains(array, false)</code>
  with <code>bitSet.nextClearBit(0) == sizeOfBitSet</code>.
 @param array an array of <code>boolean</code>  values, possibly empty
 @param target a primitive <code>boolean</code>  value
 @return <code>true</code> if <code>array[i] == target</code> for some value of <code>i</code>
 */
+ (jboolean)containsWithBooleanArray:(IOSBooleanArray * __nonnull)array
                         withBoolean:(jboolean)target;

/*!
 @brief Returns the number of <code>values</code> that are <code>true</code>.
 @since 16.0
 */
+ (jint)countTrueWithBooleanArray:(IOSBooleanArray * __nonnull)values;

/*!
 @brief Returns an array containing the same values as <code>array</code>, but guaranteed to be of a
  specified minimum length.If <code>array</code> already has a length of at least <code>minLength</code>,
  it is returned directly.
 Otherwise, a new array of size <code>minLength + padding</code> is
  returned, containing the values of <code>array</code>, and zeroes in the remaining places.
 @param array the source array
 @param minLength the minimum length the returned array must guarantee
 @param padding an extra amount to "grow" the array by if growth is necessary
 @throw IllegalArgumentExceptionif <code>minLength</code> or <code>padding</code> is negative
 @return an array containing the values of <code>array</code>, with guaranteed minimum length <code>minLength</code>
 */
+ (IOSBooleanArray *)ensureCapacityWithBooleanArray:(IOSBooleanArray * __nonnull)array
                                            withInt:(jint)minLength
                                            withInt:(jint)padding;

/*!
 @brief Returns a <code>Comparator<Boolean></code> that sorts <code>false</code> before <code>true</code>.
 <p>This is particularly useful in Java 8+ in combination with <code>Comparators.comparing</code>,
  e.g. <code>Comparators.comparing(Foo::hasBar, falseFirst())</code>.
 @since 21.0
 */
+ (id<JavaUtilComparator>)falseFirst;

/*!
 @brief Returns a hash code for <code>value</code>; equal to the result of invoking <code>((Boolean)
  value).hashCode()</code>
 .
 <p><b>Java 8 users:</b> use <code>Boolean.hashCode(boolean)</code> instead.
 @param value a primitive <code>boolean</code>  value
 @return a hash code for the value
 */
+ (jint)hashCodeWithBoolean:(jboolean)value;

/*!
 @brief Returns the index of the first appearance of the value <code>target</code> in <code>array</code>.
 <p><b>Note:</b> consider representing the array as a <code>java.util.BitSet</code> instead, and
  using <code>java.util.BitSet.nextSetBit(int)</code> or <code>java.util.BitSet.nextClearBit(int)</code>.
 @param array an array of <code>boolean</code>  values, possibly empty
 @param target a primitive <code>boolean</code>  value
 @return the least index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)indexOfWithBooleanArray:(IOSBooleanArray * __nonnull)array
                    withBoolean:(jboolean)target;

/*!
 @brief Returns the start position of the first occurrence of the specified <code>target</code> within 
 <code>array</code>, or <code>-1</code> if there is no such occurrence.
 <p>More formally, returns the lowest index <code>i</code> such that <code>Arrays.copyOfRange(array,
  i, i + target.length)</code>
  contains exactly the same elements as <code>target</code>.
 @param array the array to search for the sequence <code>target</code>
 @param target the array to search for as a sub-sequence of <code>array</code>
 */
+ (jint)indexOfWithBooleanArray:(IOSBooleanArray * __nonnull)array
               withBooleanArray:(IOSBooleanArray * __nonnull)target;

/*!
 @brief Returns a string containing the supplied <code>boolean</code> values separated by <code>separator</code>.
 For example, <code>join("-", false, true, false)</code> returns the string <code>"false-true-false"</code>
 .
 @param separator the text that should appear between consecutive values in the resulting string      (but not at the start or end)
 @param array an array of <code>boolean</code>  values, possibly empty
 */
+ (NSString *)joinWithNSString:(NSString * __nonnull)separator
              withBooleanArray:(IOSBooleanArray * __nonnull)array;

/*!
 @brief Returns the index of the last appearance of the value <code>target</code> in <code>array</code>.
 @param array an array of <code>boolean</code>  values, possibly empty
 @param target a primitive <code>boolean</code>  value
 @return the greatest index <code>i</code> for which <code>array[i] == target</code>, or <code>-1</code> if no
      such index exists.
 */
+ (jint)lastIndexOfWithBooleanArray:(IOSBooleanArray * __nonnull)array
                        withBoolean:(jboolean)target;

/*!
 @brief Returns a comparator that compares two <code>boolean</code> arrays <a href="http://en.wikipedia.org/wiki/Lexicographical_order">
 lexicographically</a>.That is, it
  compares, using <code>compare(boolean, boolean)</code>), the first pair of values that follow any
  common prefix, or when one array is a prefix of the other, treats the shorter array as the
  lesser.
 For example, <code>[] < [false] < [false, true] < [true]</code>.
  
 <p>The returned comparator is inconsistent with <code>Object.equals(Object)</code> (since arrays
  support only identity equality), but it is consistent with <code>Arrays.equals(boolean[],
 boolean[])</code>
 .
 @since 2.0
 */
+ (id<JavaUtilComparator>)lexicographicalComparator;

/*!
 @brief Reverses the elements of <code>array</code>.This is equivalent to <code>Collections.reverse(Booleans.asList(array))</code>
 , but is likely to be more efficient.
 @since 23.1
 */
+ (void)reverseWithBooleanArray:(IOSBooleanArray * __nonnull)array;

/*!
 @brief Reverses the elements of <code>array</code> between <code>fromIndex</code> inclusive and <code>toIndex</code>
  exclusive.This is equivalent to <code>Collections.reverse(Booleans.asList(array).subList(fromIndex, toIndex))</code>
 , but is likely to be
  more efficient.
 @throw IndexOutOfBoundsExceptionif <code>fromIndex < 0</code>, <code>toIndex > array.length</code>, or
      <code>toIndex > fromIndex</code>
 @since 23.1
 */
+ (void)reverseWithBooleanArray:(IOSBooleanArray * __nonnull)array
                        withInt:(jint)fromIndex
                        withInt:(jint)toIndex;

/*!
 @brief Copies a collection of <code>Boolean</code> instances into a new array of primitive <code>boolean</code>
  values.
 <p>Elements are copied from the argument collection as if by <code>collection.toArray()</code>.
  Calling this method is as thread-safe as calling that method. 
 <p><b>Note:</b> consider representing the collection as a <code>java.util.BitSet</code> instead.
 @param collection a collection of <code>Boolean</code>  objects
 @return an array containing the same values as <code>collection</code>, in the same order, converted
      to primitives
 @throw NullPointerExceptionif <code>collection</code> or any of its elements is null
 */
+ (IOSBooleanArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

/*!
 @brief Returns a <code>Comparator<Boolean></code> that sorts <code>true</code> before <code>false</code>.
 <p>This is particularly useful in Java 8+ in combination with <code>Comparators.comparing</code>,
  e.g. <code>Comparators.comparing(Foo::hasBar, trueFirst())</code>.
 @since 21.0
 */
+ (id<JavaUtilComparator>)trueFirst;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesBooleans)

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesBooleans_trueFirst(void);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesBooleans_falseFirst(void);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_hashCodeWithBoolean_(jboolean value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_compareWithBoolean_withBoolean_(jboolean a, jboolean b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesBooleans_containsWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBooleanArray_(IOSBooleanArray *array, IOSBooleanArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_lastIndexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_concatWithBooleanArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_ensureCapacityWithBooleanArray_withInt_withInt_(IOSBooleanArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesBooleans_joinWithNSString_withBooleanArray_(NSString *separator, IOSBooleanArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesBooleans_lexicographicalComparator(void);

FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesBooleans_asListWithBooleanArray_(IOSBooleanArray *backingArray);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_countTrueWithBooleanArray_(IOSBooleanArray *values);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesBooleans_reverseWithBooleanArray_(IOSBooleanArray *array);

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesBooleans_reverseWithBooleanArray_withInt_withInt_(IOSBooleanArray *array, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesBooleans)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBooleans")
