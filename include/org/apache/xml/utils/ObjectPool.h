//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/ObjectPool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectPool")
#ifdef RESTRICT_OrgApacheXmlUtilsObjectPool
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectPool 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectPool 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsObjectPool

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsObjectPool_) && (INCLUDE_ALL_OrgApacheXmlUtilsObjectPool || defined(INCLUDE_OrgApacheXmlUtilsObjectPool))
#define OrgApacheXmlUtilsObjectPool_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;

/*!
 @brief Pool of object of a given type to pick from to help memory usage
 */
@interface OrgApacheXmlUtilsObjectPool : NSObject < JavaIoSerializable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructor ObjectPool
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructor ObjectPool
 @param type Type of objects for this pool
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)type;

/*!
 @brief Constructor ObjectPool
 @param type Type of objects for this pool
 @param size Size of vector to allocate
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)type
                                   withInt:(jint)size;

/*!
 @brief Constructor ObjectPool
 @param className_ Fully qualified name of the type of objects for this pool.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)className_;

/*!
 @brief Add an instance of the given object to the pool
 @param obj Object to add.
 */
- (void)freeInstanceWithId:(id)obj;

/*!
 @brief Get an instance of the given object in this pool
 @return An instance of the given object
 */
- (id)getInstance;

/*!
 @brief Get an instance of the given object in this pool if available
 @return an instance of the given object if available or null
 */
- (id)getInstanceIfFree;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsObjectPool)

inline jlong OrgApacheXmlUtilsObjectPool_get_serialVersionUID(void);
#define OrgApacheXmlUtilsObjectPool_serialVersionUID -8519013691660936643LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsObjectPool, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectPool_initWithIOSClass_(OrgApacheXmlUtilsObjectPool *self, IOSClass *type);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *new_OrgApacheXmlUtilsObjectPool_initWithIOSClass_(IOSClass *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *create_OrgApacheXmlUtilsObjectPool_initWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectPool_initWithNSString_(OrgApacheXmlUtilsObjectPool *self, NSString *className_);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *new_OrgApacheXmlUtilsObjectPool_initWithNSString_(NSString *className_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *create_OrgApacheXmlUtilsObjectPool_initWithNSString_(NSString *className_);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectPool_initWithIOSClass_withInt_(OrgApacheXmlUtilsObjectPool *self, IOSClass *type, jint size);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *new_OrgApacheXmlUtilsObjectPool_initWithIOSClass_withInt_(IOSClass *type, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *create_OrgApacheXmlUtilsObjectPool_initWithIOSClass_withInt_(IOSClass *type, jint size);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectPool_init(OrgApacheXmlUtilsObjectPool *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *new_OrgApacheXmlUtilsObjectPool_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectPool *create_OrgApacheXmlUtilsObjectPool_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsObjectPool)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectPool")
