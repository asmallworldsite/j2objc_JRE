//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/TreeRangeMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap")
#ifdef RESTRICT_ComGoogleCommonCollectTreeRangeMap
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeRangeMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeRangeMap_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap || defined(INCLUDE_ComGoogleCommonCollectTreeRangeMap))
#define ComGoogleCommonCollectTreeRangeMap_

#define RESTRICT_ComGoogleCommonCollectRangeMap 1
#define INCLUDE_ComGoogleCommonCollectRangeMap 1
#include "com/google/common/collect/RangeMap.h"

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

/*!
 @brief An implementation of <code>RangeMap</code> based on a <code>TreeMap</code>, supporting all optional
  operations.
 <p>Like all <code>RangeMap</code> implementations, this supports neither null keys nor null values.
 @author Louis Wasserman
 @since 14.0
 */
@interface ComGoogleCommonCollectTreeRangeMap : NSObject < ComGoogleCommonCollectRangeMap >

#pragma mark Public

- (id<JavaUtilMap>)asDescendingMapOfRanges;

- (id<JavaUtilMap>)asMapOfRanges;

- (void)clear;

+ (ComGoogleCommonCollectTreeRangeMap *)create;

- (jboolean)isEqual:(id __nullable)o;

- (id __nullable)getWithJavaLangComparable:(id<JavaLangComparable> __nonnull)key;

- (id<JavaUtilMap_Entry> __nullable)getEntryWithJavaLangComparable:(id<JavaLangComparable> __nonnull)key;

- (NSUInteger)hash;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)range
                                    withId:(id __nonnull)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap> __nonnull)rangeMap;

- (void)putCoalescingWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)range
                                              withId:(id __nonnull)value;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)rangeToRemove;

- (ComGoogleCommonCollectRange *)span;

- (id<ComGoogleCommonCollectRangeMap>)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)subRange;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectTreeRangeMap)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeMap *ComGoogleCommonCollectTreeRangeMap_create(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeMap")
