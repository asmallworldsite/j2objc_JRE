//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FilePermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFilePermission")
#ifdef RESTRICT_JavaIoFilePermission
#define INCLUDE_ALL_JavaIoFilePermission 0
#else
#define INCLUDE_ALL_JavaIoFilePermission 1
#endif
#undef RESTRICT_JavaIoFilePermission

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFilePermission_) && (INCLUDE_ALL_JavaIoFilePermission || defined(INCLUDE_JavaIoFilePermission))
#define JavaIoFilePermission_

#define RESTRICT_JavaSecurityPermission 1
#define INCLUDE_JavaSecurityPermission 1
#include "java/security/Permission.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaIoFilePermission : JavaSecurityPermission < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)path
                              withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)p;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilePermission)

FOUNDATION_EXPORT void JavaIoFilePermission_initWithNSString_withNSString_(JavaIoFilePermission *self, NSString *path, NSString *actions);

FOUNDATION_EXPORT JavaIoFilePermission *new_JavaIoFilePermission_initWithNSString_withNSString_(NSString *path, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFilePermission *create_JavaIoFilePermission_initWithNSString_withNSString_(NSString *path, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilePermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoFilePermission")
