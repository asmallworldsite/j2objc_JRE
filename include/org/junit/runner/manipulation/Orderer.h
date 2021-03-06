//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/manipulation/Orderer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerManipulationOrderer")
#ifdef RESTRICT_OrgJunitRunnerManipulationOrderer
#define INCLUDE_ALL_OrgJunitRunnerManipulationOrderer 0
#else
#define INCLUDE_ALL_OrgJunitRunnerManipulationOrderer 1
#endif
#undef RESTRICT_OrgJunitRunnerManipulationOrderer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerManipulationOrderer_) && (INCLUDE_ALL_OrgJunitRunnerManipulationOrderer || defined(INCLUDE_OrgJunitRunnerManipulationOrderer))
#define OrgJunitRunnerManipulationOrderer_

@class OrgJunitRunnerManipulationOrdering;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @brief Orders tests.
 @since 4.13
 */
@interface OrgJunitRunnerManipulationOrderer : NSObject

#pragma mark Public

/*!
 @brief Order the tests in <code>target</code>.
 @throw InvalidOrderingExceptionif ordering does something invalid (like remove or add
  children)
 */
- (void)applyWithId:(id)target;

/*!
 @brief Orders the descriptions.
 @return descriptions in order
 */
- (id<JavaUtilList>)orderWithJavaUtilCollection:(id<JavaUtilCollection>)descriptions;

#pragma mark Package-Private

- (instancetype __nonnull)initWithOrgJunitRunnerManipulationOrdering:(OrgJunitRunnerManipulationOrdering *)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerManipulationOrderer)

FOUNDATION_EXPORT void OrgJunitRunnerManipulationOrderer_initWithOrgJunitRunnerManipulationOrdering_(OrgJunitRunnerManipulationOrderer *self, OrgJunitRunnerManipulationOrdering *delegate);

FOUNDATION_EXPORT OrgJunitRunnerManipulationOrderer *new_OrgJunitRunnerManipulationOrderer_initWithOrgJunitRunnerManipulationOrdering_(OrgJunitRunnerManipulationOrdering *delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationOrderer *create_OrgJunitRunnerManipulationOrderer_initWithOrgJunitRunnerManipulationOrdering_(OrgJunitRunnerManipulationOrdering *delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationOrderer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerManipulationOrderer")
