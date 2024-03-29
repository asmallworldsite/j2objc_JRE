//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/FormattableFlags.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormattableFlags")
#ifdef RESTRICT_JavaUtilFormattableFlags
#define INCLUDE_ALL_JavaUtilFormattableFlags 0
#else
#define INCLUDE_ALL_JavaUtilFormattableFlags 1
#endif
#undef RESTRICT_JavaUtilFormattableFlags

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFormattableFlags_) && (INCLUDE_ALL_JavaUtilFormattableFlags || defined(INCLUDE_JavaUtilFormattableFlags))
#define JavaUtilFormattableFlags_

@class JavaLangInteger;

/*!
 @brief FomattableFlags are passed to the <code>Formattable.formatTo()</code>
  method and modify the output format for Formattables
 .Implementations of <code>Formattable</code> are
  responsible for interpreting and validating any flags.
 @since 1.5
 */
@interface JavaUtilFormattableFlags : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattableFlags)

/*!
 @brief Left-justifies the output.Spaces (<tt>'&#92;u0020'</tt>) will be added
  at the end of the converted value as required to fill the minimum width
  of the field.
 If this flag is not set then the output will be
  right-justified. 
 <p> This flag corresponds to <tt>'-'</tt> (<tt>'&#92;u002d'</tt>) in
  the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_LEFT_JUSTIFY(void);
#define JavaUtilFormattableFlags_LEFT_JUSTIFY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, LEFT_JUSTIFY, jint)

/*!
 @brief Converts the output to upper case according to the rules of the 
 locale given during creation of the 
 <tt>formatter</tt> argument of the <code>formatTo()</code>
  method.The output should be equivalent the following
  invocation of <code>String.toUpperCase(java.util.Locale)</code>
  
 @code

      out.toUpperCase() 
@endcode
  
 <p> This flag corresponds to <tt>'S'</tt> (<tt>'&#92;u0053'</tt>) in
  the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_UPPERCASE(void);
#define JavaUtilFormattableFlags_UPPERCASE 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, UPPERCASE, jint)

/*!
 @brief Requires the output to use an alternate form.The definition of the
  form is specified by the <tt>Formattable</tt>.
 <p> This flag corresponds to <tt>'#'</tt> (<tt>'&#92;u0023'</tt>) in
  the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_ALTERNATE(void);
#define JavaUtilFormattableFlags_ALTERNATE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, ALTERNATE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattableFlags)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormattableFlags")
