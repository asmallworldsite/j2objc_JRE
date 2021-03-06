//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/Tables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTables")
#ifdef RESTRICT_ComGoogleCommonCollectTables
#define INCLUDE_ALL_ComGoogleCommonCollectTables 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTables 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTables
#ifdef INCLUDE_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap
#define INCLUDE_ComGoogleCommonCollectTables_UnmodifiableTable 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectTables_ImmutableCell
#define INCLUDE_ComGoogleCommonCollectTables_AbstractCell 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTables_) && (INCLUDE_ALL_ComGoogleCommonCollectTables || defined(INCLUDE_ComGoogleCommonCollectTables))
#define ComGoogleCommonCollectTables_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCollectRowSortedTable;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilMap;

/*!
 @brief Provides static methods that involve a <code>Table</code>.
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/CollectionUtilitiesExplained#tables">
  <code>Tables</code></a>.
 @author Jared Levy
 @author Louis Wasserman
 @since 7.0
 */
@interface ComGoogleCommonCollectTables : NSObject

#pragma mark Public

/*!
 @brief Returns an immutable cell with the specified row key, column key, and value.
 <p>The returned cell is serializable.
 @param rowKey the row key to be associated with the returned cell
 @param columnKey the column key to be associated with the returned cell
 @param value the value to be associated with the returned cell
 */
+ (id<ComGoogleCommonCollectTable_Cell>)immutableCellWithId:(id __nullable)rowKey
                                                     withId:(id __nullable)columnKey
                                                     withId:(id __nullable)value;

/*!
 @brief Creates a table that uses the specified backing map and factory.It can generate a table based
  on arbitrary <code>Map</code> classes.
 <p>The <code>factory</code>-generated and <code>backingMap</code> classes determine the table iteration
  order. However, the table's <code>row()</code> method returns instances of a different class than 
 <code>factory.get()</code> does. 
 <p>Call this method only when the simpler factory methods in classes like <code>HashBasedTable</code>
  and <code>TreeBasedTable</code> won't suffice. 
 <p>The views returned by the <code>Table</code> methods <code>Table.column</code>, <code>Table.columnKeySet</code>
 , and <code>Table.columnMap</code> have iterators that don't support <code>remove()</code>
 . Otherwise, all optional operations are supported. Null row keys, columns keys, and
  values are not supported. 
 <p>Lookups by row key are often faster than lookups by column key, because the data is stored
  in a <code>Map<R, Map<C, V>></code>. A method call like <code>column(columnKey).get(rowKey)</code> still
  runs quickly, since the row key is provided. However, <code>column(columnKey).size()</code> takes
  longer, since an iteration across all row keys occurs. 
 <p>Note that this implementation is not synchronized. If multiple threads access this table
  concurrently and one of the threads modifies the table, it must be synchronized externally. 
 <p>The table is serializable if <code>backingMap</code>, <code>factory</code>, the maps generated by 
 <code>factory</code>, and the table contents are all serializable. 
 <p>Note: the table assumes complete ownership over of <code>backingMap</code> and the maps returned
  by <code>factory</code>. Those objects should not be manually updated and they should not use soft,
  weak, or phantom references.
 @param backingMap place to store the mapping from each row key to its corresponding column key      / value map
 @param factory supplier of new, empty maps that will each hold all column key / value mappings      for a given row key
 @throw IllegalArgumentExceptionif <code>backingMap</code> is not empty
 @since 10.0
 */
+ (id<ComGoogleCommonCollectTable>)newCustomTableWithJavaUtilMap:(id<JavaUtilMap> __nonnull)backingMap
                                 withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier> __nonnull)factory OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a synchronized (thread-safe) table backed by the specified table.In order to guarantee
  serial access, it is critical that <b>all</b> access to the backing table is accomplished
  through the returned table.
 <p>It is imperative that the user manually synchronize on the returned table when accessing any
  of its collection views: 
 @code
 Table<R, C, V> table = Tables.synchronizedTable(HashBasedTable.<R, C, V>create());
  ...
  Map<C, V> row = table.row(rowKey);  // Needn't be in synchronized block
  ...
  synchronized (table) {  // Synchronizing on table, not row!
    Iterator<Entry<C, V>> i = row.entrySet().iterator(); // Must be in synchronized block
    while (i.hasNext()) {
      foo(i.next());
    }  }  
 
@endcode
  
 <p>Failure to follow this advice may result in non-deterministic behavior. 
 <p>The returned table will be serializable if the specified table is serializable.
 @param table the table to be wrapped in a synchronized view
 @return a synchronized view of the specified table
 @since 22.0
 */
+ (id<ComGoogleCommonCollectTable>)synchronizedTableWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

/*!
 @brief Returns a view of a table where each value is transformed by a function.All other properties
  of the table, such as iteration order, are left intact.
 <p>Changes in the underlying table are reflected in this view. Conversely, this view supports
  removal operations, and these are reflected in the underlying table. 
 <p>It's acceptable for the underlying table to contain null keys, and even null values provided
  that the function is capable of accepting null input. The transformed table might contain null
  values, if the function sometimes gives a null result. 
 <p>The returned table is not thread-safe or serializable, even if the underlying table is. 
 <p>The function is applied lazily, invoked when needed. This is necessary for the returned
  table to be a view, but it means that the function will be applied many times for bulk
  operations like <code>Table.containsValue</code> and <code>Table.toString()</code>. For this to perform
  well, <code>function</code> should be fast. To avoid lazy evaluation when the returned table doesn't
  need to be a view, copy the returned table into a new table of your choosing.
 @since 10.0
 */
+ (id<ComGoogleCommonCollectTable>)transformValuesWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)fromTable
                                                  withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)function;

/*!
 @brief Creates a transposed view of a given table that flips its row and column keys.In other words,
  calling <code>get(columnKey, rowKey)</code> on the generated table always returns the same value as
  calling <code>get(rowKey, columnKey)</code> on the original table.
 Updating the original table
  changes the contents of the transposed table and vice versa. 
 <p>The returned table supports update operations as long as the input table supports the
  analogous operation with swapped rows and columns. For example, in a <code>HashBasedTable</code>
  instance, <code>rowKeySet().iterator()</code> supports <code>remove()</code> but <code>columnKeySet().iterator()</code>
  doesn't. With a transposed <code>HashBasedTable</code>, it's the other
  way around.
 */
+ (id<ComGoogleCommonCollectTable>)transposeWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

/*!
 @brief Returns an unmodifiable view of the specified row-sorted table.This method allows modules to
  provide users with "read-only" access to internal tables.
 Query operations on the returned
  table "read through" to the specified table, and attempts to modify the returned table, whether
  direct or via its collection views, result in an <code>UnsupportedOperationException</code>.
  
 <p>The returned table will be serializable if the specified table is serializable.
 @param table the row-sorted table for which an unmodifiable view is to be returned
 @return an unmodifiable view of the specified table
 @since 11.0
 */
+ (id<ComGoogleCommonCollectRowSortedTable>)unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable> __nonnull)table;

/*!
 @brief Returns an unmodifiable view of the specified table.This method allows modules to provide
  users with "read-only" access to internal tables.
 Query operations on the returned table "read
  through" to the specified table, and attempts to modify the returned table, whether direct or
  via its collection views, result in an <code>UnsupportedOperationException</code>.
  
 <p>The returned table will be serializable if the specified table is serializable. 
 <p>Consider using an <code>ImmutableTable</code>, which is guaranteed never to change.
 @since 11.0
 */
+ (id<ComGoogleCommonCollectTable>)unmodifiableTableWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

#pragma mark Package-Private

+ (jboolean)equalsImplWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table
                                               withId:(id __nullable)obj;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectTables)

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable_Cell> ComGoogleCommonCollectTables_immutableCellWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transposeWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_newCustomTableWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transformValuesWithComGoogleCommonCollectTable_withComGoogleCommonBaseFunction_(id<ComGoogleCommonCollectTable> fromTable, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_unmodifiableTableWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectRowSortedTable> ComGoogleCommonCollectTables_unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_synchronizedTableWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectTables_equalsImplWithComGoogleCommonCollectTable_withId_(id<ComGoogleCommonCollectTable> table, id obj);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables)

#endif

#if !defined (ComGoogleCommonCollectTables_AbstractCell_) && (INCLUDE_ALL_ComGoogleCommonCollectTables || defined(INCLUDE_ComGoogleCommonCollectTables_AbstractCell))
#define ComGoogleCommonCollectTables_AbstractCell_

#define RESTRICT_ComGoogleCommonCollectTable 1
#define INCLUDE_ComGoogleCommonCollectTable_Cell 1
#include "com/google/common/collect/Table.h"

@interface ComGoogleCommonCollectTables_AbstractCell : NSObject < ComGoogleCommonCollectTable_Cell >

#pragma mark Public

- (jboolean)isEqual:(id __nonnull)obj;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_AbstractCell)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_AbstractCell_init(ComGoogleCommonCollectTables_AbstractCell *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_AbstractCell)

#endif

#if !defined (ComGoogleCommonCollectTables_ImmutableCell_) && (INCLUDE_ALL_ComGoogleCommonCollectTables || defined(INCLUDE_ComGoogleCommonCollectTables_ImmutableCell))
#define ComGoogleCommonCollectTables_ImmutableCell_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectTables_ImmutableCell : ComGoogleCommonCollectTables_AbstractCell < JavaIoSerializable >

#pragma mark Public

- (id)getColumnKey;

- (id)getRowKey;

- (id)getValue;

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id __nullable)rowKey
                              withId:(id __nullable)columnKey
                              withId:(id __nullable)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_ImmutableCell)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_ImmutableCell_initWithId_withId_withId_(ComGoogleCommonCollectTables_ImmutableCell *self, id rowKey, id columnKey, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_ImmutableCell *new_ComGoogleCommonCollectTables_ImmutableCell_initWithId_withId_withId_(id rowKey, id columnKey, id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTables_ImmutableCell *create_ComGoogleCommonCollectTables_ImmutableCell_initWithId_withId_withId_(id rowKey, id columnKey, id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_ImmutableCell)

#endif

#if !defined (ComGoogleCommonCollectTables_UnmodifiableTable_) && (INCLUDE_ALL_ComGoogleCommonCollectTables || defined(INCLUDE_ComGoogleCommonCollectTables_UnmodifiableTable))
#define ComGoogleCommonCollectTables_UnmodifiableTable_

#define RESTRICT_ComGoogleCommonCollectForwardingTable 1
#define INCLUDE_ComGoogleCommonCollectForwardingTable 1
#include "com/google/common/collect/ForwardingTable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectTables_UnmodifiableTable : ComGoogleCommonCollectForwardingTable < JavaIoSerializable > {
 @public
  id<ComGoogleCommonCollectTable> delegate_;
}

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id __nullable)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (id)putWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey
         withId:(id __nullable)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

- (id)removeWithId:(id __nullable)rowKey
            withId:(id __nullable)columnKey;

- (id<JavaUtilMap>)rowWithId:(id __nullable)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (id<ComGoogleCommonCollectTable>)delegate;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_UnmodifiableTable, delegate_, id<ComGoogleCommonCollectTable>)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_UnmodifiableTable_initWithComGoogleCommonCollectTable_(ComGoogleCommonCollectTables_UnmodifiableTable *self, id<ComGoogleCommonCollectTable> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableTable *new_ComGoogleCommonCollectTables_UnmodifiableTable_initWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableTable *create_ComGoogleCommonCollectTables_UnmodifiableTable_initWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableTable)

#endif

#if !defined (ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectTables || defined(INCLUDE_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap))
#define ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_

#define RESTRICT_ComGoogleCommonCollectRowSortedTable 1
#define INCLUDE_ComGoogleCommonCollectRowSortedTable 1
#include "com/google/common/collect/RowSortedTable.h"

@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectTables_UnmodifiableRowSortedMap : ComGoogleCommonCollectTables_UnmodifiableTable < ComGoogleCommonCollectRowSortedTable >

#pragma mark Public

- (instancetype __nonnull)initWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable> __nonnull)delegate;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

#pragma mark Protected

- (id<ComGoogleCommonCollectRowSortedTable>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_initWithComGoogleCommonCollectRowSortedTable_(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap *self, id<ComGoogleCommonCollectRowSortedTable> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableRowSortedMap *new_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_initWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTables_UnmodifiableRowSortedMap *create_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_initWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTables")
