//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/requests/MemoizingRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRequestsMemoizingRequest")
#ifdef RESTRICT_OrgJunitInternalRequestsMemoizingRequest
#define INCLUDE_ALL_OrgJunitInternalRequestsMemoizingRequest 0
#else
#define INCLUDE_ALL_OrgJunitInternalRequestsMemoizingRequest 1
#endif
#undef RESTRICT_OrgJunitInternalRequestsMemoizingRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRequestsMemoizingRequest_) && (INCLUDE_ALL_OrgJunitInternalRequestsMemoizingRequest || defined(INCLUDE_OrgJunitInternalRequestsMemoizingRequest))
#define OrgJunitInternalRequestsMemoizingRequest_

#define RESTRICT_OrgJunitRunnerRequest 1
#define INCLUDE_OrgJunitRunnerRequest 1
#include "org/junit/runner/Request.h"

@class OrgJunitRunnerRunner;

@interface OrgJunitInternalRequestsMemoizingRequest : OrgJunitRunnerRequest

#pragma mark Public

- (OrgJunitRunnerRunner *)getRunner;

#pragma mark Protected

/*!
 @brief Creates the <code>Runner</code> to return from <code>getRunner()</code>.Called at most once.
 */
- (OrgJunitRunnerRunner *)createRunner;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRequestsMemoizingRequest)

FOUNDATION_EXPORT void OrgJunitInternalRequestsMemoizingRequest_initPackagePrivate(OrgJunitInternalRequestsMemoizingRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRequestsMemoizingRequest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRequestsMemoizingRequest")
