//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/cache/Weigher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheWeigher")
#ifdef RESTRICT_ComGoogleCommonCacheWeigher
#define INCLUDE_ALL_ComGoogleCommonCacheWeigher 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheWeigher 1
#endif
#undef RESTRICT_ComGoogleCommonCacheWeigher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCacheWeigher_) && (INCLUDE_ALL_ComGoogleCommonCacheWeigher || defined(INCLUDE_ComGoogleCommonCacheWeigher))
#define ComGoogleCommonCacheWeigher_

/*!
 @brief Calculates the weights of cache entries.
 @author Charles Fry
 @since 11.0
 */
@protocol ComGoogleCommonCacheWeigher < JavaObject >

/*!
 @brief Returns the weight of a cache entry.There is no unit for entry weights; rather they are simply
  relative to each other.
 @return the weight of the entry; must be non-negative
 */
- (jint)weighWithId:(id __nonnull)key
             withId:(id __nonnull)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheWeigher)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheWeigher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheWeigher")
