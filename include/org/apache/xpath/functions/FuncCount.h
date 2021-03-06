//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncCount.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncCount
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncCount

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncCount_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount || defined(INCLUDE_OrgApacheXpathFunctionsFuncCount))
#define OrgApacheXpathFunctionsFuncCount_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Count() function.
 */
@interface OrgApacheXpathFunctionsFuncCount : OrgApacheXpathFunctionsFunctionOneArg
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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncCount)

inline jlong OrgApacheXpathFunctionsFuncCount_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncCount_serialVersionUID -7116225100474153751LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncCount, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncCount_init(OrgApacheXpathFunctionsFuncCount *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCount *new_OrgApacheXpathFunctionsFuncCount_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCount *create_OrgApacheXpathFunctionsFuncCount_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncCount)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount")
