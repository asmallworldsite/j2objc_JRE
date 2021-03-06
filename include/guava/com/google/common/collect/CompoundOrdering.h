//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/CompoundOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCompoundOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectCompoundOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectCompoundOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCompoundOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCompoundOrdering

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCompoundOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectCompoundOrdering || defined(INCLUDE_ComGoogleCommonCollectCompoundOrdering))
#define ComGoogleCommonCollectCompoundOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;

/*!
 @brief An ordering that tries several comparators in order.
 */
@interface ComGoogleCommonCollectCompoundOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  IOSObjectArray *comparators_;
}

#pragma mark Public

- (jint)compareWithId:(id __nonnull)left
               withId:(id __nonnull)right;

- (jboolean)isEqual:(id __nonnull)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)primary
                                            withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)secondary;

- (instancetype __nonnull)initPackagePrivateWithJavaLangIterable:(id<JavaLangIterable> __nonnull)comparators;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompoundOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCompoundOrdering, comparators_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaUtilComparator_withJavaUtilComparator_(ComGoogleCommonCollectCompoundOrdering *self, id<JavaUtilComparator> primary, id<JavaUtilComparator> secondary);

FOUNDATION_EXPORT ComGoogleCommonCollectCompoundOrdering *new_ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> primary, id<JavaUtilComparator> secondary) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompoundOrdering *create_ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> primary, id<JavaUtilComparator> secondary);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaLangIterable_(ComGoogleCommonCollectCompoundOrdering *self, id<JavaLangIterable> comparators);

FOUNDATION_EXPORT ComGoogleCommonCollectCompoundOrdering *new_ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaLangIterable_(id<JavaLangIterable> comparators) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCompoundOrdering *create_ComGoogleCommonCollectCompoundOrdering_initPackagePrivateWithJavaLangIterable_(id<JavaLangIterable> comparators);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompoundOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCompoundOrdering")
