//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Short.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangShort")
#ifdef RESTRICT_JavaLangShort
#define INCLUDE_ALL_JavaLangShort 0
#else
#define INCLUDE_ALL_JavaLangShort 1
#endif
#undef RESTRICT_JavaLangShort

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangShort_) && (INCLUDE_ALL_JavaLangShort || defined(INCLUDE_JavaLangShort))
#define JavaLangShort_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief The <code>Short</code> class wraps a value of primitive type <code>short</code>
  in an object.An object of type <code>Short</code> contains a
  single field whose type is <code>short</code>.
 <p>In addition, this class provides several methods for converting
  a <code>short</code> to a <code>String</code> and a <code>String</code> to a 
 <code>short</code>, as well as other constants and methods useful when
  dealing with a <code>short</code>.
  
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
@interface JavaLangShort : NSNumber < JavaLangComparable >

#pragma mark Public

/*!
 @brief Constructs a newly allocated <code>Short</code> object that
  represents the specified <code>short</code> value.
 @param value the value to be represented by the                   
 <code>Short</code> .
 */
- (instancetype __nonnull)initWithShort:(jshort)value;

/*!
 @brief Constructs a newly allocated <code>Short</code> object that
  represents the <code>short</code> value indicated by the 
 <code>String</code> parameter.The string is converted to a 
 <code>short</code> value in exactly the manner used by the 
 <code>parseShort</code> method for radix 10.
 @param s the <code>String</code>  to be converted to a
            <code>Short</code>
 @throw NumberFormatExceptionIf the <code>String</code>
           does not contain a parsable <code>short</code>.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Returns the value of this <code>Short</code> as a <code>byte</code> after
  a narrowing primitive conversion.
 */
- (jbyte)charValue;

/*!
 @brief Compares two <code>short</code> values numerically.
 The value returned is identical to what would be returned by: 
 @code

     Short.valueOf(x).compareTo(Short.valueOf(y)) 
  
@endcode
 @param x the first <code>short</code>  to compare
 @param y the second <code>short</code>  to compare
 @return the value <code>0</code> if <code>x == y</code>;
          a value less than <code>0</code> if <code>x < y</code>; and
          a value greater than <code>0</code> if <code>x > y</code>
 @since 1.7
 */
+ (jint)compareWithShort:(jshort)x
               withShort:(jshort)y;

/*!
 @brief Compares two <code>Short</code> objects numerically.
 @param anotherShort the <code>Short</code>  to be compared.
 @return the value <code>0</code> if this <code>Short</code> is
           equal to the argument <code>Short</code>; a value less than
           <code>0</code> if this <code>Short</code> is numerically less
           than the argument <code>Short</code>; and a value greater than
            <code>0</code> if this <code>Short</code> is numerically
            greater than the argument <code>Short</code> (signed
            comparison).
 @since 1.2
 */
- (jint)compareToWithId:(JavaLangShort *)anotherShort;

/*!
 @brief Compares two <code>short</code> values numerically treating the values
  as unsigned.
 @param x the first <code>short</code>  to compare
 @param y the second <code>short</code>  to compare
 @return the value <code>0</code> if <code>x == y</code>; a value less
          than <code>0</code> if <code>x < y</code> as unsigned values; and
          a value greater than <code>0</code> if <code>x > y</code> as
          unsigned values
 @since 9
 */
+ (jint)compareUnsignedWithShort:(jshort)x
                       withShort:(jshort)y;

/*!
 @brief Decodes a <code>String</code> into a <code>Short</code>.
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
  "<code>#</code>", or leading zero) is parsed as by the <code>Short.parseShort</code>
  method with the indicated radix (10, 16, or
  8).  This sequence of characters must represent a positive
  value or a <code>NumberFormatException</code> will be thrown.  The
  result is negated if first character of the specified <code>String</code>
  is the minus sign.  No whitespace characters are
  permitted in the <code>String</code>.
 @param nm the <code>String</code>  to decode.
 @return a <code>Short</code> object holding the <code>short</code>
             value represented by <code>nm</code>
 @throw NumberFormatExceptionif the <code>String</code> does not
             contain a parsable <code>short</code>.
 - seealso: java.lang.Short#parseShort(java.lang.String, int)
 */
