//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/DescribedAs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreDescribedAs")
#ifdef RESTRICT_OrgHamcrestCoreDescribedAs
#define INCLUDE_ALL_OrgHamcrestCoreDescribedAs 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreDescribedAs 1
#endif
#undef RESTRICT_OrgHamcrestCoreDescribedAs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestCoreDescribedAs_) && (INCLUDE_ALL_OrgHamcrestCoreDescribedAs || defined(INCLUDE_OrgHamcrestCoreDescribedAs))
#define OrgHamcrestCoreDescribedAs_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@class IOSObjectArray;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Provides a custom description to another matcher.
 */
@interface OrgHamcrestCoreDescribedAs : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)descriptionTemplate
                    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher
                         withNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief Wraps an existing matcher, overriding its description with that specified.All other functions are
  delegated to the decorated matcher, including its mismatch description.
 <p>
  For example: 
 @code
describedAs("a big decimal equal to %0", equalTo(myBigDecimal), myBigDecimal.toPlainString())
@endcode
 @param description_ the new description for the wrapped matcher
 @param matcher the matcher to wrap
 @param values optional values to insert into the tokenised description
 */
+ (id<OrgHamcrestMatcher>)describedAsWithNSString:(NSString *)description_
                           withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher
                                withNSObjectArray:(IOSObjectArray *)values;

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgHamcrestCoreDescribedAs)

FOUNDATION_EXPORT void OrgHamcrestCoreDescribedAs_initWithNSString_withOrgHamcrestMatcher_withNSObjectArray_(OrgHamcrestCoreDescribedAs *self, NSString *descriptionTemplate, id<OrgHamcrestMatcher> matcher, IOSObjectArray *values);

FOUNDATION_EXPORT OrgHamcrestCoreDescribedAs *new_OrgHamcrestCoreDescribedAs_initWithNSString_withOrgHamcrestMatcher_withNSObjectArray_(NSString *descriptionTemplate, id<OrgHamcrestMatcher> matcher, IOSObjectArray *values) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreDescribedAs *create_OrgHamcrestCoreDescribedAs_initWithNSString_withOrgHamcrestMatcher_withNSObjectArray_(NSString *descriptionTemplate, id<OrgHamcrestMatcher> matcher, IOSObjectArray *values);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreDescribedAs_describedAsWithNSString_withOrgHamcrestMatcher_withNSObjectArray_(NSString *description_, id<OrgHamcrestMatcher> matcher, IOSObjectArray *values);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreDescribedAs)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreDescribedAs")
