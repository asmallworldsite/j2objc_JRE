//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/model/MultipleFailureException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelMultipleFailureException")
#ifdef RESTRICT_OrgJunitInternalRunnersModelMultipleFailureException
#define INCLUDE_ALL_OrgJunitInternalRunnersModelMultipleFailureException 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersModelMultipleFailureException 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersModelMultipleFailureException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersModelMultipleFailureException_) && (INCLUDE_ALL_OrgJunitInternalRunnersModelMultipleFailureException || defined(INCLUDE_OrgJunitInternalRunnersModelMultipleFailureException))
#define OrgJunitInternalRunnersModelMultipleFailureException_

#define RESTRICT_OrgJunitRunnersModelMultipleFailureException 1
#define INCLUDE_OrgJunitRunnersModelMultipleFailureException 1
#include "org/junit/runners/model/MultipleFailureException.h"

@protocol JavaUtilList;

__attribute__((deprecated))
@interface OrgJunitInternalRunnersModelMultipleFailureException : OrgJunitRunnersModelMultipleFailureException

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)errors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersModelMultipleFailureException)

FOUNDATION_EXPORT void OrgJunitInternalRunnersModelMultipleFailureException_initWithJavaUtilList_(OrgJunitInternalRunnersModelMultipleFailureException *self, id<JavaUtilList> errors);

FOUNDATION_EXPORT OrgJunitInternalRunnersModelMultipleFailureException *new_OrgJunitInternalRunnersModelMultipleFailureException_initWithJavaUtilList_(id<JavaUtilList> errors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersModelMultipleFailureException *create_OrgJunitInternalRunnersModelMultipleFailureException_initWithJavaUtilList_(id<JavaUtilList> errors);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersModelMultipleFailureException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersModelMultipleFailureException")
