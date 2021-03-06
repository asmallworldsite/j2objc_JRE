//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/io/LittleEndianDataInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoLittleEndianDataInputStream")
#ifdef RESTRICT_ComGoogleCommonIoLittleEndianDataInputStream
#define INCLUDE_ALL_ComGoogleCommonIoLittleEndianDataInputStream 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoLittleEndianDataInputStream 1
#endif
#undef RESTRICT_ComGoogleCommonIoLittleEndianDataInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoLittleEndianDataInputStream_) && (INCLUDE_ALL_ComGoogleCommonIoLittleEndianDataInputStream || defined(INCLUDE_ComGoogleCommonIoLittleEndianDataInputStream))
#define ComGoogleCommonIoLittleEndianDataInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

#define RESTRICT_JavaIoDataInput 1
#define INCLUDE_JavaIoDataInput 1
#include "java/io/DataInput.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief An implementation of <code>DataInput</code> that uses little-endian byte ordering for reading <code>short</code>
 , <code>int</code>, <code>float</code>, <code>double</code>, and <code>long</code> values.
 <p><b>Note:</b> This class intentionally violates the specification of its supertype <code>DataInput</code>
 , which explicitly requires big-endian byte order.
 @author Chris Nokleberg
 @author Keith Bottner
 @since 8.0
 */
@interface ComGoogleCommonIoLittleEndianDataInputStream : JavaIoFilterInputStream < JavaIoDataInput >

#pragma mark Public

/*!
 @brief Creates a <code>LittleEndianDataInputStream</code> that wraps the given stream.
 @param inArg the stream to delegate to
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream * __nonnull)inArg;

- (jboolean)readBoolean;

- (jbyte)readByte;

/*!
 @brief Reads a char as specified by <code>DataInputStream.readChar()</code>, except using little-endian
  byte order.
 @return the next two bytes of the input stream, interpreted as a <code>char</code> in little-endian
      byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jchar)readChar;

/*!
 @brief Reads a <code>double</code> as specified by <code>DataInputStream.readDouble()</code>, except using
  little-endian byte order.
 @return the next eight bytes of the input stream, interpreted as a <code>double</code> in
      little-endian byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jdouble)readDouble;

/*!
 @brief Reads a <code>float</code> as specified by <code>DataInputStream.readFloat()</code>, except using
  little-endian byte order.
 @return the next four bytes of the input stream, interpreted as a <code>float</code> in
      little-endian byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jfloat)readFloat;

- (void)readFullyWithByteArray:(IOSByteArray * __nonnull)b;

- (void)readFullyWithByteArray:(IOSByteArray * __nonnull)b
                       withInt:(jint)off
                       withInt:(jint)len;

/*!
 @brief Reads an integer as specified by <code>DataInputStream.readInt()</code>, except using little-endian
  byte order.
 @return the next four bytes of the input stream, interpreted as an <code>int</code> in little-endian
      byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readInt;

/*!
 @brief This method will throw an <code>UnsupportedOperationException</code>.
 */
- (NSString *)readLine;

/*!
 @brief Reads a <code>long</code> as specified by <code>DataInputStream.readLong()</code>, except using
  little-endian byte order.
 @return the next eight bytes of the input stream, interpreted as a <code>long</code> in
      little-endian byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jlong)readLong;

/*!
 @brief Reads a <code>short</code> as specified by <code>DataInputStream.readShort()</code>, except using
  little-endian byte order.
 @return the next two bytes of the input stream, interpreted as a <code>short</code> in little-endian
      byte order.
 @throw IOExceptionif an I/O error occurs.
 */
- (jshort)readShort;

- (jint)readUnsignedByte;

/*!
 @brief Reads an unsigned <code>short</code> as specified by <code>DataInputStream.readUnsignedShort()</code>,
  except using little-endian byte order.
 @return the next two bytes of the input stream, interpreted as an unsigned 16-bit integer in
      little-endian byte order
 @throw IOExceptionif an I/O error occurs
 */
- (jint)readUnsignedShort;

- (NSString *)readUTF;

- (jint)skipBytesWithInt:(jint)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoLittleEndianDataInputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoLittleEndianDataInputStream_initWithJavaIoInputStream_(ComGoogleCommonIoLittleEndianDataInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT ComGoogleCommonIoLittleEndianDataInputStream *new_ComGoogleCommonIoLittleEndianDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoLittleEndianDataInputStream *create_ComGoogleCommonIoLittleEndianDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoLittleEndianDataInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoLittleEndianDataInputStream")
