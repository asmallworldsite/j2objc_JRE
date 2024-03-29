//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SNIServerName.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSNIServerName")
#ifdef RESTRICT_JavaxNetSslSNIServerName
#define INCLUDE_ALL_JavaxNetSslSNIServerName 0
#else
#define INCLUDE_ALL_JavaxNetSslSNIServerName 1
#endif
#undef RESTRICT_JavaxNetSslSNIServerName

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSNIServerName_) && (INCLUDE_ALL_JavaxNetSslSNIServerName || defined(INCLUDE_JavaxNetSslSNIServerName))
#define JavaxNetSslSNIServerName_

@class IOSByteArray;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Instances of this class represent a server name in a Server Name
  Indication (SNI) extension.
 <P>
  The SNI extension is a feature that extends the SSL/TLS protocols to
  indicate what server name the client is attempting to connect to during
  handshaking.  See section 3, "Server Name Indication", of <A HREF="http://www.ietf.org/rfc/rfc6066.txt">
 TLS Extensions (RFC 6066)</A>.
  <P>
  <code>SNIServerName</code> objects are immutable.  Subclasses should not provide
  methods that can change the state of an instance once it has been created.
 - seealso: SSLParameters#getServerNames()
 - seealso: SSLParameters#setServerNames(List)
 @since 1.8
 */
@interface JavaxNetSslSNIServerName : NSObject

#pragma mark Public

/*!
 @brief Indicates whether some other object is "equal to" this server name.
 @return true if, and only if, <code>other</code> is of the same class
          of this object, and has the same name type and
          encoded value as this server name.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns a copy of the encoded server name value of this server name.
 @return a copy of the encoded server name value of this server name
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the name type of this server name.
 @return the name type of this server name
 */
- (jint)getType;

/*!
 @brief Returns a hash code value for this server name.
 <P>
  The hash code value is generated using the name type and encoded
  value of this server name.
 @return a hash code value for this server name.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string representation of this server name, including the server
  name type and the encoded server name value in this 
 <code>SNIServerName</code> object.
 <P>
  The exact details of the representation are unspecified and subject
  to change, but the following may be regarded as typical: 
 @code

      "type=<name type>, value=<name value>"
   
@endcode
  <P>
  In this class, the format of "&lt;name type&gt;" is
  "[LITERAL] (INTEGER)", where the optional "LITERAL" is the literal
  name, and INTEGER is the integer value of the name type.  The format
  of "&lt;name value&gt;" is "XX:...:XX", where "XX" is the
  hexadecimal digit representation of a byte value. For example, a
  returned value of an pseudo server name may look like: 
 @code

      "type=(31), value=77:77:77:2E:65:78:61:6D:70:6C:65:2E:63:6E" 
  
@endcode
  or 
 @code

      "type=host_name (0), value=77:77:77:2E:65:78:61:6D:70:6C:65:2E:63:6E" 
  
@endcode
  
 <P>
  Please NOTE that the exact details of the representation are unspecified
  and subject to change, and subclasses may override the method with
  their own formats.
 @return a string representation of this server name
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Creates an <code>SNIServerName</code> using the specified name type and
  encoded value.
 <P>
  Note that the <code>encoded</code> byte array is cloned to protect against
  subsequent modification.
 @param type the type of the server name
 @param encoded the encoded value of the server name
 @throw IllegalArgumentExceptionif <code>type</code> is not in the range
          of 0 to 255, inclusive.
 @throw NullPointerExceptionif <code>encoded</code> is null
 */
- (instancetype __nonnull)initWithInt:(jint)type
                        withByteArray:(IOSByteArray *)encoded;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxNetSslSNIServerName)

FOUNDATION_EXPORT void JavaxNetSslSNIServerName_initWithInt_withByteArray_(JavaxNetSslSNIServerName *self, jint type, IOSByteArray *encoded);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSNIServerName)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSNIServerName")
