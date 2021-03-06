//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/CollectCollectors.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectCollectors")
#ifdef RESTRICT_ComGoogleCommonCollectCollectCollectors
#define INCLUDE_ALL_ComGoogleCommonCollectCollectCollectors 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCollectCollectors 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCollectCollectors

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCollectCollectors_) && (INCLUDE_ALL_ComGoogleCommonCollectCollectCollectors || defined(INCLUDE_ComGoogleCommonCollectCollectCollectors))
#define ComGoogleCommonCollectCollectCollectors_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilStreamCollector;

/*!
 @brief Collectors utilities for <code>common.collect</code> internals.
 */
@interface ComGoogleCommonCollectCollectCollectors : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

+ (id<JavaUtilStreamCollector>)toImmutableBiMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

+ (id<JavaUtilStreamCollector>)toImmutableList;

+ (id<JavaUtilStreamCollector>)toImmutableMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

+ (id<JavaUtilStreamCollector>)toImmutableRangeMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                                  withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

+ (id<JavaUtilStreamCollector>)toImmutableRangeSet;

+ (id<JavaUtilStreamCollector>)toImmutableSet;

+ (id<JavaUtilStreamCollector>)toImmutableSortedMapWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)keyFunction
                                             withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction> __nonnull)valueFunction;

+ (id<JavaUtilStreamCollector>)toImmutableSortedSetWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectCollectCollectors)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectCollectors_initPackagePrivate(ComGoogleCommonCollectCollectCollectors *self);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectCollectors *new_ComGoogleCommonCollectCollectCollectors_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCollectCollectors *create_ComGoogleCommonCollectCollectCollectors_initPackagePrivate(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableBiMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableList(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableSet(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableSortedMapWithJavaUtilComparator_withJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilComparator> comparator, id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableSortedSetWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableRangeSet(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectCollectCollectors_toImmutableRangeMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectCollectors)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCollectCollectors")
