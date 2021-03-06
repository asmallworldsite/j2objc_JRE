//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectImmutableBiMap))
#define ComGoogleCommonCollectImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMapFauxverideShim 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMapFauxverideShim 1
#include "com/google/common/collect/ImmutableBiMapFauxverideShim.h"

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "com/google/common/collect/BiMap.h"

@class ComGoogleCommonCollectImmutableBiMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilMap;
@protocol JavaUtilStreamCollector;

/*!
 @brief A <code>BiMap</code> whose contents will never change, with many other important properties detailed
  at <code>ImmutableCollection</code>.
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableBiMap : ComGoogleCommonCollectImmutableBiMapFauxverideShim < ComGoogleCommonCollectBiMap >

#pragma mark Public

/*!
 @brief Returns a new builder.The generated builder is equivalent to the builder created by the <code>Builder</code>
  constructor.
 */
+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builder;

/*!
 @brief Returns a new builder, expecting the specified number of entries to be added.
 <p>If <code>expectedSize</code> is exactly the number of entries added to the builder before <code>Builder.build</code>
  is called, the builder is likely to perform better than an unsized <code>builder()</code>
  would have. 
 <p>It is not specified if any performance benefits apply if <code>expectedSize</code> is close to,
  but not exactly, the number of entries added to the builder.
 @since 23.1
 */
+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builderWithExpectedSizeWithInt:(jint)expectedSize;

/*!
 @brief Returns an immutable bimap containing the given entries.The returned bimap iterates over
  entries in the same order as the original iterable.
 @throw IllegalArgumentExceptionif two keys have the same value or two values have the same
      key
 @throw NullPointerExceptionif any key, value, or entry is null
 @since 19.0
 */
+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable bimap containing the same entries as <code>map</code>.If <code>map</code> somehow
  contains entries with duplicate keys (for example, if it is a <code>SortedMap</code> whose
  comparator is not <i>consistent with equals</i>), the results of this method are undefined.
 <p>The returned <code>BiMap</code> iterates over entries in the same order as the <code>entrySet</code>
  of the original map. 
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change.
 @throw IllegalArgumentExceptionif two keys have the same value or two values have the same
      key
 @throw NullPointerExceptionif any key or value in <code>map</code> is null
 */
+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

/*!
 @brief Guaranteed to throw an exception and leave the bimap unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)forcePutWithId:(id __nonnull)key
              withId:(id __nonnull)value __attribute__((deprecated));

/*!
 @brief <p>The inverse of an <code>ImmutableBiMap</code> is another <code>ImmutableBiMap</code>.
 */
- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

/*!
 @brief Returns the empty bimap.
 */
+ (ComGoogleCommonCollectImmutableBiMap *)of;

/*!
 @brief Returns an immutable bimap containing a single entry.
 */
+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id __nonnull)k1
                                            withId:(id __nonnull)v1;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys or values are added
 */
+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id __nonnull)k1
                                            withId:(id __nonnull)v1
                                            withId:(id __nonnull)k2
                                            withId:(id __nonnull)v2;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys or values are added
 */
+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id __nonnull)k1
                                            withId:(id __nonnull)v1
                                            withId:(id __nonnull)k2
                                            withId:(id __nonnull)v2
                                            withId:(id __nonnull)k3
                                            withId:(id __nonnull)v3;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys or values are added
 */
+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id __nonnull)k1
                                            withId:(id __nonnull)v1
                                            withId:(id __nonnull)k2
                                            withId:(id __nonnull)v2
                                            withId:(id __nonnull)k3
                                            withId:(id __nonnull)v3
                                            withId:(id __nonnull)k4
                                            withId:(id __nonnull)v4;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys or values are added
 */
+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id __nonnull)k1
                                            withId:(id __nonnull)v1
                                            withId:(id __nonnull)k2
                                            withId:(id __nonnull)v2
                                            withId:(id __nonnull)k3
                                            withId:(id __nonnull)v3
                                            withId:(id __nonnull)k4
                                            withId:(id __nonnull)v4
                                            withId:(id __nonnull)k5
                                            withId:(id __nonnull)v5;

/*!
 @brief Returns a <code>Collector</code> that accumulates elements into an <code>ImmutableBiMap</code> whose keys
  and values are the result of applying the provided mapping functions to the input elements.
 Entries appear in the result <code>ImmutableBiMap</code> in encounter order. 
 <p>If the mapped keys or values contain duplicates (according to <code>Object.equals(Object)</code>,
  an <code>IllegalArgumentException</code> is thrown when the collection operation is performed. (This
  differs from the <code>Collector</code> returned by <code>Collectors.toMap(Function, Function)</code>,
  which throws an <code>IllegalStateException</code>.)
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableBiMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

/*!
 @brief Returns an immutable set of the values in this map, in the same order they appear in <code>entrySet</code>
 .
 */
- (ComGoogleCommonCollectImmutableSet *)values;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (ComGoogleCommonCollectImmutableSet *)createValues;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableBiMap_toImmutableBiMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builderWithExpectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_init(ComGoogleCommonCollectImmutableBiMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableBiMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectImmutableBiMap_Builder))
#define ComGoogleCommonCollectImmutableBiMap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap_Builder 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableBiMap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

/*!
 @brief A builder for creating immutable bimap instances, especially <code>public static final</code> bimaps
  ("constant bimaps").Example:
  
 @code
 static final ImmutableBiMap<String, Integer> WORD_TO_INT =
      new ImmutableBiMap.Builder<String, Integer>()
          .put("one", 1)
          .put("two", 2)
          .put("three", 3)
          .build(); 
 
@endcode
  
 <p>For <i>small</i> immutable bimaps, the <code>ImmutableBiMap.of()</code> methods are even more
  convenient.
 <p>By default, a <code>Builder</code> will generate bimaps that iterate over entries in the order
  they were inserted into the builder. For example, in the above example, <code>WORD_TO_INT.entrySet()</code>
  is guaranteed to iterate over the entries in the order <code>"one"=1,
  "two"=2, "three"=3</code>
 , and <code>keySet()</code> and <code>values()</code> respect the same order. If you
  want a different order, consider using <code>orderEntriesByValue(Comparator)</code>, which changes
  this builder to sort entries by value. 
 <p>Builder instances can be reused - it is safe to call <code>build</code> multiple times to build
  multiple bimaps in series. Each bimap is a superset of the bimaps created before it.
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableBiMap_Builder : ComGoogleCommonCollectImmutableMap_Builder

#pragma mark Public

/*!
 @brief Creates a new builder.The returned builder is equivalent to the builder generated by <code>ImmutableBiMap.builder</code>
 .
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a newly-created immutable bimap.The iteration order of the returned bimap is the
  order in which entries were inserted into the builder, unless <code>orderEntriesByValue</code>
  was called, in which case entries are sorted by value.
 @throw IllegalArgumentExceptionif duplicate keys or values were added
 */
- (ComGoogleCommonCollectImmutableBiMap *)build;

/*!
 @brief Configures this <code>Builder</code> to order entries by value according to the specified
  comparator.
 <p>The sort order is stable, that is, if two entries have values that compare as equivalent,
  the entry that was inserted first will be first in the built map's iteration order.
 @throw IllegalStateExceptionif this method was already called
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableBiMap_Builder *)orderEntriesByValueWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)valueComparator;

/*!
 @brief Adds the given <code>entry</code> to the bimap.Duplicate keys or values are not allowed, and will
  cause <code>build</code> to fail.
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry> __nonnull)entry_;

/*!
 @brief Associates <code>key</code> with <code>value</code> in the built bimap.Duplicate keys or values are
  not allowed, and will cause <code>build</code> to fail.
 */
- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithId:(id __nonnull)key
                                                     withId:(id __nonnull)value;

/*!
 @brief Adds all of the given entries to the built bimap.Duplicate keys or values are not allowed,
  and will cause <code>build</code> to fail.
 @throw NullPointerExceptionif any key, value, or entry is null
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries;

/*!
 @brief Associates all of the given map's keys and values in the built bimap.Duplicate keys or
  values are not allowed, and will cause <code>build</code> to fail.
 @throw NullPointerExceptionif any key or value in <code>map</code> is null
 */
- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)size;

- (ComGoogleCommonCollectImmutableBiMap *)buildJdkBacked;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)combineWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder * __nonnull)builder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_Builder_init(ComGoogleCommonCollectImmutableBiMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *new_ComGoogleCommonCollectImmutableBiMap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *create_ComGoogleCommonCollectImmutableBiMap_Builder_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(ComGoogleCommonCollectImmutableBiMap_Builder *self, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *new_ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *create_ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap")
