//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractRangeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractRangeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet || defined(INCLUDE_ComGoogleCommonCollectAbstractRangeSet))
#define ComGoogleCommonCollectAbstractRangeSet_

#define RESTRICT_ComGoogleCommonCollectRangeSet 1
#define INCLUDE_ComGoogleCommonCollectRangeSet 1
#include "com/google/common/collect/RangeSet.h"

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaLangIterable;

/*!
 @brief A skeletal implementation of <code>RangeSet</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectAbstractRangeSet : NSObject < ComGoogleCommonCollectRangeSet >

#pragma mark Public

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)range;

- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet> __nonnull)other;

- (void)clear;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable> __nonnull)value;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)otherRange;

- (jboolean)enclosesAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet> __nonnull)other;

- (jboolean)isEqual:(id __nullable)obj;

- (NSUInteger)hash;

- (jboolean)intersectsWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)otherRange;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable> __nonnull)value;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange * __nonnull)range;

- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet> __nonnull)other;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractRangeSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractRangeSet_initPackagePrivate(ComGoogleCommonCollectAbstractRangeSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractRangeSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet")
