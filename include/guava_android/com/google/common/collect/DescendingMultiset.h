//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/DescendingMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectDescendingMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDescendingMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDescendingMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset || defined(INCLUDE_ComGoogleCommonCollectDescendingMultiset))
#define ComGoogleCommonCollectDescendingMultiset_

#define RESTRICT_ComGoogleCommonCollectForwardingMultiset 1
#define INCLUDE_ComGoogleCommonCollectForwardingMultiset 1
#include "com/google/common/collect/ForwardingMultiset.h"

#define RESTRICT_ComGoogleCommonCollectSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectSortedMultiset 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;

/*!
 @brief A skeleton implementation of a descending multiset.Only needs <code>forwardMultiset()</code> and 
 <code>entryIterator()</code>.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectDescendingMultiset : ComGoogleCommonCollectForwardingMultiset < ComGoogleCommonCollectSortedMultiset >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id __nonnull)toElement
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

- (id<JavaUtilIterator>)iterator;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id __nonnull)fromElement
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)fromBoundType
                                                       withId:(id __nonnull)toElement
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)toBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id __nonnull)fromElement
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType * __nonnull)boundType;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray * __nonnull)array;

- (NSString *)description;

#pragma mark Protected

- (id<ComGoogleCommonCollectMultiset>)delegate;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilIterator>)entryIterator;

- (id<ComGoogleCommonCollectSortedMultiset>)forwardMultiset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDescendingMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectDescendingMultiset_initPackagePrivate(ComGoogleCommonCollectDescendingMultiset *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDescendingMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset")
