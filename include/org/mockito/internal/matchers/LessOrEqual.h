//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LessOrEqual.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLessOrEqual")
#ifdef RESTRICT_OrgMockitoInternalMatchersLessOrEqual
#define INCLUDE_ALL_OrgMockitoInternalMatchersLessOrEqual 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersLessOrEqual 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersLessOrEqual

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersLessOrEqual_) && (INCLUDE_ALL_OrgMockitoInternalMatchersLessOrEqual || defined(INCLUDE_OrgMockitoInternalMatchersLessOrEqual))
#define OrgMockitoInternalMatchersLessOrEqual_

#define RESTRICT_OrgMockitoInternalMatchersCompareTo 1
#define INCLUDE_OrgMockitoInternalMatchersCompareTo 1
#include "org/mockito/internal/matchers/CompareTo.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersLessOrEqual : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLessOrEqual)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersLessOrEqual_initWithJavaLangComparable_(OrgMockitoInternalMatchersLessOrEqual *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersLessOrEqual *new_OrgMockitoInternalMatchersLessOrEqual_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersLessOrEqual *create_OrgMockitoInternalMatchersLessOrEqual_initWithJavaLangComparable_(id<JavaLangComparable> value);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLessOrEqual)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLessOrEqual")
