//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Or.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsOr")
#ifdef RESTRICT_OrgApacheXpathOperationsOr
#define INCLUDE_ALL_OrgApacheXpathOperationsOr 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsOr 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsOr

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsOr_) && (INCLUDE_ALL_OrgApacheXpathOperationsOr || defined(INCLUDE_OrgApacheXpathOperationsOr))
#define OrgApacheXpathOperationsOr_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief The 'or' operation expression executer.
 */
@interface OrgApacheXpathOperationsOr : OrgApacheXpathOperationsOperation
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Evaluate this operation directly to a boolean.
 @param xctxt The runtime execution context.
 @return The result of the operation as a boolean.
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief OR two expressions and return the boolean result.Override
  superclass method for optimization purposes.
 @param xctxt The runtime execution context.
 @return <code>org.apache.xpath.objects.XBoolean.S_TRUE</code> or  
 <code>org.apache.xpath.objects.XBoolean.S_FALSE</code>.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsOr)

inline jlong OrgApacheXpathOperationsOr_get_serialVersionUID(void);
#define OrgApacheXpathOperationsOr_serialVersionUID -644107191353853079LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsOr, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsOr_init(OrgApacheXpathOperationsOr *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsOr *new_OrgApacheXpathOperationsOr_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsOr *create_OrgApacheXpathOperationsOr_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsOr)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsOr")
