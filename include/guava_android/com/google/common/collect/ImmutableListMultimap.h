//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ImmutableListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableListMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableListMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableListMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableListMultimap))
#define ComGoogleCommonCollectImmutableListMultimap_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap 1
#include "com/google/common/collect/ImmutableMultimap.h"

#define RESTRICT_ComGoogleCommonCollectListMultimap 1
#define INCLUDE_ComGoogleCommonCollectListMultimap 1
#include "com/google/common/collect/ListMultimap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableListMultimap_Builder;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

/*!
 @brief A <code>ListMultimap</code> whose contents will never change, with many other important properties
  detailed at <code>ImmutableCollection</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/ImmutableCollectionsExplained">
  immutable collections</a>.
 @author Jared Levy
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableListMultimap : ComGoogleCommonCollectImmutableMultimap < ComGoogleCommonCollectListMultimap >

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

/*!
 @brief Returns a new builder.The generated builder is equivalent to the builder created by the <code>Builder</code>
  constructor.
 */
+ (ComGoogleCommonCollectImmutableListMultimap_Builder *)builder;

/*!
 @brief Returns an immutable multimap containing the specified entries.The returned multimap iterates
  over keys in the order they were first encountered in the input, and the values for each key
  are iterated in the order they were encountered.
 @throw NullPointerExceptionif any key, value, or entry is null
 @since 19.0
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable multimap containing the same mappings as <code>multimap</code>.The generated
  multimap's key and value orderings correspond to the iteration ordering of the <code>multimap.asMap()</code>
  view.
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change.
 @throw NullPointerExceptionif any key or value in <code>multimap</code> is null
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableCollection *)entries;

/*!
 @brief Returns an immutable list of the values for the given key.If no mappings in the multimap have
  the provided key, an empty immutable list is returned.
 The values are in the same order as the
  parameters used to build this multimap.
 */
- (ComGoogleCommonCollectImmutableList *)getWithId:(id __nullable)key;

/*!
 @brief <p>Because an inverse of a list multimap can contain multiple pairs with the same key and
  value, this method returns an <code>ImmutableListMultimap</code> rather than the <code>ImmutableMultimap</code>
  specified in the <code>ImmutableMultimap</code> class.
 @since 11.0
 */
- (ComGoogleCommonCollectImmutableListMultimap *)inverse;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

/*!
 @brief Returns the empty multimap.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)of;

/*!
 @brief Returns an immutable multimap containing a single entry.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id __nonnull)k1
                                                   withId:(id __nonnull)v1;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id __nonnull)k1
                                                   withId:(id __nonnull)v1
                                                   withId:(id __nonnull)k2
                                                   withId:(id __nonnull)v2;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id __nonnull)k1
                                                   withId:(id __nonnull)v1
                                                   withId:(id __nonnull)k2
                                                   withId:(id __nonnull)v2
                                                   withId:(id __nonnull)k3
                                                   withId:(id __nonnull)v3;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id __nonnull)k1
                                                   withId:(id __nonnull)v1
                                                   withId:(id __nonnull)k2
                                                   withId:(id __nonnull)v2
                                                   withId:(id __nonnull)k3
                                                   withId:(id __nonnull)v3
                                                   withId:(id __nonnull)k4
                                                   withId:(id __nonnull)v4;

/*!
 @brief Returns an immutable multimap containing the given entries, in order.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)ofWithId:(id __nonnull)k1
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
 @brief Guaranteed to throw an exception and leave the multimap unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (ComGoogleCommonCollectImmutableList *)removeAllWithId:(id __nonnull)key __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the multimap unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (ComGoogleCommonCollectImmutableList *)replaceValuesWithId:(id __nonnull)key
                                        withJavaLangIterable:(id<JavaLangIterable> __nonnull)values __attribute__((deprecated));

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap * __nonnull)map
                                                             withInt:(jint)size;

/*!
 @brief Creates an ImmutableListMultimap from an asMap.entrySet.
 */
+ (ComGoogleCommonCollectImmutableListMultimap *)fromMapEntriesWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)mapEntries
                                                               withJavaUtilComparator:(id<JavaUtilComparator> __nullable)valueComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableListMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap_Builder *ComGoogleCommonCollectImmutableListMultimap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonCollectImmutableListMultimap_fromMapEntriesWithJavaUtilCollection_withJavaUtilComparator_(id<JavaUtilCollection> mapEntries, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableListMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableListMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *new_ComGoogleCommonCollectImmutableListMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableMap *map, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *create_ComGoogleCommonCollectImmutableListMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_(ComGoogleCommonCollectImmutableMap *map, jint size);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableListMultimap)

#endif

#if !defined (ComGoogleCommonCollectImmutableListMultimap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableListMultimap_Builder))
#define ComGoogleCommonCollectImmutableListMultimap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap_Builder 1
#include "com/google/common/collect/ImmutableMultimap.h"

@class ComGoogleCommonCollectImmutableListMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

/*!
 @brief A builder for creating immutable <code>ListMultimap</code> instances, especially <code>public
  static final</code>
  multimaps ("constant multimaps").Example:
  
 @code
 static final Multimap<String, Integer> STRING_TO_INTEGER_MULTIMAP =
      new ImmutableListMultimap.Builder<String, Integer>()
          .put("one", 1)
          .putAll("several", 1, 2, 3)
          .putAll("many", 1, 2, 3, 4, 5)
          .build(); 
 
@endcode
  
 <p>Builder instances can be reused; it is safe to call <code>build</code> multiple times to build
  multiple multimaps in series.
 Each multimap contains the key-value mappings in the previously
  created multimaps.
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableListMultimap_Builder : ComGoogleCommonCollectImmutableMultimap_Builder

#pragma mark Public

/*!
 @brief Creates a new builder.The returned builder is equivalent to the builder generated by <code>ImmutableListMultimap.builder</code>
 .
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a newly-created immutable list multimap.
 */
- (ComGoogleCommonCollectImmutableListMultimap *)build;

/*!
 @since 8.0
 */
- (ComGoogleCommonCollectImmutableListMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)keyComparator;

/*!
 @since 8.0
 */
- (ComGoogleCommonCollectImmutableListMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)valueComparator;

/*!
 @since 11.0
 */
- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry> __nonnull)entry_;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putWithId:(id __nonnull)key
                                                            withId:(id __nonnull)value;

/*!
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithId:(id __nonnull)key
                                                 withJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithId:(id __nonnull)key
                                                    withNSObjectArray:(IOSObjectArray * __nonnull)values;

- (ComGoogleCommonCollectImmutableListMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableListMultimap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableListMultimap_Builder_init(ComGoogleCommonCollectImmutableListMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap_Builder *new_ComGoogleCommonCollectImmutableListMultimap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap_Builder *create_ComGoogleCommonCollectImmutableListMultimap_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableListMultimap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableListMultimap")
