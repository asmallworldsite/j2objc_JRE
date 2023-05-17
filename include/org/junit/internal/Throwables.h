//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/internal/Throwables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalThrowables")
#ifdef RESTRICT_OrgJunitInternalThrowables
#define INCLUDE_ALL_OrgJunitInternalThrowables 0
#else
#define INCLUDE_ALL_OrgJunitInternalThrowables 1
#endif
#undef RESTRICT_OrgJunitInternalThrowables

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalThrowables_) && (INCLUDE_ALL_OrgJunitInternalThrowables || defined(INCLUDE_OrgJunitInternalThrowables))
#define OrgJunitInternalThrowables_

@class JavaLangException;
@class JavaLangThrowable;

@interface OrgJunitInternalThrowables : NSObject

#pragma mark Public

+ (NSString *)getStacktraceWithJavaLangThrowable:(JavaLangThrowable *)exception;

+ (NSString *)getTrimmedStackTraceWithJavaLangThrowable:(JavaLangThrowable *)exception;

+ (JavaLangException *)rethrowAsExceptionWithJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_STATIC_INIT(OrgJunitInternalThrowables)

FOUNDATION_EXPORT JavaLangException *OrgJunitInternalThrowables_rethrowAsExceptionWithJavaLangThrowable_(JavaLangThrowable *e);

FOUNDATION_EXPORT NSString *OrgJunitInternalThrowables_getStacktraceWithJavaLangThrowable_(JavaLangThrowable *exception);

FOUNDATION_EXPORT NSString *OrgJunitInternalThrowables_getTrimmedStackTraceWithJavaLangThrowable_(JavaLangThrowable *exception);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalThrowables)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalThrowables")
