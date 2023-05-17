//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/InterfaceAddress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetInterfaceAddress")
#ifdef RESTRICT_JavaNetInterfaceAddress
#define INCLUDE_ALL_JavaNetInterfaceAddress 0
#else
#define INCLUDE_ALL_JavaNetInterfaceAddress 1
#endif
#undef RESTRICT_JavaNetInterfaceAddress

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetInterfaceAddress_) && (INCLUDE_ALL_JavaNetInterfaceAddress || defined(INCLUDE_JavaNetInterfaceAddress))
#define JavaNetInterfaceAddress_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangShort;
@class JavaNetInet4Address;
@class JavaNetInetAddress;

/*!
 @brief This class represents a Network Interface address.In short it's an
  IP address, a subnet mask and a broadcast address when the address is
  an IPv4 one.
 An IP address and a network prefix length in the case
  of IPv6 address.
 - seealso: java.net.NetworkInterface
 @since 1.6
 */
@interface JavaNetInterfaceAddress : NSObject

#pragma mark Public

/*!
 @brief Compares this object against the specified object.
 The result is <code>true</code> if and only if the argument is
  not <code>null</code> and it represents the same interface address as
  this object. 
 <p>
  Two instances of <code>InterfaceAddress</code> represent the same
  address if the InetAddress, the prefix length and the broadcast are
  the same for both.
 @param obj the object to compare against.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 - seealso: java.net.InterfaceAddress#hashCode()
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns an <code>InetAddress</code> for this address.
 @return the <code>InetAddress</code> for this address.
 */
- (JavaNetInetAddress *)getAddress;

/*!
 @brief Returns an <code>InetAddress</code> for the broadcast address
  for this InterfaceAddress.
 <p>
  Only IPv4 networks have broadcast address therefore, in the case
  of an IPv6 network, <code>null</code> will be returned.
 @return the <code>InetAddress</code> representing the broadcast
          address or <code>null</code> if there is no broadcast address.
 */
- (JavaNetInetAddress *)getBroadcast;

/*!
 @brief Returns the network prefix length for this address.This is also known
  as the subnet mask in the context of IPv4 addresses.
 Typical IPv4 values would be 8 (255.0.0.0), 16 (255.255.0.0)
  or 24 (255.255.255.0). <p>
  Typical IPv6 values would be 128 (::1/128) or 10 (fe80::203:baff:fe27:1243/10)
 @return a <code>short</code> representing the prefix length for the
          subnet of that address.
 */
- (jshort)getNetworkPrefixLength;

/*!
 @brief Returns a hashcode for this Interface address.
 @return a hash code value for this Interface address.
 */
- (NSUInteger)hash;

/*!
 @brief Converts this Interface address to a <code>String</code>.The
  string returned is of the form: InetAddress / prefix length [ broadcast address ].
 @return a string representation of this Interface address.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                             withJavaNetInet4Address:(JavaNetInet4Address *)broadcast
                              withJavaNetInetAddress:(JavaNetInetAddress *)netmask;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInterfaceAddress)

FOUNDATION_EXPORT void JavaNetInterfaceAddress_init(JavaNetInterfaceAddress *self);

FOUNDATION_EXPORT JavaNetInterfaceAddress *new_JavaNetInterfaceAddress_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInterfaceAddress *create_JavaNetInterfaceAddress_init(void);

FOUNDATION_EXPORT void JavaNetInterfaceAddress_initWithJavaNetInetAddress_withJavaNetInet4Address_withJavaNetInetAddress_(JavaNetInterfaceAddress *self, JavaNetInetAddress *address, JavaNetInet4Address *broadcast, JavaNetInetAddress *netmask);

FOUNDATION_EXPORT JavaNetInterfaceAddress *new_JavaNetInterfaceAddress_initWithJavaNetInetAddress_withJavaNetInet4Address_withJavaNetInetAddress_(JavaNetInetAddress *address, JavaNetInet4Address *broadcast, JavaNetInetAddress *netmask) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInterfaceAddress *create_JavaNetInterfaceAddress_initWithJavaNetInetAddress_withJavaNetInet4Address_withJavaNetInetAddress_(JavaNetInetAddress *address, JavaNetInet4Address *broadcast, JavaNetInetAddress *netmask);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInterfaceAddress)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetInterfaceAddress")
