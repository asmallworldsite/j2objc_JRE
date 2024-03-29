//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/LambdaMetafactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeLambdaMetafactory")
#ifdef RESTRICT_JavaLangInvokeLambdaMetafactory
#define INCLUDE_ALL_JavaLangInvokeLambdaMetafactory 0
#else
#define INCLUDE_ALL_JavaLangInvokeLambdaMetafactory 1
#endif
#undef RESTRICT_JavaLangInvokeLambdaMetafactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangInvokeLambdaMetafactory_) && (INCLUDE_ALL_JavaLangInvokeLambdaMetafactory || defined(INCLUDE_JavaLangInvokeLambdaMetafactory))
#define JavaLangInvokeLambdaMetafactory_

@class IOSObjectArray;
@class JavaLangInteger;
@class JavaLangInvokeCallSite;
@class JavaLangInvokeMethodHandle;
@class JavaLangInvokeMethodHandles_Lookup;
@class JavaLangInvokeMethodType;

@interface JavaLangInvokeLambdaMetafactory : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (JavaLangInvokeCallSite *)altMetafactoryWithJavaLangInvokeMethodHandles_Lookup:(JavaLangInvokeMethodHandles_Lookup *)caller
                                                                    withNSString:(NSString *)invokedName
                                                    withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)invokedType
                                                               withNSObjectArray:(IOSObjectArray *)args;

+ (JavaLangInvokeCallSite *)metafactoryWithJavaLangInvokeMethodHandles_Lookup:(JavaLangInvokeMethodHandles_Lookup *)caller
                                                                 withNSString:(NSString *)invokedName
                                                 withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)invokedType
                                                 withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)samMethodType
                                               withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)implMethod
                                                 withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)instantiatedMethodType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeLambdaMetafactory)

inline jint JavaLangInvokeLambdaMetafactory_get_FLAG_SERIALIZABLE(void);
#define JavaLangInvokeLambdaMetafactory_FLAG_SERIALIZABLE 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeLambdaMetafactory, FLAG_SERIALIZABLE, jint)

inline jint JavaLangInvokeLambdaMetafactory_get_FLAG_MARKERS(void);
#define JavaLangInvokeLambdaMetafactory_FLAG_MARKERS 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeLambdaMetafactory, FLAG_MARKERS, jint)

inline jint JavaLangInvokeLambdaMetafactory_get_FLAG_BRIDGES(void);
#define JavaLangInvokeLambdaMetafactory_FLAG_BRIDGES 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeLambdaMetafactory, FLAG_BRIDGES, jint)

FOUNDATION_EXPORT void JavaLangInvokeLambdaMetafactory_init(JavaLangInvokeLambdaMetafactory *self);

FOUNDATION_EXPORT JavaLangInvokeLambdaMetafactory *new_JavaLangInvokeLambdaMetafactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInvokeLambdaMetafactory *create_JavaLangInvokeLambdaMetafactory_init(void);

FOUNDATION_EXPORT JavaLangInvokeCallSite *JavaLangInvokeLambdaMetafactory_metafactoryWithJavaLangInvokeMethodHandles_Lookup_withNSString_withJavaLangInvokeMethodType_withJavaLangInvokeMethodType_withJavaLangInvokeMethodHandle_withJavaLangInvokeMethodType_(JavaLangInvokeMethodHandles_Lookup *caller, NSString *invokedName, JavaLangInvokeMethodType *invokedType, JavaLangInvokeMethodType *samMethodType, JavaLangInvokeMethodHandle *implMethod, JavaLangInvokeMethodType *instantiatedMethodType);

FOUNDATION_EXPORT JavaLangInvokeCallSite *JavaLangInvokeLambdaMetafactory_altMetafactoryWithJavaLangInvokeMethodHandles_Lookup_withNSString_withJavaLangInvokeMethodType_withNSObjectArray_(JavaLangInvokeMethodHandles_Lookup *caller, NSString *invokedName, JavaLangInvokeMethodType *invokedType, IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeLambdaMetafactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeLambdaMetafactory")
