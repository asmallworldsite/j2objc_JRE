//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ExecutionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionError")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentExecutionError
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionError 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionError 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentExecutionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentExecutionError_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionError || defined(INCLUDE_ComGoogleCommonUtilConcurrentExecutionError))
#define ComGoogleCommonUtilConcurrentExecutionError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangThrowable;

/*!
 @brief <code>Error</code> variant of <code>java.util.concurrent.ExecutionException</code>.As with <code>ExecutionException</code>
 , the error's cause comes from a failed task,
  possibly run in another thread.
 That cause should itself be an <code>Error</code>; if not, use <code>ExecutionException</code>
  or <code>UncheckedExecutionException</code>. This allows the client code to
  continue to distinguish between exceptions and errors, even when they come from other threads.
 @author Chris Povirk
 @since 10.0
 */
@interface ComGoogleCommonUtilConcurrentExecutionError : JavaLangError

#pragma mark Public

/*!
 @brief Creates a new instance with the given cause.
 */
- (instancetype __nonnull)initWithJavaLangError:(JavaLangError * __nullable)cause;

/*!
 @brief Creates a new instance with the given detail message and cause.
 */
- (instancetype __nonnull)initWithNSString:(NSString * __nullable)message
                         withJavaLangError:(JavaLangError * __nullable)cause;

#pragma mark Protected

/*!
 @brief Creates a new instance with <code>null</code> as its detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new instance with the given detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString * __nullable)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable * __nonnull)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString * __nonnull)arg0
                     withJavaLangThrowable:(JavaLangThrowable * __nonnull)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString * __nonnull)arg0
                     withJavaLangThrowable:(JavaLangThrowable * __nonnull)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentExecutionError)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentExecutionError_init(ComGoogleCommonUtilConcurrentExecutionError *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *new_ComGoogleCommonUtilConcurrentExecutionError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *create_ComGoogleCommonUtilConcurrentExecutionError_init(void);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_(ComGoogleCommonUtilConcurrentExecutionError *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *new_ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *create_ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_withJavaLangError_(ComGoogleCommonUtilConcurrentExecutionError *self, NSString *message, JavaLangError *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *new_ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_withJavaLangError_(NSString *message, JavaLangError *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *create_ComGoogleCommonUtilConcurrentExecutionError_initWithNSString_withJavaLangError_(NSString *message, JavaLangError *cause);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentExecutionError_initWithJavaLangError_(ComGoogleCommonUtilConcurrentExecutionError *self, JavaLangError *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *new_ComGoogleCommonUtilConcurrentExecutionError_initWithJavaLangError_(JavaLangError *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionError *create_ComGoogleCommonUtilConcurrentExecutionError_initWithJavaLangError_(JavaLangError *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentExecutionError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionError")
