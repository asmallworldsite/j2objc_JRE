//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractNavigableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractNavigableMap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractNavigableMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractNavigableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap || defined(INCLUDE_ComGoogleCommonCollectAbstractNavigableMap))
#define ComGoogleCommonCollectAbstractNavigableMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_IteratorBasedAbstractMap 1
#include "com/google/common/collect/Maps.h"

#define RESTRICT_JavaUtilNavigableMap 1
#define INCLUDE_JavaUtilNavigableMap 1
#include "java/util/NavigableMap.h"

@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

/*!
 @brief Skeletal implementation of <code>NavigableMap</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectAbstractNavigableMap : ComGoogleCommonCollectMaps_IteratorBasedAbstractMap < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry> __nullable)ceilingEntryWithId:(id __nonnull)key;

- (id)ceilingKeyWithId:(id __nonnull)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry> __nullable)firstEntry;

- (id)firstKey;

- (id<JavaUtilMap_Entry> __nullable)floorEntryWithId:(id __nonnull)key;

- (id)floorKeyWithId:(id __nonnull)key;

- (id)getWithId:(id __nullable)key;

- (id<JavaUtilSortedMap>)headMapWithId:(id __nonnull)toKey;

- (id<JavaUtilMap_Entry> __nullable)higherEntryWithId:(id __nonnull)key;

- (id)higherKeyWithId:(id __nonnull)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap_Entry> __nullable)lastEntry;

- (id)lastKey;

- (id<JavaUtilMap_Entry> __nullable)lowerEntryWithId:(id __nonnull)key;

- (id)lowerKeyWithId:(id __nonnull)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry> __nullable)pollFirstEntry;

- (id<JavaUtilMap_Entry> __nullable)pollLastEntry;

- (id<JavaUtilSortedMap>)subMapWithId:(id __nonnull)fromKey
                               withId:(id __nonnull)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id __nonnull)fromKey;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (id<JavaUtilIterator>)descendingEntryIterator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractNavigableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractNavigableMap_initPackagePrivate(ComGoogleCommonCollectAbstractNavigableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractNavigableMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap")
