//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/experimental/theories/internal/AllMembersSupplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesInternalAllMembersSupplier
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesInternalAllMembersSupplier

#if !defined (OrgJunitExperimentalTheoriesInternalAllMembersSupplier_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalAllMembersSupplier))
#define OrgJunitExperimentalTheoriesInternalAllMembersSupplier_

#define RESTRICT_OrgJunitExperimentalTheoriesParameterSupplier 1
#define INCLUDE_OrgJunitExperimentalTheoriesParameterSupplier 1
#include "org/junit/experimental/theories/ParameterSupplier.h"

@class OrgJunitExperimentalTheoriesParameterSignature;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesInternalAllMembersSupplier : OrgJunitExperimentalTheoriesParameterSupplier

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)type;

- (id<JavaUtilList>)getValueSourcesWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

#pragma mark Protected

- (id<JavaUtilCollection>)getDataPointsFieldsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getDataPointsMethodsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getSingleDataPointFieldsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

- (id<JavaUtilCollection>)getSingleDataPointMethodsWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)sig;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalAllMembersSupplier)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesInternalAllMembersSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitExperimentalTheoriesInternalAllMembersSupplier *self, OrgJunitRunnersModelTestClass *type);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalAllMembersSupplier *new_OrgJunitExperimentalTheoriesInternalAllMembersSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelTestClass *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalAllMembersSupplier *create_OrgJunitExperimentalTheoriesInternalAllMembersSupplier_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelTestClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalAllMembersSupplier)

#endif

#if !defined (OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue))
#define OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue_

#define RESTRICT_OrgJunitExperimentalTheoriesPotentialAssignment 1
#define INCLUDE_OrgJunitExperimentalTheoriesPotentialAssignment 1
#include "org/junit/experimental/theories/PotentialAssignment.h"

@interface OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue : OrgJunitExperimentalTheoriesPotentialAssignment

#pragma mark Public

- (NSString *)getDescription;

- (id)getValue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalAllMembersSupplier_MethodParameterValue)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAllMembersSupplier")
