//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/OrderWithValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerOrderWithValidator")
#ifdef RESTRICT_OrgJunitRunnerOrderWithValidator
#define INCLUDE_ALL_OrgJunitRunnerOrderWithValidator 0
#else
#define INCLUDE_ALL_OrgJunitRunnerOrderWithValidator 1
#endif
#undef RESTRICT_OrgJunitRunnerOrderWithValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerOrderWithValidator_) && (INCLUDE_ALL_OrgJunitRunnerOrderWithValidator || defined(INCLUDE_OrgJunitRunnerOrderWithValidator))
#define OrgJunitRunnerOrderWithValidator_

#define RESTRICT_OrgJunitValidatorAnnotationValidator 1
#define INCLUDE_OrgJunitValidatorAnnotationValidator 1
#include "org/junit/validator/AnnotationValidator.h"

@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

/*!
 @brief Validates that there are no errors in the use of the <code>OrderWith</code>
  annotation.If there is, a <code>Throwable</code> object will be added to the list
  of errors.
 @since 4.13
 */
@interface OrgJunitRunnerOrderWithValidator : OrgJunitValidatorAnnotationValidator

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Adds to <code>errors</code> a throwable for each problem detected.Looks for 
 <code>FixMethodOrder</code> annotations.
 @param testClass that is being validated
 @return A list of exceptions detected
 @since 4.13
 */
- (id<JavaUtilList>)validateAnnotatedClassWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerOrderWithValidator)

FOUNDATION_EXPORT void OrgJunitRunnerOrderWithValidator_init(OrgJunitRunnerOrderWithValidator *self);

FOUNDATION_EXPORT OrgJunitRunnerOrderWithValidator *new_OrgJunitRunnerOrderWithValidator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerOrderWithValidator *create_OrgJunitRunnerOrderWithValidator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerOrderWithValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerOrderWithValidator")
