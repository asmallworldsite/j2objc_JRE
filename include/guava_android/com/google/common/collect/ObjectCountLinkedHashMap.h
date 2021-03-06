//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ObjectCountLinkedHashMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectObjectCountLinkedHashMap")
#ifdef RESTRICT_ComGoogleCommonCollectObjectCountLinkedHashMap
#define INCLUDE_ALL_ComGoogleCommonCollectObjectCountLinkedHashMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectObjectCountLinkedHashMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectObjectCountLinkedHashMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectObjectCountLinkedHashMap_) && (INCLUDE_ALL_ComGoogleCommonCollectObjectCountLinkedHashMap || defined(INCLUDE_ComGoogleCommonCollectObjectCountLinkedHashMap))
#define ComGoogleCommonCollectObjectCountLinkedHashMap_

#define RESTRICT_ComGoogleCommonCollectObjectCountHashMap 1
#define INCLUDE_ComGoogleCommonCollectObjectCountHashMap 1
#include "com/google/common/collect/ObjectCountHashMap.h"

@class IOSLongArray;

/*!
 @brief ObjectCountLinkedHashMap is an implementation of <code>AbstractObjectCountMap</code> with insertion
  iteration order, and uses arrays to store key objects and count values.Comparing to using a
  traditional <code>LinkedHashMap</code> implementation which stores keys and count values as map
  entries, <code>ObjectCountLinkedHashMap</code> minimizes object allocation and reduces memory
  footprint.
 */
@interface ComGoogleCommonCollectObjectCountLinkedHashMap : ComGoogleCommonCollectObjectCountHashMap {
 @public
  /*!
   @brief Contains the link pointers corresponding with the entries, in the range of [0, size()).The
  high 32 bits of each long is the "prev" pointer, whereas the low 32 bits is the "succ" pointer
  (pointing to the nextEntry entry in the linked list).
   The pointers in [size(), entries.length)
  are all "null" (UNSET). 
 <p>A node with "prev" pointer equal to <code>ENDPOINT</code> is the first node in the linked list,
  and a node with "nextEntry" pointer equal to <code>ENDPOINT</code> is the last node.
   */
  IOSLongArray *links_;
}

#pragma mark Public

- (void)clear;

/*!
 @brief Creates an empty <code>ObjectCountLinkedHashMap</code> instance.
 */
+ (ComGoogleCommonCollectObjectCountLinkedHashMap *)create;

/*!
 @brief Creates a <code>ObjectCountLinkedHashMap</code> instance, with a high enough "initial capacity" that
  it <i>should</i> hold <code>expectedSize</code> elements without growth.
 @param expectedSize the number of elements you expect to add to the returned set
 @return a new, empty <code>ObjectCountLinkedHashMap</code> with enough capacity to hold <code>expectedSize</code>
  elements without resizing
 @throw IllegalArgumentExceptionif <code>expectedSize</code> is negative
 */
+ (ComGoogleCommonCollectObjectCountLinkedHashMap *)createWithExpectedSizeWithInt:(jint)expectedSize;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (instancetype __nonnull)initPackagePrivateWithInt:(jint)expectedSize;

- (instancetype __nonnull)initPackagePrivateWithInt:(jint)expectedSize
                                          withFloat:(jfloat)loadFactor;

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap:(ComGoogleCommonCollectObjectCountHashMap * __nonnull)map;

- (jint)firstIndex;

- (void)init__WithInt:(jint)expectedSize
            withFloat:(jfloat)loadFactor OBJC_METHOD_FAMILY_NONE;

- (void)insertEntryWithInt:(jint)entryIndex
                    withId:(id __nonnull)key
                   withInt:(jint)value
                   withInt:(jint)hash_;

- (void)moveLastEntryWithInt:(jint)dstIndex;

- (jint)nextIndexWithInt:(jint)index;

- (jint)nextIndexAfterRemoveWithInt:(jint)oldNextIndex
                            withInt:(jint)removedIndex;

- (void)resizeEntriesWithInt:(jint)newCapacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectObjectCountLinkedHashMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectObjectCountLinkedHashMap, links_, IOSLongArray *)

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *ComGoogleCommonCollectObjectCountLinkedHashMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *ComGoogleCommonCollectObjectCountLinkedHashMap_createWithExpectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT void ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivate(ComGoogleCommonCollectObjectCountLinkedHashMap *self);

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *new_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *create_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivate(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_(ComGoogleCommonCollectObjectCountLinkedHashMap *self, jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *new_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_(jint expectedSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *create_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_(jint expectedSize);

FOUNDATION_EXPORT void ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_withFloat_(ComGoogleCommonCollectObjectCountLinkedHashMap *self, jint expectedSize, jfloat loadFactor);

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *new_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_withFloat_(jint expectedSize, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *create_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithInt_withFloat_(jint expectedSize, jfloat loadFactor);

FOUNDATION_EXPORT void ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectObjectCountLinkedHashMap *self, ComGoogleCommonCollectObjectCountHashMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *new_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectObjectCountHashMap *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectObjectCountLinkedHashMap *create_ComGoogleCommonCollectObjectCountLinkedHashMap_initPackagePrivateWithComGoogleCommonCollectObjectCountHashMap_(ComGoogleCommonCollectObjectCountHashMap *map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectObjectCountLinkedHashMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectObjectCountLinkedHashMap")
