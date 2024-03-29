//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/PortUnreachableException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetPortUnreachableException")
#ifdef RESTRICT_JavaNetPortUnreachableException
#define INCLUDE_ALL_JavaNetPortUnreachableException 0
#else
#define INCLUDE_ALL_JavaNetPortUnreachableException 1
#endif
#undef RESTRICT_JavaNetPortUnreachableException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetPortUnreachableException_) && (INCLUDE_ALL_JavaNetPortUnreachableException || defined(INCLUDE_JavaNetPortUnreachableException))
#define JavaNetPortUnreachableException_

#define RESTRICT_JavaNetSocketException 1
#define INCLUDE_JavaNetSocketException 1
#include "java/net/SocketException.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an ICMP Port Unreachable message has been
  received on a connected datagram.
 @since 1.4
 */
@interface JavaNetPortUnreachableException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Construct a new <code>PortUnreachableException</code> with no
  detailed message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>PortUnreachableException</code> with a
  detail message.
 @param msg the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

/*!
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPortUnreachableException)

FOUNDATION_EXPORT void JavaNetPortUnreachableException_initWithNSString_(JavaNetPortUnreachableException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetPortUnreachableException *new_JavaNetPortUnreachableException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPortUnreachableException *create_JavaNetPortUnreachableException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaNetPortUnreachableException_init(JavaNetPortUnreachableException *self);

FOUNDATION_EXPORT JavaNetPortUnreachableException *new_JavaNetPortUnreachableException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPortUnreachableException *create_JavaNetPortUnreachableException_init(void);

FOUNDATION_EXPORT void JavaNetPortUnreachableException_initWithNSString_withJavaLangThrowable_(JavaNetPortUnreachableException *self, NSString *msg, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetPortUnreachableException *new_JavaNetPortUnreachableException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetPortUnreachableException *create_JavaNetPortUnreachableException_initWithNSString_withJavaLangThrowable_(NSString *msg, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPortUnreachableException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetPortUnreachableException")
