//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Byte.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangByte")
#ifdef RESTRICT_JavaLangByte
#define INCLUDE_ALL_JavaLangByte 0
#else
#define INCLUDE_ALL_JavaLangByte 1
#endif
#undef RESTRICT_JavaLangByte

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangByte_) && (INCLUDE_ALL_JavaLangByte || defined(INCLUDE_JavaLangByte))
#define JavaLangByte_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;

/*!
 @brief The <code>Byte</code> class wraps a value of primitive type <code>byte</code>
  in an object.An object of type <code>Byte</code> contains a single
  field whose type is <code>byte</code>.
 <p>In addition, this class provides several methods for converting
  a <code>byte</code> to a <code>String</code> and a <code>String</code> to a <code>byte</code>
 , as well as other constants and methods useful when dealing
  with a <code>byte</code>.
  
 <!-- Android-removed: paragraph on ValueBased
 <p>This is a <a href="{@@docRoot}/java.base/java/lang/doc-files/ValueBased.html">value-based</a>
 class; programmers should treat instances that are
 {@@linkplain #equals(Object) equal} as interchangeable and should not
 use instances for synchronization, or unpredictable behavior may
 occur. For example, in a future release, synchronization may fail.
  -->
 @author Nakul Saraiya
 @author Joseph D. Darcy
 - seealso: java.lang.Number
 @since 1.1
 */
@interface JavaLangByte : NSNumber < JavaLangComparable >

#pragma mark Public

/*!
 @brief Constructs a newly allocated <code>Byte</code> object that
  represents the specified <code>byte</code> value.
 @param value the value to be represented by the                   
 <code>Byte</code> .
 */
- (instancetype __nonnull)initWithByte:(jbyte)value;

/*!
 @brief Constructs a newly allocated <code>Byte</code> object that
  represents the <code>byte</code> value indicated by the 
 <code>String</code> parameter.The string is converted to a 
 <code>byte</code> value in exactly the manner used by the 
 <code>parseByte</code> method for radix 10.
 @param s the <code>String</code>  to be converted to a                   
 <code>Byte</code>
 @throw NumberFormatExceptionif the <code>String</code>
                   does not contain a parsable <code>byte</code>.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Returns the value of this <code>Byte</code> as a 
 <code>byte</code>.
 */
- (jbyte)charValue;

/*!
 @brief Compares two <code>byte</code> values numerically.
 The value returned is identical to what would be returned by: 
 @code

     Byte.valueOf(x).compareTo(Byte.valueOf(y)) 
  
@endcode
 @param x the first <code>byte</code>  to compare
 @param y the second <code>byte</code>  to compare
 @return the value <code>0</code> if <code>x == y</code>;
          a value less than <code>0</code> if <code>x < y</code>; and
          a value greater than <code>0</code> if <code>x > y</code>
 @since 1.7
 */
+ (jint)compareWithByte:(jbyte)x
               withByte:(jbyte)y;

/*!
 @brief Compares two <code>Byte</code> objects numerically.
 @param anotherByte the <code>Byte</code>  to be compared.
 @return the value <code>0</code> if this <code>Byte</code> is
           equal to the argument <code>Byte</code>; a value less than
           <code>0</code> if this <code>Byte</code> is numerically less
           than the argument <code>Byte</code>; and a value greater than
            <code>0</code> if this <code>Byte</code> is numerically
            greater than the argument <code>Byte</code> (signed
            comparison).
 @since 1.2
 */
- (jint)compareToWithId:(JavaLangByte *)anotherByte;

/*!
 @brief Compares two <code>byte</code> values numerically treating the values
  as unsigned.
 @param x the first <code>byte</code>  to compare
 @param y the second <code>byte</code>  to compare
 @return the value <code>0</code> if <code>x == y</code>; a value less
          than <code>0</code> if <code>x < y</code> as unsigned values; and
          a value greater than <code>0</code> if <code>x > y</code> as
          unsigned values
 @since 9
 */
+ (jint)compareUnsignedWithByte:(jbyte)x
                       withByte:(jbyte)y;

/*!
 @brief Decodes a <code>String</code> into a <code>Byte</code>.
 Accepts decimal, hexadecimal, and octal numbers given by
  the following grammar: 
 <blockquote>
  <dl>
  <dt><i>DecodableString:</i>
  <dd><i>Sign<sub>opt</sub> DecimalNumeral</i>
  <dd><i>Sign<sub>opt</sub></i> <code>0x</code> <i>HexDigits</i>
  <dd><i>Sign<sub>opt</sub></i> <code>0X</code> <i>HexDigits</i>
  <dd><i>Sign<sub>opt</sub></i> <code>#</code> <i>HexDigits</i>
  <dd><i>Sign<sub>opt</sub></i> <code>0</code> <i>OctalDigits</i>
  
 <dt><i>Sign:</i>
  <dd><code>-</code>
  <dd><code>+</code>
  </dl>
  </blockquote>
  
 <i>DecimalNumeral</i>, <i>HexDigits</i>, and <i>OctalDigits</i>
  are as defined in section 3.10.1 of 
 <cite>The Java Language Specification</cite>,
  except that underscores are not accepted between digits. 
 <p>The sequence of characters following an optional
  sign and/or radix specifier ("<code>0x</code>", "<code>0X</code>",
  "<code>#</code>", or leading zero) is parsed as by the <code>Byte.parseByte</code>
  method with the indicated radix (10, 16, or 8).
  This sequence of characters must represent a positive value or a 
 <code>NumberFormatException</code> will be thrown.  The result is
  negated if first character of the specified <code>String</code> is
  the minus sign.  No whitespace characters are permitted in the 
 <code>String</code>.
 @param nm the <code>String</code>  to decode.
 @return a <code>Byte</code> object holding the <code>byte</code>
           value represented by <code>nm</code>
 @throw NumberFormatExceptionif the <code>String</code> does not
             contain a parsable <code>byte</code>.
 - seealso: java.lang.Byte#parseByte(java.lang.String, int)
 */
+ (JavaLangByte * __nonnull)decodeWithNSString:(NSString *)nm;

/*!
 @brief Returns the value of this <code>Byte</code> as a <code>double</code>
  after a widening primitive conversion.
 */
- (jdouble)doubleValue;

/*!
 @brief Compares this object to the specified object.The result is 
 <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>Byte</code> object that
  contains the same <code>byte</code> value as this object.
 @param obj the object to compare with
 @return <code>true</code> if the objects are the same;
                   <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the value of this <code>Byte</code> as a <code>float</code> after
  a widening primitive conversion.
 */
- (jfloat)floatValue;

/*!
 @brief Returns a hash code for this <code>Byte</code>; equal to the result
  of invoking <code>intValue()</code>.
 @return a hash code value for this <code>Byte</code>
 */
- (NSUInteger)hash;

/*!
 @brief Returns a hash code for a <code>byte</code> value; compatible with 
 <code>Byte.hashCode()</code>.
 @param value the value to hash
 @return a hash code value for a <code>byte</code> value.
 @since 1.8
 */
+ (jint)hashCodeWithByte:(jbyte)value;

/*!
 @brief Returns the value of this <code>Byte</code> as an <code>int</code> after
  a widening primitive conversion.
 */
- (jint)intValue;

/*!
 @brief Returns the value of this <code>Byte</code> as a <code>long</code> after
  a widening primitive conversion.
 */
- (jlong)longLongValue;

/*!
 @brief Parses the string argument as a signed decimal <code>byte</code>
 .The characters in the string must all be decimal digits,
  except that the first character may be an ASCII minus sign 
 <code>'-'</code> (<code>'\u002D'</code>) to indicate a negative
  value or an ASCII plus sign <code>'+'</code>
  (<code>'\u002B'</code>) to indicate a positive value.
 The
  resulting <code>byte</code> value is returned, exactly as if the
  argument and the radix 10 were given as arguments to the <code>parseByte(java.lang.String, int)</code>
  method.
 @param s a <code>String</code>  containing the                   
 <code>byte</code>  representation to be parsed
 @return the <code>byte</code> value represented by the
                   argument in decimal
 @throw NumberFormatExceptionif the string does not
                   contain a parsable <code>byte</code>.
 */
+ (jbyte)parseByteWithNSString:(NSString *)s;

/*!
 @brief Parses the string argument as a signed <code>byte</code> in the
  radix specified by the second argument.The characters in the
  string must all be digits, of the specified radix (as
  determined by whether <code>java.lang.Character.digit(char,
 int)</code>
  returns a nonnegative value) except that the first
  character may be an ASCII minus sign <code>'-'</code>
  (<code>'\u002D'</code>) to indicate a negative value or an
  ASCII plus sign <code>'+'</code> (<code>'\u002B'</code>) to
  indicate a positive value.
 The resulting <code>byte</code> value is
  returned. 
 <p>An exception of type <code>NumberFormatException</code> is
  thrown if any of the following situations occurs: 
 <ul>
  <li> The first argument is <code>null</code> or is a string of
  length zero. 
 <li> The radix is either smaller than <code>java.lang.Character.MIN_RADIX</code>
  or larger than <code>java.lang.Character.MAX_RADIX</code>
 .
  
 <li> Any character of the string is not a digit of the
  specified radix, except that the first character may be a minus
  sign <code>'-'</code> (<code>'\u002D'</code>) or plus sign 
 <code>'+'</code> (<code>'\u002B'</code>) provided that the
  string is longer than length 1. 
 <li> The value represented by the string is not a value of type 
 <code>byte</code>.
  </ul>
 @param s the <code>String</code>  containing the                   
 <code>byte</code>                   representation to be parsed
 @param radix the radix to be used while parsing <code>s</code>
 @return the <code>byte</code> value represented by the string
                    argument in the specified radix
 @throw NumberFormatExceptionIf the string does
                   not contain a parsable <code>byte</code>.
 */
+ (jbyte)parseByteWithNSString:(NSString *)s
                       withInt:(jint)radix;

/*!
 @brief Returns the value of this <code>Byte</code> as a <code>short</code> after
  a widening primitive conversion.
 */
- (jshort)shortValue;

/*!
 */
+ (NSString *)toHexStringWithByte:(jbyte)b
                      withBoolean:(jboolean)upperCase;

/*!
 @brief Returns a <code>String</code> object representing this 
 <code>Byte</code>'s value.The value is converted to signed
  decimal representation and returned as a string, exactly as if
  the <code>byte</code> value were given as an argument to the 
 <code>java.lang.Byte.toString(byte)</code> method.
 @return a string representation of the value of this object in
           base&nbsp;10.
 */
- (NSString * __nonnull)description;

/*!
 @brief Returns a new <code>String</code> object representing the
  specified <code>byte</code>.The radix is assumed to be 10.
 @param b the <code>byte</code>  to be converted
 @return the string representation of the specified <code>byte</code>
 - seealso: java.lang.Integer#toString(int)
 */
+ (NSString * __nonnull)toStringWithByte:(jbyte)b;

/*!
 @brief Converts the argument to an <code>int</code> by an unsigned
  conversion.In an unsigned conversion to an <code>int</code>, the
  high-order 24 bits of the <code>int</code> are zero and the
  low-order 8 bits are equal to the bits of the <code>byte</code> argument.
 Consequently, zero and positive <code>byte</code> values are mapped
  to a numerically equal <code>int</code> value and negative <code>byte</code>
  values are mapped to an <code>int</code> value equal to the
  input plus 2<sup>8</sup>.
 @param x the value to convert to an unsigned <code>int</code>
 @return the argument converted to <code>int</code> by an unsigned
          conversion
 @since 1.8
 */
+ (jint)toUnsignedIntWithByte:(jbyte)x;

/*!
 @brief Converts the argument to a <code>long</code> by an unsigned
  conversion.In an unsigned conversion to a <code>long</code>, the
  high-order 56 bits of the <code>long</code> are zero and the
  low-order 8 bits are equal to the bits of the <code>byte</code> argument.
 Consequently, zero and positive <code>byte</code> values are mapped
  to a numerically equal <code>long</code> value and negative <code>byte</code>
  values are mapped to a <code>long</code> value equal to the
  input plus 2<sup>8</sup>.
 @param x the value to convert to an unsigned <code>long</code>
 @return the argument converted to <code>long</code> by an unsigned
          conversion
 @since 1.8
 */
+ (jlong)toUnsignedLongWithByte:(jbyte)x;

/*!
 @brief Returns a <code>Byte</code> instance representing the specified 
 <code>byte</code> value.
 If a new <code>Byte</code> instance is not required, this method
  should generally be used in preference to the constructor 
 <code>Byte(byte)</code>, as this method is likely to yield
  significantly better space and time performance since
  all byte values are cached.
 @param b a byte value.
 @return a <code>Byte</code> instance representing <code>b</code>.
 @since 1.5
 */
+ (JavaLangByte * __nonnull)valueOfWithByte:(jbyte)b;

/*!
 @brief Returns a <code>Byte</code> object holding the value
  given by the specified <code>String</code>.The argument is
  interpreted as representing a signed decimal <code>byte</code>,
  exactly as if the argument were given to the <code>parseByte(java.lang.String)</code>
  method.
 The result is a 
 <code>Byte</code> object that represents the <code>byte</code>
  value specified by the string. 
 <p> In other words, this method returns a <code>Byte</code> object
  equal to the value of: 
 <blockquote>
  <code>new Byte(Byte.parseByte(s))</code>
  </blockquote>
 @param s the string to be parsed
 @return a <code>Byte</code> object holding the value
                   represented by the string argument
 @throw NumberFormatExceptionIf the <code>String</code> does
                   not contain a parsable <code>byte</code>.
 */
+ (JavaLangByte * __nonnull)valueOfWithNSString:(NSString *)s;

/*!
 @brief Returns a <code>Byte</code> object holding the value
  extracted from the specified <code>String</code> when parsed
  with the radix given by the second argument.The first argument
  is interpreted as representing a signed <code>byte</code> in
  the radix specified by the second argument, exactly as if the
  argument were given to the <code>parseByte(java.lang.String,
 int)</code>
  method.
 The result is a <code>Byte</code> object that
  represents the <code>byte</code> value specified by the string. 
 <p> In other words, this method returns a <code>Byte</code> object
  equal to the value of: 
 <blockquote>
  <code>new Byte(Byte.parseByte(s, radix))</code>
  </blockquote>
 @param s the string to be parsed
 @param radix the radix to be used in interpreting <code>s</code>
 @return a <code>Byte</code> object holding the value
                   represented by the string argument in the
                   specified radix.
 @throw NumberFormatExceptionIf the <code>String</code> does
                   not contain a parsable <code>byte</code>.
 */
+ (JavaLangByte * __nonnull)valueOfWithNSString:(NSString *)s
                                        withInt:(jint)radix;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaLangByte)

/*!
 @brief A constant holding the minimum value a <code>byte</code> can
  have, -2<sup>7</sup>.
 */
inline jbyte JavaLangByte_get_MIN_VALUE(void);
#define JavaLangByte_MIN_VALUE -128
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangByte, MIN_VALUE, jbyte)

/*!
 @brief A constant holding the maximum value a <code>byte</code> can
  have, 2<sup>7</sup>-1.
 */
inline jbyte JavaLangByte_get_MAX_VALUE(void);
#define JavaLangByte_MAX_VALUE 127
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangByte, MAX_VALUE, jbyte)

/*!
 @brief The <code>Class</code> instance representing the primitive type 
 <code>byte</code>.
 */
inline IOSClass *JavaLangByte_get_TYPE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangByte_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangByte, TYPE, IOSClass *)

/*!
 @brief The number of bits used to represent a <code>byte</code> value in two's
  complement binary form.
 @since 1.5
 */
inline jint JavaLangByte_get_SIZE(void);
#define JavaLangByte_SIZE 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangByte, SIZE, jint)

/*!
 @brief The number of bytes used to represent a <code>byte</code> value in two's
  complement binary form.
 @since 1.8
 */
inline jint JavaLangByte_get_BYTES(void);
#define JavaLangByte_BYTES 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangByte, BYTES, jint)

FOUNDATION_EXPORT NSString *JavaLangByte_toStringWithByte_(jbyte b);

FOUNDATION_EXPORT JavaLangByte *JavaLangByte_valueOfWithByte_(jbyte b);

FOUNDATION_EXPORT jbyte JavaLangByte_parseByteWithNSString_withInt_(NSString *s, jint radix);

FOUNDATION_EXPORT jbyte JavaLangByte_parseByteWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaLangByte *JavaLangByte_valueOfWithNSString_withInt_(NSString *s, jint radix);

FOUNDATION_EXPORT JavaLangByte *JavaLangByte_valueOfWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaLangByte *JavaLangByte_decodeWithNSString_(NSString *nm);

FOUNDATION_EXPORT void JavaLangByte_initWithByte_(JavaLangByte *self, jbyte value);

FOUNDATION_EXPORT JavaLangByte *new_JavaLangByte_initWithByte_(jbyte value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangByte *create_JavaLangByte_initWithByte_(jbyte value);

FOUNDATION_EXPORT void JavaLangByte_initWithNSString_(JavaLangByte *self, NSString *s);

FOUNDATION_EXPORT JavaLangByte *new_JavaLangByte_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangByte *create_JavaLangByte_initWithNSString_(NSString *s);

FOUNDATION_EXPORT jint JavaLangByte_hashCodeWithByte_(jbyte value);

FOUNDATION_EXPORT jint JavaLangByte_compareWithByte_withByte_(jbyte x, jbyte y);

FOUNDATION_EXPORT jint JavaLangByte_compareUnsignedWithByte_withByte_(jbyte x, jbyte y);

FOUNDATION_EXPORT jint JavaLangByte_toUnsignedIntWithByte_(jbyte x);

FOUNDATION_EXPORT jlong JavaLangByte_toUnsignedLongWithByte_(jbyte x);

FOUNDATION_EXPORT NSString *JavaLangByte_toHexStringWithByte_withBoolean_(jbyte b, jboolean upperCase);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangByte)

BOXED_INC_AND_DEC(Byte, charValue, JavaLangByte)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangByte")
