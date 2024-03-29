//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ArrayIndexOutOfBoundsException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException")
#ifdef RESTRICT_JavaLangArrayIndexOutOfBoundsException
#define INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException 0
#else
#define INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException 1
#endif
#undef RESTRICT_JavaLangArrayIndexOutOfBoundsException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangArrayIndexOutOfBoundsException_) && (INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException || defined(INCLUDE_JavaLangArrayIndexOutOfBoundsException))
#define JavaLangArrayIndexOutOfBoundsException_

#define RESTRICT_JavaLangIndexOutOfBoundsException 1
#define INCLUDE_JavaLangIndexOutOfBoundsException 1
#include "java/lang/IndexOutOfBoundsException.h"

@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief Thrown to indicate that an array has been accessed with an illegal index.The
  index is either negative or greater than or equal to the size of the array.
 @since 1.0
 */
@interface JavaLangArrayIndexOutOfBoundsException : JavaLangIndexOutOfBoundsException

#pragma mark Public

/*!
 @brief Constructs an <code>ArrayIndexOutOfBoundsException</code> with no detail
  message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>ArrayIndexOutOfBoundsException</code> class with an
  argument indicating the illegal index.
 <p>The index is included in this exception's detail message.  The
  exact presentation format of the detail message is unspecified.
 @param index the illegal index.
 */
- (instancetype __nonnull)initWithInt:(jint)index;

/*!
 @brief Constructs an <code>ArrayIndexOutOfBoundsException</code> class with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithLong:(jlong)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArrayIndexOutOfBoundsException)

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_init(JavaLangArrayIndexOutOfBoundsException *self);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_init(void);

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithNSString_(JavaLangArrayIndexOutOfBoundsException *self, NSString *s);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithInt_(JavaLangArrayIndexOutOfBoundsException *self, jint index);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithInt_(jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithInt_(jint index);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArrayIndexOutOfBoundsException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException")
