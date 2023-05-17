//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SignatureException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySignatureException")
#ifdef RESTRICT_JavaSecuritySignatureException
#define INCLUDE_ALL_JavaSecuritySignatureException 0
#else
#define INCLUDE_ALL_JavaSecuritySignatureException 1
#endif
#undef RESTRICT_JavaSecuritySignatureException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySignatureException_) && (INCLUDE_ALL_JavaSecuritySignatureException || defined(INCLUDE_JavaSecuritySignatureException))
#define JavaSecuritySignatureException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This is the generic Signature exception.
 @author Benjamin Renaud
 */
@interface JavaSecuritySignatureException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a SignatureException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a SignatureException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>SignatureException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>SignatureException</code> with the specified cause
  and a detail message of <code>(cause==null ?
 null : cause.toString())</code>
  (which typically contains the class and detail message of 
 <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A <code>null</code>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySignatureException)

FOUNDATION_EXPORT void JavaSecuritySignatureException_init(JavaSecuritySignatureException *self);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_init(void);

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithNSString_(JavaSecuritySignatureException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithNSString_withJavaLangThrowable_(JavaSecuritySignatureException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithJavaLangThrowable_(JavaSecuritySignatureException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySignatureException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySignatureException")
