//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/SpyAnnotationEngine.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationSpyAnnotationEngine")
#ifdef RESTRICT_OrgMockitoInternalConfigurationSpyAnnotationEngine
#define INCLUDE_ALL_OrgMockitoInternalConfigurationSpyAnnotationEngine 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationSpyAnnotationEngine 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationSpyAnnotationEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationSpyAnnotationEngine_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationSpyAnnotationEngine || defined(INCLUDE_OrgMockitoInternalConfigurationSpyAnnotationEngine))
#define OrgMockitoInternalConfigurationSpyAnnotationEngine_

#define RESTRICT_OrgMockitoPluginsAnnotationEngine 1
#define INCLUDE_OrgMockitoPluginsAnnotationEngine 1
#include "org/mockito/plugins/AnnotationEngine.h"

#define RESTRICT_OrgMockitoConfigurationAnnotationEngine 1
#define INCLUDE_OrgMockitoConfigurationAnnotationEngine 1
#include "org/mockito/configuration/AnnotationEngine.h"

@class IOSClass;

/*!
 @brief Process fields annotated with &#64;Spy.
 <p>
  <p>
  Will try transform the field in a spy as with <code>Mockito.spy()</code>.
  </p>
  <p>
  <p>
  If the field is not initialized, will try to initialize it, with a no-arg constructor. 
 </p>
  <p>
  <p>
  If the field is also annotated with the <strong>compatible</strong> &#64;InjectMocks then the field will be ignored,
  The injection engine will handle this specific case. 
 </p>
  <p>
  <p>This engine will fail, if the field is also annotated with incompatible Mockito annotations.
 */
@interface OrgMockitoInternalConfigurationSpyAnnotationEngine : NSObject < OrgMockitoPluginsAnnotationEngine, OrgMockitoConfigurationAnnotationEngine >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)processWithIOSClass:(IOSClass *)context
                     withId:(id)testInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationSpyAnnotationEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationSpyAnnotationEngine_init(OrgMockitoInternalConfigurationSpyAnnotationEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationSpyAnnotationEngine *new_OrgMockitoInternalConfigurationSpyAnnotationEngine_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationSpyAnnotationEngine *create_OrgMockitoInternalConfigurationSpyAnnotationEngine_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationSpyAnnotationEngine)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationSpyAnnotationEngine")
