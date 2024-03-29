//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/PrivilegedExceptionAction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPrivilegedExceptionAction")
#ifdef RESTRICT_JavaSecurityPrivilegedExceptionAction
#define INCLUDE_ALL_JavaSecurityPrivilegedExceptionAction 0
#else
#define INCLUDE_ALL_JavaSecurityPrivilegedExceptionAction 1
#endif
#undef RESTRICT_JavaSecurityPrivilegedExceptionAction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityPrivilegedExceptionAction_) && (INCLUDE_ALL_JavaSecurityPrivilegedExceptionAction || defined(INCLUDE_JavaSecurityPrivilegedExceptionAction))
#define JavaSecurityPrivilegedExceptionAction_

/*!
 @brief Legacy security code; do not use.
 */
@protocol JavaSecurityPrivilegedExceptionAction < JavaObject >

- (id)run;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivilegedExceptionAction)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivilegedExceptionAction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPrivilegedExceptionAction")
