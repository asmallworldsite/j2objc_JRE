//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/hamcrest/internal/ReflectiveTypeFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestInternalReflectiveTypeFinder")
#ifdef RESTRICT_OrgHamcrestInternalReflectiveTypeFinder
#define INCLUDE_ALL_OrgHamcrestInternalReflectiveTypeFinder 0
#else
#define INCLUDE_ALL_OrgHamcrestInternalReflectiveTypeFinder 1
#endif
#undef RESTRICT_OrgHamcrestInternalReflectiveTypeFinder

#if !defined (OrgHamcrestInternalReflectiveTypeFinder_) && (INCLUDE_ALL_OrgHamcrestInternalReflectiveTypeFinder || defined(INCLUDE_OrgHamcrestInternalReflectiveTypeFinder))
#define OrgHamcrestInternalReflectiveTypeFinder_

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangReflectMethod;

@interface OrgHamcrestInternalReflectiveTypeFinder : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)methodName
                         withInt:(jint)expectedNumberOfParameters
                         withInt:(jint)typedParameter;

- (IOSClass *)findExpectedTypeWithIOSClass:(IOSClass *)fromClass;

#pragma mark Protected

- (jboolean)canObtainExpectedTypeFromWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (IOSClass *)expectedTypeFromWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestInternalReflectiveTypeFinder)

FOUNDATION_EXPORT void OrgHamcrestInternalReflectiveTypeFinder_initWithNSString_withInt_withInt_(OrgHamcrestInternalReflectiveTypeFinder *self, NSString *methodName, jint expectedNumberOfParameters, jint typedParameter);

FOUNDATION_EXPORT OrgHamcrestInternalReflectiveTypeFinder *new_OrgHamcrestInternalReflectiveTypeFinder_initWithNSString_withInt_withInt_(NSString *methodName, jint expectedNumberOfParameters, jint typedParameter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestInternalReflectiveTypeFinder *create_OrgHamcrestInternalReflectiveTypeFinder_initWithNSString_withInt_withInt_(NSString *methodName, jint expectedNumberOfParameters, jint typedParameter);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestInternalReflectiveTypeFinder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestInternalReflectiveTypeFinder")
