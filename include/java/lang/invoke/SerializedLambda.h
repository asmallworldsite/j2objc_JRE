//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/SerializedLambda.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeSerializedLambda")
#ifdef RESTRICT_JavaLangInvokeSerializedLambda
#define INCLUDE_ALL_JavaLangInvokeSerializedLambda 0
#else
#define INCLUDE_ALL_JavaLangInvokeSerializedLambda 1
#endif
#undef RESTRICT_JavaLangInvokeSerializedLambda

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangInvokeSerializedLambda_) && (INCLUDE_ALL_JavaLangInvokeSerializedLambda || defined(INCLUDE_JavaLangInvokeSerializedLambda))
#define JavaLangInvokeSerializedLambda_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangInteger;

@interface JavaLangInvokeSerializedLambda : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)capturingClass
                              withNSString:(NSString *)functionalInterfaceClass
                              withNSString:(NSString *)functionalInterfaceMethodName
                              withNSString:(NSString *)functionalInterfaceMethodSignature
                                   withInt:(jint)implMethodKind
                              withNSString:(NSString *)implClass
                              withNSString:(NSString *)implMethodName
                              withNSString:(NSString *)implMethodSignature
                              withNSString:(NSString *)instantiatedMethodType
                         withNSObjectArray:(IOSObjectArray *)capturedArgs;

- (id)getCapturedArgWithInt:(jint)i;

- (jint)getCapturedArgCount;

- (NSString *)getCapturingClass;

- (NSString *)getFunctionalInterfaceClass;

- (NSString *)getFunctionalInterfaceMethodName;

- (NSString *)getFunctionalInterfaceMethodSignature;

- (NSString *)getImplClass;

- (jint)getImplMethodKind;

- (NSString *)getImplMethodName;

- (NSString *)getImplMethodSignature;

- (NSString *)getInstantiatedMethodType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeSerializedLambda)

FOUNDATION_EXPORT void JavaLangInvokeSerializedLambda_initWithIOSClass_withNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSObjectArray_(JavaLangInvokeSerializedLambda *self, IOSClass *capturingClass, NSString *functionalInterfaceClass, NSString *functionalInterfaceMethodName, NSString *functionalInterfaceMethodSignature, jint implMethodKind, NSString *implClass, NSString *implMethodName, NSString *implMethodSignature, NSString *instantiatedMethodType, IOSObjectArray *capturedArgs);

FOUNDATION_EXPORT JavaLangInvokeSerializedLambda *new_JavaLangInvokeSerializedLambda_initWithIOSClass_withNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSObjectArray_(IOSClass *capturingClass, NSString *functionalInterfaceClass, NSString *functionalInterfaceMethodName, NSString *functionalInterfaceMethodSignature, jint implMethodKind, NSString *implClass, NSString *implMethodName, NSString *implMethodSignature, NSString *instantiatedMethodType, IOSObjectArray *capturedArgs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInvokeSerializedLambda *create_JavaLangInvokeSerializedLambda_initWithIOSClass_withNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSObjectArray_(IOSClass *capturingClass, NSString *functionalInterfaceClass, NSString *functionalInterfaceMethodName, NSString *functionalInterfaceMethodSignature, jint implMethodKind, NSString *implClass, NSString *implMethodName, NSString *implMethodSignature, NSString *instantiatedMethodType, IOSObjectArray *capturedArgs);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeSerializedLambda)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeSerializedLambda")
