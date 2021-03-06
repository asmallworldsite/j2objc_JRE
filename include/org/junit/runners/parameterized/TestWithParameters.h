//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/parameterized/TestWithParameters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersParameterizedTestWithParameters")
#ifdef RESTRICT_OrgJunitRunnersParameterizedTestWithParameters
#define INCLUDE_ALL_OrgJunitRunnersParameterizedTestWithParameters 0
#else
#define INCLUDE_ALL_OrgJunitRunnersParameterizedTestWithParameters 1
#endif
#undef RESTRICT_OrgJunitRunnersParameterizedTestWithParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersParameterizedTestWithParameters_) && (INCLUDE_ALL_OrgJunitRunnersParameterizedTestWithParameters || defined(INCLUDE_OrgJunitRunnersParameterizedTestWithParameters))
#define OrgJunitRunnersParameterizedTestWithParameters_

@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

/*!
 @brief A <code>TestWithParameters</code> keeps the data together that are needed for
  creating a runner for a single data set of a parameterized test.It has a
  name, the test class and a list of parameters.
 @since 4.12
 */
@interface OrgJunitRunnersParameterizedTestWithParameters : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)name
         withOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass
                          withJavaUtilList:(id<JavaUtilList>)parameters;

- (jboolean)isEqual:(id)obj;

- (NSString *)getName;

- (id<JavaUtilList>)getParameters;

- (OrgJunitRunnersModelTestClass *)getTestClass;

- (NSUInteger)hash;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersParameterizedTestWithParameters)

FOUNDATION_EXPORT void OrgJunitRunnersParameterizedTestWithParameters_initWithNSString_withOrgJunitRunnersModelTestClass_withJavaUtilList_(OrgJunitRunnersParameterizedTestWithParameters *self, NSString *name, OrgJunitRunnersModelTestClass *testClass, id<JavaUtilList> parameters);

FOUNDATION_EXPORT OrgJunitRunnersParameterizedTestWithParameters *new_OrgJunitRunnersParameterizedTestWithParameters_initWithNSString_withOrgJunitRunnersModelTestClass_withJavaUtilList_(NSString *name, OrgJunitRunnersModelTestClass *testClass, id<JavaUtilList> parameters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersParameterizedTestWithParameters *create_OrgJunitRunnersParameterizedTestWithParameters_initWithNSString_withOrgJunitRunnersModelTestClass_withJavaUtilList_(NSString *name, OrgJunitRunnersModelTestClass *testClass, id<JavaUtilList> parameters);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersParameterizedTestWithParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersParameterizedTestWithParameters")
