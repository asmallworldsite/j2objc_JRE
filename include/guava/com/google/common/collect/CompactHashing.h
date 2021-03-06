//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/CompactHashing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCompactHashing")
#ifdef RESTRICT_ComGoogleCommonCollectCompactHashing
#define INCLUDE_ALL_ComGoogleCommonCollectCompactHashing 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCompactHashing 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCompactHashing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCompactHashing_) && (INCLUDE_ALL_ComGoogleCommonCollectCompactHashing || defined(INCLUDE_ComGoogleCommonCollectCompactHashing))
#define ComGoogleCommonCollectCompactHashing_

@class IOSIntArray;
@class IOSObjectArray;

/*!
 @brief Helper classes and static methods for implementing compact hash-based collections.
 @author Jon Noack
 */
@interface ComGoogleCommonCollectCompactHashing : NSObject
@property (readonly, class) jbyte UNSET NS_SWIFT_NAME(UNSET);
@property (readonly, class) jint MODIFICATION_COUNT_INCREMENT NS_SWIFT_NAME(MODIFICATION_COUNT_INCREMENT);
@property (readonly, class) jint HASH_TABLE_BITS_MASK NS_SWIFT_NAME(HASH_TABLE_BITS_MASK);
@property (readonly, class) jint MAX_SIZE NS_SWIFT_NAME(MAX_SIZE);
@property (readonly, class) jint DEFAULT_SIZE NS_SWIFT_NAME(DEFAULT_SIZE);

#pragma mark Package-Private

/*!
 @brief Creates and returns a properly-sized array with the given number of buckets.
 */
+ (id)createTableWithInt:(jint)buckets;

/*!
 @brief Returns the hash prefix given the current mask.
 */
+ (jint)getHashPrefixWithInt:(jint)value
                     withInt:(jint)mask;

/*!
 @brief Returns the index, or 0 if the entry is "null".
 */
+ (jint)getNextWithInt:(jint)entry_
               withInt:(jint)mask;

/*!
 @brief Returns a new value combining the prefix and suffix using the given mask.
 */
+ (jint)maskCombineWithInt:(jint)prefix
                   withInt:(jint)suffix
                   withInt:(jint)mask;

/*!
 @brief Returns a larger power of 2 hashtable size given the current mask.
 <p>For hashtable sizes less than or equal to 32, the returned power of 2 is 4x the current
  hashtable size to reduce expensive rehashing. Otherwise the returned power of 2 is 2x the
  current hashtable size.
 */
+ (jint)newCapacityWithInt:(jint)mask OBJC_METHOD_FAMILY_NONE;

+ (jint)removeWithId:(id __nullable)key
              withId:(id __nullable)value
             withInt:(jint)mask
              withId:(id __nonnull)table
        withIntArray:(IOSIntArray * __nonnull)entries
   withNSObjectArray:(IOSObjectArray * __nonnull)keys
   withNSObjectArray:(IOSObjectArray * __nullable)values;

+ (void)tableClearWithId:(id __nonnull)table;

+ (jint)tableGetWithId:(id __nonnull)table
               withInt:(jint)index;

+ (void)tableSetWithId:(id __nonnull)table
               withInt:(jint)index
               withInt:(jint)entry_;

/*!
 @brief Returns the power of 2 hashtable size required to hold the expected number of items or the
  minimum hashtable size, whichever is greater.
 */
+ (jint)tableSizeWithInt:(jint)expectedSize;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCompactHashing)

/*!
 @brief Indicates blank table entries.
 */
inline jbyte ComGoogleCommonCollectCompactHashing_get_UNSET(void);
#define ComGoogleCommonCollectCompactHashing_UNSET 0
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashing, UNSET, jbyte)

/*!
 @brief Use high bits of metadata for modification count.
 */
inline jint ComGoogleCommonCollectCompactHashing_get_MODIFICATION_COUNT_INCREMENT(void);
#define ComGoogleCommonCollectCompactHashing_MODIFICATION_COUNT_INCREMENT 32
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashing, MODIFICATION_COUNT_INCREMENT, jint)

/*!
 @brief Bitmask that selects the low bits of metadata to get hashTableBits.
 */
inline jint ComGoogleCommonCollectCompactHashing_get_HASH_TABLE_BITS_MASK(void);
#define ComGoogleCommonCollectCompactHashing_HASH_TABLE_BITS_MASK 31
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashing, HASH_TABLE_BITS_MASK, jint)

/*!
 @brief Maximum size of a compact hash-based collection (2^30 - 1 because 0 is UNSET).
 */
inline jint ComGoogleCommonCollectCompactHashing_get_MAX_SIZE(void);
#define ComGoogleCommonCollectCompactHashing_MAX_SIZE 1073741823
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashing, MAX_SIZE, jint)

/*!
 @brief Default size of a compact hash-based collection.
 */
inline jint ComGoogleCommonCollectCompactHashing_get_DEFAULT_SIZE(void);
#define ComGoogleCommonCollectCompactHashing_DEFAULT_SIZE 3
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectCompactHashing, DEFAULT_SIZE, jint)

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_tableSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT id ComGoogleCommonCollectCompactHashing_createTableWithInt_(jint buckets);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashing_tableClearWithId_(id table);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_tableGetWithId_withInt_(id table, jint index);

FOUNDATION_EXPORT void ComGoogleCommonCollectCompactHashing_tableSetWithId_withInt_withInt_(id table, jint index, jint entry_);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_newCapacityWithInt_(jint mask);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_getHashPrefixWithInt_withInt_(jint value, jint mask);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_getNextWithInt_withInt_(jint entry_, jint mask);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_maskCombineWithInt_withInt_withInt_(jint prefix, jint suffix, jint mask);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCompactHashing_removeWithId_withId_withInt_withId_withIntArray_withNSObjectArray_withNSObjectArray_(id key, id value, jint mask, id table, IOSIntArray *entries, IOSObjectArray *keys, IOSObjectArray *values);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCompactHashing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCompactHashing")
