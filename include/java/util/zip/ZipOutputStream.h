//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/ZipOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipOutputStream")
#ifdef RESTRICT_JavaUtilZipZipOutputStream
#define INCLUDE_ALL_JavaUtilZipZipOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipZipOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipZipOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilZipZipOutputStream_) && (INCLUDE_ALL_JavaUtilZipZipOutputStream || defined(INCLUDE_JavaUtilZipZipOutputStream))
#define JavaUtilZipZipOutputStream_

#define RESTRICT_JavaUtilZipDeflaterOutputStream 1
#define INCLUDE_JavaUtilZipDeflaterOutputStream 1
#include "java/util/zip/DeflaterOutputStream.h"

#define RESTRICT_JavaUtilZipZipConstants 1
#define INCLUDE_JavaUtilZipZipConstants 1
#include "java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaNioCharsetCharset;
@class JavaUtilZipDeflater;
@class JavaUtilZipZipEntry;

/*!
 @brief This class implements an output stream filter for writing files in the
  ZIP file format.Includes support for both compressed and uncompressed
  entries.
 @author David Connelly
 */
@interface JavaUtilZipZipOutputStream : JavaUtilZipDeflaterOutputStream < JavaUtilZipZipConstants >

#pragma mark Public

/*!
 @brief Creates a new ZIP output stream.
 <p>The UTF-8 <code>charset</code> is used
  to encode the entry names and comments.
 @param outArg the actual output stream
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Creates a new ZIP output stream.
 @param outArg the actual output stream
 @param charset the charset                 to be used to encode the entry names and comments
 @since 1.7
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Closes the ZIP output stream as well as the stream being filtered.
 @throw ZipExceptionif a ZIP file error has occurred
 @throw IOExceptionif an I/O error has occurred
 */
- (void)close;

/*!
 @brief Closes the current ZIP entry and positions the stream for writing
  the next entry.
 @throw ZipExceptionif a ZIP format error has occurred
 @throw IOExceptionif an I/O error has occurred
 */
- (void)closeEntry;

/*!
 @brief Finishes writing the contents of the ZIP output stream without closing
  the underlying stream.Use this method when applying multiple filters
  in succession to the same output stream.
 @throw ZipExceptionif a ZIP file error has occurred
 @throw IOExceptionif an I/O exception has occurred
 */
- (void)finish;

/*!
 @brief Begins writing a new ZIP file entry and positions the stream to the
  start of the entry data.Closes the current entry if still active.
 The default compression method will be used if no compression method
  was specified for the entry, and the current time will be used if
  the entry has no set modification time.
 @param e the ZIP entry to be written
 @throw ZipExceptionif a ZIP format error has occurred
 @throw IOExceptionif an I/O error has occurred
 */
- (void)putNextEntryWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)e;

/*!
 @brief Sets the ZIP file comment.
 @param comment the comment string
 @throw IllegalArgumentExceptionif the length of the specified
             ZIP file comment is greater than 0xFFFF bytes
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Sets the compression level for subsequent entries which are DEFLATED.
 The default setting is DEFAULT_COMPRESSION.
 @param level the compression level (0-9)
 @throw IllegalArgumentExceptionif the compression level is invalid
 */
- (void)setLevelWithInt:(jint)level;

/*!
 @brief Sets the default compression method for subsequent entries.This
  default will be used whenever the compression method is not specified
  for an individual ZIP file entry, and is initially set to DEFLATED.
 @param method the default compression method
 @throw IllegalArgumentExceptionif the specified compression method
             is invalid
 */
- (void)setMethodWithInt:(jint)method;

/*!
 @brief Writes an array of bytes to the current ZIP entry data.This method
  will block until all the bytes are written.
 @param b the data to be written
 @param off the start offset in the data
 @param len the number of bytes that are written
 @throw ZipExceptionif a ZIP file error has occurred
 @throw IOExceptionif an I/O error has occurred
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                                         withBoolean:(jboolean)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                         withBoolean:(jboolean)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                             withInt:(jint)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0
                             withJavaUtilZipDeflater:(JavaUtilZipDeflater *)arg1
                                             withInt:(jint)arg2
                                         withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipOutputStream)

/*!
 @brief Compression method for uncompressed (STORED) entries.
 */
inline jint JavaUtilZipZipOutputStream_get_STORED(void);
#define JavaUtilZipZipOutputStream_STORED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipOutputStream, STORED, jint)

/*!
 @brief Compression method for compressed (DEFLATED) entries.
 */
inline jint JavaUtilZipZipOutputStream_get_DEFLATED(void);
#define JavaUtilZipZipOutputStream_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipOutputStream, DEFLATED, jint)

FOUNDATION_EXPORT void JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaUtilZipZipOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *new_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *create_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT void JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaUtilZipZipOutputStream *self, JavaIoOutputStream *outArg, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *new_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *create_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withJavaNioCharsetCharset_(JavaIoOutputStream *outArg, JavaNioCharsetCharset *charset);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipOutputStream")
