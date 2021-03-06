//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/StringBufferPool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsStringBufferPool")
#ifdef RESTRICT_OrgApacheXmlUtilsStringBufferPool
#define INCLUDE_ALL_OrgApacheXmlUtilsStringBufferPool 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsStringBufferPool 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsStringBufferPool

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsStringBufferPool_) && (INCLUDE_ALL_OrgApacheXmlUtilsStringBufferPool || defined(INCLUDE_OrgApacheXmlUtilsStringBufferPool))
#define OrgApacheXmlUtilsStringBufferPool_

@class OrgApacheXmlUtilsFastStringBuffer;

/*!
 @brief This class pools string buffers, since they are reused so often.
 String buffers are good candidates for pooling, because of 
  their supporting character arrays.
 */
@interface OrgApacheXmlUtilsStringBufferPool : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Return a string buffer back to the pool.
 @param sb Must be a non-null reference to a string buffer.
 */
+ (void)freeWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)sb;

/*!
 @brief Get the first free instance of a string buffer, or create one 
  if there are no free instances.
 @return A string buffer ready for use.
 */
+ (OrgApacheXmlUtilsFastStringBuffer *)get;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsStringBufferPool)

FOUNDATION_EXPORT void OrgApacheXmlUtilsStringBufferPool_init(OrgApacheXmlUtilsStringBufferPool *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsStringBufferPool *new_OrgApacheXmlUtilsStringBufferPool_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsStringBufferPool *create_OrgApacheXmlUtilsStringBufferPool_init(void);

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *OrgApacheXmlUtilsStringBufferPool_get(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsStringBufferPool_freeWithOrgApacheXmlUtilsFastStringBuffer_(OrgApacheXmlUtilsFastStringBuffer *sb);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsStringBufferPool)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsStringBufferPool")
