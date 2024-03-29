//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/ClosedWatchServiceException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileClosedWatchServiceException")
#ifdef RESTRICT_JavaNioFileClosedWatchServiceException
#define INCLUDE_ALL_JavaNioFileClosedWatchServiceException 0
#else
#define INCLUDE_ALL_JavaNioFileClosedWatchServiceException 1
#endif
#undef RESTRICT_JavaNioFileClosedWatchServiceException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileClosedWatchServiceException_) && (INCLUDE_ALL_JavaNioFileClosedWatchServiceException || defined(INCLUDE_JavaNioFileClosedWatchServiceException))
#define JavaNioFileClosedWatchServiceException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class JavaLangLong;
@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to invoke an operation on
  a watch service that is closed.
 @since 1.7
 */
@interface JavaNioFileClosedWatchServiceException : JavaLangIllegalStateException

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

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileClosedWatchServiceException)

inline jlong JavaNioFileClosedWatchServiceException_get_serialVersionUID(void);
#define JavaNioFileClosedWatchServiceException_serialVersionUID 1853336266231677732LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileClosedWatchServiceException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileClosedWatchServiceException_init(JavaNioFileClosedWatchServiceException *self);

FOUNDATION_EXPORT JavaNioFileClosedWatchServiceException *new_JavaNioFileClosedWatchServiceException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileClosedWatchServiceException *create_JavaNioFileClosedWatchServiceException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileClosedWatchServiceException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileClosedWatchServiceException")
