//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncSubstring.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstring")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncSubstring
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstring 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstring 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncSubstring

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncSubstring_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstring || defined(INCLUDE_OrgApacheXpathFunctionsFuncSubstring))
#define OrgApacheXpathFunctionsFuncSubstring_

#define RESTRICT_OrgApacheXpathFunctionsFunction3Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction3Args 1
#include "org/apache/xpath/functions/Function3Args.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Substring() function.
 */
@interface OrgApacheXpathFunctionsFuncSubstring : OrgApacheXpathFunctionsFunction3Args
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncSubstring)

inline jlong OrgApacheXpathFunctionsFuncSubstring_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncSubstring_serialVersionUID -5996676095024715502LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncSubstring, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncSubstring_init(OrgApacheXpathFunctionsFuncSubstring *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSubstring *new_OrgApacheXpathFunctionsFuncSubstring_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSubstring *create_OrgApacheXpathFunctionsFuncSubstring_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncSubstring)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSubstring")
