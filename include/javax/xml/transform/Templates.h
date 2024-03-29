//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/Templates.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTemplates")
#ifdef RESTRICT_JavaxXmlTransformTemplates
#define INCLUDE_ALL_JavaxXmlTransformTemplates 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTemplates 1
#endif
#undef RESTRICT_JavaxXmlTransformTemplates

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformTemplates_) && (INCLUDE_ALL_JavaxXmlTransformTemplates || defined(INCLUDE_JavaxXmlTransformTemplates))
#define JavaxXmlTransformTemplates_

@class JavaUtilProperties;
@class JavaxXmlTransformTransformer;

/*!
 @brief An object that implements this interface is the runtime representation of processed
  transformation instructions.
 <p>Templates must be thread-safe for a given instance
  over multiple threads running concurrently, and may
  be used multiple times in a given session.</p>
 */
@protocol JavaxXmlTransformTemplates < JavaObject >

/*!
 @brief Create a new transformation context for this Templates object.
 @return A valid non-null instance of a Transformer.
 @throw TransformerConfigurationExceptionif a Transformer can not be created.
 */
- (JavaxXmlTransformTransformer *)newTransformer OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get the properties corresponding to the effective xsl:output element.
 The object returned will
  be a clone of the internal values. Accordingly, it can be mutated
  without mutating the Templates object, and then handed in to 
 <code>javax.xml.transform.Transformer.setOutputProperties</code>.
  
 <p>The properties returned should contain properties set by the stylesheet,
  and these properties are "defaulted" by default properties specified by 
 <a href="http://www.w3.org/TR/xslt#output">section 16 of the
  XSL Transformations (XSLT) W3C Recommendation</a>.  The properties that
  were specifically set by the stylesheet should be in the base
  Properties list, while the XSLT default properties that were not
  specifically set should be in the "default" Properties list.  Thus,
  getOutputProperties().getProperty(String key) will obtain any
  property in that was set by the stylesheet, <em>or</em> the default
  properties, while
  getOutputProperties().get(String key) will only retrieve properties
  that were explicitly set in the stylesheet.</p>
  
 <p>For XSLT, 
 <a href="http://www.w3.org/TR/xslt#attribute-value-templates">Attribute
  Value Templates</a> attribute values will
  be returned unexpanded (since there is no context at this point).  The
  namespace prefixes inside Attribute Value Templates will be unexpanded,
  so that they remain valid XPath values.</p>
 @return A Properties object, never null.
 */
- (JavaUtilProperties *)getOutputProperties;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTemplates)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTemplates)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTemplates")
