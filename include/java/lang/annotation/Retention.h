//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/Retention.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationRetention")
#ifdef RESTRICT_JavaLangAnnotationRetention
#define INCLUDE_ALL_JavaLangAnnotationRetention 0
#else
#define INCLUDE_ALL_JavaLangAnnotationRetention 1
#endif
#undef RESTRICT_JavaLangAnnotationRetention

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangAnnotationRetention_) && (INCLUDE_ALL_JavaLangAnnotationRetention || defined(INCLUDE_JavaLangAnnotationRetention))
#define JavaLangAnnotationRetention_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangAnnotationRetentionPolicy;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Indicates how long annotations with the annotated type are to be retained.If no Retention
  annotation is present on an annotation type declaration, the retention policy defaults to <code>RetentionPolicy.CLASS</code>
 .
 <p>A Retention meta-annotation has effect only if the meta-annotated type is used directly for
  annotation. It has no effect if the meta-annotated type is used as a member type in another
  annotation type.
 @author Joshua Bloch
 @since 1.5
 */
@protocol JavaLangAnnotationRetention < JavaLangAnnotationAnnotation >

@property (readonly) JavaLangAnnotationRetentionPolicy *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaLangAnnotationRetention : NSObject < JavaLangAnnotationRetention > {
 @public
  JavaLangAnnotationRetentionPolicy *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationRetention)

FOUNDATION_EXPORT id<JavaLangAnnotationRetention> create_JavaLangAnnotationRetention(JavaLangAnnotationRetentionPolicy *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationRetention)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationRetention")
