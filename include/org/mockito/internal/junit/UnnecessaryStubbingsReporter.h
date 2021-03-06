//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/UnnecessaryStubbingsReporter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitUnnecessaryStubbingsReporter")
#ifdef RESTRICT_OrgMockitoInternalJunitUnnecessaryStubbingsReporter
#define INCLUDE_ALL_OrgMockitoInternalJunitUnnecessaryStubbingsReporter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitUnnecessaryStubbingsReporter 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitUnnecessaryStubbingsReporter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalJunitUnnecessaryStubbingsReporter_) && (INCLUDE_ALL_OrgMockitoInternalJunitUnnecessaryStubbingsReporter || defined(INCLUDE_OrgMockitoInternalJunitUnnecessaryStubbingsReporter))
#define OrgMockitoInternalJunitUnnecessaryStubbingsReporter_

#define RESTRICT_OrgMockitoListenersMockCreationListener 1
#define INCLUDE_OrgMockitoListenersMockCreationListener 1
#include "org/mockito/listeners/MockCreationListener.h"

@class IOSClass;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Reports unnecessary stubbings
 */
@interface OrgMockitoInternalJunitUnnecessaryStubbingsReporter : NSObject < OrgMockitoListenersMockCreationListener >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)onMockCreatedWithId:(id)mock
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (void)validateUnusedStubsWithIOSClass:(IOSClass *)testClass
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalJunitUnnecessaryStubbingsReporter)

FOUNDATION_EXPORT void OrgMockitoInternalJunitUnnecessaryStubbingsReporter_init(OrgMockitoInternalJunitUnnecessaryStubbingsReporter *self);

FOUNDATION_EXPORT OrgMockitoInternalJunitUnnecessaryStubbingsReporter *new_OrgMockitoInternalJunitUnnecessaryStubbingsReporter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalJunitUnnecessaryStubbingsReporter *create_OrgMockitoInternalJunitUnnecessaryStubbingsReporter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitUnnecessaryStubbingsReporter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitUnnecessaryStubbingsReporter")
