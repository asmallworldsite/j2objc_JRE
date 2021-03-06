//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/MultimapBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder")
#ifdef RESTRICT_ComGoogleCommonCollectMultimapBuilder
#define INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultimapBuilder
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_

@class ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys;
@class IOSClass;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilComparator;

/*!
 @brief A builder for a multimap implementation that allows customization of the backing map and value
  collection implementations used in a particular multimap.
 <p>This can be used to easily configure multimap data structure implementations not provided
  explicitly in <code>com.google.common.collect</code>, for example: 
 @code
 ListMultimap<String, Integer> treeListMultimap =
      MultimapBuilder.treeKeys().arrayListValues().build();
  SetMultimap<Integer, MyEnum> hashEnumMultimap =
      MultimapBuilder.hashKeys().enumSetValues(MyEnum.class).build(); 
 
@endcode
  
 <p><code>MultimapBuilder</code> instances are immutable. Invoking a configuration method has no effect
  on the receiving instance; you must store and use the new builder instance it returns instead. 
 <p>The generated multimaps are serializable if the key and value types are serializable, unless
  stated otherwise in one of the configuration methods.
 @author Louis Wasserman
 @since 16.0
 */
@interface ComGoogleCommonCollectMultimapBuilder : NSObject

#pragma mark Public

/*!
 @brief Returns a new, empty <code>Multimap</code> with the specified implementation.
 */
- (id<ComGoogleCommonCollectMultimap>)build;

/*!
 @brief Returns a <code>Multimap</code> with the specified implementation, initialized with the entries of 
 <code>multimap</code>.
 */
- (id<ComGoogleCommonCollectMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap;

/*!
 @brief Uses an <code>EnumMap</code> to map keys to value collections.
 @since 16.0
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)enumKeysWithIOSClass:(IOSClass * __nonnull)keyClass;

/*!
 @brief Uses a hash table to map keys to value collections.
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)hashKeys;

/*!
 @brief Uses a hash table to map keys to value collections, initialized to expect the specified number
  of keys.
 @throw IllegalArgumentExceptionif <code>expectedKeys < 0</code>
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)hashKeysWithInt:(jint)expectedKeys;

/*!
 @brief Uses a hash table to map keys to value collections.
 <p>The collections returned by <code>Multimap.keySet()</code>, <code>Multimap.keys()</code>, and <code>Multimap.asMap()</code>
  will iterate through the keys in the order that they were first added to the
  multimap, save that if all values associated with a key are removed and then the key is added
  back into the multimap, that key will come last in the key iteration order.
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)linkedHashKeys;

/*!
 @brief Uses an hash table to map keys to value collections, initialized to expect the specified number
  of keys.
 <p>The collections returned by <code>Multimap.keySet()</code>, <code>Multimap.keys()</code>, and <code>Multimap.asMap()</code>
  will iterate through the keys in the order that they were first added to the
  multimap, save that if all values associated with a key are removed and then the key is added
  back into the multimap, that key will come last in the key iteration order.
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)linkedHashKeysWithInt:(jint)expectedKeys;

/*!
 @brief Uses a naturally-ordered <code>TreeMap</code> to map keys to value collections.
 <p>The collections returned by <code>Multimap.keySet()</code>, <code>Multimap.keys()</code>, and <code>Multimap.asMap()</code>
  will iterate through the keys in sorted order. 
 <p>For all multimaps generated by the resulting builder, the <code>Multimap.keySet()</code> can be
  safely cast to a <code>java.util.SortedSet</code>, and the <code>Multimap.asMap()</code> can safely be
  cast to a <code>java.util.SortedMap</code>.
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)treeKeys;

/*!
 @brief Uses a <code>TreeMap</code> sorted by the specified comparator to map keys to value collections.
 <p>The collections returned by <code>Multimap.keySet()</code>, <code>Multimap.keys()</code>, and <code>Multimap.asMap()</code>
  will iterate through the keys in sorted order. 
 <p>For all multimaps generated by the resulting builder, the <code>Multimap.keySet()</code> can be
  safely cast to a <code>java.util.SortedSet</code>, and the <code>Multimap.asMap()</code> can safely be
  cast to a <code>java.util.SortedMap</code>.
  
 <p>Multimaps generated by the resulting builder will not be serializable if <code>comparator</code>
  is not serializable.
 */
+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)treeKeysWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder)

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_hashKeys(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_hashKeysWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_linkedHashKeys(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_linkedHashKeysWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_treeKeys(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_treeKeysWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_enumKeysWithIOSClass_(IOSClass *keyClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys))
#define ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_

@class ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder;
@class ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder;
@class ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder;
@class IOSClass;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;

/*!
 @brief An intermediate stage in a <code>MultimapBuilder</code> in which the key-value collection map
  implementation has been specified, but the value collection implementation has not.
 @since 16.0
 */
@interface ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys : NSObject

#pragma mark Public

/*!
 @brief Uses an <code>ArrayList</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)arrayListValues;

/*!
 @brief Uses an <code>ArrayList</code> to store value collections, initialized to expect the specified
  number of values per key.
 @throw IllegalArgumentExceptionif <code>expectedValuesPerKey < 0</code>
 */
- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)arrayListValuesWithInt:(jint)expectedValuesPerKey;

/*!
 @brief Uses an <code>EnumSet</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)enumSetValuesWithIOSClass:(IOSClass * __nonnull)valueClass;

/*!
 @brief Uses a hash-based <code>Set</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)hashSetValues;

/*!
 @brief Uses a hash-based <code>Set</code> to store value collections, initialized to expect the specified
  number of values per key.
 @throw IllegalArgumentExceptionif <code>expectedValuesPerKey < 0</code>
 */
- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)hashSetValuesWithInt:(jint)expectedValuesPerKey;

/*!
 @brief Uses an insertion-ordered hash-based <code>Set</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)linkedHashSetValues;

/*!
 @brief Uses an insertion-ordered hash-based <code>Set</code> to store value collections, initialized to
  expect the specified number of values per key.
 @throw IllegalArgumentExceptionif <code>expectedValuesPerKey < 0</code>
 */
- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)linkedHashSetValuesWithInt:(jint)expectedValuesPerKey;

/*!
 @brief Uses a <code>LinkedList</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)linkedListValues;

/*!
 @brief Uses a naturally-ordered <code>TreeSet</code> to store value collections.
 */
- (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *)treeSetValues;

/*!
 @brief Uses a <code>TreeSet</code> ordered by the specified comparator to store value collections.
 <p>Multimaps generated by the resulting builder will not be serializable if <code>comparator</code>
  is not serializable.
 */
- (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *)treeSetValuesWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaUtilMap>)createMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_init(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_

@protocol ComGoogleCommonCollectListMultimap;
@protocol ComGoogleCommonCollectMultimap;

/*!
 @brief A specialization of <code>MultimapBuilder</code> that generates <code>ListMultimap</code> instances.
 @since 16.0
 */
@interface ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder : ComGoogleCommonCollectMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectListMultimap>)build;

- (id<ComGoogleCommonCollectListMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;

/*!
 @brief A specialization of <code>MultimapBuilder</code> that generates <code>SetMultimap</code> instances.
 @since 16.0
 */
@interface ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder : ComGoogleCommonCollectMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectSetMultimap>)build;

- (id<ComGoogleCommonCollectSetMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSortedSetMultimap;

/*!
 @brief A specialization of <code>MultimapBuilder</code> that generates <code>SortedSetMultimap</code> instances.
 @since 16.0
 */
@interface ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder : ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectSortedSetMultimap>)build;

- (id<ComGoogleCommonCollectSortedSetMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder")
