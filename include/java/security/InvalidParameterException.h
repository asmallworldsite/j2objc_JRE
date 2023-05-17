//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/InvalidParameterException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInvalidParameterException")
#ifdef RESTRICT_JavaSecurityInvalidParameterException
#define INCLUDE_ALL_JavaSecurityInvalidParameterException 0
#else
#define INCLUDE_ALL_JavaSecurityInvalidParameterException 1
#endif
#undef RESTRICT_JavaSecurityInvalidParameterException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInvalidParameterException_) && (INCLUDE_ALL_JavaSecurityInvalidParameterException || defined(INCLUDE_JavaSecurityInvalidParameterException))
#define JavaSecurityInvalidParameterException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief This exception, designed for use by the JCA/JCE engine classes,
  is thrown when an invalid parameter is passed
  to a method.
 @author Benjamin Renaud
 @since 1.1
 */
@interface JavaSecurityInvalidParameterException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs an InvalidParameterException with no detail message.
 A detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an InvalidParameterException with the specified
  detail message.A detail message is a String that describes
  this particular exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInvalidParameterException)

FOUNDATION_EXPORT void JavaSecurityInvalidParameterException_init(JavaSecurityInvalidParameterException *self);

FOUNDATION_EXPORT JavaSecurityInvalidParameterException *new_JavaSecurityInvalidParameterException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidParameterException *create_JavaSecurityInvalidParameterException_init(void);

FOUNDATION_EXPORT void JavaSecurityInvalidParameterException_initWithNSString_(JavaSecurityInvalidParameterException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityInvalidParameterException *new_JavaSecurityInvalidParameterException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidParameterException *create_JavaSecurityInvalidParameterException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInvalidParameterException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInvalidParameterException")
