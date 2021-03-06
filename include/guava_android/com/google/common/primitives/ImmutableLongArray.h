//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/primitives/ImmutableLongArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray")
#ifdef RESTRICT_ComGoogleCommonPrimitivesImmutableLongArray
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesImmutableLongArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesImmutableLongArray_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableLongArray))
#define ComGoogleCommonPrimitivesImmutableLongArray_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonPrimitivesImmutableLongArray_Builder;
@class IOSLongArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @brief An immutable array of <code>long</code> values, with an API resembling <code>List</code>.
 <p>Advantages compared to <code>long[]</code>:
  
 <ul>
    <li>All the many well-known advantages of immutability (read <i>Effective Java</i>, third
        edition, Item 17).   
 <li>Has the value-based (not identity-based) <code>equals</code>, <code>hashCode</code>, and <code>toString</code>
  behavior you expect.
    <li>Offers useful operations beyond just <code>get</code> and <code>length</code>, so you don't have to
        hunt through classes like <code>Arrays</code> and <code>Longs</code> for them.
    <li>Supports a copy-free <code>subArray</code> view, so methods that accept this type don't need to
        add overloads that accept start and end indexes.   
 <li>Access to all collection-based utilities via <code>asList</code> (though at the cost of
        allocating garbage). 
 </ul>
  
 <p>Disadvantages compared to <code>long[]</code>:
  
 <ul>
    <li>Memory footprint has a fixed overhead (about 24 bytes per instance).
    <li><i>Some</i> construction use cases force the data to be copied (though several construction
        APIs are offered that don't).   
 <li>Can't be passed directly to methods that expect <code>long[]</code> (though the most common
        utilities do have replacements here).   
 <li>Dependency on <code>com.google.common</code> / Guava. 
 </ul>
  
 <p>Advantages compared to <code>ImmutableList</code><code><Long></code>
 :
  
 <ul>
    <li>Improved memory compactness and locality.
    <li>Can be queried without allocating garbage. 
 </ul>
  
 <p>Disadvantages compared to <code>ImmutableList<Long></code>:
  
 <ul>
    <li>Can't be passed directly to methods that expect <code>Iterable</code>, <code>Collection</code>, or
        <code>List</code> (though the most common utilities do have replacements here, and there is a
        lazy <code>asList</code> view). 
 </ul>
 @since 22.0
 */
@interface ComGoogleCommonPrimitivesImmutableLongArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns an immutable <i>view</i> of this array's values as a <code>List</code>; note that <code>long</code>
  values are boxed into <code>Long</code> instances on demand, which can be very expensive.The
  returned list should be used once and discarded.
 For any usages beyond that, pass the returned
  list to <code>ImmutableList.copyOf</code>
  and use that list instead.
 */
- (id<JavaUtilList>)asList;

/*!
 @brief Returns a new, empty builder for <code>ImmutableLongArray</code> instances, with a default initial
  capacity.The returned builder is not thread-safe.
 <p><b>Performance note:</b> The <code>ImmutableLongArray</code> that is built will very likely
  occupy more memory than necessary; to trim memory usage, build using <code>builder.build().trimmed()</code>
 .
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)builder;

/*!
 @brief Returns a new, empty builder for <code>ImmutableLongArray</code> instances, sized to hold up to 
 <code>initialCapacity</code> values without resizing.The returned builder is not thread-safe.
 <p><b>Performance note:</b> When feasible, <code>initialCapacity</code> should be the exact number
  of values that will be added, if that knowledge is readily available. It is better to guess a
  value slightly too high than slightly too low. If the value is not exact, the <code>ImmutableLongArray</code>
  that is built will very likely occupy more memory than strictly necessary;
  to trim memory usage, build using <code>builder.build().trimmed()</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)builderWithInt:(jint)initialCapacity;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present at any index in this array.Equivalent to 
 <code>asList().contains(target)</code>.
 */
- (jboolean)containsWithLong:(jlong)target;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p><b>Performance note:</b> this method delegates to <code>copyOf(Collection)</code> if <code>values</code>
  is a <code>Collection</code>. Otherwise it creates a <code>builder</code> and uses <code>Builder.addAll(Iterable)</code>
 , with all the performance implications associated with that.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)copyOfWithLongArray:(IOSLongArray * __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns <code>true</code> if <code>object</code> is an <code>ImmutableLongArray</code> containing the same
  values as this one, in the same order.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the <code>long</code> value present at the given index.
 @throw IndexOutOfBoundsExceptionif <code>index</code> is negative, or greater than or equal to
      <code>length</code>
 */
- (jlong)getWithInt:(jint)index;

/*!
 @brief Returns an unspecified hash code for the contents of this immutable array.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the smallest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Equivalent to <code>asList().indexOf(target)</code>.
 */
- (jint)indexOfWithLong:(jlong)target;

/*!
 @brief Returns <code>true</code> if there are no values in this array (<code>length</code> is zero).
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the largest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Equivalent to <code>asList().lastIndexOf(target)</code>.
 */
- (jint)lastIndexOfWithLong:(jlong)target;

/*!
 @brief Returns the number of values in this array.
 */
- (jint)length;

/*!
 @brief Returns the empty array.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)of;

/*!
 @brief Returns an immutable array containing a single value.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0
                                                   withLong:(jlong)e1;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p>The array <code>rest</code> must not be longer than <code>Integer.MAX_VALUE - 1</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)first
                                              withLongArray:(IOSLongArray * __nonnull)rest;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0
                                                   withLong:(jlong)e1
                                                   withLong:(jlong)e2;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0
                                                   withLong:(jlong)e1
                                                   withLong:(jlong)e2
                                                   withLong:(jlong)e3;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0
                                                   withLong:(jlong)e1
                                                   withLong:(jlong)e2
                                                   withLong:(jlong)e3
                                                   withLong:(jlong)e4;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableLongArray *)ofWithLong:(jlong)e0
                                                   withLong:(jlong)e1
                                                   withLong:(jlong)e2
                                                   withLong:(jlong)e3
                                                   withLong:(jlong)e4
                                                   withLong:(jlong)e5;

/*!
 @brief Returns a new immutable array containing the values in the specified range.
 <p><b>Performance note:</b> The returned array has the same full memory footprint as this one
  does (no actual copying is performed). To reduce memory usage, use <code>subArray(start,
  end).trimmed()</code>
 .
 */
- (ComGoogleCommonPrimitivesImmutableLongArray *)subArrayWithInt:(jint)startIndex
                                                         withInt:(jint)endIndex;

/*!
 @brief Returns a new, mutable copy of this array's values, as a primitive <code>long[]</code>.
 */
- (IOSLongArray *)toArray;

/*!
 @brief Returns a string representation of this array in the same form as <code>Arrays.toString(long[])</code>
 , for example <code>"[1, 2, 3]"</code>.
 */
- (NSString *)description;

/*!
 @brief Returns an immutable array containing the same values as <code>this</code> array.This is logically
  a no-op, and in some circumstances <code>this</code> itself is returned.
 However, if this instance
  is a <code>subArray</code> view of a larger array, this method will copy only the appropriate range
  of values, resulting in an equivalent array with a smaller memory footprint.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray *)trimmed;

#pragma mark Package-Private

- (id)readResolve;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesImmutableLongArray)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_of(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_(jlong e0);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLong_(jlong e0, jlong e1);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLong_withLong_(jlong e0, jlong e1, jlong e2);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLong_withLong_withLong_(jlong e0, jlong e1, jlong e2, jlong e3);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLong_withLong_withLong_withLong_(jlong e0, jlong e1, jlong e2, jlong e3, jlong e4);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLong_withLong_withLong_withLong_withLong_(jlong e0, jlong e1, jlong e2, jlong e3, jlong e4, jlong e5);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_ofWithLong_withLongArray_(jlong first, IOSLongArray *rest);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_copyOfWithLongArray_(IOSLongArray *values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray *ComGoogleCommonPrimitivesImmutableLongArray_copyOfWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray_Builder *ComGoogleCommonPrimitivesImmutableLongArray_builderWithInt_(jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray_Builder *ComGoogleCommonPrimitivesImmutableLongArray_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableLongArray)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableLongArray_Builder_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableLongArray_Builder))
#define ComGoogleCommonPrimitivesImmutableLongArray_Builder_

@class ComGoogleCommonPrimitivesImmutableLongArray;
@class IOSLongArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;

/*!
 @brief A builder for <code>ImmutableLongArray</code> instances; obtained using <code>ImmutableLongArray.builder</code>
 .
 */
@interface ComGoogleCommonPrimitivesImmutableLongArray_Builder : NSObject

#pragma mark Public

/*!
 @brief Appends <code>value</code> to the end of the values the built <code>ImmutableLongArray</code> will
  contain.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)addWithLong:(jlong)value;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableLongArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)addAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableLongArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)addAllWithComGoogleCommonPrimitivesImmutableLongArray:(ComGoogleCommonPrimitivesImmutableLongArray * __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableLongArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableLongArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray_Builder *)addAllWithLongArray:(IOSLongArray * __nonnull)values;

/*!
 @brief Returns a new immutable array.The builder can continue to be used after this call, to append
  more values and build again.
 <p><b>Performance note:</b> the returned array is backed by the same array as the builder, so
  no data is copied as part of this step, but this may occupy more memory than strictly
  necessary. To copy the data to a right-sized backing array, use <code>.build().trimmed()</code>.
 */
- (ComGoogleCommonPrimitivesImmutableLongArray *)build;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableLongArray_Builder)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesImmutableLongArray_Builder_initWithInt_(ComGoogleCommonPrimitivesImmutableLongArray_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray_Builder *new_ComGoogleCommonPrimitivesImmutableLongArray_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableLongArray_Builder *create_ComGoogleCommonPrimitivesImmutableLongArray_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableLongArray_Builder)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableLongArray_AsList_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableLongArray_AsList))
#define ComGoogleCommonPrimitivesImmutableLongArray_AsList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangLong;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesImmutableLongArray_AsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsWithId:(id __nonnull)target;

- (jboolean)isEqual:(id __nullable)object;

- (JavaLangLong *)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id __nonnull)target;

- (jint)lastIndexOfWithId:(id __nonnull)target;

- (JavaLangLong *)removeWithInt:(jint)arg0;

- (JavaLangLong *)setWithInt:(jint)arg0
                      withId:(JavaLangLong * __nonnull)arg1;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableLongArray_AsList)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableLongArray_AsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableLongArray")