+ (JavaLangShort *)decodeWithNSString:(NSString *)nm;

/*!
 @brief Returns the value of this <code>Short</code> as a <code>double</code>
  after a widening primitive conversion.
 */
- (jdouble)doubleValue;

/*!
 @brief Compares this object to the specified object.The result is 
 <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>Short</code> object that
  contains the same <code>short</code> value as this object.
 @param obj the object to compare with
 @return <code>true</code> if the objects are the same;
                   <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the value of this <code>Short</code> as a <code>float</code>
  after a widening primitive conversion.
 */
- (jfloat)floatValue;

/*!
 @brief Returns a hash code for this <code>Short</code>; equal to the result
  of invoking <code>intValue()</code>.
 @return a hash code value for this <code>Short</code>
 */
- (NSUInteger)hash;

/*!
 @brief Returns a hash code for a <code>short</code> value; compatible with 
 <code>Short.hashCode()</code>.
 @param value the value to hash
 @return a hash code value for a <code>short</code> value.
 @since 1.8
 */
+ (jint)hashCodeWithShort:(jshort)value;

/*!
 @brief Returns the value of this <code>Short</code> as an <code>int</code> after
  a widening primitive conversion.
 */
- (jint)intValue;

/*!
 @brief Returns the value of this <code>Short</code> as a <code>long</code> after
  a widening primitive conversion.
 */
- (jlong)longLongValue;

/*!
 @brief Parses the string argument as a signed decimal <code>short</code>
 .The characters in the string must all be decimal
  digits, except that the first character may be an ASCII minus
  sign <code>'-'</code> (<code>'\u002D'</code>) to indicate a
  negative value or an ASCII plus sign <code>'+'</code>
  (<code>'\u002B'</code>) to indicate a positive value.
 The
  resulting <code>short</code> value is returned, exactly as if the
  argument and the radix 10 were given as arguments to the <code>parseShort(java.lang.String, int)</code>
  method.
 @param s a <code>String</code>  containing the <code>short</code>
            representation to be parsed
 @return the <code>short</code> value represented by the
           argument in decimal.
 @throw NumberFormatExceptionIf the string does not
           contain a parsable <code>short</code>.
 */
+ (jshort)parseShortWithNSString:(NSString *)s;

/*!
 @brief Parses the string argument as a signed <code>short</code> in the
  radix specified by the second argument.The characters in the
  string must all be digits, of the specified radix (as
  determined by whether <code>java.lang.Character.digit(char,
 int)</code>
  returns a nonnegative value) except that the first
  character may be an ASCII minus sign <code>'-'</code>
  (<code>'\u002D'</code>) to indicate a negative value or an
  ASCII plus sign <code>'+'</code> (<code>'\u002B'</code>) to
  indicate a positive value.
 The resulting <code>short</code> value
  is returned. 
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
 <code>short</code>.
  </ul>
 @param s the <code>String</code>  containing the                   
 <code>short</code>  representation to be parsed
 @param radix the radix to be used while parsing <code>s</code>
 @return the <code>short</code> represented by the string
                   argument in the specified radix.
 @throw NumberFormatExceptionIf the <code>String</code>
                   does not contain a parsable <code>short</code>.
 */
+ (jshort)parseShortWithNSString:(NSString *)s
                         withInt:(jint)radix;

/*!
 @brief Returns the value obtained by reversing the order of the bytes in the
  two's complement representation of the specified <code>short</code> value.
 @param i the value whose bytes are to be reversed
 @return the value obtained by reversing (or, equivalently, swapping)
      the bytes in the specified <code>short</code> value.
 @since 1.5
 */
+ (jshort)reverseBytesWithShort:(jshort)i;

/*!
 @brief Returns the value of this <code>Short</code> as a 
 <code>short</code>.
 */
