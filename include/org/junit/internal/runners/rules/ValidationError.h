//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/rules/ValidationError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersRulesValidationError")
#ifdef RESTRICT_OrgJunitInternalRunnersRulesValidationError
#define INCLUDE_ALL_OrgJunitInternalRunnersRulesValidationError 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersRulesValidationError 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersRulesValidationError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersRulesValidationError_) && (INCLUDE_ALL_OrgJunitInternalRunnersRulesValidationError || defined(INCLUDE_OrgJunitInternalRunnersRulesValidationError))
#define OrgJunitInternalRunnersRulesValidationError_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class IOSClass;
@class JavaLangThrowable;
@class OrgJunitRunnersModelFrameworkMember;

@interface OrgJunitInternalRunnersRulesValidationError : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initPackagePrivateWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMember *)member
                                                                       withIOSClass:(IOSClass *)annotation
                                                                       withNSString:(NSString *)suffix;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersRulesValidationError)

FOUNDATION_EXPORT void OrgJunitInternalRunnersRulesValidationError_initPackagePrivateWithOrgJunitRunnersModelFrameworkMember_withIOSClass_withNSString_(OrgJunitInternalRunnersRulesValidationError *self, OrgJunitRunnersModelFrameworkMember *member, IOSClass *annotation, NSString *suffix);

FOUNDATION_EXPORT OrgJunitInternalRunnersRulesValidationError *new_OrgJunitInternalRunnersRulesValidationError_initPackagePrivateWithOrgJunitRunnersModelFrameworkMember_withIOSClass_withNSString_(OrgJunitRunnersModelFrameworkMember *member, IOSClass *annotation, NSString *suffix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersRulesValidationError *create_OrgJunitInternalRunnersRulesValidationError_initPackagePrivateWithOrgJunitRunnersModelFrameworkMember_withIOSClass_withNSString_(OrgJunitRunnersModelFrameworkMember *member, IOSClass *annotation, NSString *suffix);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersRulesValidationError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersRulesValidationError")
