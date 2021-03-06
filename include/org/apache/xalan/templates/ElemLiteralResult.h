//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemLiteralResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemLiteralResult
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemLiteralResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemLiteralResult_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult || defined(INCLUDE_OrgApacheXalanTemplatesElemLiteralResult))
#define OrgApacheXalanTemplatesElemLiteralResult_

#define RESTRICT_OrgApacheXalanTemplatesElemUse 1
#define INCLUDE_OrgApacheXalanTemplatesElemUse 1
#include "org/apache/xalan/templates/ElemUse.h"

@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsStringVector;
@protocol JavaUtilIterator;
@protocol OrgW3cDomNamedNodeMap;

/*!
 @brief Implement a Literal Result Element.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemLiteralResult : OrgApacheXalanTemplatesElemUse
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Set a literal result attribute (AVTs only).
 @param avt literal result attribute to add (AVT only)
 */
- (void)addLiteralResultAttributeWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)avt;

/*!
 @brief Set a literal result attribute (used for xsl attributes).
 @param att literal result attribute to add
 */
- (void)addLiteralResultAttributeWithNSString:(NSString *)att;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Get whether or not the passed URL is flagged by
  the "extension-element-prefixes" or "exclude-result-prefixes"
  properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param prefix non-null reference to prefix that might be excluded.(not currently used)
 @param uri reference to namespace that prefix maps to
 @return true if the prefix should normally be excluded.
 */
- (jboolean)containsExcludeResultPrefixWithNSString:(NSString *)prefix
                                       withNSString:(NSString *)uri;

/*!
 @brief Find out if the given "extension-element-prefix" property is defined.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param uri The URI to find
 @return True if the given URI is found
 */
- (jboolean)containsExtensionElementURIWithNSString:(NSString *)uri;

/*!
 @brief Compiling templates requires that we be able to list the AVTs
  ADDED 9/5/2000 to support compilation experiment
 @return an Enumeration of the literal result attributes associated
  with this element.
 */
- (id<JavaUtilIterator>)enumerateLiteralResultAttributes;

/*!
 @brief Copy a Literal Result Element into the Result tree, copy the
  non-excluded namespace attributes, copy the attributes not
  of the XSLT namespace, and execute the children of the LRE.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the raw value of the attribute.
 @param namespaceURI :localName or localName if the namespaceURI is null of 
   the attribute to get
 @return The Attr value as a string, or the empty string if that attribute 
  does not have a specified or default value
 */
- (NSString *)getAttributeWithNSString:(NSString *)rawName;

/*!
 @brief Return the raw value of the attribute.
 @param namespaceURI Namespace URI of attribute node to get
 @param localName Local part of qualified name of attribute node to get
 @return The Attr value as a string, or the empty string if that attribute 
  does not have a specified or default value
 */
- (NSString *)getAttributeNSWithNSString:(NSString *)namespaceURI
                            withNSString:(NSString *)localName;

/*!
 - seealso: org.w3c.dom.Node
 @return NamedNodeMap
 */
- (id<OrgW3cDomNamedNodeMap>)getAttributes;

/*!
 @brief Get an "extension-element-prefix" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param i Index of URI ("extension-element-prefix" property) to get
 @return URI at given index ("extension-element-prefix" property)
 @throw ArrayIndexOutOfBoundsException
 */
- (NSString *)getExtensionElementPrefixWithInt:(jint)i;

/*!
 @brief Get the number of "extension-element-prefixes" Strings.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @return the number of "extension-element-prefixes" Strings
 */
- (jint)getExtensionElementPrefixCount;

/*!
 @brief Return whether this element represents a root element
  that is also the stylesheet element.
 @return boolean flag indicating whether this element
  represents a root element that is also the stylesheet element.
 */
- (jboolean)getIsLiteralResultAsStylesheet;

/*!
 @brief Get a literal result attribute by name.The name is namespaceURI:localname  
  if namespace is not null.
 @param name Name of literal result attribute to get
 @return literal result attribute (AVT)
 */
