//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/WritableByteChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsWritableByteChannel")
#ifdef RESTRICT_JavaNioChannelsWritableByteChannel
#define INCLUDE_ALL_JavaNioChannelsWritableByteChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsWritableByteChannel 1
#endif
#undef RESTRICT_JavaNioChannelsWritableByteChannel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsWritableByteChannel_) && (INCLUDE_ALL_JavaNioChannelsWritableByteChannel || defined(INCLUDE_JavaNioChannelsWritableByteChannel))
#define JavaNioChannelsWritableByteChannel_

#define RESTRICT_JavaNioChannelsChannel 1
#define INCLUDE_JavaNioChannelsChannel 1
#include "java/nio/channels/Channel.h"

@class JavaLangInteger;
@class JavaNioByteBuffer;

/*!
 @brief A channel that can write bytes.
 <p> Only one write operation upon a writable channel may be in progress at
  any given time.  If one thread initiates a write operation upon a channel
  then any other thread that attempts to initiate another write operation will
  block until the first operation is complete.  Whether or not other kinds of
  I/O operations may proceed concurrently with a write operation depends upon
  the type of the channel. </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@protocol JavaNioChannelsWritableByteChannel < JavaNioChannelsChannel, JavaObject >

/*!
 @brief Writes a sequence of bytes to this channel from the given buffer.
 <p> An attempt is made to write up to <i>r</i> bytes to the channel,
  where <i>r</i> is the number of bytes remaining in the buffer, that is, 
 <tt>src.remaining()</tt>, at the moment this method is invoked. 
 <p> Suppose that a byte sequence of length <i>n</i> is written, where 
 <tt>0</tt>&nbsp;<tt>&lt;=</tt>&nbsp;<i>n</i>&nbsp;<tt>&lt;=</tt>&nbsp;<i>r</i>.
  This byte sequence will be transferred from the buffer starting at index 
 <i>p</i>, where <i>p</i> is the buffer's position at the moment this
  method is invoked; the index of the last byte written will be 
 <i>p</i>&nbsp;<tt>+</tt>&nbsp;<i>n</i>&nbsp;<tt>-</tt>&nbsp;<tt>1</tt>.
  Upon return the buffer's position will be equal to 
 <i>p</i>&nbsp;<tt>+</tt>&nbsp;<i>n</i>; its limit will not have changed. 
 <p> Unless otherwise specified, a write operation will return only after
  writing all of the <i>r</i> requested bytes.  Some types of channels,
  depending upon their state, may write only some of the bytes or possibly
  none at all.  A socket channel in non-blocking mode, for example, cannot
  write any more bytes than are free in the socket's output buffer. 
 <p> This method may be invoked at any time.  If another thread has
  already initiated a write operation upon this channel, however, then an
  invocation of this method will block until the first operation is
  complete. </p>
 @param src The buffer from which bytes are to be retrieved
 @return The number of bytes written, possibly zero
 @throw NonWritableChannelException
 If this channel was not opened for writing
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the write operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the write operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw IOException
 If some other I/O error occurs
 */
- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsWritableByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsWritableByteChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsWritableByteChannel")
