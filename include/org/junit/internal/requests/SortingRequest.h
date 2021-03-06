//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/requests/SortingRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRequestsSortingRequest")
#ifdef RESTRICT_OrgJunitInternalRequestsSortingRequest
#define INCLUDE_ALL_OrgJunitInternalRequestsSortingRequest 0
#else
#define INCLUDE_ALL_OrgJunitInternalRequestsSortingRequest 1
#endif
#undef RESTRICT_OrgJunitInternalRequestsSortingRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRequestsSortingRequest_) && (INCLUDE_ALL_OrgJunitInternalRequestsSortingRequest || defined(INCLUDE_OrgJunitInternalRequestsSortingRequest))
#define OrgJunitInternalRequestsSortingRequest_

#define RESTRICT_OrgJunitRunnerRequest 1
#define INCLUDE_OrgJunitRunnerRequest 1
#include "org/junit/runner/Request.h"

@class OrgJunitRunnerRunner;
@protocol JavaUtilComparator;

@interface OrgJunitInternalRequestsSortingRequest : OrgJunitRunnerRequest

#pragma mark Public

- (instancetype __nonnull)initWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request
                                 withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (OrgJunitRunnerRunner *)getRunner;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRequestsSortingRequest)

FOUNDATION_EXPORT void OrgJunitInternalRequestsSortingRequest_initWithOrgJunitRunnerRequest_withJavaUtilComparator_(OrgJunitInternalRequestsSortingRequest *self, OrgJunitRunnerRequest *request, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT OrgJunitInternalRequestsSortingRequest *new_OrgJunitInternalRequestsSortingRequest_initWithOrgJunitRunnerRequest_withJavaUtilComparator_(OrgJunitRunnerRequest *request, id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRequestsSortingRequest *create_OrgJunitInternalRequestsSortingRequest_initWithOrgJunitRunnerRequest_withJavaUtilComparator_(OrgJunitRunnerRequest *request, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRequestsSortingRequest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRequestsSortingRequest")
