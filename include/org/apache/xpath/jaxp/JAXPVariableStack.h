//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/JAXPVariableStack.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack")
#ifdef RESTRICT_OrgApacheXpathJaxpJAXPVariableStack
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpJAXPVariableStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathJaxpJAXPVariableStack_) && (INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack || defined(INCLUDE_OrgApacheXpathJaxpJAXPVariableStack))
#define OrgApacheXpathJaxpJAXPVariableStack_

#define RESTRICT_OrgApacheXpathVariableStack 1
#define INCLUDE_OrgApacheXpathVariableStack 1
#include "org/apache/xpath/VariableStack.h"

@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlXpathXPathVariableResolver;

/*!
 @brief Overrides <code>VariableStack</code> and delegates the call to 
 <code>javax.xml.xpath.XPathVariableResolver</code>.
 @author Ramesh Mandava ( ramesh.mandava@@sun.com )
 */
@interface OrgApacheXpathJaxpJAXPVariableStack : OrgApacheXpathVariableStack

#pragma mark Public

- (instancetype __nonnull)initWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathJaxpJAXPVariableStack)

FOUNDATION_EXPORT void OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(OrgApacheXpathJaxpJAXPVariableStack *self, id<JavaxXmlXpathXPathVariableResolver> resolver);

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPVariableStack *new_OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(id<JavaxXmlXpathXPathVariableResolver> resolver) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPVariableStack *create_OrgApacheXpathJaxpJAXPVariableStack_initWithJavaxXmlXpathXPathVariableResolver_(id<JavaxXmlXpathXPathVariableResolver> resolver);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpJAXPVariableStack)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPVariableStack")
