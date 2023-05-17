//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/hamcrest/core/IsInstanceOf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf")
#ifdef RESTRICT_OrgHamcrestCoreIsInstanceOf
#define INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf 1
#endif
#undef RESTRICT_OrgHamcrestCoreIsInstanceOf

#if !defined (OrgHamcrestCoreIsInstanceOf_) && (INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf || defined(INCLUDE_OrgHamcrestCoreIsInstanceOf))
#define OrgHamcrestCoreIsInstanceOf_

#define RESTRICT_OrgHamcrestDiagnosingMatcher 1
#define INCLUDE_OrgHamcrestDiagnosingMatcher 1
#include "org/hamcrest/DiagnosingMatcher.h"

@class IOSClass;
@class JavaLangBoolean;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIsInstanceOf : OrgHamcrestDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)expectedClass;

+ (id<OrgHamcrestMatcher>)anyWithIOSClass:(IOSClass *)type;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)instanceOfWithIOSClass:(IOSClass *)type;

#pragma mark Protected

- (jboolean)matchesWithId:(id)item
withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsInstanceOf)

FOUNDATION_EXPORT void OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(OrgHamcrestCoreIsInstanceOf *self, IOSClass *expectedClass);

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *new_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *expectedClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsInstanceOf *create_OrgHamcrestCoreIsInstanceOf_initWithIOSClass_(IOSClass *expectedClass);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_instanceOfWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsInstanceOf_anyWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsInstanceOf)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIsInstanceOf")
