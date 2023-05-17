//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/EnumConstantNotPresentException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangEnumConstantNotPresentException")
#ifdef RESTRICT_JavaLangEnumConstantNotPresentException
#define INCLUDE_ALL_JavaLangEnumConstantNotPresentException 0
#else
#define INCLUDE_ALL_JavaLangEnumConstantNotPresentException 1
#endif
#undef RESTRICT_JavaLangEnumConstantNotPresentException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangEnumConstantNotPresentException_) && (INCLUDE_ALL_JavaLangEnumConstantNotPresentException || defined(INCLUDE_JavaLangEnumConstantNotPresentException))
#define JavaLangEnumConstantNotPresentException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangThrowable;

/*!
 @brief Thrown when an application tries to access an enum constant by name
  and the enum type contains no constant with the specified name.
 This exception can be thrown by the API used to read annotations
  reflectively
 .
 @author Josh Bloch
 - seealso: java.lang.reflect.AnnotatedElement
 @since 1.5
 */
@interface JavaLangEnumConstantNotPresentException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an <code>EnumConstantNotPresentException</code> for the
  specified constant.
 @param enumType the type of the missing enum constant
 @param constantName the name of the missing enum constant
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)enumType
                              withNSString:(NSString *)constantName;

/*!
 @brief Returns the name of the missing enum constant.
 @return the name of the missing enum constant
 */
- (NSString *)constantName;

/*!
 @brief Returns the type of the missing enum constant.
 @return the type of the missing enum constant
 */
- (IOSClass *)enumType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangEnumConstantNotPresentException)

FOUNDATION_EXPORT void JavaLangEnumConstantNotPresentException_initWithIOSClass_withNSString_(JavaLangEnumConstantNotPresentException *self, IOSClass *enumType, NSString *constantName);

FOUNDATION_EXPORT JavaLangEnumConstantNotPresentException *new_JavaLangEnumConstantNotPresentException_initWithIOSClass_withNSString_(IOSClass *enumType, NSString *constantName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangEnumConstantNotPresentException *create_JavaLangEnumConstantNotPresentException_initWithIOSClass_withNSString_(IOSClass *enumType, NSString *constantName);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangEnumConstantNotPresentException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangEnumConstantNotPresentException")
