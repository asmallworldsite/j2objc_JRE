//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/Inherited.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationInherited")
#ifdef RESTRICT_JavaLangAnnotationInherited
#define INCLUDE_ALL_JavaLangAnnotationInherited 0
#else
#define INCLUDE_ALL_JavaLangAnnotationInherited 1
#endif
#undef RESTRICT_JavaLangAnnotationInherited

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangAnnotationInherited_) && (INCLUDE_ALL_JavaLangAnnotationInherited || defined(INCLUDE_JavaLangAnnotationInherited))
#define JavaLangAnnotationInherited_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Indicates that an annotation type is automatically inherited.If an Inherited meta-annotation is
  present on an annotation type declaration, and the user queries the annotation type on a class
  declaration, and the class declaration has no annotation for this type, then the class's
  superclass will automatically be queried for the annotation type.
 This process will be repeated
  until an annotation for this type is found, or the top of the class hierarchy (Object) is
  reached. If no superclass has an annotation for this type, then the query will indicate that the
  class in question has no such annotation. 
 <p>Note that this meta-annotation type has no effect if the annotated type is used to annotate
  anything other than a class. Note also that this meta-annotation only causes annotations to be
  inherited from superclasses; annotations on implemented interfaces have no effect.
 @author Joshua Bloch
 @since 1.5
 */
@protocol JavaLangAnnotationInherited < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaLangAnnotationInherited : NSObject < JavaLangAnnotationInherited >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationInherited)

FOUNDATION_EXPORT id<JavaLangAnnotationInherited> create_JavaLangAnnotationInherited(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationInherited)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationInherited")
