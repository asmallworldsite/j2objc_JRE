//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/VerificationStartedNotifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier")
#ifdef RESTRICT_OrgMockitoInternalListenersVerificationStartedNotifier
#define INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier 0
#else
#define INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier 1
#endif
#undef RESTRICT_OrgMockitoInternalListenersVerificationStartedNotifier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalListenersVerificationStartedNotifier_) && (INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier || defined(INCLUDE_OrgMockitoInternalListenersVerificationStartedNotifier))
#define OrgMockitoInternalListenersVerificationStartedNotifier_

@protocol JavaUtilList;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoMockingDetails;

@interface OrgMockitoInternalListenersVerificationStartedNotifier : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (id)notifyVerificationStartedWithJavaUtilList:(id<JavaUtilList>)listeners
                   withOrgMockitoMockingDetails:(id<OrgMockitoMockingDetails>)originalMockingDetails;

#pragma mark Package-Private

+ (void)assertCompatibleTypesWithId:(id)mock
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)originalSettings;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersVerificationStartedNotifier)

FOUNDATION_EXPORT void OrgMockitoInternalListenersVerificationStartedNotifier_init(OrgMockitoInternalListenersVerificationStartedNotifier *self);

FOUNDATION_EXPORT OrgMockitoInternalListenersVerificationStartedNotifier *new_OrgMockitoInternalListenersVerificationStartedNotifier_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalListenersVerificationStartedNotifier *create_OrgMockitoInternalListenersVerificationStartedNotifier_init(void);

FOUNDATION_EXPORT id OrgMockitoInternalListenersVerificationStartedNotifier_notifyVerificationStartedWithJavaUtilList_withOrgMockitoMockingDetails_(id<JavaUtilList> listeners, id<OrgMockitoMockingDetails> originalMockingDetails);

FOUNDATION_EXPORT void OrgMockitoInternalListenersVerificationStartedNotifier_assertCompatibleTypesWithId_withOrgMockitoMockMockCreationSettings_(id mock, id<OrgMockitoMockMockCreationSettings> originalSettings);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersVerificationStartedNotifier)

#endif

#if !defined (OrgMockitoInternalListenersVerificationStartedNotifier_Event_) && (INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier || defined(INCLUDE_OrgMockitoInternalListenersVerificationStartedNotifier_Event))
#define OrgMockitoInternalListenersVerificationStartedNotifier_Event_

#define RESTRICT_OrgMockitoListenersVerificationStartedEvent 1
#define INCLUDE_OrgMockitoListenersVerificationStartedEvent 1
#include "org/mockito/listeners/VerificationStartedEvent.h"

@protocol OrgMockitoMockingDetails;

@interface OrgMockitoInternalListenersVerificationStartedNotifier_Event : NSObject < OrgMockitoListenersVerificationStartedEvent >

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoMockingDetails:(id<OrgMockitoMockingDetails>)originalMockingDetails;

- (id)getMock;

- (void)setMockWithId:(id)mock;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersVerificationStartedNotifier_Event)

FOUNDATION_EXPORT void OrgMockitoInternalListenersVerificationStartedNotifier_Event_initWithOrgMockitoMockingDetails_(OrgMockitoInternalListenersVerificationStartedNotifier_Event *self, id<OrgMockitoMockingDetails> originalMockingDetails);

FOUNDATION_EXPORT OrgMockitoInternalListenersVerificationStartedNotifier_Event *new_OrgMockitoInternalListenersVerificationStartedNotifier_Event_initWithOrgMockitoMockingDetails_(id<OrgMockitoMockingDetails> originalMockingDetails) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalListenersVerificationStartedNotifier_Event *create_OrgMockitoInternalListenersVerificationStartedNotifier_Event_initWithOrgMockitoMockingDetails_(id<OrgMockitoMockingDetails> originalMockingDetails);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersVerificationStartedNotifier_Event)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalListenersVerificationStartedNotifier")
