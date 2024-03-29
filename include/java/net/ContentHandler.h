//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/ContentHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetContentHandler")
#ifdef RESTRICT_JavaNetContentHandler
#define INCLUDE_ALL_JavaNetContentHandler 0
#else
#define INCLUDE_ALL_JavaNetContentHandler 1
#endif
#undef RESTRICT_JavaNetContentHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetContentHandler_) && (INCLUDE_ALL_JavaNetContentHandler || defined(INCLUDE_JavaNetContentHandler))
#define JavaNetContentHandler_

@class IOSObjectArray;
@class JavaNetURLConnection;

/*!
 @brief The abstract class <code>ContentHandler</code> is the superclass
  of all classes that read an <code>Object</code> from a 
 <code>URLConnection</code>.
 <p>
  An application does not generally call the 
 <code>getContent</code> method in this class directly. Instead, an
  application calls the <code>getContent</code> method in class 
 <code>URL</code> or in <code>URLConnection</code>.
  The application's content handler factory (an instance of a class that
  implements the interface <code>ContentHandlerFactory</code> set
  up by a call to <code>setContentHandler</code>) is
  called with a <code>String</code> giving the MIME type of the
  object being received on the socket. The factory returns an
  instance of a subclass of <code>ContentHandler</code>, and its 
 <code>getContent</code> method is called to create the object. 
 <p>
  If no content handler could be found, URLConnection will
  look for a content handler in a user-defineable set of places.
  By default it looks in sun.net.www.content, but users can define a
  vertical-bar delimited set of class prefixes to search through in
  addition by defining the java.content.handler.pkgs property.
  The class name must be of the form: 
 @code

      {package-prefix}.{major}.{minor}
  e.g.
      YoyoDyne.experimental.text.plain 
  
@endcode
  If the loading of the content handler class would be performed by
  a classloader that is outside of the delegation chain of the caller,
  the JVM will need the RuntimePermission "getClassLoader".
 @author James Gosling
 - seealso: java.net.ContentHandler#getContent(java.net.URLConnection)
 - seealso: java.net.ContentHandlerFactory
 - seealso: java.net.URL#getContent()
 - seealso: java.net.URLConnection
 - seealso: java.net.URLConnection#getContent()
 - seealso: java.net.URLConnection#setContentHandlerFactory(java.net.ContentHandlerFactory)
 @since JDK1.0
 */
@interface JavaNetContentHandler : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Given a URL connect stream positioned at the beginning of the
  representation of an object, this method reads that stream and
  creates an object from it.
 @param urlc a URL connection.
 @return the object read by the <code>ContentHandler</code>.
 @throw IOExceptionif an I/O error occurs while reading the object.
 */
- (id)getContentWithJavaNetURLConnection:(JavaNetURLConnection *)urlc;

/*!
 @brief Given a URL connect stream positioned at the beginning of the
  representation of an object, this method reads that stream and
  creates an object that matches one of the types specified.
 The default implementation of this method should call getContent()
  and screen the return type for a match of the suggested types.
 @param urlc a URL connection.
 @param classes an array of types requested
 @return the object read by the <code>ContentHandler</code> that is
                  the first match of the suggested types.
                  null if none of the requested  are supported.
 @throw IOExceptionif an I/O error occurs while reading the object.
 @since 1.3
 */
- (id)getContentWithJavaNetURLConnection:(JavaNetURLConnection *)urlc
                       withIOSClassArray:(IOSObjectArray *)classes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetContentHandler)

FOUNDATION_EXPORT void JavaNetContentHandler_init(JavaNetContentHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetContentHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetContentHandler")
