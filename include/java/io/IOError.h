//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/IOError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoIOError")
#ifdef RESTRICT_JavaIoIOError
#define INCLUDE_ALL_JavaIoIOError 0
#else
#define INCLUDE_ALL_JavaIoIOError 1
#endif
#undef RESTRICT_JavaIoIOError

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoIOError_) && (INCLUDE_ALL_JavaIoIOError || defined(INCLUDE_JavaIoIOError))
#define JavaIoIOError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief Thrown when a serious I/O error has occurred.
 @author Xueming Shen
 @since 1.6
 */
@interface JavaIoIOError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new instance of IOError with the specified cause.The
  IOError is created with the detail message of 
 <code>(cause==null ?
 null : cause.toString())</code> (which typically
  contains the class and detail message of cause).
 @param cause The cause of this error, or 
 <code>null</code>  if the cause          is not known
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoIOError)

FOUNDATION_EXPORT void JavaIoIOError_initWithJavaLangThrowable_(JavaIoIOError *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaIoIOError *new_JavaIoIOError_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOError *create_JavaIoIOError_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoIOError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoIOError")
