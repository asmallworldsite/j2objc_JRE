//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/InvalidClassException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInvalidClassException")
#ifdef RESTRICT_JavaIoInvalidClassException
#define INCLUDE_ALL_JavaIoInvalidClassException 0
#else
#define INCLUDE_ALL_JavaIoInvalidClassException 1
#endif
#undef RESTRICT_JavaIoInvalidClassException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoInvalidClassException_) && (INCLUDE_ALL_JavaIoInvalidClassException || defined(INCLUDE_JavaIoInvalidClassException))
#define JavaIoInvalidClassException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "java/io/ObjectStreamException.h"

/*!
 @brief Thrown when the Serialization runtime detects one of the following
  problems with a Class.
 <UL>
  <LI> The serial version of the class does not match that of the class
       descriptor read from the stream 
 <LI> The class contains unknown datatypes 
 <LI> The class does not have an accessible no-arg constructor 
 <LI> The ObjectStreamClass of an enum constant does not represent
       an enum type 
 <LI> Other conditions given in the <cite>Java Object Serialization
       Specification</cite>
  </UL>
 @since 1.1
 */
@interface JavaIoInvalidClassException : JavaIoObjectStreamException {
 @public
  /*!
   @brief Name of the invalid class.
   */
  NSString *classname_;
}

#pragma mark Public

/*!
 @brief Report an InvalidClassException for the reason specified.
 @param reason String describing the reason for the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs an InvalidClassException object.
 @param cname a String naming the invalid class.
 @param reason a String describing the reason for the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)cname
                              withNSString:(NSString *)reason;

/*!
 @brief Produce the message and include the classname, if present.
 */
- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInvalidClassException)

J2OBJC_FIELD_SETTER(JavaIoInvalidClassException, classname_, NSString *)

FOUNDATION_EXPORT void JavaIoInvalidClassException_initWithNSString_(JavaIoInvalidClassException *self, NSString *reason);

FOUNDATION_EXPORT JavaIoInvalidClassException *new_JavaIoInvalidClassException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInvalidClassException *create_JavaIoInvalidClassException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaIoInvalidClassException_initWithNSString_withNSString_(JavaIoInvalidClassException *self, NSString *cname, NSString *reason);

FOUNDATION_EXPORT JavaIoInvalidClassException *new_JavaIoInvalidClassException_initWithNSString_withNSString_(NSString *cname, NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInvalidClassException *create_JavaIoInvalidClassException_initWithNSString_withNSString_(NSString *cname, NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInvalidClassException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoInvalidClassException")
