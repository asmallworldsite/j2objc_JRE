//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/cache/RemovalListeners.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners")
#ifdef RESTRICT_ComGoogleCommonCacheRemovalListeners
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners 1
#endif
#undef RESTRICT_ComGoogleCommonCacheRemovalListeners

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheRemovalListeners_) && (INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners || defined(INCLUDE_ComGoogleCommonCacheRemovalListeners))
#define ComGoogleCommonCacheRemovalListeners_

@protocol ComGoogleCommonCacheRemovalListener;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief A collection of common removal listeners.
 @author Charles Fry
 @since 10.0
 */
@interface ComGoogleCommonCacheRemovalListeners : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>RemovalListener</code> which processes all eviction notifications using <code>executor</code>
 .
 @param listener the backing listener
 @param executor the executor with which removal notifications are asynchronously executed
 */
+ (id<ComGoogleCommonCacheRemovalListener>)asynchronousWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener> __nonnull)listener
                                                                withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListeners)

FOUNDATION_EXPORT id<ComGoogleCommonCacheRemovalListener> ComGoogleCommonCacheRemovalListeners_asynchronousWithComGoogleCommonCacheRemovalListener_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonCacheRemovalListener> listener, id<JavaUtilConcurrentExecutor> executor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListeners)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheRemovalListeners")
