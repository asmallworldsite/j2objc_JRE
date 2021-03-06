//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/GenericMaster.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericMaster")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionGenericMaster
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericMaster 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericMaster 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionGenericMaster

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilReflectionGenericMaster_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericMaster || defined(INCLUDE_OrgMockitoInternalUtilReflectionGenericMaster))
#define OrgMockitoInternalUtilReflectionGenericMaster_

@class IOSClass;
@class JavaLangReflectField;

@interface OrgMockitoInternalUtilReflectionGenericMaster : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Finds the generic type (parametrized type) of the field.If the field is not generic it returns Object.class.
 @param field the field to inspect
 */
- (IOSClass *)getGenericTypeWithJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionGenericMaster)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionGenericMaster_init(OrgMockitoInternalUtilReflectionGenericMaster *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionGenericMaster *new_OrgMockitoInternalUtilReflectionGenericMaster_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionGenericMaster *create_OrgMockitoInternalUtilReflectionGenericMaster_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionGenericMaster)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericMaster")
