//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/TimSort.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTimSort")
#ifdef RESTRICT_JavaUtilTimSort
#define INCLUDE_ALL_JavaUtilTimSort 0
#else
#define INCLUDE_ALL_JavaUtilTimSort 1
#endif
#undef RESTRICT_JavaUtilTimSort

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilTimSort_) && (INCLUDE_ALL_JavaUtilTimSort || defined(INCLUDE_JavaUtilTimSort))
#define JavaUtilTimSort_

@class IOSObjectArray;
@class JavaLangInteger;
@protocol JavaUtilComparator;

/*!
 @brief A stable, adaptive, iterative mergesort that requires far fewer than
  n lg(n) comparisons when running on partially sorted arrays, while
  offering performance comparable to a traditional mergesort when run
  on random arrays.Like all proper mergesorts, this sort is stable and
  runs O(n log n) time (worst case).
 In the worst case, this sort requires
  temporary storage space for n/2 object references; in the best case,
  it requires only a small constant amount of space.
  This implementation was adapted from Tim Peters's list sort for
  Python, which is described in detail here:
    http://svn.python.org/projects/python/trunk/Objects/listsort.txt
  Tim's C code may be found here:
    http://svn.python.org/projects/python/trunk/Objects/listobject.c
  The underlying techniques are described in this paper (and may have
  even earlier origins):
   "Optimistic Sorting and Information Theoretic Complexity"
   Peter McIlroy
   SODA (Fourth Annual ACM-SIAM Symposium on Discrete Algorithms),
   pp 467-474, Austin, Texas, 25-27 January 1993.
  While the API to this class consists solely of static methods, it is
  (privately) instantiable; a TimSort instance holds the state of an ongoing
  sort, assuming the input array is large enough to warrant the full-blown
  TimSort. Small arrays are sorted in place, using a binary insertion sort.
 @author Josh Bloch
 */
@interface JavaUtilTimSort : NSObject

#pragma mark Package-Private

/*!
 @brief Sorts the given range, using the given workspace array slice
  for temp storage when possible.This method is designed to be
  invoked from public methods (in class Arrays) after performing
  any necessary array bounds checks and expanding parameters into
  the required forms.
 @param a the array to be sorted
 @param lo the index of the first element, inclusive, to be sorted
 @param hi the index of the last element, exclusive, to be sorted
 @param c the comparator to use
 @param work a workspace array (slice)
 @param workBase origin of usable space in work array
 @param workLen usable size of work array
 @since 1.8
 */
+ (void)sortWithNSObjectArray:(IOSObjectArray *)a
                      withInt:(jint)lo
                      withInt:(jint)hi
       withJavaUtilComparator:(id<JavaUtilComparator>)c
            withNSObjectArray:(IOSObjectArray *)work
                      withInt:(jint)workBase
                      withInt:(jint)workLen;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimSort)

FOUNDATION_EXPORT void JavaUtilTimSort_sortWithNSObjectArray_withInt_withInt_withJavaUtilComparator_withNSObjectArray_withInt_withInt_(IOSObjectArray *a, jint lo, jint hi, id<JavaUtilComparator> c, IOSObjectArray *work, jint workBase, jint workLen);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimSort)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilTimSort")
