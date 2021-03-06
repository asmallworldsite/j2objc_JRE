//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/CollectionFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentCollectionFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentCollectionFuture
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentCollectionFuture 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentCollectionFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentCollectionFuture))
#define ComGoogleCommonUtilConcurrentCollectionFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAggregateFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAggregateFuture 1
#include "com/google/common/util/concurrent/AggregateFuture.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonUtilConcurrentAggregateFuture_ReleaseResourcesReason;
@protocol JavaUtilList;

/*!
 @brief Aggregate future that collects (stores) results of each future.
 */
@interface ComGoogleCommonUtilConcurrentCollectionFuture : ComGoogleCommonUtilConcurrentAggregateFuture

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)futures
                                                                              withBoolean:(jboolean)allMustSucceed;

- (void)collectOneValueWithInt:(jint)index
                        withId:(id __nullable)returnValue;

- (id)combineWithJavaUtilList:(id<JavaUtilList> __nonnull)values;

- (void)handleAllCompleted;

- (void)releaseResourcesWithComGoogleCommonUtilConcurrentAggregateFuture_ReleaseResourcesReason:(ComGoogleCommonUtilConcurrentAggregateFuture_ReleaseResourcesReason * __nonnull)reason;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)arg0
                                                                              withBoolean:(jboolean)arg1
                                                                              withBoolean:(jboolean)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCollectionFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCollectionFuture_initPackagePrivateWithComGoogleCommonCollectImmutableCollection_withBoolean_(ComGoogleCommonUtilConcurrentCollectionFuture *self, ComGoogleCommonCollectImmutableCollection *futures, jboolean allMustSucceed);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCollectionFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture))
#define ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture_

@class ComGoogleCommonCollectImmutableCollection;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilList;

/*!
 @brief Used for <code>Futures.allAsList</code> and <code>Futures.successfulAsList</code>.
 */
@interface ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture : ComGoogleCommonUtilConcurrentCollectionFuture

#pragma mark Public

- (id<JavaUtilList>)combineWithJavaUtilList:(id<JavaUtilList> __nonnull)values;

- (id<JavaUtilList>)get;

- (id<JavaUtilList>)getWithLong:(jlong)arg0
 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)arg1;

#pragma mark Package-Private

- (instancetype __nonnull)initWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)futures
                                                                withBoolean:(jboolean)allMustSucceed;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection * __nonnull)arg0
                                                                              withBoolean:(jboolean)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture_initWithComGoogleCommonCollectImmutableCollection_withBoolean_(ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture *self, ComGoogleCommonCollectImmutableCollection *futures, jboolean allMustSucceed);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture *new_ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture_initWithComGoogleCommonCollectImmutableCollection_withBoolean_(ComGoogleCommonCollectImmutableCollection *futures, jboolean allMustSucceed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture *create_ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture_initWithComGoogleCommonCollectImmutableCollection_withBoolean_(ComGoogleCommonCollectImmutableCollection *futures, jboolean allMustSucceed);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCollectionFuture_ListFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCollectionFuture")
