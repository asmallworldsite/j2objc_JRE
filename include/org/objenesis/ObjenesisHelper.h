//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/objenesis/ObjenesisHelper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgObjenesisObjenesisHelper")
#ifdef RESTRICT_OrgObjenesisObjenesisHelper
#define INCLUDE_ALL_OrgObjenesisObjenesisHelper 0
#else
#define INCLUDE_ALL_OrgObjenesisObjenesisHelper 1
#endif
#undef RESTRICT_OrgObjenesisObjenesisHelper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgObjenesisObjenesisHelper_) && (INCLUDE_ALL_OrgObjenesisObjenesisHelper || defined(INCLUDE_OrgObjenesisObjenesisHelper))
#define OrgObjenesisObjenesisHelper_

@class IOSClass;

/*!
 @brief A j2objc-specific reimplementation of ObjenesisHelper.newInstance(),
  to only be used by the j2objc Mockito port.This was done because
  the Mockito team keeps adding newInstance() references, even though
  we worked with them to eliminate them to support an iOS port.
 */
@interface OrgObjenesisObjenesisHelper : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Creates a new object without any constructor being called.
 @param clazz Class to instantiate
 @return New instance of clazz
 */
+ (id)newInstanceWithIOSClass:(IOSClass *)clazz OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgObjenesisObjenesisHelper)

FOUNDATION_EXPORT void OrgObjenesisObjenesisHelper_init(OrgObjenesisObjenesisHelper *self);

FOUNDATION_EXPORT OrgObjenesisObjenesisHelper *new_OrgObjenesisObjenesisHelper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgObjenesisObjenesisHelper *create_OrgObjenesisObjenesisHelper_init(void);

FOUNDATION_EXPORT id OrgObjenesisObjenesisHelper_newInstanceWithIOSClass_(IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(OrgObjenesisObjenesisHelper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgObjenesisObjenesisHelper")
