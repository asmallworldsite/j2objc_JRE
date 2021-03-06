//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/creation/instance/InstantiatorProviderAdapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter")
#ifdef RESTRICT_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter
#define INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter_) && (INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter || defined(INCLUDE_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter))
#define OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter_

#define RESTRICT_OrgMockitoPluginsInstantiatorProvider2 1
#define INCLUDE_OrgMockitoPluginsInstantiatorProvider2 1
#include "org/mockito/plugins/InstantiatorProvider2.h"

@protocol OrgMockitoCreationInstanceInstantiator;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoPluginsInstantiatorProvider;

/*!
 @brief Adapts old, deprecated <code>InstantiatorProvider</code> onto a new public <code>InstantiatorProvider2</code> API.
 */
@interface OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter : NSObject < OrgMockitoPluginsInstantiatorProvider2 >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoPluginsInstantiatorProvider:(id<OrgMockitoPluginsInstantiatorProvider>)provider;

- (id<OrgMockitoCreationInstanceInstantiator>)getInstantiatorWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter)

FOUNDATION_EXPORT void OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter_initWithOrgMockitoPluginsInstantiatorProvider_(OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter *self, id<OrgMockitoPluginsInstantiatorProvider> provider);

FOUNDATION_EXPORT OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter *new_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter_initWithOrgMockitoPluginsInstantiatorProvider_(id<OrgMockitoPluginsInstantiatorProvider> provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter *create_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter_initWithOrgMockitoPluginsInstantiatorProvider_(id<OrgMockitoPluginsInstantiatorProvider> provider);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProviderAdapter")
