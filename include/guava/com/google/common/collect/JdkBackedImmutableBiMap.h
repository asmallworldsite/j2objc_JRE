//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/JdkBackedImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectJdkBackedImmutableBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectJdkBackedImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectJdkBackedImmutableBiMap))
#define ComGoogleCommonCollectJdkBackedImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMap 1
#include "com/google/common/collect/ImmutableBiMap.h"

@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;

/*!
 @brief Implementation of ImmutableBiMap backed by a pair of JDK HashMaps, which have smartness
  protecting against hash flooding.
 */
@interface ComGoogleCommonCollectJdkBackedImmutableBiMap : ComGoogleCommonCollectImmutableBiMap

#pragma mark Public

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id)getWithId:(id __nullable)key;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

+ (ComGoogleCommonCollectImmutableBiMap *)createWithInt:(jint)n
                             withJavaUtilMap_EntryArray:(IOSObjectArray * __nonnull)entryArray;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectJdkBackedImmutableBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectJdkBackedImmutableBiMap_createWithInt_withJavaUtilMap_EntryArray_(jint n, IOSObjectArray *entryArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectJdkBackedImmutableBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectJdkBackedImmutableBiMap")
