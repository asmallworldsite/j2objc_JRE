//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/MapMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMapMaker")
#ifdef RESTRICT_ComGoogleCommonCollectMapMaker
#define INCLUDE_ALL_ComGoogleCommonCollectMapMaker 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMapMaker 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMapMaker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMapMaker_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker))
#define ComGoogleCommonCollectMapMaker_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonCollectMapMakerInternalMap_Strength;
@protocol JavaUtilConcurrentConcurrentMap;

/*!
 @brief A builder of <code>ConcurrentMap</code> instances that can have keys or values automatically wrapped
  in weak references.
 <p>Usage example: 
 @code
 ConcurrentMap<Request, Stopwatch> timers = new MapMaker()
      .concurrencyLevel(4)
      .weakKeys()
      .makeMap(); 
 
@endcode
  
 <p>These features are all optional; <code>new MapMaker().makeMap()</code> returns a valid concurrent
  map that behaves similarly to a <code>ConcurrentHashMap</code>.
  
 <p>The returned map is implemented as a hash table with similar performance characteristics to 
 <code>ConcurrentHashMap</code>. It supports all optional operations of the <code>ConcurrentMap</code>
  interface. It does not permit null keys or values. 
 <p><b>Note:</b> by default, the returned map uses equality comparisons (the <code>equals</code>
  method) to determine equality for keys or values. However, if <code>weakKeys</code> was
  specified, the map uses identity (<code>==</code>) comparisons instead for keys. Likewise, if <code>weakValues</code>
  was specified, the map uses identity comparisons for values. 
 <p>The view collections of the returned map have <i>weakly consistent iterators</i>. This means
  that they are safe for concurrent use, but if other threads modify the map after the iterator is
  created, it is undefined which of these changes, if any, are reflected in that iterator. These
  iterators never throw <code>ConcurrentModificationException</code>.
  
 <p>If <code>weakKeys</code> or <code>weakValues</code> are requested, it is possible for a key or value
  present in the map to be reclaimed by the garbage collector. Entries with reclaimed keys or
  values may be removed from the map on each map modification or on occasional map accesses; such
  entries may be counted by <code>Map.size</code>, but will never be visible to read or write
  operations. A partially-reclaimed entry is never exposed to the user. Any <code>Map.Entry</code>
  instance retrieved from the map's entry set is a snapshot of that
  entry's state at the time of retrieval; such entries do, however, support <code>Map.Entry.setValue</code>
 , which simply calls <code>Map.put</code> on the entry's key. 
 <p>The maps produced by <code>MapMaker</code> are serializable, and the deserialized maps retain all
  the configuration properties of the original map. During deserialization, if the original map had
  used weak references, the entries are reconstructed as they were, but it's not unlikely they'll
  be quickly garbage-collected before they are ever accessed. 
 <p><code>new MapMaker().weakKeys().makeMap()</code> is a recommended replacement for <code>java.util.WeakHashMap</code>
 , but note that it compares keys using object identity whereas <code>WeakHashMap</code>
  uses <code>Object.equals</code>.
 @author Bob Lee
 @author Charles Fry
 @author Kevin Bourrillion
 @since 2.0
 */
@interface ComGoogleCommonCollectMapMaker : NSObject {
 @public
  jboolean useCustomMap_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength_;
  ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
}
@property (readonly, class) jint UNSET_INT NS_SWIFT_NAME(UNSET_INT);

#pragma mark Public

/*!
 @brief Constructs a new <code>MapMaker</code> instance with default settings, including strong keys, strong
  values, and no automatic eviction of any kind.
 */
- (instancetype __nonnull)init;

/*!
 @brief Guides the allowed concurrency among update operations.Used as a hint for internal sizing.
 The
  table is internally partitioned to try to permit the indicated number of concurrent updates
  without contention. Because assignment of entries to these partitions is not necessarily
  uniform, the actual concurrency observed may vary. Ideally, you should choose a value to
  accommodate as many threads as will ever concurrently modify the table. Using a significantly
  higher value than you need can waste space and time, and a significantly lower value can lead
  to thread contention. But overestimates and underestimates within an order of magnitude do not
  usually have much noticeable impact. A value of one permits only one thread to modify the map
  at a time, but since read operations can proceed concurrently, this still yields higher
  concurrency than full synchronization. Defaults to 4. 
 <p><b>Note:</b> Prior to Guava release 9.0, the default was 16. It is possible the default will
  change again in the future. If you care about this value, you should always choose it
  explicitly.
 @throw IllegalArgumentExceptionif <code>concurrencyLevel</code> is nonpositive
 @throw IllegalStateExceptionif a concurrency level was already set
 */
- (ComGoogleCommonCollectMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

/*!
 @brief Sets the minimum total size for the internal hash tables.For example, if the initial capacity
  is <code>60</code>, and the concurrency level is <code>8</code>, then eight segments are created, each
  having a hash table of size eight.
 Providing a large enough estimate at construction time
  avoids the need for expensive resizing operations later, but setting this value unnecessarily
  high wastes memory.
 @throw IllegalArgumentExceptionif <code>initialCapacity</code> is negative
 @throw IllegalStateExceptionif an initial capacity was already set
 */
- (ComGoogleCommonCollectMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Builds a thread-safe map.This method does not alter the state of this <code>MapMaker</code>
  instance, so it can be invoked again to create multiple independent maps.
 <p>The bulk operations <code>putAll</code>, <code>equals</code>, and <code>clear</code> are not guaranteed to
  be performed atomically on the returned map. Additionally, <code>size</code> and <code>containsValue</code>
  are implemented as bulk read operations, and thus may fail to observe concurrent
  writes.
 @return a serializable concurrent map having the requested features
 */
- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

/*!
 @brief Returns a string representation for this MapMaker instance.The exact form of the returned
  string is not specified.
 */
- (NSString *)description;

/*!
 @brief Specifies that each key (not value) stored in the map should be wrapped in a <code>WeakReference</code>
  (by default, strong references are used).
 <p><b>Warning:</b> when this method is used, the resulting map will use identity (<code>==</code>)
  comparison to determine equality of keys, which is a technical violation of the <code>Map</code>
  specification, and may not be what you expect.
 @throw IllegalStateExceptionif the key strength was already set
 - seealso: WeakReference
 */
- (ComGoogleCommonCollectMapMaker *)weakKeys;

/*!
 @brief Specifies that each value (not key) stored in the map should be wrapped in a <code>WeakReference</code>
  (by default, strong references are used).
 <p>Weak values will be garbage collected once they are weakly reachable. This makes them a poor
  candidate for caching. 
 <p><b>Warning:</b> when this method is used, the resulting map will use identity (<code>==</code>)
  comparison to determine equality of values. This technically violates the specifications of the
  methods <code>containsValue</code>, <code>remove(Object, Object)</code>
  and <code>replace(K, V,
  V)</code>
 , and may not be what you expect.
 @throw IllegalStateExceptionif the value strength was already set
 - seealso: WeakReference
 */
- (ComGoogleCommonCollectMapMaker *)weakValues;

#pragma mark Package-Private

- (jint)getConcurrencyLevel;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCollectMapMakerInternalMap_Strength *)getKeyStrength;

- (ComGoogleCommonCollectMapMakerInternalMap_Strength *)getValueStrength;

/*!
 @brief Sets a custom <code>Equivalence</code> strategy for comparing keys.
 <p>By default, the map uses <code>Equivalence.identity</code> to determine key equality when <code>weakKeys</code>
  is specified, and <code>Equivalence.equals()</code> otherwise. The only place this is
  used is in <code>Interners.WeakInterner</code>.
 */
- (ComGoogleCommonCollectMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence * __nonnull)equivalence;

- (ComGoogleCommonCollectMapMaker *)setKeyStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength * __nonnull)strength;

- (ComGoogleCommonCollectMapMaker *)setValueStrengthWithComGoogleCommonCollectMapMakerInternalMap_Strength:(ComGoogleCommonCollectMapMakerInternalMap_Strength * __nonnull)strength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyStrength_, ComGoogleCommonCollectMapMakerInternalMap_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, valueStrength_, ComGoogleCommonCollectMapMakerInternalMap_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyEquivalence_, ComGoogleCommonBaseEquivalence *)

inline jint ComGoogleCommonCollectMapMaker_get_UNSET_INT(void);
#define ComGoogleCommonCollectMapMaker_UNSET_INT -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectMapMaker, UNSET_INT, jint)

FOUNDATION_EXPORT void ComGoogleCommonCollectMapMaker_init(ComGoogleCommonCollectMapMaker *self);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *new_ComGoogleCommonCollectMapMaker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker *create_ComGoogleCommonCollectMapMaker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker)

#endif

#if !defined (ComGoogleCommonCollectMapMaker_Dummy_) && (INCLUDE_ALL_ComGoogleCommonCollectMapMaker || defined(INCLUDE_ComGoogleCommonCollectMapMaker_Dummy))
#define ComGoogleCommonCollectMapMaker_Dummy_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectMapMaker_Dummy_Enum) {
  ComGoogleCommonCollectMapMaker_Dummy_Enum_VALUE = 0,
};

/*!
 @brief A dummy singleton value type used by <code>Interners</code>.
 <p><code>MapMakerInternalMap</code> can optimize for memory usage in this case; see <code>MapMakerInternalMap.createWithDummyValues</code>
 .
 */
@interface ComGoogleCommonCollectMapMaker_Dummy : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonCollectMapMaker_Dummy *VALUE NS_SWIFT_NAME(VALUE);
#pragma mark Public

+ (ComGoogleCommonCollectMapMaker_Dummy *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonCollectMapMaker_Dummy_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMapMaker_Dummy)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_Dummy *ComGoogleCommonCollectMapMaker_Dummy_values_[];

inline ComGoogleCommonCollectMapMaker_Dummy *ComGoogleCommonCollectMapMaker_Dummy_get_VALUE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectMapMaker_Dummy, VALUE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectMapMaker_Dummy_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_Dummy *ComGoogleCommonCollectMapMaker_Dummy_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_Dummy *ComGoogleCommonCollectMapMaker_Dummy_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_Dummy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMapMaker")
