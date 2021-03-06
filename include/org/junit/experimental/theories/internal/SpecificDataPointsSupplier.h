//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/SpecificDataPointsSupplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier))
#define OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier_

#define RESTRICT_OrgJunitExperimentalTheoriesInternalAllMembersSupplier 1
#define INCLUDE_OrgJunitExperimentalTheoriesInternalAllMembersSupplier 1
#include "org/junit/experimental/theories/internal/AllMembersSupplier.h"

@class OrgJunitExperimentalTheoriesParameterSignature;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilCollection;

@interface OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier : OrgJunitExperimentalTheoriesInternalAllMembersSupplier

#pragma mark Public

- (instancetype __nonnull)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

#pragma mark Protected

- (id<JavaUtilCollection>)getDataPointsFieldsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getDataPointsMethodsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getSingleDataPointFieldsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getSingleDataPointMethodsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier *self, OrgJunitRunnersModelTestClass *testClass);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier *new_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelTestClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier *create_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalSpecificDataPointsSupplier")
