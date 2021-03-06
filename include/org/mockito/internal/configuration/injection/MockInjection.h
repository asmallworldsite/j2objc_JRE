//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/MockInjection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionMockInjection
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionMockInjection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationInjectionMockInjection_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionMockInjection))
#define OrgMockitoInternalConfigurationInjectionMockInjection_

@class JavaLangReflectField;
@class OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection;
@protocol JavaUtilSet;

/*!
 @brief Internal injection configuration utility.
 <p>
  Allow the user of this class to configure the way the injection of mocks will happen. 
 </p>
 */
@interface OrgMockitoInternalConfigurationInjectionMockInjection : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Create a new configuration setup for a field
 @param field Field needing mock injection
 @param ofInstance Instance owning the  <code> field </code>
 @return New configuration builder
 */
+ (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)onFieldWithJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                         withId:(id)ofInstance;

/*!
 @brief Create a new configuration setup for fields
 @param fields Fields needing mock injection
 @param ofInstance Instance owning the  <code> field </code>
 @return New configuration builder
 */
+ (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)onFieldsWithJavaUtilSet:(id<JavaUtilSet>)fields
                                                                                                 withId:(id)ofInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionMockInjection)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionMockInjection_init(OrgMockitoInternalConfigurationInjectionMockInjection *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection *new_OrgMockitoInternalConfigurationInjectionMockInjection_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection *create_OrgMockitoInternalConfigurationInjectionMockInjection_init(void);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *OrgMockitoInternalConfigurationInjectionMockInjection_onFieldWithJavaLangReflectField_withId_(JavaLangReflectField *field, id ofInstance);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *OrgMockitoInternalConfigurationInjectionMockInjection_onFieldsWithJavaUtilSet_withId_(id<JavaUtilSet> fields, id ofInstance);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionMockInjection)

#endif

#if !defined (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection))
#define OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection_

@protocol JavaUtilSet;

/*!
 @brief Ongoing configuration of the mock injector.
 */
@interface OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection : NSObject

#pragma mark Public

- (void)apply;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)handleSpyAnnotation;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)tryConstructorInjection;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)tryPropertyOrFieldInjection;

- (OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection *)withMocksWithJavaUtilSet:(id<JavaUtilSet>)mocks;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionMockInjection_OngoingMockInjection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionMockInjection")
