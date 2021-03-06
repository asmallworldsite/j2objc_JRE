//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/XPathFactoryImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpXPathFactoryImpl")
#ifdef RESTRICT_OrgApacheXpathJaxpXPathFactoryImpl
#define INCLUDE_ALL_OrgApacheXpathJaxpXPathFactoryImpl 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpXPathFactoryImpl 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpXPathFactoryImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathJaxpXPathFactoryImpl_) && (INCLUDE_ALL_OrgApacheXpathJaxpXPathFactoryImpl || defined(INCLUDE_OrgApacheXpathJaxpXPathFactoryImpl))
#define OrgApacheXpathJaxpXPathFactoryImpl_

#define RESTRICT_JavaxXmlXpathXPathFactory 1
#define INCLUDE_JavaxXmlXpathXPathFactory 1
#include "javax/xml/xpath/XPathFactory.h"

@protocol JavaxXmlXpathXPath;
@protocol JavaxXmlXpathXPathFunctionResolver;
@protocol JavaxXmlXpathXPathVariableResolver;

/*!
 @brief The XPathFactory builds XPaths.
 @version $Revision: 468655 $
 @author Ramesh Mandava
 */
@interface OrgApacheXpathJaxpXPathFactoryImpl : JavaxXmlXpathXPathFactory

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief <p>Get the state of the named feature.
 </p>
   
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>XPathFactoryConfigurationException</code> is thrown if this 
 <code>XPathFactory</code> or the <code>XPath</code>s
  it creates cannot support the feature.
  It is possible for an <code>XPathFactory</code> to expose a feature 
  value but be unable to change its state. 
 </p>
 @param name Feature name.
 @return State of the named feature.
 @throw XPathFactoryConfigurationExceptionif this  
 <code>XPathFactory</code> or the <code>XPath</code>s
    it creates cannot support this feature.
 @throw NullPointerExceptionif <code>name</code> is  
 <code>null</code>.
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief <p>Is specified object model supported by this  
 <code>XPathFactory</code>?
 </p>
 @param objectModel Specifies the object model which the returned  
  <code> XPathFactory </code>  will understand.
 @return <code>true</code> if <code>XPathFactory</code> supports  
 <code>objectModel</code>, else <code>false</code>.
 @throw NullPointerExceptionIf <code>objectModel</code> is <code>null</code>.
 @throw IllegalArgumentExceptionIf <code>objectModel.length() == 0</code>.
 */
- (jboolean)isObjectModelSupportedWithNSString:(NSString *)objectModel;

/*!
 @brief <p>Returns a new <code>XPath</code> object using the underlying
  object model determined when the factory was instantiated.
 </p>
 @return New <code>XPath</code>
 */
- (id<JavaxXmlXpathXPath>)newXPath OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Set a feature for this <code>XPathFactory</code> and  
 <code>XPath</code>s created by this factory.
 </p>
   
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>XPathFactoryConfigurationException</code> is thrown if this 
 <code>XPathFactory</code> or the <code>XPath</code>s
   it creates cannot support the feature.
  It is possible for an <code>XPathFactory</code> to expose a feature
  value but be unable to change its state. 
 </p>
   
 <p>See <code>javax.xml.xpath.XPathFactory</code> for full documentation
  of specific features.</p>
 @param name Feature name.
 @param value Is feature state  <code> true </code>  or  <code> false </code>
  .
 @throw XPathFactoryConfigurationExceptionif this  
 <code>XPathFactory</code> or the <code>XPath</code>s
    it creates cannot support this feature.
 @throw NullPointerExceptionif <code>name</code> is  
 <code>null</code>.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief <p>Establish a default function resolver.
 </p>
   
 <p>Any <code>XPath</code> objects constructed from this factory will use
  the specified resolver by default.</p>
  
 <p>A <code>NullPointerException</code> is thrown if  
 <code>resolver</code> is <code>null</code>.</p>
 @param resolver XPath function resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is  
 <code>null</code>.
 */
- (void)setXPathFunctionResolverWithJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)resolver;

/*!
 @brief <p>Establish a default variable resolver.
 </p>
  
 <p>Any <code>XPath</code> objects constructed from this factory will use
  the specified resolver by default.</p>
   
 <p>A <code>NullPointerException</code> is thrown if <code>resolver</code> is <code>null</code>.</p>
 @param resolver Variable resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is  
 <code>null</code>.
 */
- (void)setXPathVariableResolverWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathJaxpXPathFactoryImpl)

FOUNDATION_EXPORT void OrgApacheXpathJaxpXPathFactoryImpl_init(OrgApacheXpathJaxpXPathFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathFactoryImpl *new_OrgApacheXpathJaxpXPathFactoryImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathFactoryImpl *create_OrgApacheXpathJaxpXPathFactoryImpl_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpXPathFactoryImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpXPathFactoryImpl")
