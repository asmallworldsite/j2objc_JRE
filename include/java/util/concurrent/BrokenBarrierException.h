//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/BrokenBarrierException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentBrokenBarrierException")
#ifdef RESTRICT_JavaUtilConcurrentBrokenBarrierException
#define INCLUDE_ALL_JavaUtilConcurrentBrokenBarrierException 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentBrokenBarrierException 1
#endif
#undef RESTRICT_JavaUtilConcurrentBrokenBarrierException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentBrokenBarrierException_) && (INCLUDE_ALL_JavaUtilConcurrentBrokenBarrierException || defined(INCLUDE_JavaUtilConcurrentBrokenBarrierException))
#define JavaUtilConcurrentBrokenBarrierException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief Exception thrown when a thread tries to wait upon a barrier that is
  in a broken state, or which enters the broken state while the thread
  is waiting.
 - seealso: CyclicBarrier
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentBrokenBarrierException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>BrokenBarrierException</code> with no specified detail
  message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>BrokenBarrierException</code> with the specified
  detail message.
 @param message the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentBrokenBarrierException)

FOUNDATION_EXPORT void JavaUtilConcurrentBrokenBarrierException_init(JavaUtilConcurrentBrokenBarrierException *self);

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *new_JavaUtilConcurrentBrokenBarrierException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *create_JavaUtilConcurrentBrokenBarrierException_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentBrokenBarrierException_initWithNSString_(JavaUtilConcurrentBrokenBarrierException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *new_JavaUtilConcurrentBrokenBarrierException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentBrokenBarrierException *create_JavaUtilConcurrentBrokenBarrierException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentBrokenBarrierException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentBrokenBarrierException")
