//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/Serialization.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSerialization")
#ifdef RESTRICT_ComGoogleCommonCollectSerialization
#define INCLUDE_ALL_ComGoogleCommonCollectSerialization 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSerialization 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSerialization

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSerialization_) && (INCLUDE_ALL_ComGoogleCommonCollectSerialization || defined(INCLUDE_ComGoogleCommonCollectSerialization))
#define ComGoogleCommonCollectSerialization_

@class ComGoogleCommonCollectSerialization_FieldSetter;
@class IOSClass;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilMap;

/*!
 @brief Provides static methods for serializing collection classes.
 <p>This class assists the implementation of collection classes. Do not use this class to
  serialize collections that are defined elsewhere.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectSerialization : NSObject

#pragma mark Package-Private

+ (ComGoogleCommonCollectSerialization_FieldSetter *)getFieldSetterWithIOSClass:(IOSClass * __nonnull)clazz
                                                                   withNSString:(NSString * __nonnull)fieldName;

/*!
 @brief Populates a map by reading an input stream, as part of deserialization.See <code>writeMap</code>
  for the data format.
 */
+ (void)populateMapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map
       withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream;

/*!
 @brief Populates a map by reading an input stream, as part of deserialization.See <code>writeMap</code>
  for the data format.
 The size is determined by a prior call to <code>readCount</code>.
 */
+ (void)populateMapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map
       withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream
                           withInt:(jint)size;

/*!
 @brief Populates a multimap by reading an input stream, as part of deserialization.See <code>writeMultimap</code>
  for the data format.
 */
+ (void)populateMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream;

/*!
 @brief Populates a multimap by reading an input stream, as part of deserialization.See <code>writeMultimap</code>
  for the data format.
 The number of distinct keys is determined by a prior call
  to <code>readCount</code>.
 */
+ (void)populateMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream
                                                   withInt:(jint)distinctKeys;

/*!
 @brief Populates a multiset by reading an input stream, as part of deserialization.See <code>writeMultiset</code>
  for the data format.
 */
+ (void)populateMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset> __nonnull)multiset
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream;

/*!
 @brief Populates a multiset by reading an input stream, as part of deserialization.See <code>writeMultiset</code>
  for the data format.
 The number of distinct elements is determined by a prior
  call to <code>readCount</code>.
 */
+ (void)populateMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset> __nonnull)multiset
                               withJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream
                                                   withInt:(jint)distinctElements;

/*!
 @brief Reads a count corresponding to a serialized map, multiset, or multimap.It returns the size of
  a map serialized by <code>writeMap(Map, ObjectOutputStream)</code>, the number of distinct elements
  in a multiset serialized by <code>writeMultiset(Multiset, ObjectOutputStream)</code>, or the number
  of distinct keys in a multimap serialized by <code>writeMultimap(Multimap,
 ObjectOutputStream)</code>
 .
 */
+ (jint)readCountWithJavaIoObjectInputStream:(JavaIoObjectInputStream * __nonnull)stream;

/*!
 @brief Stores the contents of a map in an output stream, as part of serialization.It does not support
  concurrent maps whose content may change while the method is running.
 <p>The serialized output consists of the number of entries, first key, first value, second key,
  second value, and so on.
 */
+ (void)writeMapWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map
   withJavaIoObjectOutputStream:(JavaIoObjectOutputStream * __nonnull)stream;

/*!
 @brief Stores the contents of a multimap in an output stream, as part of serialization.It does not
  support concurrent multimaps whose content may change while the method is running.
 The <code>Multimap.asMap</code>
  view determines the ordering in which data is written to the stream. 
 <p>The serialized output consists of the number of distinct keys, and then for each distinct
  key: the key, the number of values for that key, and the key's values.
 */
+ (void)writeMultimapWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap> __nonnull)multimap
                           withJavaIoObjectOutputStream:(JavaIoObjectOutputStream * __nonnull)stream;

/*!
 @brief Stores the contents of a multiset in an output stream, as part of serialization.It does not
  support concurrent multisets whose content may change while the method is running.
 <p>The serialized output consists of the number of distinct elements, the first element, its
  count, the second element, its count, and so on.
 */
+ (void)writeMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset> __nonnull)multiset
                           withJavaIoObjectOutputStream:(JavaIoObjectOutputStream * __nonnull)stream;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSerialization)

FOUNDATION_EXPORT jint ComGoogleCommonCollectSerialization_readCountWithJavaIoObjectInputStream_(JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMapWithJavaUtilMap_withJavaIoObjectOutputStream_(id<JavaUtilMap> map, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMapWithJavaUtilMap_withJavaIoObjectInputStream_(id<JavaUtilMap> map, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMapWithJavaUtilMap_withJavaIoObjectInputStream_withInt_(id<JavaUtilMap> map, JavaIoObjectInputStream *stream, jint size);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectOutputStream_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectInputStream_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultisetWithComGoogleCommonCollectMultiset_withJavaIoObjectInputStream_withInt_(id<ComGoogleCommonCollectMultiset> multiset, JavaIoObjectInputStream *stream, jint distinctElements);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_writeMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectOutputStream_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectOutputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectInputStream_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectInputStream *stream);

FOUNDATION_EXPORT void ComGoogleCommonCollectSerialization_populateMultimapWithComGoogleCommonCollectMultimap_withJavaIoObjectInputStream_withInt_(id<ComGoogleCommonCollectMultimap> multimap, JavaIoObjectInputStream *stream, jint distinctKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectSerialization_FieldSetter *ComGoogleCommonCollectSerialization_getFieldSetterWithIOSClass_withNSString_(IOSClass *clazz, NSString *fieldName);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSerialization)

#endif

#if !defined (ComGoogleCommonCollectSerialization_FieldSetter_) && (INCLUDE_ALL_ComGoogleCommonCollectSerialization || defined(INCLUDE_ComGoogleCommonCollectSerialization_FieldSetter))
#define ComGoogleCommonCollectSerialization_FieldSetter_

@interface ComGoogleCommonCollectSerialization_FieldSetter : NSObject

#pragma mark Package-Private

- (void)setWithId:(id __nonnull)instance
          withInt:(jint)value;

- (void)setWithId:(id __nonnull)instance
           withId:(id __nonnull)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSerialization_FieldSetter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSerialization_FieldSetter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSerialization")
