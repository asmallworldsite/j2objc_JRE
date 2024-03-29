//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/FormatterClosedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormatterClosedException")
#ifdef RESTRICT_JavaUtilFormatterClosedException
#define INCLUDE_ALL_JavaUtilFormatterClosedException 0
#else
#define INCLUDE_ALL_JavaUtilFormatterClosedException 1
#endif
#undef RESTRICT_JavaUtilFormatterClosedException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFormatterClosedException_) && (INCLUDE_ALL_JavaUtilFormatterClosedException || defined(INCLUDE_JavaUtilFormatterClosedException))
#define JavaUtilFormatterClosedException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when the formatter has been closed.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilFormatterClosedException : JavaLangIllegalStateException

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

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatterClosedException)

FOUNDATION_EXPORT void JavaUtilFormatterClosedException_init(JavaUtilFormatterClosedException *self);

FOUNDATION_EXPORT JavaUtilFormatterClosedException *new_JavaUtilFormatterClosedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilFormatterClosedException *create_JavaUtilFormatterClosedException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatterClosedException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormatterClosedException")
