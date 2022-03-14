//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketAddress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketAddress")
#ifdef RESTRICT_JavaNetSocketAddress
#define INCLUDE_ALL_JavaNetSocketAddress 0
#else
#define INCLUDE_ALL_JavaNetSocketAddress 1
#endif
#undef RESTRICT_JavaNetSocketAddress

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetSocketAddress_) && (INCLUDE_ALL_JavaNetSocketAddress || defined(INCLUDE_JavaNetSocketAddress))
#define JavaNetSocketAddress_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief This class represents a Socket Address with no protocol attachment.
 As an abstract class, it is meant to be subclassed with a specific,
  protocol dependent, implementation. 
 <p>
  It provides an immutable object used by sockets for binding, connecting, or
  as returned values.
 - seealso: java.net.Socket
 - seealso: java.net.ServerSocket
 @since 1.4
 */
@interface JavaNetSocketAddress : NSObject < JavaIoSerializable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketAddress)

inline jlong JavaNetSocketAddress_get_serialVersionUID(void);
#define JavaNetSocketAddress_serialVersionUID 5215720748342549866LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetSocketAddress, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNetSocketAddress_init(JavaNetSocketAddress *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketAddress)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketAddress")