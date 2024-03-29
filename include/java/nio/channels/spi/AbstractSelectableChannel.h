//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/spi/AbstractSelectableChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel")
#ifdef RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsSpiAbstractSelectableChannel_) && (INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel || defined(INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel))
#define JavaNioChannelsSpiAbstractSelectableChannel_

#define RESTRICT_JavaNioChannelsSelectableChannel 1
#define INCLUDE_JavaNioChannelsSelectableChannel 1
#include "java/nio/channels/SelectableChannel.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief Base implementation class for selectable channels.
 <p> This class defines methods that handle the mechanics of channel
  registration, deregistration, and closing.  It maintains the current
  blocking mode of this channel as well as its current set of selection keys.
  It performs all of the synchronization required to implement the <code>java.nio.channels.SelectableChannel</code>
  specification.  Implementations of the
  abstract protected methods defined in this class need not synchronize
  against other threads that might be engaged in the same operations.  </p>
 @author Mark Reinhold
 @author Mike McCloskey
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioChannelsSpiAbstractSelectableChannel : JavaNioChannelsSelectableChannel

#pragma mark Public

- (id)blockingLock;

/*!
 @brief Adjusts this channel's blocking mode.
 <p> If the given blocking mode is different from the current blocking
  mode then this method invokes the <code>implConfigureBlocking</code>
  method, while holding the appropriate locks, in
  order to change the mode.  </p>
 */
- (JavaNioChannelsSelectableChannel *)configureBlockingWithBoolean:(jboolean)block;

- (jboolean)isBlocking;

- (jboolean)isRegistered;

- (JavaNioChannelsSelectionKey *)keyForWithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel;

/*!
 @brief Returns the provider that created this channel.
 @return The provider that created this channel
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Registers this channel with the given selector, returning a selection key.
 <p>  This method first verifies that this channel is open and that the
  given initial interest set is valid. 
 <p> If this channel is already registered with the given selector then
  the selection key representing that registration is returned after
  setting its interest set to the given value. 
 <p> Otherwise this channel has not yet been registered with the given
  selector, so the <code>register</code> method of
  the selector is invoked while holding the appropriate locks.  The
  resulting key is added to this channel's key set before being returned. 
 </p>
 @throw ClosedSelectorException
 @throw IllegalBlockingModeException
 @throw IllegalSelectorException
 @throw CancelledKeyException
 @throw IllegalArgumentException
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel
                                                               withInt:(jint)ops
                                                                withId:(id)att;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 @param provider The provider that created this channel
 */
- (instancetype __nonnull)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Closes this channel.
 <p> This method, which is specified in the <code>AbstractInterruptibleChannel</code>
  class and is invoked by the <code>close</code>
  method, in turn invokes the 
 <code>implCloseSelectableChannel</code> method in
  order to perform the actual work of closing this channel.  It then
  cancels all of this channel's keys.  </p>
 */
- (void)implCloseChannel;

/*!
 @brief Closes this selectable channel.
 <p> This method is invoked by the <code>close</code>
  method in order to perform the actual work of closing the
  channel.  This method is only invoked if the channel has not yet been
  closed, and it is never invoked more than once. 
 <p> An implementation of this method must arrange for any other thread
  that is blocked in an I/O operation upon this channel to return
  immediately, either by throwing an exception or by returning normally. 
 </p>
 @throw IOException
 If an I/O error occurs
 */
- (void)implCloseSelectableChannel;

/*!
 @brief Adjusts this channel's blocking mode.
 <p> This method is invoked by the <code>configureBlocking</code>
  method in order to perform the actual work of
  changing the blocking mode.  This method is only invoked if the new mode
  is different from the current mode.  </p>
 @param block If <code>true</code>  then this channel will be placed in                 blocking mode; if 
 <code>false</code>  then it will be placed                 non-blocking mode
 @throw IOException
 If an I/O error occurs
 */
- (void)implConfigureBlockingWithBoolean:(jboolean)block;

#pragma mark Package-Private

- (void)removeKeyWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)k;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelectableChannel)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelectableChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiAbstractSelectableChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelectableChannel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel")