- (jshort)shortValue;

/*!
 @brief Returns a <code>String</code> object representing this 
 <code>Short</code>'s value.The value is converted to signed
  decimal representation and returned as a string, exactly as if
  the <code>short</code> value were given as an argument to the 
 <code>java.lang.Short.toString(short)</code> method.
 @return a string representation of the value of this object in
           base&nbsp;10.
 */
- (NSString *)description;

/*!
 @brief Returns a new <code>String</code> object representing the
  specified <code>short</code>.The radix is assumed to be 10.
 @param s the <code>short</code>  to be converted
 @return the string representation of the specified <code>short</code>
 - seealso: java.lang.Integer#toString(int)
 */
+ (NSString *)toStringWithShort:(jshort)s;

/*!
 @brief Converts the argument to an <code>int</code> by an unsigned
  conversion.In an unsigned conversion to an <code>int</code>, the
  high-order 16 bits of the <code>int</code> are zero and the
  low-order 16 bits are equal to the bits of the <code>short</code> argument.
 Consequently, zero and positive <code>short</code> values are mapped
  to a numerically equal <code>int</code> value and negative <code>short</code>
  values are mapped to an <code>int</code> value equal to the
  input plus 2<sup>16</sup>.
 @param x the value to convert to an unsigned <code>int</code>
 @return the argument converted to <code>int</code> by an unsigned
          conversion
 @since 1.8
 */
+ (jint)toUnsignedIntWithShort:(jshort)x;

/*!
 @brief Converts the argument to a <code>long</code> by an unsigned
  conversion.In an unsigned conversion to a <code>long</code>, the
  high-order 48 bits of the <code>long</code> are zero and the
  low-order 16 bits are equal to the bits of the <code>short</code> argument.
 Consequently, zero and positive <code>short</code> values are mapped
  to a numerically equal <code>long</code> value and negative <code>short</code>
  values are mapped to a <code>long</code> value equal to the
  input plus 2<sup>16</sup>.
 @param x the value to convert to an unsigned <code>long</code>
 @return the argument converted to <code>long</code> by an unsigned
          conversion
 @since 1.8
 */
+ (jlong)toUnsignedLongWithShort:(jshort)x;

/*!
 @brief Returns a <code>Short</code> instance representing the specified 
 <code>short</code> value.
 If a new <code>Short</code> instance is not required, this method
  should generally be used in preference to the constructor 
 <code>Short(short)</code>, as this method is likely to yield
  significantly better space and time performance by caching
  frequently requested values.
  This method will always cache values in the range -128 to 127,
  inclusive, and may cache other values outside of this range.
 @param s a short value.
 @return a <code>Short</code> instance representing <code>s</code>.
 @since 1.5
 */
+ (JavaLangShort *)valueOfWithShort:(jshort)s;

/*!
 @brief Returns a <code>Short</code> object holding the
  value given by the specified <code>String</code>.The argument
  is interpreted as representing a signed decimal 
 <code>short</code>, exactly as if the argument were given to the 
 <code>parseShort(java.lang.String)</code> method.
 The result is
  a <code>Short</code> object that represents the 
 <code>short</code> value specified by the string. 
 <p>In other words, this method returns a <code>Short</code> object
  equal to the value of: 
 <blockquote>
   <code>new Short(Short.parseShort(s))</code>
  </blockquote>
 @param s the string to be parsed
 @return a <code>Short</code> object holding the value
           represented by the string argument
 @throw NumberFormatExceptionIf the <code>String</code> does
           not contain a parsable <code>short</code>.
 */
+ (JavaLangShort *)valueOfWithNSString:(NSString *)s;

