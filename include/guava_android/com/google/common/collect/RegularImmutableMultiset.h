//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/RegularImmutableMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableMultiset

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableMultiset))
#define ComGoogleCommonCollectRegularImmutableMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset 1
#include "com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectObjectCountHashMap;
@protocol ComGoogleCommonCollectMultiset_Entry;

/*!
 @brief Implementation of <code>ImmutableMultiset</code> with zero or more elements.
 @author Jared Levy
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectRegularImmutableMultiset : ComGoogleCommonCollectImmutableMultiset {
 @public
  ComGoogleCommonCollectObjectCountHashMap *contents_;
}
@property (readonly, class, strong) ComGoogleCommonCollectRegularImmutableMultiset *EMPTY NS_SWIFT_NAME(EMPTY);

#pragma mark Public

- (jint)countWithId:(id __nullable)element;

- (ComGoogleCommonCollectImmutableSet *)elementSet;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap:(ComGoogleCommonCollectObjectCountHashMap * __nonnull)contents;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableMultiset, contents_, ComGoogleCommonCollectObjectCountHashMap *)

inline ComGoogleCommonCollectRegularImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *ComGoogleCommonCollectRegularImmutableMultiset_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableMultiset, EMPTY, ComGoogleCommonCollectRegularImmutableMultiset *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableMultiset_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectRegularImmutableMultiset *self, ComGoogleCommonCollectObjectCountHashMap *contents);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *new_ComGoogleCommonCollectRegularImmutableMultiset_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectObjectCountHashMap *contents) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableMultiset *create_ComGoogleCommonCollectRegularImmutableMultiset_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectObjectCountHashMap *contents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableMultiset")
