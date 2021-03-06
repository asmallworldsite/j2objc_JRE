//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncTrue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncTrue")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncTrue
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncTrue 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncTrue 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncTrue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncTrue_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncTrue || defined(INCLUDE_OrgApacheXpathFunctionsFuncTrue))
#define OrgApacheXpathFunctionsFuncTrue_

#define RESTRICT_OrgApacheXpathFunctionsFunction 1
#define INCLUDE_OrgApacheXpathFunctionsFunction 1
#include "org/apache/xpath/functions/Function.h"

@class JavaUtilVector;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the True() function.
 */
@interface OrgApacheXpathFunctionsFuncTrue : OrgApacheXpathFunctionsFunction
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

/*!
 @brief No arguments to process, so this does nothing.
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncTrue)

inline jlong OrgApacheXpathFunctionsFuncTrue_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncTrue_serialVersionUID 5663314547346339447LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncTrue, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncTrue_init(OrgApacheXpathFunctionsFuncTrue *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncTrue *new_OrgApacheXpathFunctionsFuncTrue_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncTrue *create_OrgApacheXpathFunctionsFuncTrue_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncTrue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncTrue")
