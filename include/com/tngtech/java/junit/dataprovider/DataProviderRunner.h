//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/com/tngtech/java/junit/dataprovider/DataProviderRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderRunner")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderRunner
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderRunner 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderRunner 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderDataProviderRunner

#if !defined (ComTngtechJavaJunitDataproviderDataProviderRunner_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderRunner || defined(INCLUDE_ComTngtechJavaJunitDataproviderDataProviderRunner))
#define ComTngtechJavaJunitDataproviderDataProviderRunner_

#define RESTRICT_OrgJunitRunnersBlockJUnit4ClassRunner 1
#define INCLUDE_OrgJunitRunnersBlockJUnit4ClassRunner 1
#include "org/junit/runners/BlockJUnit4ClassRunner.h"

@class ComTngtechJavaJunitDataproviderInternalDataConverter;
@class ComTngtechJavaJunitDataproviderInternalTestGenerator;
@class ComTngtechJavaJunitDataproviderInternalTestValidator;
@class IOSClass;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelTestClass;
@protocol ComTngtechJavaJunitDataproviderUseDataProvider;
@protocol JavaUtilList;

@interface ComTngtechJavaJunitDataproviderDataProviderRunner : OrgJunitRunnersBlockJUnit4ClassRunner {
 @public
  ComTngtechJavaJunitDataproviderInternalDataConverter *dataConverter_;
  ComTngtechJavaJunitDataproviderInternalTestValidator *testValidator_;
  ComTngtechJavaJunitDataproviderInternalTestGenerator *testGenerator_;
  id<JavaUtilList> computedTestMethods_;
}

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

#pragma mark Protected

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)computeTestMethods;

- (void)validateInstanceMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateTestMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

#pragma mark Package-Private

- (OrgJunitRunnersModelTestClass *)findDataProviderLocationWithComTngtechJavaJunitDataproviderUseDataProvider:(id<ComTngtechJavaJunitDataproviderUseDataProvider>)useDataProvider;

- (id<JavaUtilList>)generateExplodedTestMethodsForWithJavaUtilList:(id<JavaUtilList>)testMethods;

- (OrgJunitRunnersModelFrameworkMethod *)getDataProviderMethodWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)testMethod;

- (OrgJunitRunnersModelTestClass *)getTestClassInt;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderDataProviderRunner)

J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderRunner, dataConverter_, ComTngtechJavaJunitDataproviderInternalDataConverter *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderRunner, testValidator_, ComTngtechJavaJunitDataproviderInternalTestValidator *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderRunner, testGenerator_, ComTngtechJavaJunitDataproviderInternalTestGenerator *)
J2OBJC_FIELD_SETTER(ComTngtechJavaJunitDataproviderDataProviderRunner, computedTestMethods_, id<JavaUtilList>)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderDataProviderRunner_initWithIOSClass_(ComTngtechJavaJunitDataproviderDataProviderRunner *self, IOSClass *clazz);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderRunner *new_ComTngtechJavaJunitDataproviderDataProviderRunner_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderDataProviderRunner *create_ComTngtechJavaJunitDataproviderDataProviderRunner_initWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderDataProviderRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderDataProviderRunner")
