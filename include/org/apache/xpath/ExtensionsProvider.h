//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/ExtensionsProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathExtensionsProvider")
#ifdef RESTRICT_OrgApacheXpathExtensionsProvider
#define INCLUDE_ALL_OrgApacheXpathExtensionsProvider 0
#else
#define INCLUDE_ALL_OrgApacheXpathExtensionsProvider 1
#endif
#undef RESTRICT_OrgApacheXpathExtensionsProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathExtensionsProvider_) && (INCLUDE_ALL_OrgApacheXpathExtensionsProvider || defined(INCLUDE_OrgApacheXpathExtensionsProvider))
#define OrgApacheXpathExtensionsProvider_

@class JavaUtilVector;
@class OrgApacheXpathFunctionsFuncExtFunction;

/*!
 @brief Interface that XPath objects can call to obtain access to an 
  ExtensionsTable.
 */
@protocol OrgApacheXpathExtensionsProvider < JavaObject >

/*!
 @brief Is the extension function available?
 */
- (jboolean)functionAvailableWithNSString:(NSString *)ns
                             withNSString:(NSString *)funcName;

/*!
 @brief Is the extension element available?
 */
- (jboolean)elementAvailableWithNSString:(NSString *)ns
                            withNSString:(NSString *)elemName;

/*!
 @brief Execute the extension function.
 */
- (id)extFunctionWithNSString:(NSString *)ns
                 withNSString:(NSString *)funcName
           withJavaUtilVector:(JavaUtilVector *)argVec
                       withId:(id)methodKey;

/*!
 @brief Execute the extension function.
 */
- (id)extFunctionWithOrgApacheXpathFunctionsFuncExtFunction:(OrgApacheXpathFunctionsFuncExtFunction *)extFunction
                                         withJavaUtilVector:(JavaUtilVector *)argVec;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathExtensionsProvider)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathExtensionsProvider)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathExtensionsProvider")
