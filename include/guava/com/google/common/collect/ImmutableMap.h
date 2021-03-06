//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ImmutableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableMap
#ifdef INCLUDE_ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap
#define INCLUDE_ComGoogleCommonCollectImmutableMap 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap))
#define ComGoogleCommonCollectImmutableMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@class JavaLangIllegalArgumentException;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionBinaryOperator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamCollector;

/*!
 @brief A <code>Map</code> whose contents will never change, with many other important properties detailed at 
 <code>ImmutableCollection</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/ImmutableCollectionsExplained">
  immutable collections</a>.
 @author Jesse Wilson
 @author Kevin Bourrillion
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableMap : NSObject < JavaUtilMap, JavaIoSerializable >
@property (readonly, class, strong) IOSObjectArray *EMPTY_ENTRY_ARRAY NS_SWIFT_NAME(EMPTY_ENTRY_ARRAY);

#pragma mark Public

/*!
 @brief Returns a multimap view of the map.
 @since 14.0
 */
- (ComGoogleCommonCollectImmutableSetMultimap *)asMultimap;

/*!
 @brief Returns a new builder.The generated builder is equivalent to the builder created by the <code>Builder</code>
  constructor.
 */
+ (ComGoogleCommonCollectImmutableMap_Builder *)builder;

/*!
 @brief Returns a new builder, expecting the specified number of entries to be added.
 <p>If <code>expectedSize</code> is exactly the number of entries added to the builder before <code>Builder.build</code>
  is called, the builder is likely to perform better than an unsized <code>builder()</code>
  would have. 
 <p>It is not specified if any performance benefits apply if <code>expectedSize</code> is close to,
  but not exactly, the number of entries added to the builder.
 @since 23.1
 */
+ (ComGoogleCommonCollectImmutableMap_Builder *)builderWithExpectedSizeWithInt:(jint)expectedSize;

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)clear __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)computeWithId:(id __nonnull)key
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction> __nonnull)remappingFunction __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)computeIfAbsentWithId:(id __nonnull)key
withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)mappingFunction __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)computeIfPresentWithId:(id __nonnull)key
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction> __nonnull)remappingFunction __attribute__((deprecated));

- (jboolean)containsKeyWithId:(id __nullable)key;

- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Returns an immutable map containing the specified entries.The returned map iterates over
  entries in the same order as the original iterable.
 @throw NullPointerExceptionif any key, value, or entry is null
 @throw IllegalArgumentExceptionif two entries have the same key
 @since 19.0
 */
+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable map containing the same entries as <code>map</code>.The returned map iterates
  over entries in the same order as the <code>entrySet</code> of the original map.
 If <code>map</code>
  somehow contains entries with duplicate keys (for example, if it is a <code>SortedMap</code> whose
  comparator is not <i>consistent with equals</i>), the results of this method are undefined. 
 <p>Despite the method name, this method attempts to avoid actually copying the data when it is
  safe to do so. The exact circumstances under which a copy will or will not be performed are
  undocumented and subject to change.
 @throw NullPointerExceptionif any key or value in <code>map</code> is null
 */
+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable set of the mappings in this map.The iteration order is specified by the
  method used to create this map.
 Typically, this is insertion order.
 */
- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (jboolean)isEqual:(id __nullable)object;

- (id)getWithId:(id __nullable)key;

/*!
 @since 21.0 (but only since 23.5 in the Android <a href="https://github.com/google/guava#guava-google-core-libraries-for-java">
 flavor</a>).
      Note, however, that Java 8 users can call this method with any version and flavor of Guava.
 */
- (id)getOrDefaultWithId:(id __nullable)key
                  withId:(id __nullable)defaultValue;

- (NSUInteger)hash;

- (jboolean)isEmpty;

/*!
 @brief Returns an immutable set of the keys in this map, in the same order that they appear in <code>entrySet</code>
 .
 */
- (ComGoogleCommonCollectImmutableSet *)keySet;

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)mergeWithId:(id __nonnull)key
           withId:(id __nonnull)value
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction> __nonnull)remappingFunction __attribute__((deprecated));

/*!
 @brief Returns the empty map.This map behaves and performs comparably to <code>Collections.emptyMap</code>
 , and is preferable mainly for consistency and maintainability of your
  code.
 */
+ (ComGoogleCommonCollectImmutableMap *)of;

/*!
 @brief Returns an immutable map containing a single entry.This map behaves and performs comparably to 
 <code>Collections.singletonMap</code> but will not accept a null key or value.
 It is preferable
  mainly for consistency and maintainability of your code.
 */
+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id __nonnull)k1
                                          withId:(id __nonnull)v1;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys are provided
 */
+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id __nonnull)k1
                                          withId:(id __nonnull)v1
                                          withId:(id __nonnull)k2
                                          withId:(id __nonnull)v2;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys are provided
 */
+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id __nonnull)k1
                                          withId:(id __nonnull)v1
                                          withId:(id __nonnull)k2
                                          withId:(id __nonnull)v2
                                          withId:(id __nonnull)k3
                                          withId:(id __nonnull)v3;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys are provided
 */
+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id __nonnull)k1
                                          withId:(id __nonnull)v1
                                          withId:(id __nonnull)k2
                                          withId:(id __nonnull)v2
                                          withId:(id __nonnull)k3
                                          withId:(id __nonnull)v3
                                          withId:(id __nonnull)k4
                                          withId:(id __nonnull)v4;

/*!
 @brief Returns an immutable map containing the given entries, in order.
 @throw IllegalArgumentExceptionif duplicate keys are provided
 */
+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id __nonnull)k1
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
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putWithId:(id __nonnull)k
         withId:(id __nonnull)v __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putIfAbsentWithId:(id __nonnull)key
                 withId:(id __nonnull)value __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)removeWithId:(id __nonnull)o __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)removeWithId:(id __nonnull)key
                  withId:(id __nonnull)value __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (id)replaceWithId:(id __nonnull)key
             withId:(id __nonnull)value __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (jboolean)replaceWithId:(id __nonnull)key
                   withId:(id __nonnull)oldValue
                   withId:(id __nonnull)newValue __attribute__((deprecated));

/*!
 @brief Guaranteed to throw an exception and leave the map unmodified.
 @throw UnsupportedOperationExceptionalways
 */
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction> __nonnull)function __attribute__((deprecated));

/*!
 @brief Returns a <code>Collector</code> that accumulates elements into an <code>ImmutableMap</code> whose keys
  and values are the result of applying the provided mapping functions to the input elements.
 Entries appear in the result <code>ImmutableMap</code> in encounter order. 
 <p>If the mapped keys contain duplicates (according to <code>Object.equals(Object)</code>, an <code>IllegalArgumentException</code>
  is thrown when the collection operation is performed. (This differs
  from the <code>Collector</code> returned by <code>Collectors.toMap(Function, Function)</code>, which
  throws an <code>IllegalStateException</code>.)
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

/*!
 @brief Returns a <code>Collector</code> that accumulates elements into an <code>ImmutableMap</code> whose keys
  and values are the result of applying the provided mapping functions to the input elements.
 <p>If the mapped keys contain duplicates (according to <code>Object.equals(Object)</code>), the
  values are merged using the specified merging function. Entries will appear in the encounter
  order of the first occurrence of the key.
 @since 21.0
 */
+ (id<JavaUtilStreamCollector>)toImmutableMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction
                                       withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator> __nonnull)mergeFunction;

- (NSString *)description;

/*!
 @brief Returns an immutable collection of the values in this map, in the same order that they appear in 
 <code>entrySet</code>.
 */
- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype __nonnull)init;

+ (void)checkNoConflictWithBoolean:(jboolean)safe
                      withNSString:(NSString * __nonnull)conflictDescription
             withJavaUtilMap_Entry:(id<JavaUtilMap_Entry> __nonnull)entry1
             withJavaUtilMap_Entry:(id<JavaUtilMap_Entry> __nonnull)entry2;

+ (JavaLangIllegalArgumentException *)conflictExceptionWithNSString:(NSString * __nonnull)conflictDescription
                                                             withId:(id __nonnull)entry1
                                                             withId:(id __nonnull)entry2;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

/*!
 @brief Verifies that <code>key</code> and <code>value</code> are non-null, and returns a new immutable entry
  with those values.
 <p>A call to <code>Entry.setValue</code> on the returned entry will always throw <code>UnsupportedOperationException</code>
 .
 */
+ (id<JavaUtilMap_Entry>)entryOfWithId:(id __nonnull)key
                                withId:(id __nonnull)value;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectUnmodifiableIterator *)keyIterator;

- (id<JavaUtilSpliterator>)keySpliterator;

/*!
 @brief Returns a serializable form of this object.Non-public subclasses should not override this
  method.
 Publicly-accessible subclasses must override this method and should return a subclass
  of SerializedForm whose readResolve() method returns objects of the subclass type.
 */
- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableMap)

inline IOSObjectArray *ComGoogleCommonCollectImmutableMap_get_EMPTY_ENTRY_ARRAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectImmutableMap_EMPTY_ENTRY_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectImmutableMap, EMPTY_ENTRY_ARRAY, IOSObjectArray *)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableMap_toImmutableMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableMap_toImmutableMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_withJavaUtilFunctionBinaryOperator_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction, id<JavaUtilFunctionBinaryOperator> mergeFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT id<JavaUtilMap_Entry> ComGoogleCommonCollectImmutableMap_entryOfWithId_withId_(id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *ComGoogleCommonCollectImmutableMap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *ComGoogleCommonCollectImmutableMap_builderWithExpectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_checkNoConflictWithBoolean_withNSString_withJavaUtilMap_Entry_withJavaUtilMap_Entry_(jboolean safe, NSString *conflictDescription, id<JavaUtilMap_Entry> entry1, id<JavaUtilMap_Entry> entry2);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *ComGoogleCommonCollectImmutableMap_conflictExceptionWithNSString_withId_withId_(NSString *conflictDescription, id entry1, id entry2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_init(ComGoogleCommonCollectImmutableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_Builder))
#define ComGoogleCommonCollectImmutableMap_Builder_

@class ComGoogleCommonCollectImmutableMap;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

/*!
 @brief A builder for creating immutable map instances, especially <code>public static final</code> maps
  ("constant maps").Example:
  
 @code
 static final ImmutableMap<String, Integer> WORD_TO_INT =
      new ImmutableMap.Builder<String, Integer>()
          .put("one", 1)
          .put("two", 2)
          .put("three", 3)
          .build(); 
 
@endcode
  
 <p>For <i>small</i> immutable maps, the <code>ImmutableMap.of()</code> methods are even more
  convenient.
 <p>By default, a <code>Builder</code> will generate maps that iterate over entries in the order they
  were inserted into the builder, equivalently to <code>LinkedHashMap</code>. For example, in the
  above example, <code>WORD_TO_INT.entrySet()</code> is guaranteed to iterate over the entries in the
  order <code>"one"=1, "two"=2, "three"=3</code>, and <code>keySet()</code> and <code>values()</code> respect
  the same order. If you want a different order, consider using <code>ImmutableSortedMap</code> to
  sort by keys, or call <code>orderEntriesByValue(Comparator)</code>, which changes this builder to
  sort entries by value. 
 <p>Builder instances can be reused - it is safe to call <code>build</code> multiple times to build
  multiple maps in series. Each map is a superset of the maps created before it.
 @since 2.0
 */
@interface ComGoogleCommonCollectImmutableMap_Builder : NSObject {
 @public
  id<JavaUtilComparator> valueComparator_;
  IOSObjectArray *entries_;
  jint size_;
  jboolean entriesUsed_;
}

#pragma mark Public

/*!
 @brief Creates a new builder.The returned builder is equivalent to the builder generated by <code>ImmutableMap.builder</code>
 .
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns a newly-created immutable map.The iteration order of the returned map is the order
  in which entries were inserted into the builder, unless <code>orderEntriesByValue</code> was
  called, in which case entries are sorted by value.
 @throw IllegalArgumentExceptionif duplicate keys were added
 */
- (ComGoogleCommonCollectImmutableMap *)build;

/*!
 @brief Configures this <code>Builder</code> to order entries by value according to the specified
  comparator.
 <p>The sort order is stable, that is, if two entries have values that compare as equivalent,
  the entry that was inserted first will be first in the built map's iteration order.
 @throw IllegalStateExceptionif this method was already called
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)orderEntriesByValueWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)valueComparator;

/*!
 @brief Adds the given <code>entry</code> to the map, making it immutable if necessary.Duplicate keys are
  not allowed, and will cause <code>build</code> to fail.
 @since 11.0
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry> __nonnull)entry_;

/*!
 @brief Associates <code>key</code> with <code>value</code> in the built map.Duplicate keys are not allowed,
  and will cause <code>build</code> to fail.
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)putWithId:(id __nonnull)key
                                                   withId:(id __nonnull)value;

/*!
 @brief Adds all of the given entries to the built map.Duplicate keys are not allowed, and will
  cause <code>build</code> to fail.
 @throw NullPointerExceptionif any key, value, or entry is null
 @since 19.0
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)entries;

/*!
 @brief Associates all of the given map's keys and values in the built map.Duplicate keys are not
  allowed, and will cause <code>build</code> to fail.
 @throw NullPointerExceptionif any key or value in <code>map</code> is null
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

- (ComGoogleCommonCollectImmutableMap *)buildJdkBacked;

- (ComGoogleCommonCollectImmutableMap_Builder *)combineWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder * __nonnull)other;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, valueComparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, entries_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_Builder_init(ComGoogleCommonCollectImmutableMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *new_ComGoogleCommonCollectImmutableMap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *create_ComGoogleCommonCollectImmutableMap_Builder_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(ComGoogleCommonCollectImmutableMap_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *new_ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *create_ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_Builder)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap))
#define ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap : ComGoogleCommonCollectImmutableMap

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (ComGoogleCommonCollectUnmodifiableIterator *)entryIterator;

- (id<JavaUtilSpliterator>)entrySpliterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_init(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_SerializedForm))
#define ComGoogleCommonCollectImmutableMap_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMap_Builder;

/*!
 @brief Serialized type for all ImmutableMap instances.It captures the logical contents and they are
  reconstructed using public factory methods.
 This ensures that the implementation types remain
  as implementation details.
 */
@interface ComGoogleCommonCollectImmutableMap_SerializedForm : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap * __nonnull)map;

- (id)legacyReadResolve;

/*!
 @brief Returns a builder that builds the unserialized type.Subclasses should override this method.
 */
- (ComGoogleCommonCollectImmutableMap_Builder *)makeBuilderWithInt:(jint)size;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_SerializedForm)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap_SerializedForm *self, ComGoogleCommonCollectImmutableMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_SerializedForm *new_ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_SerializedForm *create_ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_SerializedForm)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMap")