- (OrgApacheXalanTemplatesAVT *)getLiteralResultAttributeWithNSString:(NSString *)name;

/*!
 @brief Get a literal result attribute by name.
 @param namespaceURI Namespace URI of attribute node to get
 @param localName Local part of qualified name of attribute node to get
 @return literal result attribute (AVT)
 */
- (OrgApacheXalanTemplatesAVT *)getLiteralResultAttributeNSWithNSString:(NSString *)namespaceURI
                                                           withNSString:(NSString *)localName;

/*!
 @brief Get the local name of the Literal Result Element.
 Note that after resolvePrefixTables has been called, this will
  return the aliased name prefix, not the original stylesheet
  namespace prefix.
 @return The local name (without prefix) of the result element
                   to be created.
 */
- (NSString *)getLocalName;

/*!
 @brief Get the original namespace of the Literal Result Element.
 %REVIEW% Why isn't this overriding the getNamespaceURI method
  rather than introducing a new one?
 @return The Namespace URI, or the empty string if the
         element has no Namespace URI.
 */
- (NSString *)getNamespace;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the prefix part of the raw name of the Literal Result Element.
 @return The prefix, or the empty string if noprefix was provided.
 */
- (NSString *)getPrefix;

/*!
 @brief Get the raw name of the Literal Result Element.
 @return The qualified name (with prefix), or the
         empty string if qualified names are not available.
 */
- (NSString *)getRawName;

/*!
 @brief Get the "version" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#forwards">forwards in XSLT Specification</a>
 @return Version property value
 */
- (NSString *)getVersion;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Augment resolvePrefixTables, resolving the namespace aliases once
  the superclass has resolved the tables.
 @throw TransformerException
 */
- (void)resolvePrefixTables;

/*!
 @brief Set the "exclude-result-prefixes" property.
 The designation of a namespace as an excluded namespace is
  effective within the subtree of the stylesheet rooted at
  the element bearing the exclude-result-prefixes or
  xsl:exclude-result-prefixes attribute; a subtree rooted
  at an xsl:stylesheet element does not include any stylesheets
  imported or included by children of that xsl:stylesheet element.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param v vector of prefixes that are resolvable to strings.
 */
- (void)setExcludeResultPrefixesWithOrgApacheXmlUtilsStringVector:(OrgApacheXmlUtilsStringVector *)v;

/*!
 @brief Set the "extension-element-prefixes" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param v Vector of URIs (not prefixes) to set as the "extension-element-prefixes" property
 */
- (void)setExtensionElementPrefixesWithOrgApacheXmlUtilsStringVector:(OrgApacheXmlUtilsStringVector *)v;

/*!
 @brief Set whether this element represents a root element
  that is also the stylesheet element.
 @param b boolean flag indicating whether this element  represents a root element that is also the stylesheet element.
 */
- (void)setIsLiteralResultAsStylesheetWithBoolean:(jboolean)b;

/*!
 @brief Set the local name of the LRE.
 @param localName The local name (without prefix) of the result element                   to be created.
 */
- (void)setLocalNameWithNSString:(NSString *)localName;

/*!
 @brief Set the namespace URI of the result element to be created.
 Note that after resolvePrefixTables has been called, this will
  return the aliased result namespace, not the original stylesheet
  namespace.
 @param ns The Namespace URI, or the empty string if the         element has no Namespace URI.
 */
- (void)setNamespaceWithNSString:(NSString *)ns;

/*!
 @brief Set the raw name of the LRE.
 @param rawName The qualified name (with prefix), or the         empty string if qualified names are not available.
 */
- (void)setRawNameWithNSString:(NSString *)rawName;

/*!
 @brief Set the "version" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#forwards">forwards in XSLT Specification</a>
 @param v Version property value to set
 */
- (void)setVersionWithNSString:(NSString *)v;

/*!
 @brief Set the "xml:space" attribute.
 A text node is preserved if an ancestor element of the text node
  has an xml:space attribute with a value of preserve, and
  no closer ancestor element has xml:space with a value of default.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Text">section-Creating-Text in XSLT Specification</a>
 @param avt Enumerated value, either Constants.ATTRVAL_PRESERVE   or Constants.ATTRVAL_STRIP.
 */
