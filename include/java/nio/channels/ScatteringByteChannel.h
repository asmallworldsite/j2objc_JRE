//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/ScatteringByteChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsScatteringByteChannel")
#ifdef RESTRICT_JavaNioChannelsScatteringByteChannel
#define INCLUDE_ALL_JavaNioChannelsScatteringByteChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsScatteringByteChannel 1
#endif
#undef RESTRICT_JavaNioChannelsScatteringByteChannel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsScatteringByteChannel_) && (INCLUDE_ALL_JavaNioChannelsScatteringByteChannel || defined(INCLUDE_JavaNioChannelsScatteringByteChannel))
#define JavaNioChannelsScatteringByteChannel_

#define RESTRICT_JavaNioChannelsReadableByteChannel 1
#define INCLUDE_JavaNioChannelsReadableByteChannel 1
#include "java/nio/channels/ReadableByteChannel.h"

@class IOSObjectArray;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief A channel that can read bytes into a sequence of buffers.
 <p> A <i>scattering</i> read operation reads, in a single invocation, a
  sequence of bytes into one or more of a given sequence of buffers.
  Scattering reads are often useful when implementing network protocols or
  file formats that, for example, group data into segments consisting of one
  or more fixed-length headers followed by a variable-length body.  Similar 
 <i>gathering</i> write operations are defined in the <code>GatheringByteChannel</code>
  interface.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@protocol JavaNioChannelsScatteringByteChannel < JavaNioChannelsReadableByteChannel, JavaObject >

/*!
 @brief Reads a sequence of bytes from this channel into a subsequence of the
  given buffers.
 <p> An invocation of this method attempts to read up to <i>r</i> bytes
  from this channel, where <i>r</i> is the total number of bytes remaining
  the specified subsequence of the given buffer array, that is, 
 <blockquote>@code

  dsts[offset].remaining()
      + dsts[offset+1].remaining()
      + ... + dsts[offset+length-1].remaining()
@endcode</blockquote>
  at the moment that this method is invoked. 
 <p> Suppose that a byte sequence of length <i>n</i> is read, where 
 <tt>0</tt>&nbsp;<tt>&lt;=</tt>&nbsp;<i>n</i>&nbsp;<tt>&lt;=</tt>&nbsp;<i>r</i>.
  Up to the first <tt>dsts[offset].remaining()</tt> bytes of this sequence
  are transferred into buffer <tt>dsts[offset]</tt>, up to the next 
 <tt>dsts[offset+1].remaining()</tt> bytes are transferred into buffer 
 <tt>dsts[offset+1]</tt>, and so forth, until the entire byte sequence
  is transferred into the given buffers.  As many bytes as possible are
  transferred into each buffer, hence the final position of each updated
  buffer, except the last updated buffer, is guaranteed to be equal to
  that buffer's limit. 
 <p> This method may be invoked at any time.  If another thread has
  already initiated a read operation upon this channel, however, then an
  invocation of this method will block until the first operation is
  complete. </p>
 @param dsts The buffers into which bytes are to be transferred
 @param offset The offset within the buffer array of the first buffer into
           which bytes are to be transferred; must be non-negative and no
           larger than 
  <tt> dsts.length </tt>
 @param length The maximum number of buffers to be accessed; must be
           non-negative and no larger than
            <tt> dsts.length
  </tt> &nbsp; - &nbsp; <tt> offset </tt>
 @return The number of bytes read, possibly zero,
          or <tt>-1</tt> if the channel has reached end-of-stream
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 @throw NonReadableChannelException
 If this channel was not opened for reading
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the read operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the read operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw IOException
 If some other I/O error occurs
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)dsts
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @brief Reads a sequence of bytes from this channel into the given buffers.
 <p> An invocation of this method of the form <tt>c.read(dsts)</tt>
  behaves in exactly the same manner as the invocation 
 <blockquote>@code

  c.read(dsts, 0, dsts.length);
@endcode</blockquote>
 @param dsts The buffers into which bytes are to be transferred
 @return The number of bytes read, possibly zero,
          or <tt>-1</tt> if the channel has reached end-of-stream
 @throw NonReadableChannelException
 If this channel was not opened for reading
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the read operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the read operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw IOException
 If some other I/O error occurs
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)dsts;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsScatteringByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsScatteringByteChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsScatteringByteChannel")
