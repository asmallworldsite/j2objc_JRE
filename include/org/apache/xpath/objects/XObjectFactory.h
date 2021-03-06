//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XObjectFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXObjectFactory")
#ifdef RESTRICT_OrgApacheXpathObjectsXObjectFactory
#define INCLUDE_ALL_OrgApacheXpathObjectsXObjectFactory 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXObjectFactory 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXObjectFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXObjectFactory_) && (INCLUDE_ALL_OrgApacheXpathObjectsXObjectFactory || defined(INCLUDE_OrgApacheXpathObjectsXObjectFactory))
#define OrgApacheXpathObjectsXObjectFactory_

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

@interface OrgApacheXpathObjectsXObjectFactory : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Create the right XObject based on the type of the object passed.This 
  function can not make an XObject that exposes DOM Nodes, NodeLists, and 
  NodeIterators to the XSLT stylesheet as node-sets.
 @param val The java object which this object will wrap.
 @return the right XObject based on the type of the object passed.
 */
+ (OrgApacheXpathObjectsXObject *)createWithId:(id)val;

/*!
 @brief Create the right XObject based on the type of the object passed.
 This function <emph>can</emph> make an XObject that exposes DOM Nodes, NodeLists, and 
  NodeIterators to the XSLT stylesheet as node-sets.
 @param val The java object which this object will wrap.
 @param xctxt The XPath context.
 @return the right XObject based on the type of the object passed.
 */
+ (OrgApacheXpathObjectsXObject *)createWithId:(id)val
                withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXObjectFactory)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXObjectFactory_init(OrgApacheXpathObjectsXObjectFactory *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObjectFactory *new_OrgApacheXpathObjectsXObjectFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXObjectFactory *create_OrgApacheXpathObjectsXObjectFactory_init(void);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *OrgApacheXpathObjectsXObjectFactory_createWithId_(id val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *OrgApacheXpathObjectsXObjectFactory_createWithId_withOrgApacheXpathXPathContext_(id val, OrgApacheXpathXPathContext *xctxt);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXObjectFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXObjectFactory")
