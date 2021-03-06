//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExtensionsTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionsTable")
#ifdef RESTRICT_OrgApacheXalanExtensionsExtensionsTable
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionsTable 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionsTable 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExtensionsTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanExtensionsExtensionsTable_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExtensionsTable || defined(INCLUDE_OrgApacheXalanExtensionsExtensionsTable))
#define OrgApacheXalanExtensionsExtensionsTable_

@class JavaUtilHashtable;
@class JavaUtilVector;
@class OrgApacheXalanExtensionsExtensionHandler;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXpathFunctionsFuncExtFunction;
@protocol OrgApacheXalanExtensionsExpressionContext;

/*!
 @brief Class holding a table registered extension namespace handlers
 */
@interface OrgApacheXalanExtensionsExtensionsTable : NSObject {
 @public
  /*!
   @brief Table of extensions that may be called from the expression language
  via the call(name, ...) function.Objects are keyed on the call
  name.
   */
  JavaUtilHashtable *m_extensionFunctionNamespaces_;
}

#pragma mark Public

/*!
 @brief The constructor (called from TransformerImpl) registers the
  StylesheetRoot for the transformation and instantiates an
  ExtensionHandler for each extension namespace.
 */
- (instancetype __nonnull)initWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Register an extension namespace handler.This handler provides
  functions for testing whether a function is known within the
  namespace and also for invoking the functions.
 @param uri the URI for the extension.
 @param extNS the extension handler.
 */
- (void)addExtensionNamespaceWithNSString:(NSString *)uri
withOrgApacheXalanExtensionsExtensionHandler:(OrgApacheXalanExtensionsExtensionHandler *)extNS;

/*!
 @brief Execute the element-available() function.
 @param ns the URI of namespace in which the function is needed
 @param elemName name of element being tested
 @return whether the given element is available or not.
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)elementAvailableWithNSString:(NSString *)ns
                            withNSString:(NSString *)elemName;

/*!
 @brief Handle an extension function.
 @param extFunction the extension function
 @param argVec arguments to the function in a vector
 @param exprContext a context which may be passed to an extension function                   and provides callback functions to access various
                    areas in the environment
 @return result of executing the function
 @throw javax.xml.transform.TransformerException
 */
- (id)extFunctionWithOrgApacheXpathFunctionsFuncExtFunction:(OrgApacheXpathFunctionsFuncExtFunction *)extFunction
                                         withJavaUtilVector:(JavaUtilVector *)argVec
              withOrgApacheXalanExtensionsExpressionContext:(id<OrgApacheXalanExtensionsExpressionContext>)exprContext;

/*!
 @brief Handle an extension function.
 @param ns the URI of namespace in which the function is needed
 @param funcName the function name being called
 @param argVec arguments to the function in a vector
 @param methodKey a unique key identifying this function instance in the                   stylesheet
 @param exprContext a context which may be passed to an extension function                   and provides callback functions to access various
                    areas in the environment
 @return result of executing the function
 @throw javax.xml.transform.TransformerException
 */
- (id)extFunctionWithNSString:(NSString *)ns
                 withNSString:(NSString *)funcName
           withJavaUtilVector:(JavaUtilVector *)argVec
                       withId:(id)methodKey
withOrgApacheXalanExtensionsExpressionContext:(id<OrgApacheXalanExtensionsExpressionContext>)exprContext;

/*!
 @brief Execute the function-available() function.
 @param ns the URI of namespace in which the function is needed
 @param funcName the function name being tested
 @return whether the given function is available or not.
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)functionAvailableWithNSString:(NSString *)ns
                             withNSString:(NSString *)funcName;

/*!
 @brief Get an ExtensionHandler object that represents the
  given namespace.
 @param extns A valid extension namespace.
 @return ExtensionHandler object that represents the
  given namespace.
 */
- (OrgApacheXalanExtensionsExtensionHandler *)getWithNSString:(NSString *)extns;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExtensionsTable)

J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionsTable, m_extensionFunctionNamespaces_, JavaUtilHashtable *)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsExtensionsTable_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanExtensionsExtensionsTable *self, OrgApacheXalanTemplatesStylesheetRoot *sroot);

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionsTable *new_OrgApacheXalanExtensionsExtensionsTable_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *sroot) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionsTable *create_OrgApacheXalanExtensionsExtensionsTable_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *sroot);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExtensionsTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionsTable")