- (void)setXmlSpaceWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)avt;

/*!
 @brief Throw a DOMException
 @param msg key of the error that occured.
 */
- (void)throwDOMExceptionWithShort:(jshort)code
                      withNSString:(NSString *)msg;

#pragma mark Protected

/*!
 @brief Accept a visitor and call the appropriate method 
  for this class.
 @param visitor The visitor whose appropriate method will be called.
 @return true if the children of the object should be visited.
 */
- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

#pragma mark Package-Private

/*!
 @brief Return whether we need to check namespace prefixes
  against the exclude result prefixes or extensions lists.
 Note that this will create a new prefix table if one
  has not been created already.
  NEEDSDOC ($objectName$) @@return
 */
- (jboolean)needToCheckExclude;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemLiteralResult)

inline jlong OrgApacheXalanTemplatesElemLiteralResult_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemLiteralResult_serialVersionUID -8703409074421657260LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemLiteralResult, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemLiteralResult_init(OrgApacheXalanTemplatesElemLiteralResult *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult *new_OrgApacheXalanTemplatesElemLiteralResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult *create_OrgApacheXalanTemplatesElemLiteralResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemLiteralResult)

#endif

#if !defined (OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult || defined(INCLUDE_OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes))
#define OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes_

#define RESTRICT_OrgW3cDomNamedNodeMap 1
#define INCLUDE_OrgW3cDomNamedNodeMap 1
#include "org/w3c/dom/NamedNodeMap.h"

@class OrgApacheXalanTemplatesElemLiteralResult;
@protocol OrgW3cDomNode;

@interface OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes : NSObject < OrgW3cDomNamedNodeMap >

#pragma mark Public

/*!
 @brief Construct a NameNodeMap.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTemplatesElemLiteralResult:(OrgApacheXalanTemplatesElemLiteralResult *)outer$;

/*!
 @brief Return the number of Attributes on this Element
 @return The number of nodes in this map. The range of valid child 
  node indices is <code>0</code> to <code>length-1</code> inclusive
 */
- (jint)getLength;

/*!
 @brief Retrieves a node specified by name.
 @param name The  <code> nodeName </code>  of a node to retrieve.
 @return A <code>Node</code> (of any type) with the specified
    <code>nodeName</code>, or <code>null</code> if it does not 
    identify any node in this map.
 */
- (id<OrgW3cDomNode>)getNamedItemWithNSString:(NSString *)name;

/*!
 @brief Retrieves a node specified by local name and namespace URI.
 @param namespaceURI Namespace URI of attribute node to get
 @param localName Local part of qualified name of attribute node to   get
 @return A <code>Node</code> (of any type) with the specified
    <code>nodeName</code>, or <code>null</code> if it does not 
    identify any node in this map.
 */
- (id<OrgW3cDomNode>)getNamedItemNSWithNSString:(NSString *)namespaceURI
                                   withNSString:(NSString *)localName;

/*!
 @brief Returns the <code>index</code>th item in the map.If <code>index
  </code> is greater than or equal to the number of nodes in this 
  map, this returns <code>null</code>.
 @param i The index of the requested item.
 @return The node at the <code>index</code>th position in the map, 
    or <code>null</code> if that is not a valid index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)i;

/*!
 - seealso: org.w3c.dom.NamedNodeMap
 @param name of the node to remove
 @return The node removed from this map if a node with such 
  a name exists.
 @throw DOMException
 */
- (id<OrgW3cDomNode>)removeNamedItemWithNSString:(NSString *)name;

/*!
 - seealso: org.w3c.dom.NamedNodeMap
 @param namespaceURI Namespace URI of the node to remove
 @param localName Local part of qualified name of the node to remove
 @return The node removed from this map if a node with such a local
   name and namespace URI exists
 @throw DOMException
 */
- (id<OrgW3cDomNode>)removeNamedItemNSWithNSString:(NSString *)namespaceURI
                                      withNSString:(NSString *)localName;

