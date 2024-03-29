//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/StandardCharsets.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
#ifdef RESTRICT_JavaNioCharsetStandardCharsets
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 0
#else
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 1
#endif
#undef RESTRICT_JavaNioCharsetStandardCharsets

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetStandardCharsets_) && (INCLUDE_ALL_JavaNioCharsetStandardCharsets || defined(INCLUDE_JavaNioCharsetStandardCharsets))
#define JavaNioCharsetStandardCharsets_

@class JavaNioCharsetCharset;

/*!
 @brief Constant definitions for the standard <code>Charsets</code>.These
  charsets are guaranteed to be available on every implementation of the Java
  platform.
 - seealso: <a href="Charset.html#standard">Standard Charsets</a>
 @since 1.7
 */
@interface JavaNioCharsetStandardCharsets : NSObject

@end

J2OBJC_STATIC_INIT(JavaNioCharsetStandardCharsets)

/*!
 @brief Seven-bit ASCII, a.k.a.ISO646-US, a.k.a. the Basic Latin block of the
  Unicode character set
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_US_ASCII(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_US_ASCII;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, US_ASCII, JavaNioCharsetCharset *)

/*!
 @brief ISO Latin Alphabet No.1, a.k.a.
 ISO-LATIN-1
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_ISO_8859_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_ISO_8859_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, ISO_8859_1, JavaNioCharsetCharset *)

/*!
 @brief Eight-bit UCS Transformation Format
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_8, JavaNioCharsetCharset *)

/*!
 @brief Sixteen-bit UCS Transformation Format, big-endian byte order
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16BE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16BE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16BE, JavaNioCharsetCharset *)

/*!
 @brief Sixteen-bit UCS Transformation Format, little-endian byte order
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16LE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16LE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16LE, JavaNioCharsetCharset *)

/*!
 @brief Sixteen-bit UCS Transformation Format, byte order identified by an
  optional byte-order mark
 */
inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16, JavaNioCharsetCharset *)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetStandardCharsets)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
