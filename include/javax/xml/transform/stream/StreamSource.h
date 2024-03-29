//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/stream/StreamSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformStreamStreamSource")
#ifdef RESTRICT_JavaxXmlTransformStreamStreamSource
#define INCLUDE_ALL_JavaxXmlTransformStreamStreamSource 0
#else
#define INCLUDE_ALL_JavaxXmlTransformStreamStreamSource 1
#endif
#undef RESTRICT_JavaxXmlTransformStreamStreamSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformStreamStreamSource_) && (INCLUDE_ALL_JavaxXmlTransformStreamStreamSource || defined(INCLUDE_JavaxXmlTransformStreamStreamSource))
#define JavaxXmlTransformStreamStreamSource_

#define RESTRICT_JavaxXmlTransformSource 1
#define INCLUDE_JavaxXmlTransformSource 1
#include "javax/xml/transform/Source.h"

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaIoReader;

/*!
 @brief <p>Acts as an holder for a transformation Source in the form
  of a stream of XML markup.
 </p>
  
 <p><em>Note:</em> Due to their internal use of either a <code>Reader</code> or <code>InputStream</code> instance, 
 <code>StreamSource</code> instances may only be used once.</p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 829971 $, $Date: 2009-10-26 14:15:39 -0700 (Mon, 26 Oct 2009) $
 */
@interface JavaxXmlTransformStreamStreamSource : NSObject < JavaxXmlTransformSource >

#pragma mark Public

/*!
 @brief <p>Zero-argument default constructor.If this constructor is used, and
  no Stream source is set using 
 <code>setInputStream(java.io.InputStream inputStream)</code> or 
 <code>setReader(java.io.Reader reader)</code>, then the 
 <code>Transformer</code> will
  create an empty source <code>java.io.InputStream</code> using 
 <code>new InputStream()</code>.
 </p>
 - seealso: javax.xml.transform.Transformer#transform(Source xmlSource, Result outputTarget)
 */
- (instancetype __nonnull)init;

/*!
 @brief Construct a StreamSource from a File.
 @param f Must a non-null File reference.
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)f;

/*!
 @brief Construct a StreamSource from a byte stream.Normally,
  a stream should be used rather than a reader, so
  the XML parser can resolve character encoding specified
  by the XML declaration.
 <p>If this constructor is used to process a stylesheet, normally
  setSystemId should also be called, so that relative URI references
  can be resolved.</p>
 @param inputStream A valid InputStream reference to an XML stream.
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream;

/*!
 @brief Construct a StreamSource from a byte stream.Normally,
  a stream should be used rather than a reader, so that
  the XML parser can resolve character encoding specified
  by the XML declaration.
 <p>This constructor allows the systemID to be set in addition
  to the input stream, which allows relative URIs
  to be processed.</p>
 @param inputStream A valid InputStream reference to an XML stream.
 @param systemId Must be a String that conforms to the URI syntax.
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream
                                       withNSString:(NSString *)systemId;

/*!
 @brief Construct a StreamSource from a character reader.Normally,
  a stream should be used rather than a reader, so that
  the XML parser can resolve character encoding specified
  by the XML declaration.
 However, in many cases the encoding
  of the input stream is already resolved, as in the case of
  reading XML from a StringReader.
 @param reader A valid Reader reference to an XML character stream.
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Construct a StreamSource from a character reader.Normally,
  a stream should be used rather than a reader, so that
  the XML parser may resolve character encoding specified
  by the XML declaration.
 However, in many cases the encoding
  of the input stream is already resolved, as in the case of
  reading XML from a StringReader.
 @param reader A valid Reader reference to an XML character stream.
 @param systemId Must be a String that conforms to the URI syntax.
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)reader
                                  withNSString:(NSString *)systemId;

/*!
 @brief Construct a StreamSource from a URL.
 @param systemId Must be a String that conforms to the URI syntax.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)systemId;

/*!
 @brief Get the byte stream that was set with setByteStream.
 @return The byte stream that was set with setByteStream, or null
  if setByteStream or the ByteStream constructor was not called.
 */
- (JavaIoInputStream *)getInputStream;

/*!
 @brief Get the public identifier that was set with setPublicId.
 @return The public identifier that was set with setPublicId, or null
  if setPublicId was not called.
 */
- (NSString *)getPublicId;

/*!
 @brief Get the character stream that was set with setReader.
 @return The character stream that was set with setReader, or null
  if setReader or the Reader constructor was not called.
 */
- (JavaIoReader *)getReader;

/*!
 @brief Get the system identifier that was set with setSystemId.
 @return The system identifier that was set with setSystemId, or null
  if setSystemId was not called.
 */
- (NSString *)getSystemId;

/*!
 @brief Set the byte stream to be used as input.Normally,
  a stream should be used rather than a reader, so that
  the XML parser can resolve character encoding specified
  by the XML declaration.
 <p>If this Source object is used to process a stylesheet, normally
  setSystemId should also be called, so that relative URL references
  can be resolved.</p>
 @param inputStream A valid InputStream reference to an XML stream.
 */
- (void)setInputStreamWithJavaIoInputStream:(JavaIoInputStream *)inputStream;

/*!
 @brief Set the public identifier for this Source.
 <p>The public identifier is always optional: if the application
  writer includes one, it will be provided as part of the
  location information.</p>
 @param publicId The public identifier as a string.
 */
- (void)setPublicIdWithNSString:(NSString *)publicId;

/*!
 @brief Set the input to be a character reader.Normally,
  a stream should be used rather than a reader, so that
  the XML parser can resolve character encoding specified
  by the XML declaration.
 However, in many cases the encoding
  of the input stream is already resolved, as in the case of
  reading XML from a StringReader.
 @param reader A valid Reader reference to an XML CharacterStream.
 */
- (void)setReaderWithJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Set the system ID from a File reference.
 @param f Must a non-null File reference.
 */
- (void)setSystemIdWithJavaIoFile:(JavaIoFile *)f;

/*!
 @brief Set the system identifier for this Source.
 <p>The system identifier is optional if there is a byte stream
  or a character stream, but it is still useful to provide one,
  since the application can use it to resolve relative URIs
  and can include it in error messages and warnings (the parser
  will attempt to open a connection to the URI only if
  there is no byte stream or character stream specified).</p>
 @param systemId The system identifier as a URL string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformStreamStreamSource)

/*!
 @brief If <code>javax.xml.transform.TransformerFactory.getFeature</code>
  returns true when passed this value as an argument,
  the Transformer supports Source input of this type.
 */
inline NSString *JavaxXmlTransformStreamStreamSource_get_FEATURE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformStreamStreamSource_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformStreamStreamSource, FEATURE, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_init(JavaxXmlTransformStreamStreamSource *self);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_init(void);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_(JavaxXmlTransformStreamStreamSource *self, JavaIoInputStream *inputStream);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_(JavaIoInputStream *inputStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_(JavaIoInputStream *inputStream);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_withNSString_(JavaxXmlTransformStreamStreamSource *self, JavaIoInputStream *inputStream, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inputStream, NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inputStream, NSString *systemId);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_(JavaxXmlTransformStreamStreamSource *self, JavaIoReader *reader);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_(JavaIoReader *reader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_(JavaIoReader *reader);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_withNSString_(JavaxXmlTransformStreamStreamSource *self, JavaIoReader *reader, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_withNSString_(JavaIoReader *reader, NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithJavaIoReader_withNSString_(JavaIoReader *reader, NSString *systemId);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithNSString_(JavaxXmlTransformStreamStreamSource *self, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithNSString_(NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithNSString_(NSString *systemId);

FOUNDATION_EXPORT void JavaxXmlTransformStreamStreamSource_initWithJavaIoFile_(JavaxXmlTransformStreamStreamSource *self, JavaIoFile *f);

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *new_JavaxXmlTransformStreamStreamSource_initWithJavaIoFile_(JavaIoFile *f) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformStreamStreamSource *create_JavaxXmlTransformStreamStreamSource_initWithJavaIoFile_(JavaIoFile *f);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformStreamStreamSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformStreamStreamSource")
