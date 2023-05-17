//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URLStreamHandlerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLStreamHandlerFactory")
#ifdef RESTRICT_JavaNetURLStreamHandlerFactory
#define INCLUDE_ALL_JavaNetURLStreamHandlerFactory 0
#else
#define INCLUDE_ALL_JavaNetURLStreamHandlerFactory 1
#endif
#undef RESTRICT_JavaNetURLStreamHandlerFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetURLStreamHandlerFactory_) && (INCLUDE_ALL_JavaNetURLStreamHandlerFactory || defined(INCLUDE_JavaNetURLStreamHandlerFactory))
#define JavaNetURLStreamHandlerFactory_

@class JavaNetURLStreamHandler;

/*!
 @brief This interface defines a factory for <code>URL</code> stream
  protocol handlers.
 <p>
  It is used by the <code>URL</code> class to create a 
 <code>URLStreamHandler</code> for a specific protocol.
 @author Arthur van Hoff
 - seealso: java.net.URL
 - seealso: java.net.URLStreamHandler
 @since JDK1.0
 */
@protocol JavaNetURLStreamHandlerFactory < JavaObject >

/*!
 @brief Creates a new <code>URLStreamHandler</code> instance with the specified
  protocol.
 @param protocol the protocol ("<code>ftp</code> ",                      "
 <code>http</code> ", "<code>nntp</code> ", etc.).
 @return a <code>URLStreamHandler</code> for the specific protocol.
 - seealso: java.net.URLStreamHandler
 */
- (JavaNetURLStreamHandler *)createURLStreamHandlerWithNSString:(NSString *)protocol;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLStreamHandlerFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLStreamHandlerFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetURLStreamHandlerFactory")
