//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/JUnit4.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersJUnit4")
#ifdef RESTRICT_OrgJunitRunnersJUnit4
#define INCLUDE_ALL_OrgJunitRunnersJUnit4 0
#else
#define INCLUDE_ALL_OrgJunitRunnersJUnit4 1
#endif
#undef RESTRICT_OrgJunitRunnersJUnit4

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersJUnit4_) && (INCLUDE_ALL_OrgJunitRunnersJUnit4 || defined(INCLUDE_OrgJunitRunnersJUnit4))
#define OrgJunitRunnersJUnit4_

#define RESTRICT_OrgJunitRunnersBlockJUnit4ClassRunner 1
#define INCLUDE_OrgJunitRunnersBlockJUnit4ClassRunner 1
#include "org/junit/runners/BlockJUnit4ClassRunner.h"

@class IOSClass;
@class OrgJunitRunnersModelTestClass;

/*!
 @brief Aliases the current default JUnit 4 class runner, for future-proofing.If
  future versions of JUnit change the default Runner class, they will also
  change the definition of this class.
 Developers wanting to explicitly tag a
  class as a JUnit 4 class should use <code>@@RunWith(JUnit4.class)</code>, not,
  for example in JUnit 4.5, <code>@@RunWith(BlockJUnit4ClassRunner.class)</code>.
  This is the only way this class should be used--any extension that
  depends on the implementation details of this class is likely to break
  in future versions.
 @since 4.5
 */
@interface OrgJunitRunnersJUnit4 : OrgJunitRunnersBlockJUnit4ClassRunner

#pragma mark Public

/*!
 @brief Constructs a new instance of the default runner
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)klass;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersJUnit4)

FOUNDATION_EXPORT void OrgJunitRunnersJUnit4_initWithIOSClass_(OrgJunitRunnersJUnit4 *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitRunnersJUnit4 *new_OrgJunitRunnersJUnit4_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersJUnit4 *create_OrgJunitRunnersJUnit4_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersJUnit4)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersJUnit4")
