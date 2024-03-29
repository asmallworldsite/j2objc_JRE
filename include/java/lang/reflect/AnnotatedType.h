//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: openjdk/src/share/classes/java/lang/reflect/AnnotatedType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectAnnotatedType")
#ifdef RESTRICT_JavaLangReflectAnnotatedType
#define INCLUDE_ALL_JavaLangReflectAnnotatedType 0
#else
#define INCLUDE_ALL_JavaLangReflectAnnotatedType 1
#endif
#undef RESTRICT_JavaLangReflectAnnotatedType

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectAnnotatedType_) && (INCLUDE_ALL_JavaLangReflectAnnotatedType || defined(INCLUDE_JavaLangReflectAnnotatedType))
#define JavaLangReflectAnnotatedType_

#define RESTRICT_JavaLangReflectAnnotatedElement 1
#define INCLUDE_JavaLangReflectAnnotatedElement 1
#include "java/lang/reflect/AnnotatedElement.h"

@protocol JavaLangReflectType;

/*!
 @brief <code>AnnotatedType</code> represents the potentially annotated use of a type in
  the program currently running in this VM.The use may be of any type in the
  Java programming language, including an array type, a parameterized type, a
  type variable, or a wildcard type.
 @since 1.8
 */
@protocol JavaLangReflectAnnotatedType < JavaLangReflectAnnotatedElement, JavaObject >

/*!
 @brief Returns the underlying type that this annotated type represents.
 @return the type this annotated type represents
 */
- (id<JavaLangReflectType>)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectAnnotatedType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectAnnotatedType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectAnnotatedType")
