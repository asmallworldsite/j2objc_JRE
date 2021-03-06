//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/scanner/InjectMocksScanner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner))
#define OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner_

@class IOSClass;
@protocol JavaUtilSet;

/*!
 @brief Scan field for injection.
 */
@interface OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner : NSObject

#pragma mark Public

/*!
 @brief Create a new InjectMocksScanner for the given clazz on the given instance
 @param clazz Current class in the hierarchy of the test
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Add the fields annotated by @@<code>InjectMocks</code>
 @param mockDependentFields Set of fields annotated by  @@<code>InjectMocks</code>
 */
- (void)addToWithJavaUtilSet:(id<JavaUtilSet>)mockDependentFields;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner_initWithIOSClass_(OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner *self, IOSClass *clazz);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner *new_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner *create_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner_initWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionScannerInjectMocksScanner")
