//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/reflect/MutableTypeToInstanceMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonReflectMutableTypeToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonReflectMutableTypeToInstanceMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectMutableTypeToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectMutableTypeToInstanceMap))
#define ComGoogleCommonReflectMutableTypeToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "com/google/common/collect/ForwardingMap.h"

#define RESTRICT_ComGoogleCommonReflectTypeToInstanceMap 1
#define INCLUDE_ComGoogleCommonReflectTypeToInstanceMap 1
#include "com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A mutable type-to-instance map.See also <code>ImmutableTypeToInstanceMap</code>.
 @author Ben Yu
 @since 13.0
 */
@interface ComGoogleCommonReflectMutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<JavaUtilSet>)entrySet;

- (id __nullable)getInstanceWithIOSClass:(IOSClass * __nonnull)type;

- (id __nullable)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken * __nonnull)type;

/*!
 @brief Not supported.Use <code>putInstance</code> instead.
 @throw UnsupportedOperationExceptionalways
 */
- (id)putWithId:(ComGoogleCommonReflectTypeToken * __nonnull)key
         withId:(id __nonnull)value __attribute__((deprecated));

/*!
 @brief Not supported.Use <code>putInstance</code> instead.
 @throw UnsupportedOperationExceptionalways
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map __attribute__((deprecated));

- (id __nullable)putInstanceWithIOSClass:(IOSClass * __nonnull)type
                                  withId:(id __nullable)value;

- (id __nullable)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken * __nonnull)type
                                                         withId:(id __nullable)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectMutableTypeToInstanceMap)

FOUNDATION_EXPORT void ComGoogleCommonReflectMutableTypeToInstanceMap_init(ComGoogleCommonReflectMutableTypeToInstanceMap *self);

FOUNDATION_EXPORT ComGoogleCommonReflectMutableTypeToInstanceMap *new_ComGoogleCommonReflectMutableTypeToInstanceMap_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonReflectMutableTypeToInstanceMap *create_ComGoogleCommonReflectMutableTypeToInstanceMap_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectMutableTypeToInstanceMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectMutableTypeToInstanceMap")
