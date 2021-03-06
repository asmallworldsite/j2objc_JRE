//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/GwtFluentFutureCatchingSpecialization.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization || defined(INCLUDE_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization))
#define ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

/*!
 @brief Hidden superclass of <code>FluentFuture</code> that provides us a place to declare special GWT
  versions of the <code>FluentFuture.catching</code>
  family of methods.Those versions have slightly different signatures.
 */
@interface ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization : ComGoogleCommonUtilConcurrentAbstractFuture

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization_initPackagePrivate(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization")
