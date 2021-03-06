//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncSum.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSum")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncSum
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSum 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSum 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncSum

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncSum_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncSum || defined(INCLUDE_OrgApacheXpathFunctionsFuncSum))
#define OrgApacheXpathFunctionsFuncSum_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Sum() function.
 */
@interface OrgApacheXpathFunctionsFuncSum : OrgApacheXpathFunctionsFunctionOneArg
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncSum)

inline jlong OrgApacheXpathFunctionsFuncSum_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncSum_serialVersionUID -2719049259574677519LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncSum, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncSum_init(OrgApacheXpathFunctionsFuncSum *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSum *new_OrgApacheXpathFunctionsFuncSum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSum *create_OrgApacheXpathFunctionsFuncSum_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncSum)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSum")
