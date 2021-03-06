//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/CustomTypeSafeMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCustomTypeSafeMatcher")
#ifdef RESTRICT_OrgHamcrestCustomTypeSafeMatcher
#define INCLUDE_ALL_OrgHamcrestCustomTypeSafeMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestCustomTypeSafeMatcher 1
#endif
#undef RESTRICT_OrgHamcrestCustomTypeSafeMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestCustomTypeSafeMatcher_) && (INCLUDE_ALL_OrgHamcrestCustomTypeSafeMatcher || defined(INCLUDE_OrgHamcrestCustomTypeSafeMatcher))
#define OrgHamcrestCustomTypeSafeMatcher_

#define RESTRICT_OrgHamcrestTypeSafeMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeMatcher 1
#include "org/hamcrest/TypeSafeMatcher.h"

@class IOSClass;
@class OrgHamcrestInternalReflectiveTypeFinder;
@protocol OrgHamcrestDescription;

/*!
 @brief Utility class for writing one off matchers.
 For example: 
 @code

  Matcher&lt;String&gt; aNonEmptyString = new CustomTypeSafeMatcher&lt;String&gt;("a non empty string") {
    public boolean matchesSafely(String string) {
      return !string.isEmpty();
    }
    public void describeMismatchSafely(String string, Description mismatchDescription) {
      mismatchDescription.appendText("was empty");
    }
  }; 
  
@endcode
  This is a variant of <code>CustomMatcher</code> that first type checks
  the argument being matched. By the time <code>TypeSafeMatcher.matchesSafely</code> is
  is called the argument is guaranteed to be non-null and of the correct
  type.
 @author Neil Dunn
 */
@interface OrgHamcrestCustomTypeSafeMatcher : OrgHamcrestTypeSafeMatcher

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)description_;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgHamcrestInternalReflectiveTypeFinder:(OrgHamcrestInternalReflectiveTypeFinder *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCustomTypeSafeMatcher)

FOUNDATION_EXPORT void OrgHamcrestCustomTypeSafeMatcher_initWithNSString_(OrgHamcrestCustomTypeSafeMatcher *self, NSString *description_);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCustomTypeSafeMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCustomTypeSafeMatcher")
