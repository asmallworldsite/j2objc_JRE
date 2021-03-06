//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/SortedMapDifference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedMapDifference")
#ifdef RESTRICT_ComGoogleCommonCollectSortedMapDifference
#define INCLUDE_ALL_ComGoogleCommonCollectSortedMapDifference 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedMapDifference 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedMapDifference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedMapDifference_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedMapDifference || defined(INCLUDE_ComGoogleCommonCollectSortedMapDifference))
#define ComGoogleCommonCollectSortedMapDifference_

#define RESTRICT_ComGoogleCommonCollectMapDifference 1
#define INCLUDE_ComGoogleCommonCollectMapDifference 1
#include "com/google/common/collect/MapDifference.h"

@protocol JavaUtilSortedMap;

/*!
 @brief An object representing the differences between two sorted maps.
 @author Louis Wasserman
 @since 8.0
 */
@protocol ComGoogleCommonCollectSortedMapDifference < ComGoogleCommonCollectMapDifference, JavaObject >

- (id<JavaUtilSortedMap>)entriesOnlyOnLeft;

- (id<JavaUtilSortedMap>)entriesOnlyOnRight;

- (id<JavaUtilSortedMap>)entriesInCommon;

- (id<JavaUtilSortedMap>)entriesDiffering;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMapDifference)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMapDifference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedMapDifference")
