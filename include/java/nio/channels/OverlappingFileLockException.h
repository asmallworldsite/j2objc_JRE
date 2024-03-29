//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/OverlappingFileLockException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException")
#ifdef RESTRICT_JavaNioChannelsOverlappingFileLockException
#define INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException 0
#else
#define INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException 1
#endif
#undef RESTRICT_JavaNioChannelsOverlappingFileLockException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsOverlappingFileLockException_) && (INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException || defined(INCLUDE_JavaNioChannelsOverlappingFileLockException))
#define JavaNioChannelsOverlappingFileLockException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to acquire a lock on a
  region of a file that overlaps a region already locked by the same Java
  virtual machine, or when another thread is already waiting to lock an
  overlapping region of the same file.
 @since 1.4
 */
@interface JavaNioChannelsOverlappingFileLockException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsOverlappingFileLockException)

FOUNDATION_EXPORT void JavaNioChannelsOverlappingFileLockException_init(JavaNioChannelsOverlappingFileLockException *self);

FOUNDATION_EXPORT JavaNioChannelsOverlappingFileLockException *new_JavaNioChannelsOverlappingFileLockException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsOverlappingFileLockException *create_JavaNioChannelsOverlappingFileLockException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsOverlappingFileLockException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsOverlappingFileLockException")
