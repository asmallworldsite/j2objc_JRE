//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URLStreamHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLStreamHandler")
#ifdef RESTRICT_JavaNetURLStreamHandler
#define INCLUDE_ALL_JavaNetURLStreamHandler 0
#else
#define INCLUDE_ALL_JavaNetURLStreamHandler 1
#endif
#undef RESTRICT_JavaNetURLStreamHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetURLStreamHandler_) && (INCLUDE_ALL_JavaNetURLStreamHandler || defined(INCLUDE_JavaNetURLStreamHandler))
#define JavaNetURLStreamHandler_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaNetInetAddress;
@class JavaNetProxy;
@class JavaNetURL;
@class JavaNetURLConnection;

/*!
 @brief The abstract class <code>URLStreamHandler</code> is the common
  superclass for all stream protocol handlers.A stream protocol
  handler knows how to make a connection for a particular protocol
  type, such as <code>http</code> or <code>https</code>.
 <p>
  In most cases, an instance of a <code>URLStreamHandler</code>
  subclass is not created directly by an application. Rather, the
  first time a protocol name is encountered when constructing a 
 <code>URL</code>, the appropriate stream protocol handler is
  automatically loaded.
 @author James Gosling
 - seealso: java.net.URL#URL(java.lang.String, java.lang.String, int, java.lang.String)
 @since JDK1.0
 */
@interface JavaNetURLStreamHandler : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

/*!
 @brief Provides the default equals calculation.May be overidden by handlers
  for other protocols that have different requirements for equals().
 This method requires that none of its arguments is null. This is
  guaranteed by the fact that it is only called by java.net.URL class.
 @param u1 a URL object
 @param u2 a URL object
 @return <code>true</code> if the two urls are
  considered equal, ie. they refer to the same
  fragment in the same file.
 @since 1.3
 */
- (jboolean)equalsWithJavaNetURL:(JavaNetURL *)u1
                  withJavaNetURL:(JavaNetURL *)u2;

/*!
 @brief Returns the default port for a URL parsed by this handler.This method
  is meant to be overidden by handlers with default port numbers.
 @return the default port for a <code>URL</code> parsed by this handler.
 @since 1.3
 */
- (jint)getDefaultPort;

/*!
 @brief Get the IP address of our host.An empty host field or a DNS failure
  will result in a null return.
 @param u a URL object
 @return an <code>InetAddress</code> representing the host
  IP address.
 @since 1.3
 */
- (JavaNetInetAddress *)getHostAddressWithJavaNetURL:(JavaNetURL *)u;

/*!
 @brief Provides the default hash calculation.May be overidden by handlers for
  other protocols that have different requirements for hashCode
  calculation.
 @param u a URL object
 @return an <code>int</code> suitable for hash table indexing
 @since 1.3
 */
- (jint)hashCodeWithJavaNetURL:(JavaNetURL *)u;

/*!
 @brief Compares the host components of two URLs.
 @param u1 the URL of the first host to compare
 @param u2 the URL of the second host to compare
 @return <code>true</code> if and only if they
  are equal, <code>false</code> otherwise.
 @since 1.3
 */
- (jboolean)hostsEqualWithJavaNetURL:(JavaNetURL *)u1
                      withJavaNetURL:(JavaNetURL *)u2;

/*!
 @brief Opens a connection to the object referenced by the 
 <code>URL</code> argument.
 This method should be overridden by a subclass. 
 <p>If for the handler's protocol (such as HTTP or JAR), there
  exists a public, specialized URLConnection subclass belonging
  to one of the following packages or one of their subpackages:
  java.lang, java.io, java.util, java.net, the connection
  returned will be of that subclass. For example, for HTTP an
  HttpURLConnection will be returned, and for JAR a
  JarURLConnection will be returned.
 @param u the URL that this connects to.
 @return a <code>URLConnection</code> object for the <code>URL</code>.
 @throw IOExceptionif an I/O error occurs while opening the
                connection.
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)u;

/*!
 @brief Same as openConnection(URL), except that the connection will be
  made through the specified proxy; Protocol handlers that do not
  support proxying will ignore the proxy parameter and make a
  normal connection.
 Calling this method preempts the system's default ProxySelector
  settings.
 @param u the URL that this connects to.
 @param p the proxy through which the connection will be made.                  If direct connection is desired, Proxy.NO_PROXY
                   should be specified.
 @return a <code>URLConnection</code> object for the <code>URL</code>.
 @throw IOExceptionif an I/O error occurs while opening the
                connection.
 @throw IllegalArgumentExceptionif either u or p is null,
                or p has the wrong type.
 @throw UnsupportedOperationExceptionif the subclass that
                implements the protocol doesn't support this method.
 @since 1.5
 */
- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)u
                                      withJavaNetProxy:(JavaNetProxy *)p;

/*!
 @brief Parses the string representation of a <code>URL</code> into a 
 <code>URL</code> object.
 <p>
  If there is any inherited context, then it has already been
  copied into the <code>URL</code> argument. 
 <p>
  The <code>parseURL</code> method of <code>URLStreamHandler</code>
  parses the string representation as if it were an 
 <code>http</code> specification. Most URL protocol families have a
  similar parsing. A stream protocol handler for a protocol that has
  a different syntax must override this routine.
 @param u the <code>URL</code>  to receive the result of parsing                   the spec.
 @param spec the <code>String</code>  representing the URL that                   must be parsed.
 @param start the character index at which to begin parsing. This is                   just past the '
 <code>:</code> ' (if there is one) that                   specifies the determination of the protocol name.
 @param limit the character position to stop parsing at. This is the                   end of the string or the position of the
                    "
 <code>#</code> " character, if present. All information                   after the sharp sign indicates an anchor.
 */
- (void)parseURLWithJavaNetURL:(JavaNetURL *)u
                  withNSString:(NSString *)spec
                       withInt:(jint)start
                       withInt:(jint)limit;

/*!
 @brief Compare two urls to see whether they refer to the same file,
  i.e., having the same protocol, host, port, and path.
 This method requires that none of its arguments is null. This is
  guaranteed by the fact that it is only called indirectly
  by java.net.URL class.
 @param u1 a URL object
 @param u2 a URL object
 @return true if u1 and u2 refer to the same file
 @since 1.3
 */
- (jboolean)sameFileWithJavaNetURL:(JavaNetURL *)u1
                    withJavaNetURL:(JavaNetURL *)u2;

/*!
 @brief Sets the fields of the <code>URL</code> argument to the indicated values.
 Only classes derived from URLStreamHandler are able
  to use this method to set the values of the URL fields.
 @param u the URL to modify.
 @param protocol the protocol name. This value is ignored since 1.2.
 @param host the remote host value for the URL.
 @param port the port on the remote machine.
 @param file the file.
 @param ref the reference.
 @throw SecurityExceptionif the protocol handler of the URL is
                                   different from this one
 */
- (void)setURLWithJavaNetURL:(JavaNetURL *)u
                withNSString:(NSString *)protocol
                withNSString:(NSString *)host
                     withInt:(jint)port
                withNSString:(NSString *)file
                withNSString:(NSString *)ref;

/*!
 @brief Sets the fields of the <code>URL</code> argument to the indicated values.
 Only classes derived from URLStreamHandler are able
  to use this method to set the values of the URL fields.
 @param u the URL to modify.
 @param protocol the protocol name.
 @param host the remote host value for the URL.
 @param port the port on the remote machine.
 @param authority the authority part for the URL.
 @param userInfo the userInfo part of the URL.
 @param path the path component of the URL.
 @param query the query part for the URL.
 @param ref the reference.
 @throw SecurityExceptionif the protocol handler of the URL is
                                   different from this one
 - seealso: java.net.URL#set(java.lang.String, java.lang.String, int, java.lang.String, java.lang.String)
 @since 1.3
 */
- (void)setURLWithJavaNetURL:(JavaNetURL *)u
                withNSString:(NSString *)protocol
                withNSString:(NSString *)host
                     withInt:(jint)port
                withNSString:(NSString *)authority
                withNSString:(NSString *)userInfo
                withNSString:(NSString *)path
                withNSString:(NSString *)query
                withNSString:(NSString *)ref;

/*!
 @brief Converts a <code>URL</code> of a specific protocol to a 
 <code>String</code>.
 @param u the URL.
 @return a string representation of the <code>URL</code> argument.
 */
- (NSString *)toExternalFormWithJavaNetURL:(JavaNetURL *)u;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLStreamHandler)

FOUNDATION_EXPORT void JavaNetURLStreamHandler_init(JavaNetURLStreamHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLStreamHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetURLStreamHandler")