/*!
 @brief Returns a <code>Short</code> object holding the value
  extracted from the specified <code>String</code> when parsed
  with the radix given by the second argument.The first argument
  is interpreted as representing a signed <code>short</code> in
  the radix specified by the second argument, exactly as if the
  argument were given to the <code>parseShort(java.lang.String,
 int)</code>
  method.
 The result is a <code>Short</code> object that
  represents the <code>short</code> value specified by the string. 
 <p>In other words, this method returns a <code>Short</code> object
  equal to the value of: 
 <blockquote>
   <code>new Short(Short.parseShort(s, radix))</code>
  </blockquote>
 @param s the string to be parsed
 @param radix the radix to be used in interpreting <code>s</code>
 @return a <code>Short</code> object holding the value
                   represented by the string argument in the
                   specified radix.
 @throw NumberFormatExceptionIf the <code>String</code> does
                   not contain a parsable <code>short</code>.
 */
+ (JavaLangShort *)valueOfWithNSString:(NSString *)s
                               withInt:(jint)radix;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaLangShort)

/*!
 @brief A constant holding the minimum value a <code>short</code> can
  have, -2<sup>15</sup>.
 */
inline jshort JavaLangShort_get_MIN_VALUE(void);
#define JavaLangShort_MIN_VALUE -32768
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangShort, MIN_VALUE, jshort)

/*!
 @brief A constant holding the maximum value a <code>short</code> can
  have, 2<sup>15</sup>-1.
 */
inline jshort JavaLangShort_get_MAX_VALUE(void);
#define JavaLangShort_MAX_VALUE 32767
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangShort, MAX_VALUE, jshort)

/*!
 @brief The <code>Class</code> instance representing the primitive type 
 <code>short</code>.
 */
inline IOSClass *JavaLangShort_get_TYPE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangShort_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangShort, TYPE, IOSClass *)

/*!
 @brief The number of bits used to represent a <code>short</code> value in two's
  complement binary form.
 @since 1.5
 */
inline jint JavaLangShort_get_SIZE(void);
#define JavaLangShort_SIZE 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangShort, SIZE, jint)

/*!
 @brief The number of bytes used to represent a <code>short</code> value in two's
  complement binary form.
 @since 1.8
 */
inline jint JavaLangShort_get_BYTES(void);
#define JavaLangShort_BYTES 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangShort, BYTES, jint)

FOUNDATION_EXPORT NSString *JavaLangShort_toStringWithShort_(jshort s);

FOUNDATION_EXPORT jshort JavaLangShort_parseShortWithNSString_withInt_(NSString *s, jint radix);

FOUNDATION_EXPORT jshort JavaLangShort_parseShortWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaLangShort *JavaLangShort_valueOfWithNSString_withInt_(NSString *s, jint radix);

FOUNDATION_EXPORT JavaLangShort *JavaLangShort_valueOfWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaLangShort *JavaLangShort_valueOfWithShort_(jshort s);

FOUNDATION_EXPORT JavaLangShort *JavaLangShort_decodeWithNSString_(NSString *nm);

FOUNDATION_EXPORT void JavaLangShort_initWithShort_(JavaLangShort *self, jshort value);

FOUNDATION_EXPORT JavaLangShort *new_JavaLangShort_initWithShort_(jshort value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangShort *create_JavaLangShort_initWithShort_(jshort value);

FOUNDATION_EXPORT void JavaLangShort_initWithNSString_(JavaLangShort *self, NSString *s);

FOUNDATION_EXPORT JavaLangShort *new_JavaLangShort_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangShort *create_JavaLangShort_initWithNSString_(NSString *s);

FOUNDATION_EXPORT jint JavaLangShort_hashCodeWithShort_(jshort value);

FOUNDATION_EXPORT jint JavaLangShort_compareWithShort_withShort_(jshort x, jshort y);

FOUNDATION_EXPORT jint JavaLangShort_compareUnsignedWithShort_withShort_(jshort x, jshort y);

FOUNDATION_EXPORT jshort JavaLangShort_reverseBytesWithShort_(jshort i);

FOUNDATION_EXPORT jint JavaLangShort_toUnsignedIntWithShort_(jshort x);

FOUNDATION_EXPORT jlong JavaLangShort_toUnsignedLongWithShort_(jshort x);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangShort)

BOXED_INC_AND_DEC(Short, shortValue, JavaLangShort)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangShort")
