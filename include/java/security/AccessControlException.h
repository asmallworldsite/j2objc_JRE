//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/AccessControlException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAccessControlException")
#ifdef RESTRICT_JavaSecurityAccessControlException
#define INCLUDE_ALL_JavaSecurityAccessControlException 0
#else
#define INCLUDE_ALL_JavaSecurityAccessControlException 1
#endif
#undef RESTRICT_JavaSecurityAccessControlException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityAccessControlException_) && (INCLUDE_ALL_JavaSecurityAccessControlException || defined(INCLUDE_JavaSecurityAccessControlException))
#define JavaSecurityAccessControlException_

#define RESTRICT_JavaLangSecurityException 1
#define INCLUDE_JavaLangSecurityException 1
#include "java/lang/SecurityException.h"

@class JavaLangThrowable;
@class JavaSecurityPermission;

/*!
 @brief <p> This exception is thrown by the AccessController to indicate
  that a requested access (to a critical system resource such as the
  file system or the network) is denied.
 <p> The reason to deny access can vary.  For example, the requested
  permission might be of an incorrect type,  contain an invalid
  value, or request access that is not allowed according to the
  security policy.  Such information should be given whenever
  possible at the time the exception is thrown.
 @author Li Gong
 @author Roland Schemers
 @since 1.2
 */
@interface JavaSecurityAccessControlException : JavaLangSecurityException

#pragma mark Public

/*!
 @brief Constructs an <code>AccessControlException</code> with the
  specified, detailed message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Constructs an <code>AccessControlException</code> with the
  specified, detailed message, and the requested permission that caused
  the exception.
 @param s the detail message.
 @param p the permission that caused the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s
                withJavaSecurityPermission:(JavaSecurityPermission *)p;

/*!
 @brief Gets the Permission object associated with this exception, or
  null if there was no corresponding Permission object.
 @return the Permission object.
 */
- (JavaSecurityPermission *)getPermission;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAccessControlException)

FOUNDATION_EXPORT void JavaSecurityAccessControlException_initWithNSString_(JavaSecurityAccessControlException *self, NSString *s);

FOUNDATION_EXPORT JavaSecurityAccessControlException *new_JavaSecurityAccessControlException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAccessControlException *create_JavaSecurityAccessControlException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaSecurityAccessControlException_initWithNSString_withJavaSecurityPermission_(JavaSecurityAccessControlException *self, NSString *s, JavaSecurityPermission *p);

FOUNDATION_EXPORT JavaSecurityAccessControlException *new_JavaSecurityAccessControlException_initWithNSString_withJavaSecurityPermission_(NSString *s, JavaSecurityPermission *p) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityAccessControlException *create_JavaSecurityAccessControlException_initWithNSString_withJavaSecurityPermission_(NSString *s, JavaSecurityPermission *p);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAccessControlException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAccessControlException")
