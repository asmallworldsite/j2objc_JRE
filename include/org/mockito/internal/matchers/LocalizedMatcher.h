//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LocalizedMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLocalizedMatcher")
#ifdef RESTRICT_OrgMockitoInternalMatchersLocalizedMatcher
#define INCLUDE_ALL_OrgMockitoInternalMatchersLocalizedMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersLocalizedMatcher 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersLocalizedMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersLocalizedMatcher_) && (INCLUDE_ALL_OrgMockitoInternalMatchersLocalizedMatcher || defined(INCLUDE_OrgMockitoInternalMatchersLocalizedMatcher))
#define OrgMockitoInternalMatchersLocalizedMatcher_

@protocol OrgMockitoArgumentMatcher;
@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalMatchersLocalizedMatcher : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (id<OrgMockitoArgumentMatcher>)getMatcher;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLocalizedMatcher)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersLocalizedMatcher_initWithOrgMockitoArgumentMatcher_(OrgMockitoInternalMatchersLocalizedMatcher *self, id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT OrgMockitoInternalMatchersLocalizedMatcher *new_OrgMockitoInternalMatchersLocalizedMatcher_initWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersLocalizedMatcher *create_OrgMockitoInternalMatchersLocalizedMatcher_initWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLocalizedMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLocalizedMatcher")
