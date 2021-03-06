//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/junit/ExceptionFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory")
#ifdef RESTRICT_OrgMockitoInternalJunitExceptionFactory
#define INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory 0
#else
#define INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory 1
#endif
#undef RESTRICT_OrgMockitoInternalJunitExceptionFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalJunitExceptionFactory_) && (INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory || defined(INCLUDE_OrgMockitoInternalJunitExceptionFactory))
#define OrgMockitoInternalJunitExceptionFactory_

@class JavaLangAssertionError;

@interface OrgMockitoInternalJunitExceptionFactory : NSObject

#pragma mark Public

/*!
 @brief If JUnit is used, an AssertionError is returned that extends from JUnit <code>ComparisonFailure</code> and hence provide a better IDE support as the comparison result is comparable
 */
+ (JavaLangAssertionError *)createArgumentsAreDifferentExceptionWithNSString:(NSString *)message
                                                                withNSString:(NSString *)wanted
                                                                withNSString:(NSString *)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalJunitExceptionFactory)

FOUNDATION_EXPORT JavaLangAssertionError *OrgMockitoInternalJunitExceptionFactory_createArgumentsAreDifferentExceptionWithNSString_withNSString_withNSString_(NSString *message, NSString *wanted, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalJunitExceptionFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalJunitExceptionFactory")
