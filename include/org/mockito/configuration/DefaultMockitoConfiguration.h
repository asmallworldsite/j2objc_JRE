//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/configuration/DefaultMockitoConfiguration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoConfigurationDefaultMockitoConfiguration")
#ifdef RESTRICT_OrgMockitoConfigurationDefaultMockitoConfiguration
#define INCLUDE_ALL_OrgMockitoConfigurationDefaultMockitoConfiguration 0
#else
#define INCLUDE_ALL_OrgMockitoConfigurationDefaultMockitoConfiguration 1
#endif
#undef RESTRICT_OrgMockitoConfigurationDefaultMockitoConfiguration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoConfigurationDefaultMockitoConfiguration_) && (INCLUDE_ALL_OrgMockitoConfigurationDefaultMockitoConfiguration || defined(INCLUDE_OrgMockitoConfigurationDefaultMockitoConfiguration))
#define OrgMockitoConfigurationDefaultMockitoConfiguration_

#define RESTRICT_OrgMockitoConfigurationIMockitoConfiguration 1
#define INCLUDE_OrgMockitoConfigurationIMockitoConfiguration 1
#include "org/mockito/configuration/IMockitoConfiguration.h"

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief DefaultConfiguration of Mockito framework
 <p>
  Currently it doesn't have many configuration options but it will probably change if future.
 <p>
  See javadocs for <code>IMockitoConfiguration</code> on info how to configure Mockito
 */
@interface OrgMockitoConfigurationDefaultMockitoConfiguration : NSObject < OrgMockitoConfigurationIMockitoConfiguration >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)cleansStackTrace;

- (jboolean)enableClassCache;

- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoConfigurationDefaultMockitoConfiguration)

FOUNDATION_EXPORT void OrgMockitoConfigurationDefaultMockitoConfiguration_init(OrgMockitoConfigurationDefaultMockitoConfiguration *self);

FOUNDATION_EXPORT OrgMockitoConfigurationDefaultMockitoConfiguration *new_OrgMockitoConfigurationDefaultMockitoConfiguration_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoConfigurationDefaultMockitoConfiguration *create_OrgMockitoConfigurationDefaultMockitoConfiguration_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoConfigurationDefaultMockitoConfiguration)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoConfigurationDefaultMockitoConfiguration")
