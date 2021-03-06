//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/StringContains.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreStringContains")
#ifdef RESTRICT_OrgHamcrestCoreStringContains
#define INCLUDE_ALL_OrgHamcrestCoreStringContains 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreStringContains 1
#endif
#undef RESTRICT_OrgHamcrestCoreStringContains

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestCoreStringContains_) && (INCLUDE_ALL_OrgHamcrestCoreStringContains || defined(INCLUDE_OrgHamcrestCoreStringContains))
#define OrgHamcrestCoreStringContains_

#define RESTRICT_OrgHamcrestCoreSubstringMatcher 1
#define INCLUDE_OrgHamcrestCoreSubstringMatcher 1
#include "org/hamcrest/core/SubstringMatcher.h"

@protocol OrgHamcrestMatcher;

/*!
 @brief Tests if the argument is a string that contains a substring.
 */
@interface OrgHamcrestCoreStringContains : OrgHamcrestCoreSubstringMatcher

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)substring;

/*!
 @brief Creates a matcher that matches if the examined <code>String</code> contains the specified 
 <code>String</code> anywhere.
 <p>
  For example: 
 @code
assertThat("myStringOfNote", containsString("ring"))
@endcode
 @param substring the substring that the returned matcher will expect to find within any examined string
 */
+ (id<OrgHamcrestMatcher>)containsStringWithNSString:(NSString *)substring;

#pragma mark Protected

- (jboolean)evalSubstringOfWithNSString:(NSString *)s;

- (NSString *)relationship;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreStringContains)

FOUNDATION_EXPORT void OrgHamcrestCoreStringContains_initWithNSString_(OrgHamcrestCoreStringContains *self, NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreStringContains *new_OrgHamcrestCoreStringContains_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreStringContains *create_OrgHamcrestCoreStringContains_initWithNSString_(NSString *substring);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreStringContains_containsStringWithNSString_(NSString *substring);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreStringContains)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreStringContains")
