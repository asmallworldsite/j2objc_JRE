//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorImport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorImport")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorImport
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorImport 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorImport 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorImport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorImport_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorImport || defined(INCLUDE_OrgApacheXalanProcessorProcessorImport))
#define OrgApacheXalanProcessorProcessorImport_

#define RESTRICT_OrgApacheXalanProcessorProcessorInclude 1
#define INCLUDE_OrgApacheXalanProcessorProcessorInclude 1
#include "org/apache/xalan/processor/ProcessorInclude.h"

/*!
 @brief This class processes parse events for an xsl:import element.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorImport : OrgApacheXalanProcessorProcessorInclude
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

/*!
 @brief Get the error number associated with this type of stylesheet importing itself
 @return the appropriate error number
 */
- (NSString *)getStylesheetInclErr;

/*!
 @brief Get the stylesheet type associated with an imported stylesheet
 @return the type of the stylesheet
 */
- (jint)getStylesheetType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorImport)

inline jlong OrgApacheXalanProcessorProcessorImport_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorImport_serialVersionUID -8247537698214245237LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorImport, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorImport_init(OrgApacheXalanProcessorProcessorImport *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorImport *new_OrgApacheXalanProcessorProcessorImport_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorImport *create_OrgApacheXalanProcessorProcessorImport_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorImport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorImport")
