//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PipedOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoPipedOutputStream")
#ifdef RESTRICT_JavaIoPipedOutputStream
#define INCLUDE_ALL_JavaIoPipedOutputStream 0
#else
#define INCLUDE_ALL_JavaIoPipedOutputStream 1
#endif
#undef RESTRICT_JavaIoPipedOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoPipedOutputStream_) && (INCLUDE_ALL_JavaIoPipedOutputStream || defined(INCLUDE_JavaIoPipedOutputStream))
#define JavaIoPipedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class JavaIoPipedInputStream;
@class JavaLangInteger;

/*!
 @brief A piped output stream can be connected to a piped input stream
  to create a communications pipe.The piped output stream is the
  sending end of the pipe.
 Typically, data is written to a 
 <code>PipedOutputStream</code> object by one thread and data is
  read from the connected <code>PipedInputStream</code> by some
  other thread. Attempting to use both objects from a single thread
  is not recommended as it may deadlock the thread.
  The pipe is said to be <a id=BROKEN> <i>broken</i> </a> if a
  thread that was reading data bytes from the connected piped input
  stream is no longer alive.
 @author James Gosling
 - seealso: java.io.PipedInputStream
 @since 1.0
 */
@interface JavaIoPipedOutputStream : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Creates a piped output stream that is not yet connected to a
  piped input stream.It must be connected to a piped input stream,
  either by the receiver or the sender, before being used.
 - seealso: java.io.PipedInputStream#connect(java.io.PipedOutputStream)
 - seealso: java.io.PipedOutputStream#connect(java.io.PipedInputStream)
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a piped output stream connected to the specified piped
  input stream.Data bytes written to this stream will then be
  available as input from <code>snk</code>.
 @param snk The piped input stream to connect to.
 @throw IOExceptionif an I/O error occurs.
 */
- (instancetype __nonnull)initWithJavaIoPipedInputStream:(JavaIoPipedInputStream *)snk;

/*!
 @brief Closes this piped output stream and releases any system resources
  associated with this stream.This stream may no longer be used for
  writing bytes.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)close;

/*!
 @brief Connects this piped output stream to a receiver.If this object
  is already connected to some other piped input stream, an 
 <code>IOException</code> is thrown.
 <p>
  If <code>snk</code> is an unconnected piped input stream and 
 <code>src</code> is an unconnected piped output stream, they may
  be connected by either the call: 
 <blockquote>@code

  src.connect(snk)
@endcode</blockquote>
  or the call: 
 <blockquote>@code

  snk.connect(src)
@endcode</blockquote>
  The two calls have the same effect.
 @param snk the piped input stream to connect to.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)connectWithJavaIoPipedInputStream:(JavaIoPipedInputStream *)snk;

/*!
 @brief Flushes this output stream and forces any buffered output bytes
  to be written out.
 This will notify any readers that bytes are waiting in the pipe.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)flush;

/*!
 @brief Writes <code>len</code> bytes from the specified byte array
  starting at offset <code>off</code> to this piped output stream.
 This method blocks until all the bytes are written to the output
  stream.
 @param b the data.
 @param off the start offset in the data.
 @param len the number of bytes to write.
 @throw IOExceptionif the pipe is <a href=#BROKEN> broken</a>,
           <code>unconnected</code>,
           closed, or if an I/O error occurs.
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes the specified <code>byte</code> to the piped output stream.
 <p>
  Implements the <code>write</code> method of <code>OutputStream</code>.
 @param b the  <code> byte </code>  to be written.
 @throw IOExceptionif the pipe is <a href=#BROKEN> broken</a>,
           <code>unconnected</code>,
           closed, or if an I/O error occurs.
 */
- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPipedOutputStream)

FOUNDATION_EXPORT void JavaIoPipedOutputStream_initWithJavaIoPipedInputStream_(JavaIoPipedOutputStream *self, JavaIoPipedInputStream *snk);

FOUNDATION_EXPORT JavaIoPipedOutputStream *new_JavaIoPipedOutputStream_initWithJavaIoPipedInputStream_(JavaIoPipedInputStream *snk) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedOutputStream *create_JavaIoPipedOutputStream_initWithJavaIoPipedInputStream_(JavaIoPipedInputStream *snk);

FOUNDATION_EXPORT void JavaIoPipedOutputStream_init(JavaIoPipedOutputStream *self);

FOUNDATION_EXPORT JavaIoPipedOutputStream *new_JavaIoPipedOutputStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedOutputStream *create_JavaIoPipedOutputStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPipedOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoPipedOutputStream")
