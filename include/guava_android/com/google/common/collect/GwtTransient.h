//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/GwtTransient.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectGwtTransient")
#ifdef RESTRICT_ComGoogleCommonCollectGwtTransient
#define INCLUDE_ALL_ComGoogleCommonCollectGwtTransient 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectGwtTransient 1
#endif
#undef RESTRICT_ComGoogleCommonCollectGwtTransient

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectGwtTransient_) && (INCLUDE_ALL_ComGoogleCommonCollectGwtTransient || defined(INCLUDE_ComGoogleCommonCollectGwtTransient))
#define ComGoogleCommonCollectGwtTransient_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Private replacement for <code>com.google.gwt.user.client.rpc.GwtTransient</code> to work around
  build-system quirks.This annotation should be used <b>only</b> in <code>com.google.common.collect</code>
 .
 */
@protocol ComGoogleCommonCollectGwtTransient < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id __nonnull)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonCollectGwtTransient : NSObject < ComGoogleCommonCollectGwtTransient >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectGwtTransient)

FOUNDATION_EXPORT id<ComGoogleCommonCollectGwtTransient> create_ComGoogleCommonCollectGwtTransient(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGwtTransient)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectGwtTransient")
