//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/Member.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectMember")
#ifdef RESTRICT_JavaLangReflectMember
#define INCLUDE_ALL_JavaLangReflectMember 0
#else
#define INCLUDE_ALL_JavaLangReflectMember 1
#endif
#undef RESTRICT_JavaLangReflectMember

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectMember_) && (INCLUDE_ALL_JavaLangReflectMember || defined(INCLUDE_JavaLangReflectMember))
#define JavaLangReflectMember_

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Member is an interface that reflects identifying information about
  a single member (a field or a method) or a constructor.
 - seealso: java.lang.Class
 - seealso: Field
 - seealso: Method
 - seealso: Constructor
 @author Nakul Saraiya
 */
@protocol JavaLangReflectMember < JavaObject >

/*!
 @brief Returns the Class object representing the class or interface
  that declares the member or constructor represented by this Member.
 @return an object representing the declaring class of the
  underlying member
 */
- (IOSClass * __nonnull)getDeclaringClass;

/*!
 @brief Returns the simple name of the underlying member or constructor
  represented by this Member.
 @return the simple name of the underlying member
 */
- (NSString * __nonnull)getName;

/*!
 @brief Returns the Java language modifiers for the member or
  constructor represented by this Member, as an integer.The
  Modifier class should be used to decode the modifiers in
  the integer.
 @return the Java language modifiers for the underlying member
 - seealso: Modifier
 */
- (jint)getModifiers;

/*!
 @brief Returns <code>true</code> if this member was introduced by
  the compiler; returns <code>false</code> otherwise.
 @return true if and only if this member was introduced by
  the compiler.
 @since 1.5
 */
- (jboolean)isSynthetic;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectMember)

/*!
 @brief Identifies the set of all public members of a class or interface,
  including inherited members.
 */
inline jint JavaLangReflectMember_get_PUBLIC(void);
#define JavaLangReflectMember_PUBLIC 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangReflectMember, PUBLIC, jint)

/*!
 @brief Identifies the set of declared members of a class or interface.
 Inherited members are not included.
 */
inline jint JavaLangReflectMember_get_DECLARED(void);
#define JavaLangReflectMember_DECLARED 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangReflectMember, DECLARED, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectMember)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectMember")
