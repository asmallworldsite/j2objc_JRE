//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/runner/FilterFactories.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerFilterFactories")
#ifdef RESTRICT_OrgJunitRunnerFilterFactories
#define INCLUDE_ALL_OrgJunitRunnerFilterFactories 0
#else
#define INCLUDE_ALL_OrgJunitRunnerFilterFactories 1
#endif
#undef RESTRICT_OrgJunitRunnerFilterFactories

#if !defined (OrgJunitRunnerFilterFactories_) && (INCLUDE_ALL_OrgJunitRunnerFilterFactories || defined(INCLUDE_OrgJunitRunnerFilterFactories))
#define OrgJunitRunnerFilterFactories_

@class IOSClass;
@class OrgJunitRunnerFilterFactoryParams;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerRequest;
@protocol OrgJunitRunnerFilterFactory;

@interface OrgJunitRunnerFilterFactories : NSObject

#pragma mark Public

+ (OrgJunitRunnerManipulationFilter *)createFilterWithIOSClass:(IOSClass *)filterFactoryClass
                         withOrgJunitRunnerFilterFactoryParams:(OrgJunitRunnerFilterFactoryParams *)params;

+ (OrgJunitRunnerManipulationFilter *)createFilterWithNSString:(NSString *)filterFactoryFqcn
                         withOrgJunitRunnerFilterFactoryParams:(OrgJunitRunnerFilterFactoryParams *)params;

+ (OrgJunitRunnerManipulationFilter *)createFilterFromFilterSpecWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request
                                                                             withNSString:(NSString *)filterSpec;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

+ (id<OrgJunitRunnerFilterFactory>)createFilterFactoryWithIOSClass:(IOSClass *)filterFactoryClass;

+ (id<OrgJunitRunnerFilterFactory>)createFilterFactoryWithNSString:(NSString *)filterFactoryFqcn;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerFilterFactories)

FOUNDATION_EXPORT void OrgJunitRunnerFilterFactories_initPackagePrivate(OrgJunitRunnerFilterFactories *self);

FOUNDATION_EXPORT OrgJunitRunnerFilterFactories *new_OrgJunitRunnerFilterFactories_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerFilterFactories *create_OrgJunitRunnerFilterFactories_initPackagePrivate(void);

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerFilterFactories_createFilterFromFilterSpecWithOrgJunitRunnerRequest_withNSString_(OrgJunitRunnerRequest *request, NSString *filterSpec);

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerFilterFactories_createFilterWithNSString_withOrgJunitRunnerFilterFactoryParams_(NSString *filterFactoryFqcn, OrgJunitRunnerFilterFactoryParams *params);

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerFilterFactories_createFilterWithIOSClass_withOrgJunitRunnerFilterFactoryParams_(IOSClass *filterFactoryClass, OrgJunitRunnerFilterFactoryParams *params);

FOUNDATION_EXPORT id<OrgJunitRunnerFilterFactory> OrgJunitRunnerFilterFactories_createFilterFactoryWithNSString_(NSString *filterFactoryFqcn);

FOUNDATION_EXPORT id<OrgJunitRunnerFilterFactory> OrgJunitRunnerFilterFactories_createFilterFactoryWithIOSClass_(IOSClass *filterFactoryClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerFilterFactories)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerFilterFactories")
