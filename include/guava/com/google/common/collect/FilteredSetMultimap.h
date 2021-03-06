//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/FilteredSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredSetMultimap || defined(INCLUDE_ComGoogleCommonCollectFilteredSetMultimap))
#define ComGoogleCommonCollectFilteredSetMultimap_

#define RESTRICT_ComGoogleCommonCollectFilteredMultimap 1
#define INCLUDE_ComGoogleCommonCollectFilteredMultimap 1
#include "com/google/common/collect/FilteredMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilSet;

/*!
 @brief A supertype for filtered <code>SetMultimap</code> implementations.
 @author Louis Wasserman
 */
@protocol ComGoogleCommonCollectFilteredSetMultimap < ComGoogleCommonCollectFilteredMultimap, ComGoogleCommonCollectSetMultimap, JavaObject >

- (id<ComGoogleCommonCollectSetMultimap>)unfiltered;

- (id<JavaUtilSet>)getWithId:(id __nonnull)arg0;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilSet>)replaceValuesWithId:(id __nonnull)arg0
                  withJavaLangIterable:(id<JavaLangIterable> __nonnull)arg1;

- (id<JavaUtilSet>)removeAllWithId:(id __nonnull)arg0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredSetMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredSetMultimap")
