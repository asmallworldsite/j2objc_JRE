//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/Count.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCount")
#ifdef RESTRICT_ComGoogleCommonCollectCount
#define INCLUDE_ALL_ComGoogleCommonCollectCount 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCount 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCount

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectCount_) && (INCLUDE_ALL_ComGoogleCommonCollectCount || defined(INCLUDE_ComGoogleCommonCollectCount))
#define ComGoogleCommonCollectCount_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief A mutable value of type <code>int</code>, for multisets to use in tracking counts of values.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectCount : NSObject < JavaIoSerializable >

#pragma mark Public

- (void)addWithInt:(jint)delta;

- (jint)addAndGetWithInt:(jint)delta;

- (jboolean)isEqual:(id __nullable)obj;

- (jint)get;

- (jint)getAndSetWithInt:(jint)newValue;

- (NSUInteger)hash;

- (void)setWithInt:(jint)newValue;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithInt:(jint)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCount)

FOUNDATION_EXPORT void ComGoogleCommonCollectCount_initPackagePrivateWithInt_(ComGoogleCommonCollectCount *self, jint value);

FOUNDATION_EXPORT ComGoogleCommonCollectCount *new_ComGoogleCommonCollectCount_initPackagePrivateWithInt_(jint value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCount *create_ComGoogleCommonCollectCount_initPackagePrivateWithInt_(jint value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCount)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCount")
