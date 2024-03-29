//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/SocketChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSocketChannel")
#ifdef RESTRICT_JavaNioChannelsSocketChannel
#define INCLUDE_ALL_JavaNioChannelsSocketChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSocketChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSocketChannel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsSocketChannel_) && (INCLUDE_ALL_JavaNioChannelsSocketChannel || defined(INCLUDE_JavaNioChannelsSocketChannel))
#define JavaNioChannelsSocketChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel 1
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

#define RESTRICT_JavaNioChannelsByteChannel 1
#define INCLUDE_JavaNioChannelsByteChannel 1
#include "java/nio/channels/ByteChannel.h"

#define RESTRICT_JavaNioChannelsScatteringByteChannel 1
#define INCLUDE_JavaNioChannelsScatteringByteChannel 1
#include "java/nio/channels/ScatteringByteChannel.h"

#define RESTRICT_JavaNioChannelsGatheringByteChannel 1
#define INCLUDE_JavaNioChannelsGatheringByteChannel 1
#include "java/nio/channels/GatheringByteChannel.h"

#define RESTRICT_JavaNioChannelsNetworkChannel 1
#define INCLUDE_JavaNioChannelsNetworkChannel 1
#include "java/nio/channels/NetworkChannel.h"

@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaNetSocket;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;

/*!
 @brief A selectable channel for stream-oriented connecting sockets.
 <p> A socket channel is created by invoking one of the <code>open</code>
  methods of this class.  It is not possible to create a channel for an arbitrary,
  pre-existing socket. A newly-created socket channel is open but not yet
  connected.  An attempt to invoke an I/O operation upon an unconnected
  channel will cause a <code>NotYetConnectedException</code> to be thrown.  A
  socket channel can be connected by invoking its <code>connect</code>
  method; once connected, a socket channel remains connected until it is
  closed.  Whether or not a socket channel is connected may be determined by
  invoking its <code>isConnected</code> method. 
 <p> Socket channels support <i>non-blocking connection:</i>&nbsp;A socket
  channel may be created and the process of establishing the link to the
  remote socket may be initiated via the <code>connect</code> method for
  later completion by the <code>finishConnect</code> method.
  Whether or not a connection operation is in progress may be determined by
  invoking the <code>isConnectionPending</code> method. 
 <p> Socket channels support <i>asynchronous shutdown,</i> which is similar
  to the asynchronous close operation specified in the <code>Channel</code> class.
  If the input side of a socket is shut down by one thread while another
  thread is blocked in a read operation on the socket's channel, then the read
  operation in the blocked thread will complete without reading any bytes and
  will return <tt>-1</tt>.  If the output side of a socket is shut down by one
  thread while another thread is blocked in a write operation on the socket's
  channel, then the blocked thread will receive an <code>AsynchronousCloseException</code>
 .
  
 <p> Socket options are configured using the <code>setOption</code>
  method. Socket channels support the following options: 
 <blockquote>
  <table border summary="Socket options">
    <tr>
      <th>Option Name</th>
      <th>Description</th>
    </tr>
    <tr>
      <td> <code>SO_SNDBUF</code> </td>
      <td> The size of the socket send buffer </td>
    </tr>
    <tr>
      <td> <code>SO_RCVBUF</code> </td>
      <td> The size of the socket receive buffer </td>
    </tr>
    <tr>
      <td> <code>SO_KEEPALIVE</code> </td>
      <td> Keep connection alive </td>
    </tr>
    <tr>
      <td> <code>SO_REUSEADDR</code> </td>
      <td> Re-use address </td>
    </tr>
    <tr>
      <td> <code>SO_LINGER</code> </td>
      <td> Linger on close if data is present (when configured in blocking mode
           only) </td>
    </tr>
    <tr>
      <td> <code>TCP_NODELAY</code> </td>
      <td> Disable the Nagle algorithm </td>
    </tr>
  </table>
  </blockquote>
  Additional (implementation specific) options may also be supported. 
 <p> Socket channels are safe for use by multiple concurrent threads.  They
  support concurrent reading and writing, though at most one thread may be
  reading and at most one thread may be writing at any given time.  The <code>connect</code>
  and <code>finishConnect</code> methods are
  mutually synchronized against each other, and an attempt to initiate a read
  or write operation while an invocation of one of these methods is in
  progress will block until that invocation is complete.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel >

#pragma mark Public

/*!
 @throw ConnectionPendingException
 If a non-blocking connect operation is already in progress on
           this channel
 @throw AlreadyBoundException
 @throw UnsupportedAddressTypeException
 @throw ClosedChannelException
 @throw IOException
 @throw SecurityException
 If a security manager has been installed and its
           <code>checkListen</code> method denies
           the operation
 @since 1.7
 */
- (JavaNioChannelsSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

/*!
 @brief Connects this channel's socket.
 <p> If this channel is in non-blocking mode then an invocation of this
  method initiates a non-blocking connection operation.  If the connection
  is established immediately, as can happen with a local connection, then
  this method returns <tt>true</tt>.  Otherwise this method returns 
 <tt>false</tt> and the connection operation must later be completed by
  invoking the <code>finishConnect</code> method. 
 <p> If this channel is in blocking mode then an invocation of this
  method will block until the connection is established or an I/O error
  occurs. 
 <p> This method performs exactly the same security checks as the <code>java.net.Socket</code>
  class.  That is, if a security manager has been
  installed then this method verifies that its <code>checkConnect</code>
  method permits
  connecting to the address and port number of the given remote endpoint. 
 <p> This method may be invoked at any time.  If a read or write
  operation upon this channel is invoked while an invocation of this
  method is in progress then that operation will first block until this
  invocation is complete.  If a connection attempt is initiated but fails,
  that is, if an invocation of this method throws a checked exception,
  then the channel will be closed.  </p>
 @param remote The remote address to which this channel is to be connected
 @return <tt>true</tt> if a connection was established,
           <tt>false</tt> if this channel is in non-blocking mode
           and the connection operation is in progress
 @throw AlreadyConnectedException
 If this channel is already connected
 @throw ConnectionPendingException
 If a non-blocking connection operation is already in progress
           on this channel
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the connect operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the connect operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw UnresolvedAddressException
 If the given remote address is not fully resolved
 @throw UnsupportedAddressTypeException
 If the type of the given remote address is not supported
 @throw SecurityException
 If a security manager has been installed
           and it does not permit access to the given remote endpoint
 @throw IOException
 If some other I/O error occurs
 */
- (jboolean)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remote;

/*!
 @brief Finishes the process of connecting a socket channel.
 <p> A non-blocking connection operation is initiated by placing a socket
  channel in non-blocking mode and then invoking its <code>connect</code>
  method.  Once the connection is established, or the attempt has
  failed, the socket channel will become connectable and this method may
  be invoked to complete the connection sequence.  If the connection
  operation failed then invoking this method will cause an appropriate 
 <code>java.io.IOException</code> to be thrown. 
 <p> If this channel is already connected then this method will not block
  and will immediately return <tt>true</tt>.  If this channel is in
  non-blocking mode then this method will return <tt>false</tt> if the
  connection process is not yet complete.  If this channel is in blocking
  mode then this method will block until the connection either completes
  or fails, and will always either return <tt>true</tt> or throw a checked
  exception describing the failure. 
 <p> This method may be invoked at any time.  If a read or write
  operation upon this channel is invoked while an invocation of this
  method is in progress then that operation will first block until this
  invocation is complete.  If a connection attempt fails, that is, if an
  invocation of this method throws a checked exception, then the channel
  will be closed.  </p>
 @return <tt>true</tt> if, and only if, this channel's socket is now
           connected
 @throw NoConnectionPendingException
 If this channel is not connected and a connection operation
           has not been initiated
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the connect operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the connect operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw IOException
 If some other I/O error occurs
 */
- (jboolean)finishConnect;

/*!
 @brief  <p>
  If there is a security manager set, its <code>checkConnect</code> method is
  called with the local address and <code>-1</code> as its arguments to see
  if the operation is allowed.
 If the operation is not allowed,
  a <code>SocketAddress</code> representing the 
 <code>loopback</code> address and the
  local port of the channel's socket is returned.
 @return The <code>SocketAddress</code> that the socket is bound to, or the
           <code>SocketAddress</code> representing the loopback address if
           denied by the security manager, or <code>null</code> if the
           channel's socket is not bound
 @throw ClosedChannelException
 @throw IOException
 */
- (JavaNetSocketAddress *)getLocalAddress;

/*!
 @brief Returns the remote address to which this channel's socket is connected.
 <p> Where the channel is bound and connected to an Internet Protocol
  socket address then the return value from this method is of type <code>java.net.InetSocketAddress</code>
 .
 @return The remote address; <code>null</code> if the channel's socket is not
           connected
 @throw ClosedChannelException
 If the channel is closed
 @throw IOException
 If an I/O error occurs
 @since 1.7
 */
- (JavaNetSocketAddress *)getRemoteAddress;

/*!
 @brief Tells whether or not this channel's network socket is connected.
 @return <tt>true</tt> if, and only if, this channel's network socket
           is <code>open</code> and connected
 */
- (jboolean)isConnected;

/*!
 @brief Tells whether or not a connection operation is in progress on this
  channel.
 @return <tt>true</tt> if, and only if, a connection operation has been
           initiated on this channel but not yet completed by invoking the          
 <code>finishConnect</code> method
 */
- (jboolean)isConnectionPending;

/*!
 @brief Opens a socket channel.
 <p> The new channel is created by invoking the <code>openSocketChannel</code>
  method of the system-wide default <code>java.nio.channels.spi.SelectorProvider</code>
  object.  </p>
 @return A new socket channel
 @throw IOException
 If an I/O error occurs
 */
+ (JavaNioChannelsSocketChannel *)open;

/*!
 @brief Opens a socket channel and connects it to a remote address.
 <p> This convenience method works as if by invoking the <code>open()</code>
  method, invoking the <code>connect</code> method upon
  the resulting socket channel, passing it <tt>remote</tt>, and then
  returning that channel.  </p>
 @param remote The remote address to which the new channel is to be connected
 @return A new, and connected, socket channel
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the connect operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the connect operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw UnresolvedAddressException
 If the given remote address is not fully resolved
 @throw UnsupportedAddressTypeException
 If the type of the given remote address is not supported
 @throw SecurityException
 If a security manager has been installed
           and it does not permit access to the given remote endpoint
 @throw IOException
 If some other I/O error occurs
 */
+ (JavaNioChannelsSocketChannel *)openWithJavaNetSocketAddress:(JavaNetSocketAddress *)remote;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)dsts;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)dsts
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @throw UnsupportedOperationException
 @throw IllegalArgumentException
 @throw ClosedChannelException
 @throw IOException
 @since 1.7
 */
