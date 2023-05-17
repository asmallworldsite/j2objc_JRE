//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/DOMImplementationSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMImplementationSource")
#ifdef RESTRICT_OrgW3cDomDOMImplementationSource
#define INCLUDE_ALL_OrgW3cDomDOMImplementationSource 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMImplementationSource 1
#endif
#undef RESTRICT_OrgW3cDomDOMImplementationSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomDOMImplementationSource_) && (INCLUDE_ALL_OrgW3cDomDOMImplementationSource || defined(INCLUDE_OrgW3cDomDOMImplementationSource))
#define OrgW3cDomDOMImplementationSource_

@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDOMImplementationList;

/*!
 @brief This interface permits a DOM implementer to supply one or more
  implementations, based upon requested features and versions, as specified
  in .Each implemented <code>DOMImplementationSource</code> object is
  listed in the binding-specific list of available sources so that its 
 <code>DOMImplementation</code> objects are made available.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMImplementationSource < JavaObject >

/*!
 @brief A method to request the first DOM implementation that supports the
  specified features.
 @param features A string that specifies which features and versions    are required. This is a space separated list in which each feature
     is specified by its name optionally followed by a space and a
     version number.  This method returns the first item of the list
     returned by  <code>
  getDOMImplementationList </code> .  As an example,    the string  <code>
  "XML 3.0 Traversal +Events 2.0" </code>  will    request a DOM implementation that supports the module "XML" for its
     3.0 version, a module that support of the "Traversal" module for
     any version, and the module "Events" for its 2.0 version. The
     module "Events" must be accessible using the method
      <code> Node.getFeature() </code>  and     <code>
  DOMImplementation.getFeature() </code>
  .
 @return The first DOM implementation that support the desired
    features, or <code>null</code> if this source has none.
 */
- (id<OrgW3cDomDOMImplementation>)getDOMImplementationWithNSString:(NSString *)features;

/*!
 @brief A method to request a list of DOM implementations that support the
  specified features and versions, as specified in .
 @param features A string that specifies which features and versions    are required. This is a space separated list in which each feature
     is specified by its name optionally followed by a space and a
     version number. This is something like: "XML 3.0 Traversal +Events
     2.0"
 @return A list of DOM implementations that support the desired
    features.
 */
- (id<OrgW3cDomDOMImplementationList>)getDOMImplementationListWithNSString:(NSString *)features;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMImplementationSource)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMImplementationSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMImplementationSource")
