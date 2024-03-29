//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FilterInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFilterInputStream")
#ifdef RESTRICT_JavaIoFilterInputStream
#define INCLUDE_ALL_JavaIoFilterInputStream 0
#else
#define INCLUDE_ALL_JavaIoFilterInputStream 1
#endif
#undef RESTRICT_JavaIoFilterInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFilterInputStream_) && (INCLUDE_ALL_JavaIoFilterInputStream || defined(INCLUDE_JavaIoFilterInputStream))
#define JavaIoFilterInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief A <code>FilterInputStream</code> contains
  some other input stream, which it uses as
  its  basic source of data, possibly transforming
  the data along the way or providing  additional
  functionality.The class <code>FilterInputStream</code>
  itself simply overrides all  methods of 
 <code>InputStream</code> with versions that
  pass all requests to the contained  input
  stream.
 Subclasses of <code>FilterInputStream</code>
  may further override some of  these methods
  and may also provide additional methods
  and fields.
 @author Jonathan Payne
 @since 1.0
 */
@interface JavaIoFilterInputStream : JavaIoInputStream {
 @public
  /*!
   @brief The input stream to be filtered.
   */
  volatile_id in_;
}

#pragma mark Public

/*!
 @brief Returns an estimate of the number of bytes that can be read (or
  skipped over) from this input stream without blocking by the next
  caller of a method for this input stream.The next caller might be
  the same thread or another thread.
 A single read or skip of this
  many bytes will not block, but may read or skip fewer bytes. 
 <p>
  This method returns the result of <code>in</code>.available().
 @return an estimate of the number of bytes that can be read (or skipped
              over) from this input stream without blocking.
 @throw IOExceptionif an I/O error occurs.
 */
- (jint)available;

/*!
 @brief Closes this input stream and releases any system resources
  associated with the stream.
 This
  method simply performs <code>in.close()</code>.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (void)close;

/*!
 @brief Marks the current position in this input stream.A subsequent
  call to the <code>reset</code> method repositions this stream at
  the last marked position so that subsequent reads re-read the same bytes.
 <p>
  The <code>readlimit</code> argument tells this input stream to
  allow that many bytes to be read before the mark position gets
  invalidated. 
 <p>
  This method simply performs <code>in.mark(readlimit)</code>.
 @param readlimit the maximum limit of bytes that can be read before                       the mark position becomes invalid.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.FilterInputStream#reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Tests if this input stream supports the <code>mark</code>
  and <code>reset</code> methods.
 This method
  simply performs <code>in.markSupported()</code>.
 @return <code>true</code> if this stream type supports the
           <code>mark</code> and <code>reset</code> method;
           <code>false</code> otherwise.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.InputStream#mark(int)
 - seealso: java.io.InputStream#reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads the next byte of data from this input stream.The value
  byte is returned as an <code>int</code> in the range 
 <code>0</code> to <code>255</code>.
 If no byte is available
  because the end of the stream has been reached, the value 
 <code>-1</code> is returned. This method blocks until input data
  is available, the end of the stream is detected, or an exception
  is thrown. 
 <p>
  This method
  simply performs <code>in.read()</code> and returns the result.
 @return the next byte of data, or <code>-1</code> if the end of the
              stream is reached.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jint)read;

/*!
 @brief Reads up to <code>b.length</code> bytes of data from this
  input stream into an array of bytes.This method blocks until some
  input is available.
 <p>
  This method simply performs the call 
 <code>read(b, 0, b.length)</code> and returns
  the  result. It is important that it does 
 <i>not</i> do <code>in.read(b)</code> instead;
  certain subclasses of  <code>FilterInputStream</code>
  depend on the implementation strategy actually
  used.
 @param b the buffer into which the data is read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterInputStream#read(byte[], int, int)
 */
- (jint)readWithByteArray:(IOSByteArray *)b;

/*!
 @brief Reads up to <code>len</code> bytes of data from this input stream
  into an array of bytes.If <code>len</code> is not zero, the method
  blocks until some input is available; otherwise, no
  bytes are read and <code>0</code> is returned.
 <p>
  This method simply performs <code>in.read(b, off, len)</code>
  and returns the result.
 @param b the buffer into which the data is read.
 @param off the start offset in the destination array  <code> b </code>
 @param len the maximum number of bytes read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 @throw NullPointerExceptionIf <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>b.length - off</code>
 @throw IOExceptionif an I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Repositions this stream to the position at the time the 
 <code>mark</code> method was last called on this input stream.
 <p>
  This method
  simply performs <code>in.reset()</code>.
  <p>
  Stream marks are intended to be used in
  situations where you need to read ahead a little to see what's in
  the stream. Often this is most easily done by invoking some
  general parser. If the stream is of the type handled by the
  parse, it just chugs along happily. If the stream is not of
  that type, the parser should toss an exception when it fails.
  If this happens within readlimit bytes, it allows the outer
  code to reset the stream and try another parser.
 @throw IOExceptionif the stream has not been marked or if the
                mark has been invalidated.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.FilterInputStream#mark(int)
 */
- (void)reset;

/*!
 @brief Skips over and discards <code>n</code> bytes of data from the
  input stream.The <code>skip</code> method may, for a variety of
  reasons, end up skipping over some smaller number of bytes,
  possibly <code>0</code>.
 The actual number of bytes skipped is
  returned. 
 <p>
  This method simply performs <code>in.skip(n)</code>.
 @param n the number of bytes to be skipped.
 @return the actual number of bytes skipped.
 @throw IOExceptionif <code>in.skip(n)</code> throws an IOException.
 */
- (jlong)skipWithLong:(jlong)n;

#pragma mark Protected

/*!
 @brief Creates a <code>FilterInputStream</code>
  by assigning the  argument <code>in</code>
  to the field <code>this.in</code> so as
  to remember it for later use.
 @param inArg the underlying input stream, or  <code> null </code>  if
            this instance is to be created without an underlying stream.
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilterInputStream)

J2OBJC_VOLATILE_FIELD_SETTER(JavaIoFilterInputStream, in_, JavaIoInputStream *)

FOUNDATION_EXPORT void JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoFilterInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoFilterInputStream *new_JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFilterInputStream *create_JavaIoFilterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilterInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoFilterInputStream")
