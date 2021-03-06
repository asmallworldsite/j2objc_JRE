//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XObject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXObject")
#ifdef RESTRICT_OrgApacheXpathObjectsXObject
#define INCLUDE_ALL_OrgApacheXpathObjectsXObject 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXObject 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXObject

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXObject_) && (INCLUDE_ALL_OrgApacheXpathObjectsXObject || defined(INCLUDE_OrgApacheXpathObjectsXObject))
#define OrgApacheXpathObjectsXObject_

#define RESTRICT_OrgApacheXpathExpression 1
#define INCLUDE_OrgApacheXpathExpression 1
#include "org/apache/xpath/Expression.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilVector;
@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgApacheXpathExpressionOwner;
@protocol OrgW3cDomDocumentFragment;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class represents an XPath object, and is capable of
  converting the object to various types, such as a string.
 This class acts as the base class to other XPath type objects,
  such as XString, and provides polymorphic casting capabilities.
 */
@interface OrgApacheXpathObjectsXObject : OrgApacheXpathExpression < JavaIoSerializable, NSCopying > {
 @public
  /*!
   @brief The java object which this object wraps.
   */
  id m_obj_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, class) jint CLASS_NULL NS_SWIFT_NAME(CLASS_NULL);
@property (readonly, class) jint CLASS_UNKNOWN NS_SWIFT_NAME(CLASS_UNKNOWN);
@property (readonly, class) jint CLASS_BOOLEAN NS_SWIFT_NAME(CLASS_BOOLEAN);
@property (readonly, class) jint CLASS_NUMBER NS_SWIFT_NAME(CLASS_NUMBER);
@property (readonly, class) jint CLASS_STRING NS_SWIFT_NAME(CLASS_STRING);
@property (readonly, class) jint CLASS_NODESET NS_SWIFT_NAME(CLASS_NODESET);
@property (readonly, class) jint CLASS_RTREEFRAG NS_SWIFT_NAME(CLASS_RTREEFRAG);
@property (readonly, class) jint CLASS_UNRESOLVEDVARIABLE NS_SWIFT_NAME(CLASS_UNRESOLVEDVARIABLE);

#pragma mark Public

/*!
 @brief Create an XObject.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create an XObject.
 @param obj Can be any object, should be a specific type  for derived classes, or null.
 */
- (instancetype __nonnull)initWithId:(id)obj;

/*!
 @brief Specify if it's OK for detach to release the iterator for reuse.
 This function should be called with a value of false for objects that are 
  stored in variables.
  Calling this with a value of false on a XNodeSet will cause the nodeset 
  to be cached.
 @param allowRelease true if it is OK for detach to release this iterator  for pooling.
 */
- (void)allowDetachToReleaseWithBoolean:(jboolean)allowRelease;

/*!
 @brief Cast result object to a string.
 NEEDSDOC @@param fsb
 @return The string this wraps or the empty string if null
 */
- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

/*!
 @brief Cast result object to a boolean.Always issues an error.
 @return false
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)bool__;

/*!
 @brief Cast result object to a boolean, but allow side effects, such as the 
  incrementing of an iterator.
 @return True if there is a next node in the nodeset
 */
- (jboolean)boolWithSideEffects;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Cast object to type t.
 @param t Type of object to cast this to
 @param support XPath context to use for the conversion
 @return This object as the given type t
 @throw javax.xml.transform.TransformerException
 */
- (id)castToTypeWithInt:(jint)t
withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

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

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Forces the object to release it's resources.This is more harsh than
  detach().
 */
- (void)destruct;

/*!
 @brief Detaches the <code>DTMIterator</code> from the set which it iterated
  over, releasing any computational resources and placing the iterator
  in the INVALID state.After <code>detach</code> has been invoked,
  calls to <code>nextNode</code> or <code>previousNode</code> will
  raise a runtime exception.
 */
- (void)detach;

/*!
 @brief Directly call the
  characters method on the passed ContentHandler for the
  string-value.Multiple calls to the
  ContentHandler's characters methods may well occur for a single call to
  this method.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare this to
 @return True if this object is equal to the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief For support of literal objects in xpaths.
 @param xctxt The XPath execution context.
 @return This object.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief XObjects should not normally need to fix up variables.
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Get a fresh copy of the object.For use with variables.
 @return This object, unless overridden by subclass.
 */
- (OrgApacheXpathObjectsXObject *)getFresh;

/*!
 @brief Tell what kind of class this is.
 @return CLASS_UNKNOWN
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#UNKNOWN" + object class name
 */
- (NSString *)getTypeString;

/*!
 @brief Tell if one object is greater than the other.
 @param obj2 Object to compare this to
 @return True if this object is greater than the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)greaterThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell if one object is greater than or equal to the other.
 @param obj2 Object to compare this to
 @return True if this object is greater than or equal to the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)greaterThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgApacheXmlDtmDTMIterator>)iter;

/*!
 @brief Tell if one object is less than the other.
 @param obj2 Object to compare this to
 @return True if this object is less than the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)lessThanWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell if one object is less than or equal to the other.
 @param obj2 Object to compare this to
 @return True if this object is less than or equal to the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)lessThanOrEqualWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return The object as a NodeSetDTM.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathNodeSetDTM *)mutableNodeset;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomNodeList>)nodelist;

/*!
 @brief Cast result object to a nodelist.Always issues an error.
 @return null
 @throw javax.xml.transform.TransformerException
 */
- (id<OrgW3cDomTraversalNodeIterator>)nodeset;

/*!
 @brief Tell if two objects are functionally not equal.
 @param obj2 Object to compare this to
 @return True if this object is not equal to the given object
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)notEqualsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Cast result object to a number.Always issues an error.
 @return 0.0
 @throw javax.xml.transform.TransformerException
 */
- (jdouble)num;

/*!
 @brief Cast result object to a number, but allow side effects, such as the 
  incrementing of an iterator.
 @return numeric value of the string conversion from the 
  next node in the NodeSetDTM, or NAN if no node was found
 */
- (jdouble)numWithSideEffects;

/*!
 @brief Return a java object that's closest to the representation
  that should be handed to an extension.
 @return The object that this class wraps
 */
- (id)object;

/*!
 @brief Reset for fresh reuse.
 */
- (void)reset;

/*!
 @brief For functions to override.
 @return null
 */
- (jint)rtf;

/*!
 @brief Cast result object to a result tree fragment.
 @param support XPath context to use for the conversion
 @return the objec as a result tree fragment.
 */
- (jint)rtfWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief For functions to override.
 @return null
 */
- (id<OrgW3cDomDocumentFragment>)rtree;

/*!
 @brief Cast result object to a result tree fragment.
 @param support XPath context to use for the conversion
 @return the objec as a result tree fragment.
 */
- (id<OrgW3cDomDocumentFragment>)rtreeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Cast result object to a string.
 @return The object as a string
 */
- (NSString *)str;

/*!
 @brief Return the string representation of the object
 @return the string representation of the object
 */
- (NSString *)description;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (id<OrgApacheXmlUtilsXMLString>)xstr;

#pragma mark Protected

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Error message to issue
 @throw javax.xml.transform.TransformerException
 */
- (void)errorWithNSString:(NSString *)msg;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg Error message to issue
 @param args Arguments to use in the message
 @throw javax.xml.transform.TransformerException
 */
- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args;

- (void)setObjectWithId:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXObject)

J2OBJC_FIELD_SETTER(OrgApacheXpathObjectsXObject, m_obj_, id)

inline jlong OrgApacheXpathObjectsXObject_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXObject_serialVersionUID -821887098985662951LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, serialVersionUID, jlong)

/*!
 @brief Constant for NULL object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_NULL(void);
#define OrgApacheXpathObjectsXObject_CLASS_NULL -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_NULL, jint)

/*!
 @brief Constant for UNKNOWN object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_UNKNOWN(void);
#define OrgApacheXpathObjectsXObject_CLASS_UNKNOWN 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_UNKNOWN, jint)

/*!
 @brief Constant for BOOLEAN  object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_BOOLEAN(void);
#define OrgApacheXpathObjectsXObject_CLASS_BOOLEAN 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_BOOLEAN, jint)

/*!
 @brief Constant for NUMBER object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_NUMBER(void);
#define OrgApacheXpathObjectsXObject_CLASS_NUMBER 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_NUMBER, jint)

/*!
 @brief Constant for STRING object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_STRING(void);
#define OrgApacheXpathObjectsXObject_CLASS_STRING 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_STRING, jint)

/*!
 @brief Constant for NODESET object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_NODESET(void);
#define OrgApacheXpathObjectsXObject_CLASS_NODESET 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_NODESET, jint)

/*!
 @brief Constant for RESULT TREE FRAGMENT object type
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_RTREEFRAG(void);
#define OrgApacheXpathObjectsXObject_CLASS_RTREEFRAG 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_RTREEFRAG, jint)

/*!
 @brief Represents an unresolved variable type as an integer.
 */
inline jint OrgApacheXpathObjectsXObject_get_CLASS_UNRESOLVEDVARIABLE(void);
#define OrgApacheXpathObjectsXObject_CLASS_UNRESOLVEDVARIABLE 600
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXObject, CLASS_UNRESOLVEDVARIABLE, jint)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXObject_init(OrgApacheXpathObjectsXObject *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *new_OrgApacheXpathObjectsXObject_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *create_OrgApacheXpathObjectsXObject_init(void);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXObject_initWithId_(OrgApacheXpathObjectsXObject *self, id obj);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *new_OrgApacheXpathObjectsXObject_initWithId_(id obj) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *create_OrgApacheXpathObjectsXObject_initWithId_(id obj);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *OrgApacheXpathObjectsXObject_createWithId_(id val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXObject *OrgApacheXpathObjectsXObject_createWithId_withOrgApacheXpathXPathContext_(id val, OrgApacheXpathXPathContext *xctxt);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXObject)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXObject")
