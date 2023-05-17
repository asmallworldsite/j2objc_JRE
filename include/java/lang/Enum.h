//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Enum.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangEnum")
#ifdef RESTRICT_JavaLangEnum
#define INCLUDE_ALL_JavaLangEnum 0
#else
#define INCLUDE_ALL_JavaLangEnum 1
#endif
#undef RESTRICT_JavaLangEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#ifndef JavaLangEnum_H
#define JavaLangEnum_H

#define JAVA_LANG_ENUM_NAME_STRIPPED @""

#endif // JavaLangEnum_H

#if !defined (JavaLangEnum_) && (INCLUDE_ALL_JavaLangEnum || defined(INCLUDE_JavaLangEnum))
#define JavaLangEnum_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief This is the common base class of all Java language enumeration classes.
 More information about enums, including descriptions of the
  implicitly declared methods synthesized by the compiler, can be
  found in section 8.9 of <cite>The Java Language
  Specification</cite>.
  Enumeration classes are all serializable and receive special handling
  by the serialization mechanism. The serialized representation used
  for enum constants cannot be customized. Declarations of methods
  and fields that would otherwise interact with serialization are
  ignored, including <code>serialVersionUID</code>; see the <cite>Java
  Object Serialization Specification</cite> for details. 
 <p> Note that when using an enumeration type as the type of a set
  or as the type of the keys in a map, specialized and efficient 
 set and map
  implementations are available.
 @author Josh Bloch
 @author Neal Gafter
 - seealso: Class#getEnumConstants()
 - seealso: java.util.EnumSet
 - seealso: java.util.EnumMap
 @since 1.5
 */
@interface JavaLangEnum : NSObject < NSCopying, JavaLangComparable, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Compares this enum with the specified object for order.Returns a
  negative integer, zero, or a positive integer as this object is less
  than, equal to, or greater than the specified object.
 Enum constants are only comparable to other enum constants of the
  same enum type.  The natural order implemented by this
  method is the order in which the constants are declared.
 */
- (jint)compareToWithId:(JavaLangEnum *)o;

/*!
 @brief Returns true if the specified object is equal to this
  enum constant.
 @param other the object to be compared for equality with this object.
 @return true if the specified object is equal to this
           enum constant.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the Class object corresponding to this enum constant's
  enum type.Two enum constants e1 and  e2 are of the
  same enum type if and only if
    e1.getDeclaringClass() == e2.getDeclaringClass().
 (The value returned by this method may differ from the one returned
  by the <code>Object.getClass</code> method for enum constants with
  constant-specific class bodies.)
 @return the Class object corresponding to this enum constant's
      enum type
 */
- (IOSClass * __nonnull)getDeclaringClass;

/*!
 @brief Returns a shared, mutable array containing the constants of this enum.It
  is an error to modify the returned array.
 */
+ (IOSObjectArray *)getSharedConstantsWithIOSClass:(IOSClass *)enumType;

/*!
 @brief Returns a hash code for this enum constant.
 @return a hash code for this enum constant.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the name of this enum constant, exactly as declared in its
  enum declaration.
 <b>Most programmers should use the <code>toString</code> method in
  preference to this one, as the toString method may return
  a more user-friendly name.</b>  This method is designed primarily for
  use in specialized situations where correctness depends on getting the
  exact name, which will not vary from release to release.
 @return the name of this enum constant
 */
- (NSString * __nonnull)name;

/*!
 @brief Returns the ordinal of this enumeration constant (its position
  in its enum declaration, where the initial constant is assigned
  an ordinal of zero).
 Most programmers will have no use for this method.  It is
  designed for use by sophisticated enum-based data structures, such
  as <code>java.util.EnumSet</code> and <code>java.util.EnumMap</code>.
 @return the ordinal of this enumeration constant
 */
- (jint)ordinal;

/*!
 @brief Returns the name of this enum constant, as contained in the
  declaration.This method may be overridden, though it typically
  isn't necessary or desirable.
 An enum class should override this
  method when a more "programmer-friendly" string form exists.
 @return the name of this enum constant
 */
- (NSString * __nonnull)description;

/*!
 @brief Returns the enum constant of the specified enum class with the
  specified name.The name must match exactly an identifier used
  to declare an enum constant in this class.
 (Extraneous whitespace
  characters are not permitted.) 
 <p>Note that for a particular enum class <code>T</code>, the
  implicitly declared <code>public static T valueOf(String)</code>
  method on that enum may be used instead of this method to map
  from a name to the corresponding enum constant.  All the
  constants of an enum class can be obtained by calling the
  implicit <code>public static T[] values()</code> method of that
  class.
 @param enumClass the <code>Class</code>  object of the enum class from which
        to return a constant
 @param name the name of the constant to return
 @return the enum constant of the specified enum class with the
       specified name
 @throw IllegalArgumentExceptionif the specified enum class has
          no constant with the specified name, or the specified
          class object does not represent an enum class
 @throw NullPointerExceptionif <code>enumClass</code> or <code>name</code>
          is null
 @since 1.5
 */
+ (JavaLangEnum * __nonnull)valueOfWithIOSClass:(IOSClass *)enumClass
                                   withNSString:(NSString *)name;

#pragma mark Protected

/*!
 @brief Sole constructor.Programmers cannot invoke this constructor.
 It is for use by code emitted by the compiler in response to
  enum class declarations.
 @param name - The name of this enum constant, which is the identifier                used to declare it.
 @param ordinal - The ordinal of this enumeration constant (its position          in the enum declaration, where the initial constant is assigned
           an ordinal of zero).
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

/*!
 @brief Throws CloneNotSupportedException.This guarantees that enums
  are never cloned, which is necessary to preserve their "singleton"
  status.
 @return (never returns)
 */
- (id __nonnull)java_clone;

/*!
 @brief enum classes cannot have finalize methods.
 */
- (void)java_finalize;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaLangEnum)

FOUNDATION_EXPORT void JavaLangEnum_initWithNSString_withInt_(JavaLangEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT JavaLangEnum *JavaLangEnum_valueOfWithIOSClass_withNSString_(IOSClass *enumClass, NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaLangEnum_getSharedConstantsWithIOSClass_(IOSClass *enumType);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangEnum)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangEnum")
