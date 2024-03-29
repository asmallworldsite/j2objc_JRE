//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Policy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPolicy")
#ifdef RESTRICT_JavaSecurityPolicy
#define INCLUDE_ALL_JavaSecurityPolicy 0
#else
#define INCLUDE_ALL_JavaSecurityPolicy 1
#endif
#undef RESTRICT_JavaSecurityPolicy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityPolicy_) && (INCLUDE_ALL_JavaSecurityPolicy || defined(INCLUDE_JavaSecurityPolicy))
#define JavaSecurityPolicy_

@class JavaLangBoolean;
@class JavaSecurityCodeSource;
@class JavaSecurityPermission;
@class JavaSecurityPermissionCollection;
@class JavaSecurityProtectionDomain;
@class JavaSecurityProvider;
@protocol JavaSecurityPolicy_Parameters;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPolicy : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params
                       withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaSecurityPolicy *)getInstanceWithNSString:(NSString *)type
              withJavaSecurityPolicy_Parameters:(id<JavaSecurityPolicy_Parameters>)params
                                   withNSString:(NSString *)provider;

- (id<JavaSecurityPolicy_Parameters>)getParameters;

- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource;

- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)domain;

+ (JavaSecurityPolicy *)getPolicy;

- (JavaSecurityProvider *)getProvider;

- (NSString *)getType;

- (jboolean)impliesWithJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)domain
                         withJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (void)refresh;

+ (void)setPolicyWithJavaSecurityPolicy:(JavaSecurityPolicy *)p;

@end

J2OBJC_STATIC_INIT(JavaSecurityPolicy)

inline JavaSecurityPermissionCollection *JavaSecurityPolicy_get_UNSUPPORTED_EMPTY_COLLECTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecurityPermissionCollection *JavaSecurityPolicy_UNSUPPORTED_EMPTY_COLLECTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecurityPolicy, UNSUPPORTED_EMPTY_COLLECTION, JavaSecurityPermissionCollection *)

FOUNDATION_EXPORT void JavaSecurityPolicy_init(JavaSecurityPolicy *self);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getPolicy(void);

FOUNDATION_EXPORT void JavaSecurityPolicy_setPolicyWithJavaSecurityPolicy_(JavaSecurityPolicy *p);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_(NSString *type, id<JavaSecurityPolicy_Parameters> params);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_withNSString_(NSString *type, id<JavaSecurityPolicy_Parameters> params, NSString *provider);

FOUNDATION_EXPORT JavaSecurityPolicy *JavaSecurityPolicy_getInstanceWithNSString_withJavaSecurityPolicy_Parameters_withJavaSecurityProvider_(NSString *type, id<JavaSecurityPolicy_Parameters> params, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPolicy)

#endif

#if !defined (JavaSecurityPolicy_Parameters_) && (INCLUDE_ALL_JavaSecurityPolicy || defined(INCLUDE_JavaSecurityPolicy_Parameters))
#define JavaSecurityPolicy_Parameters_

@protocol JavaSecurityPolicy_Parameters < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPolicy_Parameters)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPolicy_Parameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPolicy")
