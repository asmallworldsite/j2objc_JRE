//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/SystemIDResolver.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsSystemIDResolver")
#ifdef RESTRICT_OrgApacheXmlUtilsSystemIDResolver
#define INCLUDE_ALL_OrgApacheXmlUtilsSystemIDResolver 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsSystemIDResolver 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsSystemIDResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsSystemIDResolver_) && (INCLUDE_ALL_OrgApacheXmlUtilsSystemIDResolver || defined(INCLUDE_OrgApacheXmlUtilsSystemIDResolver))
#define OrgApacheXmlUtilsSystemIDResolver_

/*!
 @brief This class is used to resolve relative URIs and SystemID 
  strings into absolute URIs.
 <p>This is a generic utility for resolving URIs, other than the 
  fact that it's declared to throw TransformerException.  Please 
  see code comments for details on how resolution is performed.</p>
 */
@interface OrgApacheXmlUtilsSystemIDResolver : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Take a SystemID string and try to turn it into a good absolute URI.
 @param systemId A URI string, which may be absolute or relative.
 @return The resolved absolute URI
 */
+ (NSString *)getAbsoluteURIWithNSString:(NSString *)systemId;

/*!
 @brief Take a SystemID string and try to turn it into a good absolute URI.
 @param urlString SystemID string
 @param base The URI string used as the base for resolving the systemID
 @return The resolved absolute URI
 @throw TransformerExceptionthrown if the string can't be turned into a URI.
 */
+ (NSString *)getAbsoluteURIWithNSString:(NSString *)urlString
                            withNSString:(NSString *)base;

/*!
 @brief Get an absolute URI from a given relative URI (local path).
 <p>The relative URI is a local filesystem path. The path can be
  absolute or relative. If it is a relative path, it is resolved relative 
  to the system property "user.dir" if it is available; if not (i.e. in an 
  Applet perhaps which throws SecurityException) then we just return the
  relative path. The space and backslash characters are also replaced to
  generate a good absolute URI.</p>
 @param localPath The relative URI to resolve
 @return Resolved absolute URI
 */
+ (NSString *)getAbsoluteURIFromRelativeWithNSString:(NSString *)localPath;

/*!
 @brief Return true if the local path is an absolute path.
 @param systemId The path string
 @return true if the path is absolute
 */
+ (jboolean)isAbsolutePathWithNSString:(NSString *)systemId;

/*!
 @brief Return true if the systemId denotes an absolute URI .
 @param systemId The systemId string
 @return true if the systemId is an an absolute URI
 */
+ (jboolean)isAbsoluteURIWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsSystemIDResolver)

FOUNDATION_EXPORT void OrgApacheXmlUtilsSystemIDResolver_init(OrgApacheXmlUtilsSystemIDResolver *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsSystemIDResolver *new_OrgApacheXmlUtilsSystemIDResolver_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSystemIDResolver *create_OrgApacheXmlUtilsSystemIDResolver_init(void);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsSystemIDResolver_getAbsoluteURIFromRelativeWithNSString_(NSString *localPath);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsSystemIDResolver_isAbsoluteURIWithNSString_(NSString *systemId);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsSystemIDResolver_isAbsolutePathWithNSString_(NSString *systemId);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsSystemIDResolver_getAbsoluteURIWithNSString_(NSString *systemId);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsSystemIDResolver_getAbsoluteURIWithNSString_withNSString_(NSString *urlString, NSString *base);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsSystemIDResolver)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsSystemIDResolver")
