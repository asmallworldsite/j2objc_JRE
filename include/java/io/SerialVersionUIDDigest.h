//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/SerialVersionUIDDigest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoSerialVersionUIDDigest")
#ifdef RESTRICT_JavaIoSerialVersionUIDDigest
#define INCLUDE_ALL_JavaIoSerialVersionUIDDigest 0
#else
#define INCLUDE_ALL_JavaIoSerialVersionUIDDigest 1
#endif
#undef RESTRICT_JavaIoSerialVersionUIDDigest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoSerialVersionUIDDigest_) && (INCLUDE_ALL_JavaIoSerialVersionUIDDigest || defined(INCLUDE_JavaIoSerialVersionUIDDigest))
#define JavaIoSerialVersionUIDDigest_

#define RESTRICT_JavaIoObjectStreamClass 1
#define INCLUDE_JavaIoObjectStreamClass_Digest 1
#include "java/io/ObjectStreamClass.h"

@class IOSByteArray;

/*!
 @brief Dynamically loaded implementation for computing serialVersionUID hashes.Public so that users can
  add an explicit dependency to force load this class.
 */
@interface JavaIoSerialVersionUIDDigest : NSObject < JavaIoObjectStreamClass_Digest >

#pragma mark Public

- (IOSByteArray *)digestWithByteArray:(IOSByteArray *)input;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoSerialVersionUIDDigest)

FOUNDATION_EXPORT void JavaIoSerialVersionUIDDigest_init(JavaIoSerialVersionUIDDigest *self);

FOUNDATION_EXPORT JavaIoSerialVersionUIDDigest *new_JavaIoSerialVersionUIDDigest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoSerialVersionUIDDigest *create_JavaIoSerialVersionUIDDigest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoSerialVersionUIDDigest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoSerialVersionUIDDigest")
