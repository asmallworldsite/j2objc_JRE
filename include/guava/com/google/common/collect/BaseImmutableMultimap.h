//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/BaseImmutableMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectBaseImmutableMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectBaseImmutableMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectBaseImmutableMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectBaseImmutableMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectBaseImmutableMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectBaseImmutableMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectBaseImmutableMultimap || defined(INCLUDE_ComGoogleCommonCollectBaseImmutableMultimap))
#define ComGoogleCommonCollectBaseImmutableMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap 1
#include "com/google/common/collect/AbstractMultimap.h"

/*!
 @brief A dummy superclass of <code>ImmutableMultimap</code> that can be instanceof'd without ProGuard
  retaining additional implementation details of <code>ImmutableMultimap</code>.
 */
@interface ComGoogleCommonCollectBaseImmutableMultimap : ComGoogleCommonCollectAbstractMultimap

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectBaseImmutableMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectBaseImmutableMultimap_initPackagePrivate(ComGoogleCommonCollectBaseImmutableMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectBaseImmutableMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectBaseImmutableMultimap")
