//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ServiceManagerBridge.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentServiceManagerBridge")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentServiceManagerBridge
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentServiceManagerBridge 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentServiceManagerBridge 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentServiceManagerBridge

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentServiceManagerBridge_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentServiceManagerBridge || defined(INCLUDE_ComGoogleCommonUtilConcurrentServiceManagerBridge))
#define ComGoogleCommonUtilConcurrentServiceManagerBridge_

@class ComGoogleCommonCollectImmutableMultimap;

/*!
 @brief Superinterface of <code>ServiceManager</code> to introduce a bridge method for <code>servicesByState()</code>
 , to ensure binary compatibility with older Guava versions that specified 
 <code>servicesByState()</code> to return <code>ImmutableMultimap</code>.
 */
@protocol ComGoogleCommonUtilConcurrentServiceManagerBridge < JavaObject >

- (ComGoogleCommonCollectImmutableMultimap *)servicesByState;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentServiceManagerBridge)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentServiceManagerBridge)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentServiceManagerBridge")
