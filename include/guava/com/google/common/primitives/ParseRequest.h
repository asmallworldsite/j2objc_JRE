//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/primitives/ParseRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesParseRequest")
#ifdef RESTRICT_ComGoogleCommonPrimitivesParseRequest
#define INCLUDE_ALL_ComGoogleCommonPrimitivesParseRequest 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesParseRequest 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesParseRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesParseRequest_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesParseRequest || defined(INCLUDE_ComGoogleCommonPrimitivesParseRequest))
#define ComGoogleCommonPrimitivesParseRequest_

/*!
 @brief A string to be parsed as a number and the radix to interpret it in.
 */
@interface ComGoogleCommonPrimitivesParseRequest : NSObject {
 @public
  NSString *rawValue_;
  jint radix_;
}

#pragma mark Package-Private

+ (ComGoogleCommonPrimitivesParseRequest *)fromStringWithNSString:(NSString * __nonnull)stringValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesParseRequest)

J2OBJC_FIELD_SETTER(ComGoogleCommonPrimitivesParseRequest, rawValue_, NSString *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesParseRequest *ComGoogleCommonPrimitivesParseRequest_fromStringWithNSString_(NSString *stringValue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesParseRequest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesParseRequest")
