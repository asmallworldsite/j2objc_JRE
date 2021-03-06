//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/URI.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsURI")
#ifdef RESTRICT_OrgApacheXmlUtilsURI
#define INCLUDE_ALL_OrgApacheXmlUtilsURI 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsURI 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsURI

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsURI_) && (INCLUDE_ALL_OrgApacheXmlUtilsURI || defined(INCLUDE_OrgApacheXmlUtilsURI))
#define OrgApacheXmlUtilsURI_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief A class to represent a Uniform Resource Identifier (URI).This class
  is designed to handle the parsing of URIs and provide access to
  the various components (scheme, host, port, userinfo, path, query
  string and fragment) that may constitute a URI.
 <p>
  Parsing of a URI specification is done according to the URI
  syntax described in RFC 2396 
 <http://www.ietf.org/rfc/rfc2396.txt?number=2396>. Every URI consists
  of a scheme, followed by a colon (':'), followed by a scheme-specific
  part. For URIs that follow the "generic URI" syntax, the scheme-
  specific part begins with two slashes ("//") and may be followed
  by an authority segment (comprised of user information, host, and
  port), path segment, query segment and fragment. Note that RFC 2396
  no longer specifies the use of the parameters segment and excludes
  the "user:password" syntax as part of the authority segment. If
  "user:password" appears in a URI, the entire user/password string
  is stored as userinfo. 
 <p>
  For URIs that do not follow the "generic URI" syntax (e.g. mailto),
  the entire scheme-specific part is treated as the "path" portion
  of the URI. 
 <p>
  Note that, unlike the java.net.URL class, this class does not provide
  any built-in network access functionality nor does it provide any
  scheme-specific functionality (for example, it does not know a
  default port for a specific scheme). Rather, it only knows the
  grammar and basic set of operations that can be applied to a URI.
 */
@interface OrgApacheXmlUtilsURI : NSObject < JavaIoSerializable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Construct a new and uninitialized URI.
 */
- (instancetype __nonnull)init;

/*!
 @brief Construct a new URI from a URI specification string.If the
  specification follows the "generic URI" syntax, (two slashes
  following the first colon), the specification will be parsed
  accordingly - setting the scheme, userinfo, host,port, path, query
  string and fragment fields as necessary.
 If the specification does
  not follow the "generic URI" syntax, the specification is parsed
  into a scheme and scheme-specific part (stored as the path) only.
 @param p_uriSpec the URI specification string (cannot be null or                   empty)
 @throw MalformedURIExceptionif p_uriSpec violates any syntax
                                    rules
 */
- (instancetype __nonnull)initWithNSString:(NSString *)p_uriSpec;

/*!
 @brief Construct a new URI that does not follow the generic URI syntax.
 Only the scheme and scheme-specific part (stored as the path) are
  initialized.
 @param p_scheme the URI scheme (cannot be null or empty)
 @param p_schemeSpecificPart the scheme-specific part (cannot be                              null or empty)
 @throw MalformedURIExceptionif p_scheme violates any
                                   syntax rules
 */
- (instancetype __nonnull)initWithNSString:(NSString *)p_scheme
                              withNSString:(NSString *)p_schemeSpecificPart;

/*!
 @brief Construct a new URI that follows the generic URI syntax from its
  component parts.Each component is validated for syntax and some
  basic semantic checks are performed as well.
 See the individual
  setter methods for specifics.
 @param p_scheme the URI scheme (cannot be null or empty)
 @param p_userinfo the URI userinfo (cannot be specified if host                    is null)
 @param p_host the hostname or IPv4 address for the URI
 @param p_port the URI port (may be -1 for "unspecified"; cannot                be specified if host is null)
 @param p_path the URI path - if the path contains '?' or '#',                then the query string and/or fragment will be
                 set from the path; however, if the query and
                 fragment are specified both in the path and as
                 separate parameters, an exception is thrown
 @param p_queryString the URI query string (cannot be specified                       if path is null)
 @param p_fragment the URI fragment (cannot be specified if path                    is null)
 @throw MalformedURIExceptionif any of the parameters violates
                                   syntax rules or semantic rules
 */
- (instancetype __nonnull)initWithNSString:(NSString *)p_scheme
                              withNSString:(NSString *)p_userinfo
                              withNSString:(NSString *)p_host
                                   withInt:(jint)p_port
                              withNSString:(NSString *)p_path
                              withNSString:(NSString *)p_queryString
                              withNSString:(NSString *)p_fragment;

/*!
 @brief Construct a new URI that follows the generic URI syntax from its
  component parts.Each component is validated for syntax and some
  basic semantic checks are performed as well.
 See the individual
  setter methods for specifics.
 @param p_scheme the URI scheme (cannot be null or empty)
 @param p_host the hostname or IPv4 address for the URI
 @param p_path the URI path - if the path contains '?' or '#',                then the query string and/or fragment will be
                 set from the path; however, if the query and
                 fragment are specified both in the path and as
                 separate parameters, an exception is thrown
 @param p_queryString the URI query string (cannot be specified                       if path is null)
 @param p_fragment the URI fragment (cannot be specified if path                    is null)
 @throw MalformedURIExceptionif any of the parameters violates
                                   syntax rules or semantic rules
 */
- (instancetype __nonnull)initWithNSString:(NSString *)p_scheme
                              withNSString:(NSString *)p_host
                              withNSString:(NSString *)p_path
                              withNSString:(NSString *)p_queryString
                              withNSString:(NSString *)p_fragment;

/*!
 @brief Construct a new URI from another URI.All fields for this URI are
  set equal to the fields of the URI passed in.
 @param p_other the URI to copy (cannot be null)
 */
- (instancetype __nonnull)initWithOrgApacheXmlUtilsURI:(OrgApacheXmlUtilsURI *)p_other;

/*!
 @brief Construct a new URI from a base URI and a URI specification string.
 The URI specification string may be a relative URI.
 @param p_base the base URI (cannot be null if p_uriSpec is null or                empty)
 @param p_uriSpec the URI specification string (cannot be null or                   empty if p_base is null)
 @throw MalformedURIExceptionif p_uriSpec violates any syntax
                                   rules
 */
- (instancetype __nonnull)initWithOrgApacheXmlUtilsURI:(OrgApacheXmlUtilsURI *)p_base
                                          withNSString:(NSString *)p_uriSpec;

/*!
 @brief Append to the end of the path of this URI.If the current path does
  not end in a slash and the path to be appended does not begin with
  a slash, a slash will be appended to the current path before the
  new segment is added.
 Also, if the current path ends in a slash
  and the new segment begins with a slash, the extra slash will be
  removed before the new segment is appended.
 @param p_addToPath the new segment to be added to the current path
 @throw MalformedURIExceptionif p_addToPath contains syntax
                                   errors
 */
- (void)appendPathWithNSString:(NSString *)p_addToPath;

/*!
 @brief Determines if the passed-in Object is equivalent to this URI.
 @param p_test the Object to test for equality.
 @return true if p_test is a URI with all values equal to this
          URI, false otherwise
 */
- (jboolean)isEqual:(id)p_test;

/*!
 @brief Get the fragment for this URI.
 @return the fragment for this URI. Null is returned if there
          was no "#" in the URI spec, empty string if there was a
          "#" but no fragment following it.
 */
- (NSString *)getFragment;

/*!
 @brief Get the host for this URI.
 @return the host for this URI (null if not specified).
 */
- (NSString *)getHost;

/*!
 @brief Get the path for this URI.Note that the value returned is the path
  only and does not include the query string or fragment.
 @return the path for this URI.
 */
- (NSString *)getPath;

/*!
 @brief Get the path for this URI (optionally with the query string and
  fragment).
 @param p_includeQueryString if true (and query string is not null),                              then a "?" followed by the query string
                               will be appended
 @param p_includeFragment if true (and fragment is not null),                              then a "#" followed by the fragment
                               will be appended
 @return the path for this URI possibly including the query string
          and fragment
 */
- (NSString *)getPathWithBoolean:(jboolean)p_includeQueryString
                     withBoolean:(jboolean)p_includeFragment;

/*!
 @brief Get the port for this URI.
 @return the port for this URI (-1 if not specified).
 */
- (jint)getPort;

/*!
 @brief Get the query string for this URI.
 @return the query string for this URI. Null is returned if there
          was no "?" in the URI spec, empty string if there was a
          "?" but no query string following it.
 */
- (NSString *)getQueryString;

/*!
 @brief Get the scheme for this URI.
 @return the scheme for this URI
 */
- (NSString *)getScheme;

/*!
 @brief Get the scheme-specific part for this URI (everything following the
  scheme and the first colon).See RFC 2396 Section 5.2 for spec.
 @return the scheme-specific part for this URI
 */
- (NSString *)getSchemeSpecificPart;

/*!
 @brief Get the userinfo for this URI.
 @return the userinfo for this URI (null if not specified).
 */
- (NSString *)getUserinfo;

/*!
 @brief Determine whether a scheme conforms to the rules for a scheme name.
 A scheme is conformant if it starts with an alphanumeric, and
  contains only alphanumerics, '+','-' and '.'.
 @param p_scheme The sheme name to check
 @return true if the scheme is conformant, false otherwise
 */
+ (jboolean)isConformantSchemeNameWithNSString:(NSString *)p_scheme;

/*!
 @brief Get the indicator as to whether this URI uses the "generic URI"
  syntax.
 @return true if this URI uses the "generic URI" syntax, false
          otherwise
 */
- (jboolean)isGenericURI;

/*!
 @brief Determine whether a string is syntactically capable of representing
  a valid IPv4 address or the domain name of a network host.A valid
  IPv4 address consists of four decimal digit groups separated by a
  '.'.
 A hostname consists of domain labels (each of which must
  begin and end with an alphanumeric but may contain '-') separated 
 & by a '.'. See RFC 2396 Section 3.2.2.
 @param p_address The address string to check
 @return true if the string is a syntactically valid IPv4 address
               or hostname
 */
+ (jboolean)isWellFormedAddressWithNSString:(NSString *)p_address;

/*!
 @brief Set the fragment for this URI.A non-null value is valid only
  if this is a URI conforming to the generic URI syntax and
  the path value is not null.
 @param p_fragment the fragment for this URI
 @throw MalformedURIExceptionif p_fragment is not null and this
                                   URI does not conform to the generic
                                   URI syntax or if the path is null
 */
- (void)setFragmentWithNSString:(NSString *)p_fragment;

/*!
 @brief Set the host for this URI.If null is passed in, the userinfo
  field is also set to null and the port is set to -1.
 @param p_host the host for this URI
 @throw MalformedURIExceptionif p_host is not a valid IP
                                   address or DNS hostname.
 */
- (void)setHostWithNSString:(NSString *)p_host;

/*!
 @brief Set the path for this URI.If the supplied path is null, then the
  query string and fragment are set to null as well.
 If the supplied
  path includes a query string and/or fragment, these fields will be
  parsed and set as well. Note that, for URIs following the "generic
  URI" syntax, the path specified should start with a slash.
  For URIs that do not follow the generic URI syntax, this method
  sets the scheme-specific part.
 @param p_path the path for this URI (may be null)
 @throw MalformedURIExceptionif p_path contains invalid
                                   characters
 */
- (void)setPathWithNSString:(NSString *)p_path;

/*!
 @brief Set the port for this URI.-1 is used to indicate that the port is
  not specified, otherwise valid port numbers are  between 0 and 65535.
 If a valid port number is passed in and the host field is null,
  an exception is thrown.
 @param p_port the port number for this URI
 @throw MalformedURIExceptionif p_port is not -1 and not a
                                   valid port number
 */
- (void)setPortWithInt:(jint)p_port;

/*!
 @brief Set the query string for this URI.A non-null value is valid only
  if this is an URI conforming to the generic URI syntax and
  the path value is not null.
 @param p_queryString the query string for this URI
 @throw MalformedURIExceptionif p_queryString is not null and this
                                   URI does not conform to the generic
                                   URI syntax or if the path is null
 */
- (void)setQueryStringWithNSString:(NSString *)p_queryString;

/*!
 @brief Set the scheme for this URI.The scheme is converted to lowercase
  before it is set.
 @param p_scheme the scheme for this URI (cannot be null)
 @throw MalformedURIExceptionif p_scheme is not a conformant
                                   scheme name
 */
- (void)setSchemeWithNSString:(NSString *)p_scheme;

/*!
 @brief Set the userinfo for this URI.If a non-null value is passed in and
  the host value is null, then an exception is thrown.
 @param p_userinfo the userinfo for this URI
 @throw MalformedURIExceptionif p_userinfo contains invalid
                                   characters
 */
- (void)setUserinfoWithNSString:(NSString *)p_userinfo;

/*!
 @brief Get the URI as a string specification.See RFC 2396 Section 5.2.
 @return the URI string specification
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsURI)

inline jlong OrgApacheXmlUtilsURI_get_serialVersionUID(void);
#define OrgApacheXmlUtilsURI_serialVersionUID 7096266377907081897LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsURI, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_init(OrgApacheXmlUtilsURI *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_(OrgApacheXmlUtilsURI *self, OrgApacheXmlUtilsURI *p_other);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_(OrgApacheXmlUtilsURI *p_other) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_(OrgApacheXmlUtilsURI *p_other);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithNSString_(OrgApacheXmlUtilsURI *self, NSString *p_uriSpec);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithNSString_(NSString *p_uriSpec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithNSString_(NSString *p_uriSpec);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_withNSString_(OrgApacheXmlUtilsURI *self, OrgApacheXmlUtilsURI *p_base, NSString *p_uriSpec);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_withNSString_(OrgApacheXmlUtilsURI *p_base, NSString *p_uriSpec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithOrgApacheXmlUtilsURI_withNSString_(OrgApacheXmlUtilsURI *p_base, NSString *p_uriSpec);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithNSString_withNSString_(OrgApacheXmlUtilsURI *self, NSString *p_scheme, NSString *p_schemeSpecificPart);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithNSString_withNSString_(NSString *p_scheme, NSString *p_schemeSpecificPart) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithNSString_withNSString_(NSString *p_scheme, NSString *p_schemeSpecificPart);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(OrgApacheXmlUtilsURI *self, NSString *p_scheme, NSString *p_host, NSString *p_path, NSString *p_queryString, NSString *p_fragment);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(NSString *p_scheme, NSString *p_host, NSString *p_path, NSString *p_queryString, NSString *p_fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(NSString *p_scheme, NSString *p_host, NSString *p_path, NSString *p_queryString, NSString *p_fragment);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(OrgApacheXmlUtilsURI *self, NSString *p_scheme, NSString *p_userinfo, NSString *p_host, jint p_port, NSString *p_path, NSString *p_queryString, NSString *p_fragment);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *new_OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(NSString *p_scheme, NSString *p_userinfo, NSString *p_host, jint p_port, NSString *p_path, NSString *p_queryString, NSString *p_fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI *create_OrgApacheXmlUtilsURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(NSString *p_scheme, NSString *p_userinfo, NSString *p_host, jint p_port, NSString *p_path, NSString *p_queryString, NSString *p_fragment);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsURI_isConformantSchemeNameWithNSString_(NSString *p_scheme);

FOUNDATION_EXPORT jboolean OrgApacheXmlUtilsURI_isWellFormedAddressWithNSString_(NSString *p_address);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsURI)

#endif

#if !defined (OrgApacheXmlUtilsURI_MalformedURIException_) && (INCLUDE_ALL_OrgApacheXmlUtilsURI || defined(INCLUDE_OrgApacheXmlUtilsURI_MalformedURIException))
#define OrgApacheXmlUtilsURI_MalformedURIException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief MalformedURIExceptions are thrown in the process of building a URI
  or setting fields on a URI when an operation would result in an
  invalid URI specification.
 */
@interface OrgApacheXmlUtilsURI_MalformedURIException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>MalformedURIException</code> with no specified
  detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>MalformedURIException</code> with the
  specified detail message.
 @param p_msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)p_msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsURI_MalformedURIException)

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_MalformedURIException_init(OrgApacheXmlUtilsURI_MalformedURIException *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI_MalformedURIException *new_OrgApacheXmlUtilsURI_MalformedURIException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI_MalformedURIException *create_OrgApacheXmlUtilsURI_MalformedURIException_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsURI_MalformedURIException_initWithNSString_(OrgApacheXmlUtilsURI_MalformedURIException *self, NSString *p_msg);

FOUNDATION_EXPORT OrgApacheXmlUtilsURI_MalformedURIException *new_OrgApacheXmlUtilsURI_MalformedURIException_initWithNSString_(NSString *p_msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsURI_MalformedURIException *create_OrgApacheXmlUtilsURI_MalformedURIException_initWithNSString_(NSString *p_msg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsURI_MalformedURIException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsURI")
