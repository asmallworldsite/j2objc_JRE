//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/EqualsWithDelta.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEqualsWithDelta")
#ifdef RESTRICT_OrgMockitoInternalMatchersEqualsWithDelta
#define INCLUDE_ALL_OrgMockitoInternalMatchersEqualsWithDelta 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersEqualsWithDelta 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersEqualsWithDelta

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersEqualsWithDelta_) && (INCLUDE_ALL_OrgMockitoInternalMatchersEqualsWithDelta || defined(INCLUDE_OrgMockitoInternalMatchersEqualsWithDelta))
#define OrgMockitoInternalMatchersEqualsWithDelta_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface OrgMockitoInternalMatchersEqualsWithDelta : NSObject < OrgMockitoArgumentMatcher, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithNSNumber:(NSNumber *)value
                              withNSNumber:(NSNumber *)delta;

- (jboolean)matchesWithId:(NSNumber *)actual;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEqualsWithDelta)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEqualsWithDelta_initWithNSNumber_withNSNumber_(OrgMockitoInternalMatchersEqualsWithDelta *self, NSNumber *value, NSNumber *delta);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEqualsWithDelta *new_OrgMockitoInternalMatchersEqualsWithDelta_initWithNSNumber_withNSNumber_(NSNumber *value, NSNumber *delta) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersEqualsWithDelta *create_OrgMockitoInternalMatchersEqualsWithDelta_initWithNSNumber_withNSNumber_(NSNumber *value, NSNumber *delta);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEqualsWithDelta)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEqualsWithDelta")
