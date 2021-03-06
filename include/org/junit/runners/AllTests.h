//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/AllTests.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersAllTests")
#ifdef RESTRICT_OrgJunitRunnersAllTests
#define INCLUDE_ALL_OrgJunitRunnersAllTests 0
#else
#define INCLUDE_ALL_OrgJunitRunnersAllTests 1
#endif
#undef RESTRICT_OrgJunitRunnersAllTests

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnersAllTests_) && (INCLUDE_ALL_OrgJunitRunnersAllTests || defined(INCLUDE_OrgJunitRunnersAllTests))
#define OrgJunitRunnersAllTests_

#define RESTRICT_OrgJunitInternalRunnersSuiteMethod 1
#define INCLUDE_OrgJunitInternalRunnersSuiteMethod 1
#include "org/junit/internal/runners/SuiteMethod.h"

@class IOSClass;

/*!
 @brief Runner for use with JUnit 3.8.x-style AllTests classes
  (those that only implement a static <code>suite()</code>
  method).For example: 
 @code

   &#064;RunWith(AllTests.class)
  public class ProductTests {
     public static junit.framework.Test suite() {
        ...
     }   }   
  
@endcode
 @since 4.0
 */
@interface OrgJunitRunnersAllTests : OrgJunitInternalRunnersSuiteMethod

#pragma mark Public

/*!
 @brief Only called reflectively.Do not use programmatically.
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersAllTests)

FOUNDATION_EXPORT void OrgJunitRunnersAllTests_initWithIOSClass_(OrgJunitRunnersAllTests *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitRunnersAllTests *new_OrgJunitRunnersAllTests_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersAllTests *create_OrgJunitRunnersAllTests_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersAllTests)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersAllTests")
