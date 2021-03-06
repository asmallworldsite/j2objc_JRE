//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Quo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsQuo")
#ifdef RESTRICT_OrgApacheXpathOperationsQuo
#define INCLUDE_ALL_OrgApacheXpathOperationsQuo 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsQuo 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsQuo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathOperationsQuo_) && (INCLUDE_ALL_OrgApacheXpathOperationsQuo || defined(INCLUDE_OrgApacheXpathOperationsQuo))
#define OrgApacheXpathOperationsQuo_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The 'quo' operation expression executer.
 (no longer supported by XPath).
 */
@interface OrgApacheXpathOperationsQuo : OrgApacheXpathOperationsOperation
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsQuo)

inline jlong OrgApacheXpathOperationsQuo_get_serialVersionUID(void);
#define OrgApacheXpathOperationsQuo_serialVersionUID 693765299196169905LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsQuo, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsQuo_init(OrgApacheXpathOperationsQuo *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsQuo *new_OrgApacheXpathOperationsQuo_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsQuo *create_OrgApacheXpathOperationsQuo_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsQuo)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsQuo")
