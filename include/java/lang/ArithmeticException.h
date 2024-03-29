//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ArithmeticException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangArithmeticException")
#ifdef RESTRICT_JavaLangArithmeticException
#define INCLUDE_ALL_JavaLangArithmeticException 0
#else
#define INCLUDE_ALL_JavaLangArithmeticException 1
#endif
#undef RESTRICT_JavaLangArithmeticException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangArithmeticException_) && (INCLUDE_ALL_JavaLangArithmeticException || defined(INCLUDE_JavaLangArithmeticException))
#define JavaLangArithmeticException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief Thrown when an exceptional arithmetic condition has occurred.For
  example, an integer "divide by zero" throws an
  instance of this class.
 <code>ArithmeticException</code> objects may be constructed by the
  virtual machine as if suppression were disabled and/or the
  stack trace was not writable
 .
 @since 1.0
 */
@interface JavaLangArithmeticException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an <code>ArithmeticException</code> with no detail
  message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>ArithmeticException</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArithmeticException)

FOUNDATION_EXPORT void JavaLangArithmeticException_init(JavaLangArithmeticException *self);

FOUNDATION_EXPORT JavaLangArithmeticException *new_JavaLangArithmeticException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArithmeticException *create_JavaLangArithmeticException_init(void);

FOUNDATION_EXPORT void JavaLangArithmeticException_initWithNSString_(JavaLangArithmeticException *self, NSString *s);

FOUNDATION_EXPORT JavaLangArithmeticException *new_JavaLangArithmeticException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArithmeticException *create_JavaLangArithmeticException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArithmeticException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangArithmeticException")
