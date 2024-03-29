//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/WildcardType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectWildcardType")
#ifdef RESTRICT_JavaLangReflectWildcardType
#define INCLUDE_ALL_JavaLangReflectWildcardType 0
#else
#define INCLUDE_ALL_JavaLangReflectWildcardType 1
#endif
#undef RESTRICT_JavaLangReflectWildcardType

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectWildcardType_) && (INCLUDE_ALL_JavaLangReflectWildcardType || defined(INCLUDE_JavaLangReflectWildcardType))
#define JavaLangReflectWildcardType_

#define RESTRICT_JavaLangReflectType 1
#define INCLUDE_JavaLangReflectType 1
#include "java/lang/reflect/Type.h"

@class IOSObjectArray;

/*!
 @brief WildcardType represents a wildcard type expression, such as 
 <code>?
 </code>, <code>? extends Number</code>, or <code>? super Integer</code>.
 @since 1.5
 */
@protocol JavaLangReflectWildcardType < JavaLangReflectType, JavaObject >

/*!
 @brief Returns an array of <code>Type</code> objects representing the  upper
  bound(s) of this type variable.Note that if no upper bound is
  explicitly declared, the upper bound is <code>Object</code>.
 <p>For each upper bound B : 
 <ul>
   <li>if B is a parameterized type or a type variable, it is created,
   (see <code>ParameterizedType</code>
   for the details of the creation process for parameterized types).  
 <li>Otherwise, B is resolved. 
 </ul>
 @return an array of Types representing the upper bound(s) of this
      type variable
 @throw TypeNotPresentExceptionif any of the
      bounds refers to a non-existent type declaration
 @throw MalformedParameterizedTypeExceptionif any of the
      bounds refer to a parameterized type that cannot be instantiated
      for any reason
 */
- (IOSObjectArray * __nonnull)getUpperBounds;

/*!
 @brief Returns an array of <code>Type</code> objects representing the
  lower bound(s) of this type variable.Note that if no lower bound is
  explicitly declared, the lower bound is the type of <code>null</code>.
 In this case, a zero length array is returned. 
 <p>For each lower bound B : 
 <ul>
    <li>if B is a parameterized type or a type variable, it is created,
   (see <code>ParameterizedType</code>
   for the details of the creation process for parameterized types).
    <li>Otherwise, B is resolved. 
 </ul>
 @return an array of Types representing the lower bound(s) of this
      type variable
 @throw TypeNotPresentExceptionif any of the
      bounds refers to a non-existent type declaration
 @throw MalformedParameterizedTypeExceptionif any of the
      bounds refer to a parameterized type that cannot be instantiated
      for any reason
 */
- (IOSObjectArray * __nonnull)getLowerBounds;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectWildcardType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectWildcardType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectWildcardType")
