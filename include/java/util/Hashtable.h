//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Hashtable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilHashtable")
#ifdef RESTRICT_JavaUtilHashtable
#define INCLUDE_ALL_JavaUtilHashtable 0
#else
#define INCLUDE_ALL_JavaUtilHashtable 1
#endif
#undef RESTRICT_JavaUtilHashtable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilHashtable_) && (INCLUDE_ALL_JavaUtilHashtable || defined(INCLUDE_JavaUtilHashtable))
#define JavaUtilHashtable_

#define RESTRICT_JavaUtilDictionary 1
#define INCLUDE_JavaUtilDictionary 1
#include "java/util/Dictionary.h"

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangFloat;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilEnumeration;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

/*!
 @brief This class implements a hash table, which maps keys to values.Any
  non-<code>null</code> object can be used as a key or as a value.
 <p>
  To successfully store and retrieve objects from a hashtable, the
  objects used as keys must implement the <code>hashCode</code>
  method and the <code>equals</code> method. <p>
  An instance of <code>Hashtable</code> has two parameters that affect its
  performance: <i>initial capacity</i> and <i>load factor</i>.  The 
 <i>capacity</i> is the number of <i>buckets</i> in the hash table, and the 
 <i>initial capacity</i> is simply the capacity at the time the hash table
  is created.  Note that the hash table is <i>open</i>: in the case of a "hash
  collision", a single bucket stores multiple entries, which must be searched
  sequentially.  The <i>load factor</i> is a measure of how full the hash
  table is allowed to get before its capacity is automatically increased.
  The initial capacity and load factor parameters are merely hints to
  the implementation.  The exact details as to when and whether the rehash
  method is invoked are implementation-dependent.<p>
  Generally, the default load factor (.75) offers a good tradeoff between
  time and space costs.  Higher values decrease the space overhead but
  increase the time cost to look up an entry (which is reflected in most 
 <tt>Hashtable</tt> operations, including <tt>get</tt> and <tt>put</tt>).<p>
  The initial capacity controls a tradeoff between wasted space and the
  need for <code>rehash</code> operations, which are time-consuming.
  No <code>rehash</code> operations will <i>ever</i> occur if the initial
  capacity is greater than the maximum number of entries the 
 <tt>Hashtable</tt> will contain divided by its load factor.  However,
  setting the initial capacity too high can waste space.<p>
  If many entries are to be made into a <code>Hashtable</code>,
  creating it with a sufficiently large capacity may allow the
  entries to be inserted more efficiently than letting it perform
  automatic rehashing as needed to grow the table. <p>
  This example creates a hashtable of numbers. It uses the names of
  the numbers as keys: 
 @code
      Hashtable<String, Integer> numbers
      = new Hashtable<String, Integer>();
    numbers.put("one", 1);
    numbers.put("two", 2);
    numbers.put("three", 3);
 
@endcode
  
 <p>To retrieve a number, use the following code: 
 @code
      Integer n = numbers.get("two");
    if (n != null) {
      System.out.println("two = " + n);
    }
 
@endcode
  
 <p>The iterators returned by the <tt>iterator</tt> method of the collections
  returned by all of this class's "collection view methods" are 
 <em>fail-fast</em>: if the Hashtable is structurally modified at any time
  after the iterator is created, in any way except through the iterator's own 
 <tt>remove</tt> method, the iterator will throw a <code>ConcurrentModificationException</code>
 .  Thus, in the face of concurrent
  modification, the iterator fails quickly and cleanly, rather than risking
  arbitrary, non-deterministic behavior at an undetermined time in the future.
  The Enumerations returned by Hashtable's keys and elements methods are 
 <em>not</em> fail-fast. 
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed
  as it is, generally speaking, impossible to make any hard guarantees in the
  presence of unsynchronized concurrent modification.  Fail-fast iterators
  throw <tt>ConcurrentModificationException</tt> on a best-effort basis.
  Therefore, it would be wrong to write a program that depended on this
  exception for its correctness: <i>the fail-fast behavior of iterators
  should be used only to detect bugs.</i>
  
 <p>As of the Java 2 platform v1.2, this class was retrofitted to
  implement the <code>Map</code> interface, making it a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.  Unlike the new collection
  implementations, <code>Hashtable</code> is synchronized.  If a
  thread-safe implementation is not needed, it is recommended to use 
 <code>HashMap</code> in place of <code>Hashtable</code>.  If a thread-safe
  highly-concurrent implementation is desired, then it is recommended
  to use <code>java.util.concurrent.ConcurrentHashMap</code> in place of 
 <code>Hashtable</code>.
 @author Arthur van Hoff
 @author Josh Bloch
 @author Neal Gafter
 - seealso: Object#equals(java.lang.Object)
 - seealso: Object#hashCode()
 - seealso: Hashtable#rehash()
 - seealso: Collection
 - seealso: Map
 - seealso: HashMap
 - seealso: TreeMap
 @since JDK1.0
 */
@interface JavaUtilHashtable : JavaUtilDictionary < JavaUtilMap, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new, empty hashtable with a default initial capacity (11)
  and load factor (0.75).
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new, empty hashtable with the specified initial capacity
  and default load factor (0.75).
 @param initialCapacity the initial capacity of the hashtable.
 @throw IllegalArgumentExceptionif the initial capacity is less
               than zero.
 */
- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

/*!
 @brief Constructs a new, empty hashtable with the specified initial
  capacity and the specified load factor.
 @param initialCapacity the initial capacity of the hashtable.
 @param loadFactor the load factor of the hashtable.
 @throw IllegalArgumentExceptionif the initial capacity is less
              than zero, or if the load factor is nonpositive.
 */
- (instancetype __nonnull)initWithInt:(jint)initialCapacity
                            withFloat:(jfloat)loadFactor;

/*!
 @brief Constructs a new hashtable with the same mappings as the given
  Map.The hashtable is created with an initial capacity sufficient to
  hold the mappings in the given Map and a default load factor (0.75).
 @param t the map whose mappings are to be placed in this map.
 @throw NullPointerExceptionif the specified map is null.
 @since 1.2
 */
- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)t;

/*!
 @brief Clears this hashtable so that it contains no keys.
 */
- (void)clear;

/*!
 @brief Creates a shallow copy of this hashtable.All the structure of the
  hashtable itself is copied, but the keys and values are not cloned.
 This is a relatively expensive operation.
 @return a clone of the hashtable
 */
- (id)java_clone;

- (id)computeWithId:(id)key
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)remappingFunction;

- (id)computeIfAbsentWithId:(id)key
withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)mappingFunction;

- (id)computeIfPresentWithId:(id)key
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)remappingFunction;

/*!
 @brief Tests if some key maps into the specified value in this hashtable.
 This operation is more expensive than the <code>containsKey</code>
  method. 
 <p>Note that this method is identical in functionality to 
 <code>containsValue</code>, (which is part of the 
 <code>Map</code> interface in the collections framework).
 @param value a value to search for
 @return <code>true</code> if and only if some key maps to the
              <code>value</code> argument in this hashtable as
              determined by the <tt>equals</tt> method;
              <code>false</code> otherwise.
 @throw NullPointerExceptionif the value is <code>null</code>
 */
- (jboolean)containsWithId:(id)value;

/*!
 @brief Tests if the specified object is a key in this hashtable.
 @param key possible key
 @return <code>true</code> if and only if the specified object
           is a key in this hashtable, as determined by the          
 <tt>equals</tt> method; <code>false</code> otherwise.
 @throw NullPointerExceptionif the key is <code>null</code>
 - seealso: #contains(Object)
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns true if this hashtable maps one or more keys to this value.
 <p>Note that this method is identical in functionality to <code>contains</code>
  (which predates the <code>Map</code> interface).
 @param value value whose presence in this hashtable is to be tested
 @return <tt>true</tt> if this map maps one or more keys to the
          specified value
 @throw NullPointerExceptionif the value is <code>null</code>
 @since 1.2
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns an enumeration of the values in this hashtable.
 Use the Enumeration methods on the returned object to fetch the elements
  sequentially.
 @return an enumeration of the values in this hashtable.
 - seealso: java.util.Enumeration
 - seealso: #keys()
 - seealso: #values()
 - seealso: Map
 */
- (id<JavaUtilEnumeration>)elements;

/*!
 @brief Returns a <code>Set</code> view of the mappings contained in this map.
 The set is backed by the map, so changes to the map are
  reflected in the set, and vice-versa.  If the map is modified
  while an iteration over the set is in progress (except through
  the iterator's own <tt>remove</tt> operation, or through the 
 <tt>setValue</tt> operation on a map entry returned by the
  iterator) the results of the iteration are undefined.  The set
  supports element removal, which removes the corresponding
  mapping from the map, via the <tt>Iterator.remove</tt>,
  <tt>Set.remove</tt>, <tt>removeAll</tt>, <tt>retainAll</tt> and 
 <tt>clear</tt> operations.  It does not support the 
 <tt>add</tt> or <tt>addAll</tt> operations.
 @since 1.2
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Compares the specified Object with this Map for equality,
  as per the definition in the Map interface.
 @param o object to be compared for equality with this hashtable
 @return true if the specified Object is equal to this Map
 - seealso: Map#equals(Object)
 @since 1.2
 */
- (jboolean)isEqual:(id)o;

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)action;

/*!
 @brief Returns the value to which the specified key is mapped,
  or <code>null</code> if this map contains no mapping for the key.
 <p>More formally, if this map contains a mapping from a key 
 <code>k</code> to a value <code>v</code> such that <code>(key.equals(k))</code>,
  then this method returns <code>v</code>; otherwise it returns 
 <code>null</code>.  (There can be at most one such mapping.)
 @param key the key whose associated value is to be returned
 @return the value to which the specified key is mapped, or
          <code>null</code> if this map contains no mapping for the key
 @throw NullPointerExceptionif the specified key is null
 - seealso: #put(Object, Object)
 */
- (id)getWithId:(id)key;

- (id)getOrDefaultWithId:(id)key
                  withId:(id)defaultValue;

/*!
 @brief Returns the hash code value for this Map as per the definition in the
  Map interface.
 - seealso: Map#hashCode()
 @since 1.2
 */
- (NSUInteger)hash;

/*!
 @brief Tests if this hashtable maps no keys to values.
 @return <code>true</code> if this hashtable maps no keys to values;
           <code>false</code> otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an enumeration of the keys in this hashtable.
 @return an enumeration of the keys in this hashtable.
 - seealso: Enumeration
 - seealso: #elements()
 - seealso: #keySet()
 - seealso: Map
 */
- (id<JavaUtilEnumeration>)keys;

/*!
 @brief Returns a <code>Set</code> view of the keys contained in this map.
 The set is backed by the map, so changes to the map are
  reflected in the set, and vice-versa.  If the map is modified
  while an iteration over the set is in progress (except through
  the iterator's own <tt>remove</tt> operation), the results of
  the iteration are undefined.  The set supports element removal,
  which removes the corresponding mapping from the map, via the 
 <tt>Iterator.remove</tt>, <tt>Set.remove</tt>,
  <tt>removeAll</tt>, <tt>retainAll</tt>, and <tt>clear</tt>
  operations.  It does not support the <tt>add</tt> or <tt>addAll</tt>
  operations.
 @since 1.2
 */
- (id<JavaUtilSet>)keySet;

- (id)mergeWithId:(id)key
           withId:(id)value
withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)remappingFunction;

/*!
 @brief Maps the specified <code>key</code> to the specified 
 <code>value</code> in this hashtable.Neither the key nor the
  value can be <code>null</code>.
 <p>
  The value can be retrieved by calling the <code>get</code> method
  with a key that is equal to the original key.
 @param key the hashtable key
 @param value the value
 @return the previous value of the specified key in this hashtable,
              or <code>null</code> if it did not have one
 @throw NullPointerExceptionif the key or value is
                <code>null</code>
 - seealso: Object#equals(Object)
 - seealso: #get(Object)
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Copies all of the mappings from the specified map to this hashtable.
 These mappings will replace any mappings that this hashtable had for any
  of the keys currently in the specified map.
 @param t mappings to be stored in this map
 @throw NullPointerExceptionif the specified map is null
 @since 1.2
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)t;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

/*!
 @brief Removes the key (and its corresponding value) from this
  hashtable.This method does nothing if the key is not in the hashtable.
 @param key the key that needs to be removed
 @return the value to which the key had been mapped in this hashtable,
           or <code>null</code> if the key did not have a mapping
 @throw NullPointerExceptionif the key is <code>null</code>
 */
- (id)removeWithId:(id)key;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (void)replaceAllWithJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)function;

/*!
 @brief Returns the number of keys in this hashtable.
 @return the number of keys in this hashtable.
 */
- (jint)size;

/*!
 @brief Returns a string representation of this <tt>Hashtable</tt> object
  in the form of a set of entries, enclosed in braces and separated
  by the ASCII characters "<tt>,&nbsp;</tt>" (comma and space).Each
  entry is rendered as the key, an equals sign <tt>=</tt>, and the
  associated element, where the <tt>toString</tt> method is used to
  convert the key and element to strings.
 @return a string representation of this hashtable
 */
- (NSString *)description;

/*!
 @brief Returns a <code>Collection</code> view of the values contained in this map.
 The collection is backed by the map, so changes to the map are
  reflected in the collection, and vice-versa.  If the map is
  modified while an iteration over the collection is in progress
  (except through the iterator's own <tt>remove</tt> operation),
  the results of the iteration are undefined.  The collection
  supports element removal, which removes the corresponding
  mapping from the map, via the <tt>Iterator.remove</tt>,
  <tt>Collection.remove</tt>, <tt>removeAll</tt>,
  <tt>retainAll</tt> and <tt>clear</tt> operations.  It does not
  support the <tt>add</tt> or <tt>addAll</tt> operations.
 @since 1.2
 */
- (id<JavaUtilCollection>)values;

#pragma mark Protected

/*!
 @brief Increases the capacity of and internally reorganizes this
  hashtable, in order to accommodate and access its entries more
  efficiently.This method is called automatically when the
  number of keys in the hashtable exceeds this hashtable's capacity
  and load factor.
 */
- (void)rehash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHashtable)

FOUNDATION_EXPORT void JavaUtilHashtable_initWithInt_withFloat_(JavaUtilHashtable *self, jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashtable *create_JavaUtilHashtable_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT void JavaUtilHashtable_initWithInt_(JavaUtilHashtable *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashtable *create_JavaUtilHashtable_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void JavaUtilHashtable_init(JavaUtilHashtable *self);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashtable *create_JavaUtilHashtable_init(void);

FOUNDATION_EXPORT void JavaUtilHashtable_initWithJavaUtilMap_(JavaUtilHashtable *self, id<JavaUtilMap> t);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithJavaUtilMap_(id<JavaUtilMap> t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHashtable *create_JavaUtilHashtable_initWithJavaUtilMap_(id<JavaUtilMap> t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashtable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilHashtable")
