//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/MalformedParameterizedTypeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException")
#ifdef RESTRICT_JavaLangReflectMalformedParameterizedTypeException
#define INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException 0
#else
#define INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException 1
#endif
#undef RESTRICT_JavaLangReflectMalformedParameterizedTypeException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectMalformedParameterizedTypeException_) && (INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException || defined(INCLUDE_JavaLangReflectMalformedParameterizedTypeException))
#define JavaLangReflectMalformedParameterizedTypeException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief Thrown when a semantically malformed parameterized type is
  encountered by a reflective method that needs to instantiate it.
 For example, if the number of type arguments to a parameterized type
  is wrong.
 @since 1.5
 */
@interface JavaLangReflectMalformedParameterizedTypeException : JavaLangRuntimeException

#pragma mark Public

- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectMalformedParameterizedTypeException)

FOUNDATION_EXPORT void JavaLangReflectMalformedParameterizedTypeException_init(JavaLangReflectMalformedParameterizedTypeException *self);

FOUNDATION_EXPORT JavaLangReflectMalformedParameterizedTypeException *new_JavaLangReflectMalformedParameterizedTypeException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectMalformedParameterizedTypeException *create_JavaLangReflectMalformedParameterizedTypeException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectMalformedParameterizedTypeException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException")
