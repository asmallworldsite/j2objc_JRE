//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/FailedBefore.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersFailedBefore")
#ifdef RESTRICT_OrgJunitInternalRunnersFailedBefore
#define INCLUDE_ALL_OrgJunitInternalRunnersFailedBefore 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersFailedBefore 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersFailedBefore

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersFailedBefore_) && (INCLUDE_ALL_OrgJunitInternalRunnersFailedBefore || defined(INCLUDE_OrgJunitInternalRunnersFailedBefore))
#define OrgJunitInternalRunnersFailedBefore_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersFailedBefore : JavaLangException

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

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

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersFailedBefore)

FOUNDATION_EXPORT void OrgJunitInternalRunnersFailedBefore_initPackagePrivate(OrgJunitInternalRunnersFailedBefore *self);

FOUNDATION_EXPORT OrgJunitInternalRunnersFailedBefore *new_OrgJunitInternalRunnersFailedBefore_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersFailedBefore *create_OrgJunitInternalRunnersFailedBefore_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersFailedBefore)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersFailedBefore")
