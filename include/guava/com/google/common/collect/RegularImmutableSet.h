//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/RegularImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSet || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableSet))
#define ComGoogleCommonCollectRegularImmutableSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilSpliterator;

/*!
 @brief Implementation of <code>ImmutableSet</code> with two or more elements.
 @author Kevin Bourrillion
 */
@interface ComGoogleCommonCollectRegularImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  IOSObjectArray *table_;
}
@property (readonly, class, strong) ComGoogleCommonCollectRegularImmutableSet *EMPTY NS_SWIFT_NAME(EMPTY);

#pragma mark Public

- (jboolean)containsWithId:(id __nullable)target;

- (NSUInteger)hash;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithNSObjectArray:(IOSObjectArray * __nonnull)elements
                                                      withInt:(jint)hashCode
                                            withNSObjectArray:(IOSObjectArray * __nonnull)table
                                                      withInt:(jint)mask;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray * __nonnull)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (IOSObjectArray *)internalArray;

- (jint)internalArrayEnd;

- (jint)internalArrayStart;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableSet, table_, IOSObjectArray *)

inline ComGoogleCommonCollectRegularImmutableSet *ComGoogleCommonCollectRegularImmutableSet_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSet *ComGoogleCommonCollectRegularImmutableSet_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableSet, EMPTY, ComGoogleCommonCollectRegularImmutableSet *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSet_initPackagePrivateWithNSObjectArray_withInt_withNSObjectArray_withInt_(ComGoogleCommonCollectRegularImmutableSet *self, IOSObjectArray *elements, jint hashCode, IOSObjectArray *table, jint mask);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSet *new_ComGoogleCommonCollectRegularImmutableSet_initPackagePrivateWithNSObjectArray_withInt_withNSObjectArray_withInt_(IOSObjectArray *elements, jint hashCode, IOSObjectArray *table, jint mask) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSet *create_ComGoogleCommonCollectRegularImmutableSet_initPackagePrivateWithNSObjectArray_withInt_withNSObjectArray_withInt_(IOSObjectArray *elements, jint hashCode, IOSObjectArray *table, jint mask);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSet")
