//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/max/CouldNotReadCoreException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalMaxCouldNotReadCoreException")
#ifdef RESTRICT_OrgJunitExperimentalMaxCouldNotReadCoreException
#define INCLUDE_ALL_OrgJunitExperimentalMaxCouldNotReadCoreException 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalMaxCouldNotReadCoreException 1
#endif
#undef RESTRICT_OrgJunitExperimentalMaxCouldNotReadCoreException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalMaxCouldNotReadCoreException_) && (INCLUDE_ALL_OrgJunitExperimentalMaxCouldNotReadCoreException || defined(INCLUDE_OrgJunitExperimentalMaxCouldNotReadCoreException))
#define OrgJunitExperimentalMaxCouldNotReadCoreException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when Max cannot read the MaxCore serialization
 */
@interface OrgJunitExperimentalMaxCouldNotReadCoreException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalMaxCouldNotReadCoreException)

FOUNDATION_EXPORT void OrgJunitExperimentalMaxCouldNotReadCoreException_initWithJavaLangThrowable_(OrgJunitExperimentalMaxCouldNotReadCoreException *self, JavaLangThrowable *e);

FOUNDATION_EXPORT OrgJunitExperimentalMaxCouldNotReadCoreException *new_OrgJunitExperimentalMaxCouldNotReadCoreException_initWithJavaLangThrowable_(JavaLangThrowable *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalMaxCouldNotReadCoreException *create_OrgJunitExperimentalMaxCouldNotReadCoreException_initWithJavaLangThrowable_(JavaLangThrowable *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalMaxCouldNotReadCoreException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalMaxCouldNotReadCoreException")
