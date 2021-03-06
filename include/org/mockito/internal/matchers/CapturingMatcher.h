//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/CapturingMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersCapturingMatcher")
#ifdef RESTRICT_OrgMockitoInternalMatchersCapturingMatcher
#define INCLUDE_ALL_OrgMockitoInternalMatchersCapturingMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersCapturingMatcher 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersCapturingMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersCapturingMatcher_) && (INCLUDE_ALL_OrgMockitoInternalMatchersCapturingMatcher || defined(INCLUDE_OrgMockitoInternalMatchersCapturingMatcher))
#define OrgMockitoInternalMatchersCapturingMatcher_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_OrgMockitoInternalMatchersCapturesArguments 1
#define INCLUDE_OrgMockitoInternalMatchersCapturesArguments 1
#include "org/mockito/internal/matchers/CapturesArguments.h"

#define RESTRICT_OrgMockitoInternalMatchersVarargMatcher 1
#define INCLUDE_OrgMockitoInternalMatchersVarargMatcher 1
#include "org/mockito/internal/matchers/VarargMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilList;

@interface OrgMockitoInternalMatchersCapturingMatcher : NSObject < OrgMockitoArgumentMatcher, OrgMockitoInternalMatchersCapturesArguments, OrgMockitoInternalMatchersVarargMatcher, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)captureFromWithId:(id)argument;

- (id<JavaUtilList>)getAllValues;

- (id)getLastValue;

- (jboolean)matchesWithId:(id)argument;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersCapturingMatcher)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersCapturingMatcher_init(OrgMockitoInternalMatchersCapturingMatcher *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersCapturingMatcher *new_OrgMockitoInternalMatchersCapturingMatcher_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersCapturingMatcher *create_OrgMockitoInternalMatchersCapturingMatcher_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersCapturingMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersCapturingMatcher")