- (JavaNioChannelsSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)name
                                                            withId:(id)value;

/*!
 @brief Shutdown the connection for reading without closing the channel.
 <p> Once shutdown for reading then further reads on the channel will
  return <code>-1</code>, the end-of-stream indication. If the input side of the
  connection is already shutdown then invoking this method has no effect.
 @return The channel
 @throw NotYetConnectedException
 If this channel is not yet connected
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 @since 1.7
 */
- (JavaNioChannelsSocketChannel *)shutdownInput;

/*!
 @brief Shutdown the connection for writing without closing the channel.
 <p> Once shutdown for writing then further attempts to write to the
  channel will throw <code>ClosedChannelException</code>. If the output side of
  the connection is already shutdown then invoking this method has no
  effect.
 @return The channel
 @throw NotYetConnectedException
 If this channel is not yet connected
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 @since 1.7
 */
- (JavaNioChannelsSocketChannel *)shutdownOutput;

/*!
 @brief Retrieves a socket associated with this channel.
 <p> The returned object will not declare any public methods that are not
  declared in the <code>java.net.Socket</code> class.  </p>
 @return A socket associated with this channel
 */
- (JavaNetSocket *)socket;

/*!
 @brief Returns an operation set identifying this channel's supported
  operations.
 <p> Socket channels support connecting, reading, and writing, so this
  method returns <tt>(</tt><code>SelectionKey.OP_CONNECT</code>
  <tt>|</tt>&nbsp;<code>SelectionKey.OP_READ</code> <tt>|</tt>&nbsp;<code>SelectionKey.OP_WRITE</code>
 <tt>)</tt>.  </p>
 @return The valid-operation set
 */
- (jint)validOps;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)srcs;

/*!
 @throw NotYetConnectedException
 If this channel is not yet connected
 */
- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)srcs
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 @param provider The provider that created this channel
 */
- (instancetype __nonnull)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSocketChannel)

FOUNDATION_EXPORT void JavaNioChannelsSocketChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSocketChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

FOUNDATION_EXPORT JavaNioChannelsSocketChannel *JavaNioChannelsSocketChannel_open(void);

FOUNDATION_EXPORT JavaNioChannelsSocketChannel *JavaNioChannelsSocketChannel_openWithJavaNetSocketAddress_(JavaNetSocketAddress *remote);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSocketChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSocketChannel")
