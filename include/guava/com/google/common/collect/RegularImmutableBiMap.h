//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/RegularImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableBiMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableBiMap))
#define ComGoogleCommonCollectRegularImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMap 1
#include "com/google/common/collect/ImmutableBiMap.h"

@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;
@protocol JavaUtilFunctionBiConsumer;

/*!
 @brief Bimap with zero or more mappings.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectRegularImmutableBiMap : ComGoogleCommonCollectImmutableBiMap {
 @public
  IOSObjectArray *entries_;
}
@property (readonly, class, strong) ComGoogleCommonCollectRegularImmutableBiMap *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jdouble MAX_LOAD_FACTOR NS_SWIFT_NAME(MAX_LOAD_FACTOR);

#pragma mark Public

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (void)forEachWithJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer> __nonnull)action;

- (id)getWithId:(id __nullable)key;

- (NSUInteger)hash;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (jint)size;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

+ (ComGoogleCommonCollectImmutableBiMap *)fromEntriesWithJavaUtilMap_EntryArray:(IOSObjectArray * __nonnull)entries;

+ (ComGoogleCommonCollectImmutableBiMap *)fromEntryArrayWithInt:(jint)n
                                     withJavaUtilMap_EntryArray:(IOSObjectArray * __nonnull)entryArray;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableBiMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableBiMap, entries_, IOSObjectArray *)

inline ComGoogleCommonCollectRegularImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableBiMap, EMPTY, ComGoogleCommonCollectRegularImmutableBiMap *)

inline jdouble ComGoogleCommonCollectRegularImmutableBiMap_get_MAX_LOAD_FACTOR(void);
#define ComGoogleCommonCollectRegularImmutableBiMap_MAX_LOAD_FACTOR 1.2
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectRegularImmutableBiMap, MAX_LOAD_FACTOR, jdouble)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_fromEntriesWithJavaUtilMap_EntryArray_(IOSObjectArray *entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectRegularImmutableBiMap_fromEntryArrayWithInt_withJavaUtilMap_EntryArray_(jint n, IOSObjectArray *entryArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableBiMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableBiMap")
