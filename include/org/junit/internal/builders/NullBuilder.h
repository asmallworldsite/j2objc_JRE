//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/builders/NullBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalBuildersNullBuilder")
#ifdef RESTRICT_OrgJunitInternalBuildersNullBuilder
#define INCLUDE_ALL_OrgJunitInternalBuildersNullBuilder 0
#else
#define INCLUDE_ALL_OrgJunitInternalBuildersNullBuilder 1
#endif
#undef RESTRICT_OrgJunitInternalBuildersNullBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalBuildersNullBuilder_) && (INCLUDE_ALL_OrgJunitInternalBuildersNullBuilder || defined(INCLUDE_OrgJunitInternalBuildersNullBuilder))
#define OrgJunitInternalBuildersNullBuilder_

#define RESTRICT_OrgJunitRunnersModelRunnerBuilder 1
#define INCLUDE_OrgJunitRunnersModelRunnerBuilder 1
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersNullBuilder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype __nonnull)init;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)each;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersNullBuilder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersNullBuilder_init(OrgJunitInternalBuildersNullBuilder *self);

FOUNDATION_EXPORT OrgJunitInternalBuildersNullBuilder *new_OrgJunitInternalBuildersNullBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalBuildersNullBuilder *create_OrgJunitInternalBuildersNullBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersNullBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalBuildersNullBuilder")
