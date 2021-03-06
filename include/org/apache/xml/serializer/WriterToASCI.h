//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/WriterToASCI.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToASCI")
#ifdef RESTRICT_OrgApacheXmlSerializerWriterToASCI
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToASCI 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerWriterToASCI 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerWriterToASCI

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerWriterToASCI_) && (INCLUDE_ALL_OrgApacheXmlSerializerWriterToASCI || defined(INCLUDE_OrgApacheXmlSerializerWriterToASCI))
#define OrgApacheXmlSerializerWriterToASCI_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

#define RESTRICT_OrgApacheXmlSerializerWriterChain 1
#define INCLUDE_OrgApacheXmlSerializerWriterChain 1
#include "org/apache/xml/serializer/WriterChain.h"

@class IOSCharArray;
@class JavaIoOutputStream;

/*!
 @brief This class writes ASCII to a byte stream as quickly as possible.For the
  moment it does not do buffering, though I reserve the right to do some
  buffering down the line if I can prove that it will be faster even if the
  output stream is buffered.
 This class is only used internally within Xalan.
 */
@interface OrgApacheXmlSerializerWriterToASCI : JavaIoWriter < OrgApacheXmlSerializerWriterChain >

#pragma mark Public

/*!
 @brief Create an unbuffered ASCII writer.
 @param os The byte stream to write to.
 */
- (instancetype __nonnull)initPackagePrivateWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
 @brief Close the stream, flushing it first.Once a stream has been closed,
  further write() or flush() invocations will cause an IOException to be
  thrown.
 Closing a previously-closed stream, however, has no effect.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)close;

/*!
 @brief Flush the stream.If the stream has saved any characters from the
  various write() methods in a buffer, write them immediately to their
  intended destination.
 Then, if that destination is another character or
  byte stream, flush it.  Thus one flush() invocation will flush all the
  buffers in a chain of Writers and OutputStreams.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)flush;

/*!
 @brief Get the output stream where the events will be serialized to.
 @return reference to the result stream, or null of only a writer was
  set.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Get the writer that this writer directly chains to.
 */
- (JavaIoWriter *)getWriter;

/*!
 @brief Write a portion of an array of characters.
 @param chars Array of characters
 @param start Offset from which to start writing characters
 @param length Number of characters to write
 @throw IOExceptionIf an I/O error occurs
 @throw java.io.IOException
 */
- (void)writeWithCharArray:(IOSCharArray *)chars
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief Write a single character.The character to be written is contained in
  the 16 low-order bits of the given integer value; the 16 high-order bits
  are ignored.
 <p> Subclasses that intend to support efficient single-character output
  should override this method.
 @param c int specifying a character to be written.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Write a string.
 @param s String to be written
 @throw IOExceptionIf an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerWriterToASCI)

FOUNDATION_EXPORT void OrgApacheXmlSerializerWriterToASCI_initPackagePrivateWithJavaIoOutputStream_(OrgApacheXmlSerializerWriterToASCI *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToASCI *new_OrgApacheXmlSerializerWriterToASCI_initPackagePrivateWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerWriterToASCI *create_OrgApacheXmlSerializerWriterToASCI_initPackagePrivateWithJavaIoOutputStream_(JavaIoOutputStream *os);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerWriterToASCI)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerWriterToASCI")
