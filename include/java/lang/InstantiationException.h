//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/InstantiationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInstantiationException")
#ifdef RESTRICT_JavaLangInstantiationException
#define INCLUDE_ALL_JavaLangInstantiationException 0
#else
#define INCLUDE_ALL_JavaLangInstantiationException 1
#endif
#undef RESTRICT_JavaLangInstantiationException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangInstantiationException_) && (INCLUDE_ALL_JavaLangInstantiationException || defined(INCLUDE_JavaLangInstantiationException))
#define JavaLangInstantiationException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an application tries to create an instance of a class
  using the <code>newInstance</code> method in class 
 <code>Class</code>, but the specified class object cannot be
  instantiated.The instantiation can fail for a variety of
  reasons including but not limited to: 
 <ul>
  <li> the class object represents an abstract class, an interface,
       an array class, a primitive type, or <code>void</code>
  <li> the class has no nullary constructor
 </ul>
 - seealso: java.lang.Class#newInstance()
 @since 1.0
 */
@interface JavaLangInstantiationException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs an <code>InstantiationException</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>InstantiationException</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInstantiationException)

FOUNDATION_EXPORT void JavaLangInstantiationException_init(JavaLangInstantiationException *self);

FOUNDATION_EXPORT JavaLangInstantiationException *new_JavaLangInstantiationException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInstantiationException *create_JavaLangInstantiationException_init(void);

FOUNDATION_EXPORT void JavaLangInstantiationException_initWithNSString_(JavaLangInstantiationException *self, NSString *s);

FOUNDATION_EXPORT JavaLangInstantiationException *new_JavaLangInstantiationException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInstantiationException *create_JavaLangInstantiationException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInstantiationException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangInstantiationException")
