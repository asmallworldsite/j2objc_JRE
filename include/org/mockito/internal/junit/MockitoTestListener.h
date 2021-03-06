//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/MockitoTestListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitMockitoTestListener")
#ifdef RESTRICT_OrgMockitoInternalJunitMockitoTestListener
#define INCLUDE_ALL_OrgMockitoInternalJunitMockitoTestListener 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitMockitoTestListener 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitMockitoTestListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalJunitMockitoTestListener_) && (INCLUDE_ALL_OrgMockitoInternalJunitMockitoTestListener || defined(INCLUDE_OrgMockitoInternalJunitMockitoTestListener))
#define OrgMockitoInternalJunitMockitoTestListener_

#define RESTRICT_OrgMockitoListenersMockCreationListener 1
#define INCLUDE_OrgMockitoListenersMockCreationListener 1
#include "org/mockito/listeners/MockCreationListener.h"

@protocol OrgMockitoInternalJunitTestFinishedEvent;

/*!
 @brief Internal test listener that helps decoupling JUnit internals from Mockito "business" logic.
 If we ever want to expose this type publicly, it should not extend MockCreationListener
  because we want our listeners to be single-method interfaces for easier use and evolution.
 */
@protocol OrgMockitoInternalJunitMockitoTestListener < OrgMockitoListenersMockCreationListener, JavaObject >

- (void)testFinishedWithOrgMockitoInternalJunitTestFinishedEvent:(id<OrgMockitoInternalJunitTestFinishedEvent>)event;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalJunitMockitoTestListener)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitMockitoTestListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitMockitoTestListener")
