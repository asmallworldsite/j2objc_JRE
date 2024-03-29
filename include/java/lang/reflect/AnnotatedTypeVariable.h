//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: openjdk/src/share/classes/java/lang/reflect/AnnotatedTypeVariable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectAnnotatedTypeVariable")
#ifdef RESTRICT_JavaLangReflectAnnotatedTypeVariable
#define INCLUDE_ALL_JavaLangReflectAnnotatedTypeVariable 0
#else
#define INCLUDE_ALL_JavaLangReflectAnnotatedTypeVariable 1
#endif
#undef RESTRICT_JavaLangReflectAnnotatedTypeVariable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectAnnotatedTypeVariable_) && (INCLUDE_ALL_JavaLangReflectAnnotatedTypeVariable || defined(INCLUDE_JavaLangReflectAnnotatedTypeVariable))
#define JavaLangReflectAnnotatedTypeVariable_

#define RESTRICT_JavaLangReflectAnnotatedType 1
#define INCLUDE_JavaLangReflectAnnotatedType 1
#include "java/lang/reflect/AnnotatedType.h"

@class IOSObjectArray;

/*!
 @brief <code>AnnotatedTypeVariable</code> represents the potentially annotated use of a
  type variable, whose declaration may have bounds which themselves represent
  annotated uses of types.
 @since 1.8
 */
@protocol JavaLangReflectAnnotatedTypeVariable < JavaLangReflectAnnotatedType, JavaObject >

/*!
 @brief Returns the potentially annotated bounds of this type variable.
 @return the potentially annotated bounds of this type variable
 */
- (IOSObjectArray *)getAnnotatedBounds;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectAnnotatedTypeVariable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectAnnotatedTypeVariable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectAnnotatedTypeVariable")
