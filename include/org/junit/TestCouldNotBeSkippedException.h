//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/TestCouldNotBeSkippedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitTestCouldNotBeSkippedException")
#ifdef RESTRICT_OrgJunitTestCouldNotBeSkippedException
#define INCLUDE_ALL_OrgJunitTestCouldNotBeSkippedException 0
#else
#define INCLUDE_ALL_OrgJunitTestCouldNotBeSkippedException 1
#endif
#undef RESTRICT_OrgJunitTestCouldNotBeSkippedException

#if !defined (OrgJunitTestCouldNotBeSkippedException_) && (INCLUDE_ALL_OrgJunitTestCouldNotBeSkippedException || defined(INCLUDE_OrgJunitTestCouldNotBeSkippedException))
#define OrgJunitTestCouldNotBeSkippedException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;
@class OrgJunitInternalAssumptionViolatedException;

@interface OrgJunitTestCouldNotBeSkippedException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithOrgJunitInternalAssumptionViolatedException:(OrgJunitInternalAssumptionViolatedException *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitTestCouldNotBeSkippedException)

FOUNDATION_EXPORT void OrgJunitTestCouldNotBeSkippedException_initWithOrgJunitInternalAssumptionViolatedException_(OrgJunitTestCouldNotBeSkippedException *self, OrgJunitInternalAssumptionViolatedException *cause);

FOUNDATION_EXPORT OrgJunitTestCouldNotBeSkippedException *new_OrgJunitTestCouldNotBeSkippedException_initWithOrgJunitInternalAssumptionViolatedException_(OrgJunitInternalAssumptionViolatedException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitTestCouldNotBeSkippedException *create_OrgJunitTestCouldNotBeSkippedException_initWithOrgJunitInternalAssumptionViolatedException_(OrgJunitInternalAssumptionViolatedException *cause);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitTestCouldNotBeSkippedException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitTestCouldNotBeSkippedException")
