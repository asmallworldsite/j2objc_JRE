//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/TestFinishedEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitTestFinishedEvent")
#ifdef RESTRICT_OrgMockitoInternalJunitTestFinishedEvent
#define INCLUDE_ALL_OrgMockitoInternalJunitTestFinishedEvent 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitTestFinishedEvent 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitTestFinishedEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalJunitTestFinishedEvent_) && (INCLUDE_ALL_OrgMockitoInternalJunitTestFinishedEvent || defined(INCLUDE_OrgMockitoInternalJunitTestFinishedEvent))
#define OrgMockitoInternalJunitTestFinishedEvent_

@class JavaLangThrowable;

@protocol OrgMockitoInternalJunitTestFinishedEvent < JavaObject >

- (JavaLangThrowable *)getFailure;

- (NSString *)getTestName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalJunitTestFinishedEvent)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitTestFinishedEvent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitTestFinishedEvent")