/*!
 @brief Unimplemented.See org.w3c.dom.NamedNodeMap
 @param A node to store in this map
 @return If the new Node replaces an existing node the replaced 
  Node is returned, otherwise null is returned
 @throw DOMException
 */
- (id<OrgW3cDomNode>)setNamedItemWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

/*!
 @brief Unimplemented.See org.w3c.dom.NamedNodeMap
 @param A node to store in this map
 @return If the new Node replaces an existing node the replaced 
  Node is returned, otherwise null is returned
 @throw DOMException
 */
- (id<OrgW3cDomNode>)setNamedItemNSWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes_initWithOrgApacheXalanTemplatesElemLiteralResult_(OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes *self, OrgApacheXalanTemplatesElemLiteralResult *outer$);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes *new_OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes_initWithOrgApacheXalanTemplatesElemLiteralResult_(OrgApacheXalanTemplatesElemLiteralResult *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes *create_OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes_initWithOrgApacheXalanTemplatesElemLiteralResult_(OrgApacheXalanTemplatesElemLiteralResult *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemLiteralResult_LiteralElementAttributes)

#endif

#if !defined (OrgApacheXalanTemplatesElemLiteralResult_Attribute_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult || defined(INCLUDE_OrgApacheXalanTemplatesElemLiteralResult_Attribute))
#define OrgApacheXalanTemplatesElemLiteralResult_Attribute_

#define RESTRICT_OrgW3cDomAttr 1
#define INCLUDE_OrgW3cDomAttr 1
#include "org/w3c/dom/Attr.h"

@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesElemLiteralResult;
@protocol OrgW3cDomDocument;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomNamedNodeMap;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTypeInfo;
@protocol OrgW3cDomUserDataHandler;

@interface OrgApacheXalanTemplatesElemLiteralResult_Attribute : NSObject < OrgW3cDomAttr >

#pragma mark Public

/*!
 @brief Construct a Attr.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTemplatesElemLiteralResult:(OrgApacheXalanTemplatesElemLiteralResult *)outer$
                                            withOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)avt
                                                      withOrgW3cDomElement:(id<OrgW3cDomElement>)elem;

/*!
 - seealso: org.w3c.dom.Node
 @param newChild New node to append to the list of this node's   children
 @throw DOMException
 */
- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

/*!
 - seealso: org.w3c.dom.Node
 @param deep Flag indicating whether to clone deep   (clone member variables)
 @return Returns a duplicate of this node
 */
- (id<OrgW3cDomNode>)cloneNodeWithBoolean:(jboolean)deep;

- (jshort)compareDocumentPositionWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomNamedNodeMap>)getAttributes;

- (NSString *)getBaseURI;

/*!
 - seealso: org.w3c.dom.Node
 @return a NodeList containing no nodes.
 */
- (id<OrgW3cDomNodeList>)getChildNodes;

- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomNode>)getFirstChild;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomNode>)getLastChild;

/*!
 - seealso: org.w3c.dom.Node
 @return the local part of the qualified name of this node
 */
- (NSString *)getLocalName;

/*!
 @return The name of this attribute
 */
- (NSString *)getName;

/*!
 - seealso: org.w3c.dom.Node
 @return The namespace URI of this node, or null if it is 
  unspecified
 */
- (NSString *)getNamespaceURI;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomNode>)getNextSibling;

/*!
 - seealso: org.w3c.dom.Node
 @return The name of the attribute
 */
- (NSString *)getNodeName;

/*!
 - seealso: org.w3c.dom.Node
 @return The node is an Attr
 */
- (jshort)getNodeType;

/*!
 - seealso: org.w3c.dom.Node
 @return The value of the attribute
 @throw DOMException
 */
- (NSString *)getNodeValue;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomDocument>)getOwnerDocument;

/*!
 @return The Element node this attribute is attached to 
  or null if this attribute is not in use
 */
- (id<OrgW3cDomElement>)getOwnerElement;

/*!
 - seealso: org.w3c.dom.Node
 @return the containing element node
 */
- (id<OrgW3cDomNode>)getParentNode;

/*!
 - seealso: org.w3c.dom.Node
 @return The namespace prefix of this node, or null if it is 
  unspecified
 */
- (NSString *)getPrefix;

/*!
 - seealso: org.w3c.dom.Node
 @return null
 */
- (id<OrgW3cDomNode>)getPreviousSibling;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

/*!
 @return true
 */
- (jboolean)getSpecified;

- (NSString *)getTextContent;

- (id)getUserDataWithNSString:(NSString *)key;

/*!
 @return The value of this attribute returned as string
 */
- (NSString *)getValue;

/*!
 - seealso: org.w3c.dom.Node
 @return false
 */
- (jboolean)hasAttributes;

/*!
 - seealso: org.w3c.dom.Node
 @return false
 */
- (jboolean)hasChildNodes;

/*!
 - seealso: org.w3c.dom.Node
 @param newChild New child node to insert
 @param refChild Insert in front of this child
 @return null
 @throw DOMException
 */
- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

- (jboolean)isDefaultNamespaceWithNSString:(NSString *)namespaceURI;

- (jboolean)isEqualNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

- (jboolean)isId;

- (jboolean)isSameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

/*!
 - seealso: org.w3c.dom.Node
 @return Returns <code>false</code>
 @since DOM Level 2
 */
- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

- (NSString *)lookupNamespaceURIWithNSString:(NSString *)specifiedPrefix;

- (NSString *)lookupPrefixWithNSString:(NSString *)namespaceURI;

/*!
 - seealso: org.w3c.dom.Node
 */
- (void)normalize;

/*!
 - seealso: org.w3c.dom.Node
 @param oldChild Child to be removed
 @return null
 @throw DOMException
 */
- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

/*!
 - seealso: org.w3c.dom.Node
 @param newChild Replace existing child with this one
 @param oldChild Existing child to be replaced
 @return null
 @throw DOMException
 */
- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

/*!
 - seealso: org.w3c.dom.Node
 @param nodeValue Value to set this node to
 @throw DOMException
 */
- (void)setNodeValueWithNSString:(NSString *)nodeValue;

/*!
 - seealso: org.w3c.dom.Node
 @param prefix Prefix to set for this node
 @throw DOMException
 */
- (void)setPrefixWithNSString:(NSString *)prefix;

- (void)setTextContentWithNSString:(NSString *)textContent;

- (id)setUserDataWithNSString:(NSString *)key
                       withId:(id)data
 withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

/*!
 - seealso: org.w3c.dom.Attr
 @param value Value to set this node to
 @throw DOMException
 */
- (void)setValueWithNSString:(NSString *)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemLiteralResult_Attribute)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemLiteralResult_Attribute_initWithOrgApacheXalanTemplatesElemLiteralResult_withOrgApacheXalanTemplatesAVT_withOrgW3cDomElement_(OrgApacheXalanTemplatesElemLiteralResult_Attribute *self, OrgApacheXalanTemplatesElemLiteralResult *outer$, OrgApacheXalanTemplatesAVT *avt, id<OrgW3cDomElement> elem);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult_Attribute *new_OrgApacheXalanTemplatesElemLiteralResult_Attribute_initWithOrgApacheXalanTemplatesElemLiteralResult_withOrgApacheXalanTemplatesAVT_withOrgW3cDomElement_(OrgApacheXalanTemplatesElemLiteralResult *outer$, OrgApacheXalanTemplatesAVT *avt, id<OrgW3cDomElement> elem) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemLiteralResult_Attribute *create_OrgApacheXalanTemplatesElemLiteralResult_Attribute_initWithOrgApacheXalanTemplatesElemLiteralResult_withOrgApacheXalanTemplatesAVT_withOrgW3cDomElement_(OrgApacheXalanTemplatesElemLiteralResult *outer$, OrgApacheXalanTemplatesAVT *avt, id<OrgW3cDomElement> elem);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemLiteralResult_Attribute)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemLiteralResult")
