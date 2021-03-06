//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FileReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileReader")
#ifdef RESTRICT_JavaIoFileReader
#define INCLUDE_ALL_JavaIoFileReader 0
#else
#define INCLUDE_ALL_JavaIoFileReader 1
#endif
#undef RESTRICT_JavaIoFileReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoFileReader_) && (INCLUDE_ALL_JavaIoFileReader || defined(INCLUDE_JavaIoFileReader))
#define JavaIoFileReader_

#define RESTRICT_JavaIoInputStreamReader 1
#define INCLUDE_JavaIoInputStreamReader 1
#include "java/io/InputStreamReader.h"

@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetDecoder;

/*!
 @brief Convenience class for reading character files.The constructors of this
  class assume that the default character encoding and the default byte-buffer
  size are appropriate.
 To specify these values yourself, construct an
  InputStreamReader on a FileInputStream. 
 <p><code>FileReader</code> is meant for reading streams of characters.
  For reading streams of raw bytes, consider using a 
 <code>FileInputStream</code>.
 - seealso: InputStreamReader
 - seealso: FileInputStream
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoFileReader : JavaIoInputStreamReader

#pragma mark Public

/*!
 @brief Creates a new <tt>FileReader</tt>, given the <tt>File</tt>
  to read from.
 @param file the  <tt> File </tt>  to read from
 @throw FileNotFoundExceptionif the file does not exist,
                    is a directory rather than a regular file,
                    or for some other reason cannot be opened for
                    reading.
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Creates a new <tt>FileReader</tt>, given the 
 <tt>FileDescriptor</tt> to read from.
 @param fd the FileDescriptor to read from
 */
- (instancetype __nonnull)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Creates a new <tt>FileReader</tt>, given the name of the
  file to read from.
 @param fileName the name of the file to read from
 @throw FileNotFoundExceptionif the named file does not exist,
                    is a directory rather than a regular file,
                    or for some other reason cannot be opened for
                    reading.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)fileName;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                   withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                                       withNSString:(NSString *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileReader)

FOUNDATION_EXPORT void JavaIoFileReader_initWithNSString_(JavaIoFileReader *self, NSString *fileName);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithNSString_(NSString *fileName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithNSString_(NSString *fileName);

FOUNDATION_EXPORT void JavaIoFileReader_initWithJavaIoFile_(JavaIoFileReader *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileReader *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaIoFileReader *new_JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileReader *create_JavaIoFileReader_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileReader")
