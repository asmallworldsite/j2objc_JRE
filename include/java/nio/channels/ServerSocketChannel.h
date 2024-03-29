//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/ServerSocketChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsServerSocketChannel")
#ifdef RESTRICT_JavaNioChannelsServerSocketChannel
#define INCLUDE_ALL_JavaNioChannelsServerSocketChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsServerSocketChannel 1
#endif
#undef RESTRICT_JavaNioChannelsServerSocketChannel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsServerSocketChannel_) && (INCLUDE_ALL_JavaNioChannelsServerSocketChannel || defined(INCLUDE_JavaNioChannelsServerSocketChannel))
#define JavaNioChannelsServerSocketChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel 1
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

#define RESTRICT_JavaNioChannelsNetworkChannel 1
#define INCLUDE_JavaNioChannelsNetworkChannel 1
#include "java/nio/channels/NetworkChannel.h"

@class JavaLangInteger;
@class JavaNetServerSocket;
@class JavaNetSocketAddress;
@class JavaNioChannelsSocketChannel;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;

/*!
 @brief A selectable channel for stream-oriented listening sockets.
 <p> A server-socket channel is created by invoking the <code>open</code>
  method of this class.  It is not possible to create a channel for an arbitrary,
  pre-existing <code>ServerSocket</code>. A newly-created server-socket channel is
  open but not yet bound.  An attempt to invoke the <code>accept</code>
  method of an unbound server-socket channel will cause a <code>NotYetBoundException</code>
  to be thrown. A server-socket channel can be bound by invoking one of the 
 <code>bind</code> methods defined by this class. 
 <p> Socket options are configured using the <code>setOption</code>
  method. Server-socket channels support the following options: 
 <blockquote>
  <table border summary="Socket options">
    <tr>
      <th>Option Name</th>
      <th>Description</th>
    </tr>
    <tr>
      <td> <code>SO_RCVBUF</code> </td>
      <td> The size of the socket receive buffer </td>
    </tr>
    <tr>
      <td> <code>SO_REUSEADDR</code> </td>
      <td> Re-use address </td>
    </tr>
  </table>
  </blockquote>
  Additional (implementation specific) options may also be supported. 
 <p> Server-socket channels are safe for use by multiple concurrent threads. 
 </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsNetworkChannel >

#pragma mark Public

/*!
 @brief Accepts a connection made to this channel's socket.
 <p> If this channel is in non-blocking mode then this method will
  immediately return <tt>null</tt> if there are no pending connections.
  Otherwise it will block indefinitely until a new connection is available
  or an I/O error occurs. 
 <p> The socket channel returned by this method, if any, will be in
  blocking mode regardless of the blocking mode of this channel. 
 <p> This method performs exactly the same security checks as the <code>accept</code>
  method of the <code>java.net.ServerSocket</code>
  class.  That is, if a security manager has been
  installed then for each new connection this method verifies that the
  address and port number of the connection's remote endpoint are
  permitted by the security manager's <code>checkAccept</code>
  method.  </p>
 @return The socket channel for the new connection,
           or <tt>null</tt> if this channel is in non-blocking mode
           and no connection is available to be accepted
 @throw ClosedChannelException
 If this channel is closed
 @throw AsynchronousCloseException
 If another thread closes this channel
           while the accept operation is in progress
 @throw ClosedByInterruptException
 If another thread interrupts the current thread
           while the accept operation is in progress, thereby
           closing the channel and setting the current thread's
           interrupt status
 @throw NotYetBoundException
 If this channel's socket has not yet been bound
 @throw SecurityException
 If a security manager has been installed
           and it does not permit access to the remote endpoint
           of the new connection
 @throw IOException
 If some other I/O error occurs
 */
- (JavaNioChannelsSocketChannel *)accept;

/*!
 @brief Binds the channel's socket to a local address and configures the socket
  to listen for connections.
 <p> An invocation of this method is equivalent to the following: 
 <blockquote>@code

  bind(local, 0); 
  
@endcode</blockquote>
 @param local The local address to bind the socket, or 
 <code>null</code>  to bind           to an automatically assigned socket address
 @return This channel
 @throw AlreadyBoundException
 @throw UnresolvedAddressException
 @throw ClosedChannelException
 @throw IOException
 @throw SecurityException
 If a security manager has been installed and its <code>checkListen</code>
  method denies the
           operation
 @since 1.7
 */
- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

/*!
 @brief Binds the channel's socket to a local address and configures the socket to
  listen for connections.
 <p> This method is used to establish an association between the socket and
  a local address. Once an association is established then the socket remains
  bound until the channel is closed. 
 <p> The <code>backlog</code> parameter is the maximum number of pending
  connections on the socket. Its exact semantics are implementation specific.
  In particular, an implementation may impose a maximum length or may choose
  to ignore the parameter altogther. If the <code>backlog</code> parameter has
  the value <code>0</code>, or a negative value, then an implementation specific
  default is used.
 @param local The address to bind the socket, or 
 <code>null</code>  to bind to an           automatically assigned socket address
 @param backlog The maximum number of pending connections
 @return This channel
 @throw AlreadyBoundException
 If the socket is already bound
 @throw UnsupportedAddressTypeException
 If the type of the given address is not supported
 @throw ClosedChannelException
 If this channel is closed
 @throw IOException
 If some other I/O error occurs
 @throw SecurityException
 If a security manager has been installed and its <code>checkListen</code>
  method denies the
           operation
 @since 1.7
 */
- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local
                                                             withInt:(jint)backlog;

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
 @brief Opens a server-socket channel.
 <p> The new channel is created by invoking the <code>openServerSocketChannel</code>
  method of the system-wide default <code>java.nio.channels.spi.SelectorProvider</code>
  object. 
 <p> The new channel's socket is initially unbound; it must be bound to a
  specific address via one of its socket's <code>bind</code>
  methods before
  connections can be accepted.  </p>
 @return A new socket channel
 @throw IOException
 If an I/O error occurs
 */
+ (JavaNioChannelsServerSocketChannel *)open;

/*!
 @throw UnsupportedOperationException
 @throw IllegalArgumentException
 @throw ClosedChannelException
 @throw IOException
 @since 1.7
 */
- (JavaNioChannelsServerSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)name
                                                                  withId:(id)value;

/*!
 @brief Retrieves a server socket associated with this channel.
 <p> The returned object will not declare any public methods that are not
  declared in the <code>java.net.ServerSocket</code> class.  </p>
 @return A server socket associated with this channel
 */
- (JavaNetServerSocket *)socket;

/*!
 @brief Returns an operation set identifying this channel's supported
  operations.
 <p> Server-socket channels only support the accepting of new
  connections, so this method returns <code>SelectionKey.OP_ACCEPT</code>.
  </p>
 @return The valid-operation set
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 @param provider The provider that created this channel
 */
- (instancetype __nonnull)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsServerSocketChannel)

FOUNDATION_EXPORT void JavaNioChannelsServerSocketChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsServerSocketChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

FOUNDATION_EXPORT JavaNioChannelsServerSocketChannel *JavaNioChannelsServerSocketChannel_open(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsServerSocketChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsServerSocketChannel")
