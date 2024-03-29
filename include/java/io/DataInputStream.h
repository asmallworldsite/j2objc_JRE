//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/DataInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoDataInputStream")
#ifdef RESTRICT_JavaIoDataInputStream
#define INCLUDE_ALL_JavaIoDataInputStream 0
#else
#define INCLUDE_ALL_JavaIoDataInputStream 1
#endif
#undef RESTRICT_JavaIoDataInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoDataInputStream_) && (INCLUDE_ALL_JavaIoDataInputStream || defined(INCLUDE_JavaIoDataInputStream))
#define JavaIoDataInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

#define RESTRICT_JavaIoDataInput 1
#define INCLUDE_JavaIoDataInput 1
#include "java/io/DataInput.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaLangBoolean;
@class JavaLangByte;
@class JavaLangCharacter;
@class JavaLangDouble;
@class JavaLangFloat;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;

/*!
 @brief A data input stream lets an application read primitive Java data
  types from an underlying input stream in a machine-independent
  way.An application uses a data output stream to write data that
  can later be read by a data input stream.
 <p>
  DataInputStream is not necessarily safe for multithreaded access.
  Thread safety is optional and is the responsibility of users of
  methods in this class.
 @author Arthur van Hoff
 - seealso: java.io.DataOutputStream
 @since 1.0
 */
@interface JavaIoDataInputStream : JavaIoFilterInputStream < JavaIoDataInput >

#pragma mark Public

/*!
 @brief Creates a DataInputStream that uses the specified
  underlying InputStream.
 @param inArg the specified input stream
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Reads some number of bytes from the contained input stream and
  stores them into the buffer array <code>b</code>.The number of
  bytes actually read is returned as an integer.
 This method blocks
  until input data is available, end of file is detected, or an
  exception is thrown. 
 <p>If <code>b</code> is null, a <code>NullPointerException</code> is
  thrown. If the length of <code>b</code> is zero, then no bytes are
  read and <code>0</code> is returned; otherwise, there is an attempt
  to read at least one byte. If no byte is available because the
  stream is at end of file, the value <code>-1</code> is returned;
  otherwise, at least one byte is read and stored into <code>b</code>.
  
 <p>The first byte read is stored into element <code>b[0]</code>, the
  next one into <code>b[1]</code>, and so on. The number of bytes read
  is, at most, equal to the length of <code>b</code>. Let <code>k</code>
  be the number of bytes actually read; these bytes will be stored in
  elements <code>b[0]</code> through <code>b[k-1]</code>, leaving
  elements <code>b[k]</code> through <code>b[b.length-1]</code>
  unaffected. 
 <p>The <code>read(b)</code> method has the same effect as: 
 <blockquote>@code

  read(b, 0, b.length) 
  
@endcode</blockquote>
 @param b the buffer into which the data is read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end
              of the stream has been reached.
 @throw IOExceptionif the first byte cannot be read for any reason
  other than end of file, the stream has been closed and the underlying
  input stream does not support reading after close, or another I/O
  error occurs.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.InputStream#read(byte[], int, int)
 */
- (jint)readWithByteArray:(IOSByteArray *)b;

/*!
 @brief Reads up to <code>len</code> bytes of data from the contained
  input stream into an array of bytes.An attempt is made to read
  as many as <code>len</code> bytes, but a smaller number may be read,
  possibly zero.
 The number of bytes actually read is returned as an
  integer. 
 <p> This method blocks until input data is available, end of file is
  detected, or an exception is thrown. 
 <p> If <code>len</code> is zero, then no bytes are read and 
 <code>0</code> is returned; otherwise, there is an attempt to read at
  least one byte. If no byte is available because the stream is at end of
  file, the value <code>-1</code> is returned; otherwise, at least one
  byte is read and stored into <code>b</code>.
  
 <p> The first byte read is stored into element <code>b[off]</code>, the
  next one into <code>b[off+1]</code>, and so on. The number of bytes read
  is, at most, equal to <code>len</code>. Let <i>k</i> be the number of
  bytes actually read; these bytes will be stored in elements 
 <code>b[off]</code> through <code>b[off+</code><i>k</i><code>-1]</code>,
  leaving elements <code>b[off+</code><i>k</i><code>]</code> through 
 <code>b[off+len-1]</code> unaffected. 
 <p> In every case, elements <code>b[0]</code> through 
 <code>b[off]</code> and elements <code>b[off+len]</code> through 
 <code>b[b.length-1]</code> are unaffected.
 @param b the buffer into which the data is read.
 @param off the start offset in the destination array  <code> b </code>
 @param len the maximum number of bytes read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end
              of the stream has been reached.
 @throw NullPointerExceptionIf <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>b.length - off</code>
 @throw IOExceptionif the first byte cannot be read for any reason
  other than end of file, the stream has been closed and the underlying
  input stream does not support reading after close, or another I/O
  error occurs.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.InputStream#read(byte[], int, int)
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief See the general contract of the <code>readBoolean</code>
  method of <code>DataInput</code>.
 <p>
  Bytes for this operation are read from the contained
  input stream.
 @return the <code>boolean</code> value read.
 @throw EOFExceptionif this input stream has reached the end.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jboolean)readBoolean;

/*!
 @brief See the general contract of the <code>readByte</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next byte of this input stream as a signed 8-bit
              <code>byte</code>.
 @throw EOFExceptionif this input stream has reached the end.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jbyte)readByte;

/*!
 @brief See the general contract of the <code>readChar</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next two bytes of this input stream, interpreted as a
              <code>char</code>.
 @throw EOFExceptionif this input stream reaches the end before
                reading two bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jchar)readChar;

/*!
 @brief See the general contract of the <code>readDouble</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next eight bytes of this input stream, interpreted as a
              <code>double</code>.
 @throw EOFExceptionif this input stream reaches the end before
                reading eight bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.DataInputStream#readLong()
 - seealso: java.lang.Double#longBitsToDouble(long)
 */
