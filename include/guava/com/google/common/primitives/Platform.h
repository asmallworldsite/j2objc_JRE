//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/primitives/Platform.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesPlatform")
#ifdef RESTRICT_ComGoogleCommonPrimitivesPlatform
#define INCLUDE_ALL_ComGoogleCommonPrimitivesPlatform 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesPlatform 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesPlatform

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesPlatform_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesPlatform || defined(INCLUDE_ComGoogleCommonPrimitivesPlatform))
#define ComGoogleCommonPrimitivesPlatform_

/*!
 @brief Methods factored out so that they can be emulated differently in GWT.
 */
@interface ComGoogleCommonPrimitivesPlatform : NSObject

#pragma mark Package-Private

+ (void)checkGwtRpcEnabled;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesPlatform)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesPlatform_checkGwtRpcEnabled(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesPlatform)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesPlatform")
