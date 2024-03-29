//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/CacheResponse.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCacheResponse")
#ifdef RESTRICT_JavaNetCacheResponse
#define INCLUDE_ALL_JavaNetCacheResponse 0
#else
#define INCLUDE_ALL_JavaNetCacheResponse 1
#endif
#undef RESTRICT_JavaNetCacheResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetCacheResponse_) && (INCLUDE_ALL_JavaNetCacheResponse || defined(INCLUDE_JavaNetCacheResponse))
#define JavaNetCacheResponse_

@class JavaIoInputStream;
@protocol JavaUtilMap;

/*!
 @brief Represent channels for retrieving resources from the
  ResponseCache.Instances of such a class provide an
  InputStream that returns the entity body, and also a
  getHeaders() method which returns the associated response headers.
 @author Yingxian Wang
 @since 1.5
 */
@interface JavaNetCacheResponse : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Returns the response body as an InputStream.
 @return an InputStream from which the response body can
          be accessed
 @throw IOExceptionif an I/O error occurs while
          getting the response body
 */
- (JavaIoInputStream *)getBody;

/*!
 @brief Returns the response headers as a Map.
 @return An immutable Map from response header field names to
          lists of field values. The status line has null as its
          field name.
 @throw IOExceptionif an I/O error occurs
             while getting the response headers
 */
- (id<JavaUtilMap>)getHeaders;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCacheResponse)

FOUNDATION_EXPORT void JavaNetCacheResponse_init(JavaNetCacheResponse *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCacheResponse)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetCacheResponse")
