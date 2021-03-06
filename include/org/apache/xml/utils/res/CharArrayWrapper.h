//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/CharArrayWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResCharArrayWrapper")
#ifdef RESTRICT_OrgApacheXmlUtilsResCharArrayWrapper
#define INCLUDE_ALL_OrgApacheXmlUtilsResCharArrayWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResCharArrayWrapper 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResCharArrayWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsResCharArrayWrapper_) && (INCLUDE_ALL_OrgApacheXmlUtilsResCharArrayWrapper || defined(INCLUDE_OrgApacheXmlUtilsResCharArrayWrapper))
#define OrgApacheXmlUtilsResCharArrayWrapper_

@class IOSCharArray;

/*!
 @brief It is a mutable object to wrap the char[] used in
  the contents of the XResourceBundle class
 */
@interface OrgApacheXmlUtilsResCharArrayWrapper : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithCharArray:(IOSCharArray *)arg;

- (jchar)getCharWithInt:(jint)index;

- (jint)getLength;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResCharArrayWrapper)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResCharArrayWrapper_initWithCharArray_(OrgApacheXmlUtilsResCharArrayWrapper *self, IOSCharArray *arg);

FOUNDATION_EXPORT OrgApacheXmlUtilsResCharArrayWrapper *new_OrgApacheXmlUtilsResCharArrayWrapper_initWithCharArray_(IOSCharArray *arg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsResCharArrayWrapper *create_OrgApacheXmlUtilsResCharArrayWrapper_initWithCharArray_(IOSCharArray *arg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResCharArrayWrapper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResCharArrayWrapper")
