//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/Notation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomNotation")
#ifdef RESTRICT_OrgW3cDomNotation
#define INCLUDE_ALL_OrgW3cDomNotation 0
#else
#define INCLUDE_ALL_OrgW3cDomNotation 1
#endif
#undef RESTRICT_OrgW3cDomNotation

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomNotation_) && (INCLUDE_ALL_OrgW3cDomNotation || defined(INCLUDE_OrgW3cDomNotation))
#define OrgW3cDomNotation_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "org/w3c/dom/Node.h"

/*!
 @brief This interface represents a notation declared in the DTD.A notation either
  declares, by name, the format of an unparsed entity (see <a href='http://www.w3.org/TR/2004/REC-xml-20040204#Notations'>section 4.7</a> of the XML 1.0 specification [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>]), or is
  used for formal declaration of processing instruction targets (see <a href='http://www.w3.org/TR/2004/REC-xml-20040204#sec-pi'>section 2.6</a> of the XML 1.0 specification [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>]).
 The 
 <code>nodeName</code> attribute inherited from <code>Node</code> is set
  to the declared name of the notation. 
 <p>The DOM Core does not support editing <code>Notation</code> nodes; they
  are therefore readonly. 
 <p>A <code>Notation</code> node does not have any parent. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomNotation < OrgW3cDomNode, JavaObject >

/*!
 @brief The public identifier of this notation.If the public identifier was
  not specified, this is <code>null</code>.
 */
- (NSString *)getPublicId;

/*!
 @brief The system identifier of this notation.If the system identifier was
  not specified, this is <code>null</code>.
 This may be an absolute URI
  or not.
 */
- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomNotation)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomNotation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomNotation")