- (jdouble)readDouble;

/*!
 @brief See the general contract of the <code>readFloat</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next four bytes of this input stream, interpreted as a
              <code>float</code>.
 @throw EOFExceptionif this input stream reaches the end before
                reading four bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.DataInputStream#readInt()
 - seealso: java.lang.Float#intBitsToFloat(int)
 */
- (jfloat)readFloat;

/*!
 @brief See the general contract of the <code>readFully</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @param b the buffer into which the data is read.
 @throw NullPointerExceptionif <code>b</code> is <code>null</code>.
 @throw EOFExceptionif this input stream reaches the end before
           reading all the bytes.
 @throw IOExceptionthe stream has been closed and the contained
           input stream does not support reading after close, or
           another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (void)readFullyWithByteArray:(IOSByteArray *)b;

/*!
 @brief See the general contract of the <code>readFully</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @param b the buffer into which the data is read.
 @param off the start offset in the data array <code>b</code> .
 @param len the number of bytes to read.
 @throw NullPointerExceptionif <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionif <code>off</code> is negative,
              <code>len</code> is negative, or <code>len</code> is greater than
              <code>b.length - off</code>.
 @throw EOFExceptionif this input stream reaches the end before
              reading all the bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (void)readFullyWithByteArray:(IOSByteArray *)b
                       withInt:(jint)off
                       withInt:(jint)len;

/*!
 @brief See the general contract of the <code>readInt</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next four bytes of this input stream, interpreted as an
              <code>int</code>.
 @throw EOFExceptionif this input stream reaches the end before
                reading four bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jint)readInt;

/*!
 @brief See the general contract of the <code>readLine</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next line of text from this input stream.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.BufferedReader#readLine()
 - seealso: java.io.FilterInputStream#in
 */
- (NSString *)readLine;

/*!
 @brief See the general contract of the <code>readLong</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next eight bytes of this input stream, interpreted as a
              <code>long</code>.
 @throw EOFExceptionif this input stream reaches the end before
                reading eight bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jlong)readLong;

/*!
 @brief See the general contract of the <code>readShort</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next two bytes of this input stream, interpreted as a
              signed 16-bit number.
 @throw EOFExceptionif this input stream reaches the end before
                reading two bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jshort)readShort;

/*!
 @brief See the general contract of the <code>readUnsignedByte</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next byte of this input stream, interpreted as an
              unsigned 8-bit number.
 @throw EOFExceptionif this input stream has reached the end.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jint)readUnsignedByte;

/*!
 @brief See the general contract of the <code>readUnsignedShort</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return the next two bytes of this input stream, interpreted as an
              unsigned 16-bit integer.
 @throw EOFExceptionif this input stream reaches the end before
              reading two bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jint)readUnsignedShort;

/*!
 @brief See the general contract of the <code>readUTF</code>
  method of <code>DataInput</code>.
 <p>
  Bytes
  for this operation are read from the contained
  input stream.
 @return a Unicode string.
 @throw EOFExceptionif this input stream reaches the end before
                reading all the bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 @throw UTFDataFormatExceptionif the bytes do not represent a valid
              modified UTF-8 encoding of a string.
 - seealso: java.io.DataInputStream#readUTF(java.io.DataInput)
 */
- (NSString *)readUTF;

/*!
 @brief Reads from the
  stream <code>in</code> a representation
  of a Unicode  character string encoded in 
 <a href="DataInput.html#modified-utf-8">modified UTF-8</a> format;
  this string of characters is then returned as a <code>String</code>.
 The details of the modified UTF-8 representation
  are  exactly the same as for the <code>readUTF</code>
  method of <code>DataInput</code>.
 @param inArg a data input stream.
 @return a Unicode string.
 @throw EOFExceptionif the input stream reaches the end
                before all the bytes.
 @throw IOExceptionthe stream has been closed and the contained
              input stream does not support reading after close, or
              another I/O error occurs.
 @throw UTFDataFormatExceptionif the bytes do not represent a
                valid modified UTF-8 encoding of a Unicode string.
 - seealso: java.io.DataInputStream#readUnsignedShort()
 */
+ (NSString *)readUTFWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

/*!
 @brief See the general contract of the <code>skipBytes</code>
  method of <code>DataInput</code>.
 <p>
  Bytes for this operation are read from the contained
  input stream.
 @param n the number of bytes to be skipped.
 @return the actual number of bytes skipped.
 @throw IOExceptionif the contained input stream does not support
              seek, or the stream has been closed and
              the contained input stream does not support
              reading after close, or another I/O error occurs.
 */
- (jint)skipBytesWithInt:(jint)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataInputStream)

FOUNDATION_EXPORT void JavaIoDataInputStream_initWithJavaIoInputStream_(JavaIoDataInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoDataInputStream *new_JavaIoDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoDataInputStream *create_JavaIoDataInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT NSString *JavaIoDataInputStream_readUTFWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoDataInputStream")
