//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/MatchersBinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationMatchersBinder")
#ifdef RESTRICT_OrgMockitoInternalInvocationMatchersBinder
#define INCLUDE_ALL_OrgMockitoInternalInvocationMatchersBinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationMatchersBinder 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationMatchersBinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationMatchersBinder_) && (INCLUDE_ALL_OrgMockitoInternalInvocationMatchersBinder || defined(INCLUDE_OrgMockitoInternalInvocationMatchersBinder))
#define OrgMockitoInternalInvocationMatchersBinder_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol OrgMockitoInternalProgressArgumentMatcherStorage;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationMatchersBinder : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (OrgMockitoInternalInvocationInvocationMatcher *)bindMatchersWithOrgMockitoInternalProgressArgumentMatcherStorage:(id<OrgMockitoInternalProgressArgumentMatcherStorage>)argumentMatcherStorage
                                                                                 withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationMatchersBinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationMatchersBinder_init(OrgMockitoInternalInvocationMatchersBinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatchersBinder *new_OrgMockitoInternalInvocationMatchersBinder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationMatchersBinder *create_OrgMockitoInternalInvocationMatchersBinder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationMatchersBinder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationMatchersBinder")
