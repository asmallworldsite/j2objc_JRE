//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/validation/SchemaFactoryLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlValidationSchemaFactoryLoader")
#ifdef RESTRICT_JavaxXmlValidationSchemaFactoryLoader
#define INCLUDE_ALL_JavaxXmlValidationSchemaFactoryLoader 0
#else
#define INCLUDE_ALL_JavaxXmlValidationSchemaFactoryLoader 1
#endif
#undef RESTRICT_JavaxXmlValidationSchemaFactoryLoader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlValidationSchemaFactoryLoader_) && (INCLUDE_ALL_JavaxXmlValidationSchemaFactoryLoader || defined(INCLUDE_JavaxXmlValidationSchemaFactoryLoader))
#define JavaxXmlValidationSchemaFactoryLoader_

@class JavaxXmlValidationSchemaFactory;

/*!
 @brief <p>This class was removed from JAXP 1.3 before it was finalized but
  was mistakenly included in Java 5.It only exists now for compatibility
  reasons.
 Applications should avoid using it.</p>
 */
@interface JavaxXmlValidationSchemaFactoryLoader : NSObject

#pragma mark Public

- (JavaxXmlValidationSchemaFactory *)newFactoryWithNSString:(NSString *)schemaLanguage OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlValidationSchemaFactoryLoader)

FOUNDATION_EXPORT void JavaxXmlValidationSchemaFactoryLoader_init(JavaxXmlValidationSchemaFactoryLoader *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlValidationSchemaFactoryLoader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlValidationSchemaFactoryLoader")
