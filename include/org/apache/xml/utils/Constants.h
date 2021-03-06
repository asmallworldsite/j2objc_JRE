//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/Constants.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsConstants")
#ifdef RESTRICT_OrgApacheXmlUtilsConstants
#define INCLUDE_ALL_OrgApacheXmlUtilsConstants 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsConstants 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsConstants

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsConstants_) && (INCLUDE_ALL_OrgApacheXmlUtilsConstants || defined(INCLUDE_OrgApacheXmlUtilsConstants))
#define OrgApacheXmlUtilsConstants_

/*!
 @brief Primary constants used by the XSLT Processor
 */
@interface OrgApacheXmlUtilsConstants : NSObject
@property (readonly, copy, class) NSString *S_XMLNAMESPACEURI NS_SWIFT_NAME(S_XMLNAMESPACEURI);
@property (readonly, copy, class) NSString *S_XSLNAMESPACEURL NS_SWIFT_NAME(S_XSLNAMESPACEURL);
@property (readonly, copy, class) NSString *S_OLDXSLNAMESPACEURL NS_SWIFT_NAME(S_OLDXSLNAMESPACEURL);
@property (readonly, copy, class) NSString *S_VENDOR NS_SWIFT_NAME(S_VENDOR);
@property (readonly, copy, class) NSString *S_VENDORURL NS_SWIFT_NAME(S_VENDORURL);
@property (readonly, copy, class) NSString *S_BUILTIN_EXTENSIONS_URL NS_SWIFT_NAME(S_BUILTIN_EXTENSIONS_URL);
@property (readonly, copy, class) NSString *S_BUILTIN_OLD_EXTENSIONS_URL NS_SWIFT_NAME(S_BUILTIN_OLD_EXTENSIONS_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_OLD_JAVA_URL NS_SWIFT_NAME(S_EXTENSIONS_OLD_JAVA_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_JAVA_URL NS_SWIFT_NAME(S_EXTENSIONS_JAVA_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_LOTUSXSL_JAVA_URL NS_SWIFT_NAME(S_EXTENSIONS_LOTUSXSL_JAVA_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_XALANLIB_URL NS_SWIFT_NAME(S_EXTENSIONS_XALANLIB_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_REDIRECT_URL NS_SWIFT_NAME(S_EXTENSIONS_REDIRECT_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_PIPE_URL NS_SWIFT_NAME(S_EXTENSIONS_PIPE_URL);
@property (readonly, copy, class) NSString *S_EXTENSIONS_SQL_URL NS_SWIFT_NAME(S_EXTENSIONS_SQL_URL);
@property (readonly, copy, class) NSString *S_EXSLT_COMMON_URL NS_SWIFT_NAME(S_EXSLT_COMMON_URL);
@property (readonly, copy, class) NSString *S_EXSLT_MATH_URL NS_SWIFT_NAME(S_EXSLT_MATH_URL);
@property (readonly, copy, class) NSString *S_EXSLT_SETS_URL NS_SWIFT_NAME(S_EXSLT_SETS_URL);
@property (readonly, copy, class) NSString *S_EXSLT_DATETIME_URL NS_SWIFT_NAME(S_EXSLT_DATETIME_URL);
@property (readonly, copy, class) NSString *S_EXSLT_FUNCTIONS_URL NS_SWIFT_NAME(S_EXSLT_FUNCTIONS_URL);
@property (readonly, copy, class) NSString *S_EXSLT_DYNAMIC_URL NS_SWIFT_NAME(S_EXSLT_DYNAMIC_URL);
@property (readonly, copy, class) NSString *S_EXSLT_STRINGS_URL NS_SWIFT_NAME(S_EXSLT_STRINGS_URL);
@property (readonly, class) jdouble XSLTVERSUPPORTED NS_SWIFT_NAME(XSLTVERSUPPORTED);

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsConstants)

/*!
 @brief Mnemonics for standard XML Namespace URIs, as Java Strings: 
 <ul>
  <li>S_XMLNAMESPACEURI (http://www.w3.org/XML/1998/namespace) is the
  URI permanantly assigned to the "xml:" prefix.This is used for some
  features built into the XML specification itself, such as xml:space 
  and xml:lang.
 It was defined by the W3C's XML Namespaces spec.</li>
  <li>S_XSLNAMESPACEURL (http://www.w3.org/1999/XSL/Transform) is the
  URI which indicates that a name may be an XSLT directive. In most
  XSLT stylesheets, this is bound to the "xsl:" prefix. It's defined
  by the W3C's XSLT Recommendation.</li>
  <li>S_OLDXSLNAMESPACEURL (http://www.w3.org/XSL/Transform/1.0) was
  used in early prototypes of XSLT processors for much the same purpose
  as S_XSLNAMESPACEURL. It is now considered obsolete, and the version
  of XSLT which it signified is not fully compatable with the final
  XSLT Recommendation, so what it really signifies is a badly obsolete
  stylesheet.</li>
  </ul>
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_XMLNAMESPACEURI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_XMLNAMESPACEURI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_XMLNAMESPACEURI, NSString *)

/*!
 @brief Mnemonics for standard XML Namespace URIs, as Java Strings: 
 <ul>
  <li>S_XMLNAMESPACEURI (http://www.w3.org/XML/1998/namespace) is the
  URI permanantly assigned to the "xml:" prefix.This is used for some
  features built into the XML specification itself, such as xml:space 
  and xml:lang.
 It was defined by the W3C's XML Namespaces spec.</li>
  <li>S_XSLNAMESPACEURL (http://www.w3.org/1999/XSL/Transform) is the
  URI which indicates that a name may be an XSLT directive. In most
  XSLT stylesheets, this is bound to the "xsl:" prefix. It's defined
  by the W3C's XSLT Recommendation.</li>
  <li>S_OLDXSLNAMESPACEURL (http://www.w3.org/XSL/Transform/1.0) was
  used in early prototypes of XSLT processors for much the same purpose
  as S_XSLNAMESPACEURL. It is now considered obsolete, and the version
  of XSLT which it signified is not fully compatable with the final
  XSLT Recommendation, so what it really signifies is a badly obsolete
  stylesheet.</li>
  </ul>
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_XSLNAMESPACEURL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_XSLNAMESPACEURL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_XSLNAMESPACEURL, NSString *)

/*!
 @brief Mnemonics for standard XML Namespace URIs, as Java Strings: 
 <ul>
  <li>S_XMLNAMESPACEURI (http://www.w3.org/XML/1998/namespace) is the
  URI permanantly assigned to the "xml:" prefix.This is used for some
  features built into the XML specification itself, such as xml:space 
  and xml:lang.
 It was defined by the W3C's XML Namespaces spec.</li>
  <li>S_XSLNAMESPACEURL (http://www.w3.org/1999/XSL/Transform) is the
  URI which indicates that a name may be an XSLT directive. In most
  XSLT stylesheets, this is bound to the "xsl:" prefix. It's defined
  by the W3C's XSLT Recommendation.</li>
  <li>S_OLDXSLNAMESPACEURL (http://www.w3.org/XSL/Transform/1.0) was
  used in early prototypes of XSLT processors for much the same purpose
  as S_XSLNAMESPACEURL. It is now considered obsolete, and the version
  of XSLT which it signified is not fully compatable with the final
  XSLT Recommendation, so what it really signifies is a badly obsolete
  stylesheet.</li>
  </ul>
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_OLDXSLNAMESPACEURL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_OLDXSLNAMESPACEURL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_OLDXSLNAMESPACEURL, NSString *)

/*!
 @brief Authorship mnemonics, as Java Strings.Not standardized, 
  as far as I know.
 <ul>
  <li>S_VENDOR -- the name of the organization/individual who published
  this XSLT processor. </li>
  <li>S_VENDORURL -- URL where one can attempt to retrieve more
  information about this publisher and product.</li>
  </ul>
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_VENDOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_VENDOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_VENDOR, NSString *)

/*!
 @brief Authorship mnemonics, as Java Strings.Not standardized, 
  as far as I know.
 <ul>
  <li>S_VENDOR -- the name of the organization/individual who published
  this XSLT processor. </li>
  <li>S_VENDORURL -- URL where one can attempt to retrieve more
  information about this publisher and product.</li>
  </ul>
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_VENDORURL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_VENDORURL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_VENDORURL, NSString *)

/*!
 @brief S_BUILTIN_EXTENSIONS_URL is a mnemonic for the XML Namespace 
 (http://xml.apache.org/xalan) predefined to signify Xalan's
  built-in XSLT Extensions.When used in stylesheets, this is often 
  bound to the "xalan:" prefix.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_BUILTIN_EXTENSIONS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_BUILTIN_EXTENSIONS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_BUILTIN_EXTENSIONS_URL, NSString *)

/*!
 @brief The old built-in extension url.It is still supported for
  backward compatibility.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_BUILTIN_OLD_EXTENSIONS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_BUILTIN_OLD_EXTENSIONS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_BUILTIN_OLD_EXTENSIONS_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_OLD_JAVA_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_OLD_JAVA_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_OLD_JAVA_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_JAVA_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_JAVA_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_JAVA_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_LOTUSXSL_JAVA_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_LOTUSXSL_JAVA_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_LOTUSXSL_JAVA_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_XALANLIB_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_XALANLIB_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_XALANLIB_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_REDIRECT_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_REDIRECT_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_REDIRECT_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_PIPE_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_PIPE_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_PIPE_URL, NSString *)

/*!
 @brief Xalan extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXTENSIONS_SQL_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXTENSIONS_SQL_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXTENSIONS_SQL_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_COMMON_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_COMMON_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_COMMON_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_MATH_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_MATH_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_MATH_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_SETS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_SETS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_SETS_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_DATETIME_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_DATETIME_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_DATETIME_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_FUNCTIONS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_FUNCTIONS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_FUNCTIONS_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_DYNAMIC_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_DYNAMIC_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_DYNAMIC_URL, NSString *)

/*!
 @brief EXSLT extension namespaces.
 */
inline NSString *OrgApacheXmlUtilsConstants_get_S_EXSLT_STRINGS_URL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsConstants_S_EXSLT_STRINGS_URL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsConstants, S_EXSLT_STRINGS_URL, NSString *)

/*!
 @brief The minimum version of XSLT supported by this processor.
 */
inline jdouble OrgApacheXmlUtilsConstants_get_XSLTVERSUPPORTED(void);
#define OrgApacheXmlUtilsConstants_XSLTVERSUPPORTED 1.0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsConstants, XSLTVERSUPPORTED, jdouble)

FOUNDATION_EXPORT void OrgApacheXmlUtilsConstants_init(OrgApacheXmlUtilsConstants *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsConstants *new_OrgApacheXmlUtilsConstants_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsConstants *create_OrgApacheXmlUtilsConstants_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsConstants)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsConstants")
