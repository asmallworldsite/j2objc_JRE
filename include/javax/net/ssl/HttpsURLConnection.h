//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/HttpsURLConnection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslHttpsURLConnection")
#ifdef RESTRICT_JavaxNetSslHttpsURLConnection
#define INCLUDE_ALL_JavaxNetSslHttpsURLConnection 0
#else
#define INCLUDE_ALL_JavaxNetSslHttpsURLConnection 1
#endif
#undef RESTRICT_JavaxNetSslHttpsURLConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslHttpsURLConnection_) && (INCLUDE_ALL_JavaxNetSslHttpsURLConnection || defined(INCLUDE_JavaxNetSslHttpsURLConnection))
#define JavaxNetSslHttpsURLConnection_

#define RESTRICT_JavaNetHttpURLConnection 1
#define INCLUDE_JavaNetHttpURLConnection 1
#include "java/net/HttpURLConnection.h"

@class IOSObjectArray;
@class JavaNetURL;
@class JavaxNetSslSSLSocketFactory;
@protocol JavaSecurityPrincipal;
@protocol JavaxNetSslHostnameVerifier;

/*!
 @brief <code>HttpsURLConnection</code> extends <code>HttpURLConnection</code>
  with support for https-specific features.
 <P>
  See <A HREF="http://www.w3.org/pub/WWW/Protocols/">
  http://www.w3.org/pub/WWW/Protocols/</A> and 
 <A HREF="http://www.ietf.org/"> RFC 2818 </A>
  for more details on the
  https specification. 
 <P>
  This class uses <code>HostnameVerifier</code> and 
 <code>SSLSocketFactory</code>.
  There are default implementations defined for both classes.
  However, the implementations can be replaced on a per-class (static) or
  per-instance basis.  All new <code>HttpsURLConnection</code>s instances
  will be assigned
  the "default" static values at instance creation, but they can be overriden
  by calling the appropriate per-instance set method(s) before 
 <code>connect</code>ing.
 @since 1.4
 */
@interface JavaxNetSslHttpsURLConnection : JavaNetHttpURLConnection {
 @public
  /*!
   @brief The <code>hostnameVerifier</code> for this object.
   */
  id<JavaxNetSslHostnameVerifier> hostnameVerifier_;
}

#pragma mark Public

/*!
 @brief Returns the cipher suite in use on this connection.
 @return the cipher suite
 @throw IllegalStateExceptionif this method is called before
           the connection has been established.
 */
- (NSString *)getCipherSuite;

/*!
 @brief Gets the default <code>HostnameVerifier</code> that is inherited
  by new instances of this class.
 @return the default host name verifier
 - seealso: #setDefaultHostnameVerifier(HostnameVerifier)
 */
+ (id<JavaxNetSslHostnameVerifier>)getDefaultHostnameVerifier;

/*!
 @brief Gets the default static <code>SSLSocketFactory</code> that is
  inherited by new instances of this class.
 <P>
  The socket factories are used when creating sockets for secure
  https URL connections.
 @return the default <code>SSLSocketFactory</code>
 - seealso: #setDefaultSSLSocketFactory(SSLSocketFactory)
 */
+ (JavaxNetSslSSLSocketFactory *)getDefaultSSLSocketFactory;

/*!
 @brief Gets the <code>HostnameVerifier</code> in place on this instance.
 @return the host name verifier
 - seealso: #setHostnameVerifier(HostnameVerifier)
 - seealso: #setDefaultHostnameVerifier(HostnameVerifier)
 */
- (id<JavaxNetSslHostnameVerifier>)getHostnameVerifier;

/*!
 @brief Returns the certificate(s) that were sent to the server during
  handshaking.
 <P>
  Note: This method is useful only when using certificate-based
  cipher suites. 
 <P>
  When multiple certificates are available for use in a
  handshake, the implementation chooses what it considers the
  "best" certificate chain available, and transmits that to
  the other side.  This method allows the caller to know
  which certificate chain was actually sent.
 @return an ordered array of certificates,
           with the client's own certificate first followed by any
           certificate authorities.  If no certificates were sent,
           then null is returned.
 @throw IllegalStateExceptionif this method is called before
           the connection has been established.
 - seealso: #getLocalPrincipal()
 */
- (IOSObjectArray *)getLocalCertificates;

/*!
 @brief Returns the principal that was sent to the server during handshaking.
 <P>
  Note: Subclasses should override this method. If not overridden, it
  will default to returning the X500Principal of the end-entity certificate
  that was sent to the server for certificate-based ciphersuites or,
  return null for non-certificate based ciphersuites, such as Kerberos.
 @return the principal sent to the server. Returns an X500Principal
  of the end-entity certificate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites. If no principal was
  sent, then null is returned.
 @throw IllegalStateExceptionif this method is called before
           the connection has been established.
 - seealso: #getLocalCertificates()
 - seealso: #getPeerPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Returns the server's principal which was established as part of
  defining the session.
 <P>
  Note: Subclasses should override this method. If not overridden, it
  will default to returning the X500Principal of the server's end-entity
  certificate for certificate-based ciphersuites, or throw an
  SSLPeerUnverifiedException for non-certificate based ciphersuites,
  such as Kerberos.
 @return the server's principal. Returns an X500Principal of the
  end-entity certiticate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites.
 @throw SSLPeerUnverifiedExceptionif the peer was not verified
 @throw IllegalStateExceptionif this method is called before
           the connection has been established.
 - seealso: #getServerCertificates()
 - seealso: #getLocalPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Returns the server's certificate chain which was established
  as part of defining the session.
 <P>
  Note: This method can be used only when using certificate-based
  cipher suites; using it with non-certificate-based cipher suites,
  such as Kerberos, will throw an SSLPeerUnverifiedException.
 @return an ordered array of server certificates,
           with the peer's own certificate first followed by
           any certificate authorities.
 @throw SSLPeerUnverifiedExceptionif the peer is not verified.
 @throw IllegalStateExceptionif this method is called before
           the connection has been established.
 - seealso: #getPeerPrincipal()
 */
- (IOSObjectArray *)getServerCertificates;

/*!
 @brief Gets the SSL socket factory to be used when creating sockets
  for secure https URL connections.
 @return the <code>SSLSocketFactory</code>
 - seealso: #setSSLSocketFactory(SSLSocketFactory)
 */
- (JavaxNetSslSSLSocketFactory *)getSSLSocketFactory;

/*!
 @brief Sets the default <code>HostnameVerifier</code> inherited by a
  new instance of this class.
 <p>
  Developers are <em>strongly</em> discouraged from changing the default 
 <code>HostnameVerifier</code> as <code>getDefaultHostnameVerifier()</code> is used by several
  classes for hostname verification on Android. 
 <table>
      <tr>
          <th>User</th>
          <th>Effect</th>
      </tr>
      <tr>
          <td>Android's default <code>TrustManager</code>, as used with Android's default
          <code>SSLContext</code>, <code>SSLSocketFactory</code> and <code>SSLSocket</code> implementations.
          </td>
          <td>The <code>HostnameVerifier</code> is used to verify the peer's
          certificate hostname after connecting if <code>SSLParameters.setEndpointIdentificationAlgorithm("HTTPS")</code>
  has been called.
          Instances use the <em>current</em> default <code>HostnameVerifier</code> at verification
          time.</td>
      </tr>
      <tr>
          <td><code>android.net.SSLCertificateSocketFactory</code></td>
          <td>The current default <code>HostnameVerifier</code> is used from various <code>createSocket</code>
  methods. See <code>android.net.SSLCertificateSocketFactory</code> for
          details; for example <code>android.net.SSLCertificateSocketFactory.createSocket(String, int)</code>
 .
          </td>
      </tr>
      <tr>
          <td>Android's default <code>HttpsURLConnection</code> implementation.</td>
          <td>The <code>HostnameVerifier</code> is used after a successful TLS handshake to verify
          the URI host against the TLS session server. Instances use the default <code>HostnameVerifier</code>
  set <em>when they were created</em> unless overridden with <code>setHostnameVerifier(HostnameVerifier)</code>
 .
          Android's <code>HttpsURLConnection</code> relies on the <code>HostnameVerifier</code>
          for the <em>entire</em> hostname verification step.</td>
      </tr>
  </table>
  <p>
  If this method is not called, the default <code>HostnameVerifier</code> will check the
  hostname according to RFC 2818.
 @param v the default host name verifier
 @throw IllegalArgumentExceptionif the <code>HostnameVerifier</code>
           parameter is null.
 @throw SecurityExceptionif a security manager exists and its
          <code>checkPermission</code> method does not allow
          <code>SSLPermission("setHostnameVerifier")</code>
 - seealso: #getDefaultHostnameVerifier()
 */
+ (void)setDefaultHostnameVerifierWithJavaxNetSslHostnameVerifier:(id<JavaxNetSslHostnameVerifier>)v;

/*!
 @brief Sets the default <code>SSLSocketFactory</code> inherited by new
  instances of this class.
 <P>
  The socket factories are used when creating sockets for secure
  https URL connections.
 @param sf the default SSL socket factory
 @throw IllegalArgumentExceptionif the SSLSocketFactory
           parameter is null.
 @throw SecurityExceptionif a security manager exists and its
          <code>checkSetFactory</code> method does not allow
          a socket factory to be specified.
 - seealso: #getDefaultSSLSocketFactory()
 */
+ (void)setDefaultSSLSocketFactoryWithJavaxNetSslSSLSocketFactory:(JavaxNetSslSSLSocketFactory *)sf;

/*!
 @brief Sets the <code>HostnameVerifier</code> for this instance.
 <P>
  New instances of this class inherit the default static hostname
  verifier set by <code>setDefaultHostnameVerifier</code>
 .  Calls to this method replace
  this object's <code>HostnameVerifier</code>.
  <p>
  Android's <code>HttpsURLConnection</code> relies on the <code>HostnameVerifier</code>
  for the <em>entire</em> hostname verification step.
 @param v the host name verifier
 @throw IllegalArgumentExceptionif the <code>HostnameVerifier</code>
   parameter is null.
 - seealso: #getHostnameVerifier()
 - seealso: #setDefaultHostnameVerifier(HostnameVerifier)
 */
- (void)setHostnameVerifierWithJavaxNetSslHostnameVerifier:(id<JavaxNetSslHostnameVerifier>)v;

/*!
 @brief Sets the <code>SSLSocketFactory</code> to be used when this instance
  creates sockets for secure https URL connections.
 <P>
  New instances of this class inherit the default static 
 <code>SSLSocketFactory</code> set by 
 <code>setDefaultSSLSocketFactory</code>
 .  Calls to this method replace
  this object's <code>SSLSocketFactory</code>.
 @param sf the SSL socket factory
 @throw IllegalArgumentExceptionif the <code>SSLSocketFactory</code>
           parameter is null.
 @throw SecurityExceptionif a security manager exists and its
          <code>checkSetFactory</code> method does not allow
          a socket factory to be specified.
 - seealso: #getSSLSocketFactory()
 */
- (void)setSSLSocketFactoryWithJavaxNetSslSSLSocketFactory:(JavaxNetSslSSLSocketFactory *)sf;

#pragma mark Protected

/*!
 @brief Creates an <code>HttpsURLConnection</code> using the
  URL specified.
 @param url the URL
 */
- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_STATIC_INIT(JavaxNetSslHttpsURLConnection)

J2OBJC_FIELD_SETTER(JavaxNetSslHttpsURLConnection, hostnameVerifier_, id<JavaxNetSslHostnameVerifier>)

FOUNDATION_EXPORT void JavaxNetSslHttpsURLConnection_initWithJavaNetURL_(JavaxNetSslHttpsURLConnection *self, JavaNetURL *url);

FOUNDATION_EXPORT void JavaxNetSslHttpsURLConnection_setDefaultHostnameVerifierWithJavaxNetSslHostnameVerifier_(id<JavaxNetSslHostnameVerifier> v);

FOUNDATION_EXPORT id<JavaxNetSslHostnameVerifier> JavaxNetSslHttpsURLConnection_getDefaultHostnameVerifier(void);

FOUNDATION_EXPORT void JavaxNetSslHttpsURLConnection_setDefaultSSLSocketFactoryWithJavaxNetSslSSLSocketFactory_(JavaxNetSslSSLSocketFactory *sf);

FOUNDATION_EXPORT JavaxNetSslSSLSocketFactory *JavaxNetSslHttpsURLConnection_getDefaultSSLSocketFactory(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHttpsURLConnection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslHttpsURLConnection")
