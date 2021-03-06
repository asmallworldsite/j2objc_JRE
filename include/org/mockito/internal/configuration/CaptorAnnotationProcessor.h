//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/CaptorAnnotationProcessor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationCaptorAnnotationProcessor")
#ifdef RESTRICT_OrgMockitoInternalConfigurationCaptorAnnotationProcessor
#define INCLUDE_ALL_OrgMockitoInternalConfigurationCaptorAnnotationProcessor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationCaptorAnnotationProcessor 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationCaptorAnnotationProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationCaptorAnnotationProcessor_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationCaptorAnnotationProcessor || defined(INCLUDE_OrgMockitoInternalConfigurationCaptorAnnotationProcessor))
#define OrgMockitoInternalConfigurationCaptorAnnotationProcessor_

#define RESTRICT_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#define INCLUDE_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoCaptor;

/*!
 @brief Instantiate <code>ArgumentCaptor</code> a field annotated by &#64;Captor.
 */
@interface OrgMockitoInternalConfigurationCaptorAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype __nonnull)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoCaptor>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationCaptorAnnotationProcessor_init(OrgMockitoInternalConfigurationCaptorAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationCaptorAnnotationProcessor *new_OrgMockitoInternalConfigurationCaptorAnnotationProcessor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationCaptorAnnotationProcessor *create_OrgMockitoInternalConfigurationCaptorAnnotationProcessor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationCaptorAnnotationProcessor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationCaptorAnnotationProcessor")
