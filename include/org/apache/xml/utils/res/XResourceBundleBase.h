//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/XResourceBundleBase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundleBase")
#ifdef RESTRICT_OrgApacheXmlUtilsResXResourceBundleBase
#define INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundleBase 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundleBase 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResXResourceBundleBase

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsResXResourceBundleBase_) && (INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundleBase || defined(INCLUDE_OrgApacheXmlUtilsResXResourceBundleBase))
#define OrgApacheXmlUtilsResXResourceBundleBase_

#define RESTRICT_JavaUtilListResourceBundle 1
#define INCLUDE_JavaUtilListResourceBundle 1
#include "java/util/ListResourceBundle.h"

/*!
 @brief This is an interface for error messages.This class is misnamed,
  and should be called XalanResourceBundle, or some such.
 */
@interface OrgApacheXmlUtilsResXResourceBundleBase : JavaUtilListResourceBundle

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Get the error string associated with the error code
 @param errorCode Error code
 @return error string associated with the given error code
 */
- (NSString *)getMessageKeyWithInt:(jint)errorCode;

/*!
 @brief Get the warning string associated with the error code
 @param errorCode Error code
 @return warning string associated with the given error code
 */
- (NSString *)getWarningKeyWithInt:(jint)errorCode;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResXResourceBundleBase)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResXResourceBundleBase_init(OrgApacheXmlUtilsResXResourceBundleBase *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResXResourceBundleBase)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResXResourceBundleBase")