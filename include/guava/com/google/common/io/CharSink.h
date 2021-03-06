//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/io/CharSink.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCharSink")
#ifdef RESTRICT_ComGoogleCommonIoCharSink
#define INCLUDE_ALL_ComGoogleCommonIoCharSink 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCharSink 1
#endif
#undef RESTRICT_ComGoogleCommonIoCharSink

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCharSink_) && (INCLUDE_ALL_ComGoogleCommonIoCharSink || defined(INCLUDE_ComGoogleCommonIoCharSink))
#define ComGoogleCommonIoCharSink_

@class JavaIoWriter;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaLangReadable;
@protocol JavaUtilStreamStream;

/*!
 @brief A destination to which characters can be written, such as a text file.Unlike a <code>Writer</code>, a 
 <code>CharSink</code> is not an open, stateful stream that can be written to and closed.
 Instead, it
  is an immutable <i>supplier</i> of <code>Writer</code> instances. 
 <p><code>CharSink</code> provides two kinds of methods: 
 <ul>
    <li><b>Methods that return a writer:</b> These methods should return a <i>new</i>, independent
        instance each time they are called. The caller is responsible for ensuring that the
        returned writer is closed.   
 <li><b>Convenience methods:</b> These are implementations of common operations that are
        typically implemented by opening a writer using one of the methods in the first category,
        doing something and finally closing the writer that was opened. 
 </ul>
  
 <p>Any <code>ByteSink</code> may be viewed as a <code>CharSink</code> with a specific character encoding
  using <code>ByteSink.asCharSink(Charset)</code>. Characters written to the
  resulting <code>CharSink</code> will written to the <code>ByteSink</code> as encoded bytes.
 @since 14.0
 @author Colin Decker
 */
@interface ComGoogleCommonIoCharSink : NSObject

#pragma mark Public

/*!
 @brief Opens a new buffered <code>Writer</code> for writing to this sink.The returned stream is not
  required to be a <code>BufferedWriter</code> in order to allow implementations to simply delegate to 
 <code>openStream()</code> when the stream returned by that method does not benefit from additional
  buffering.
 This method returns a new, independent writer each time it is called. 
 <p>The caller is responsible for ensuring that the returned writer is closed.
 @throw IOExceptionif an I/O error occurs while opening the writer
 @since 15.0 (in 14.0 with return type <code>BufferedWriter</code>)
 */
- (JavaIoWriter *)openBufferedStream;

/*!
 @brief Opens a new <code>Writer</code> for writing to this sink.This method returns a new, independent
  writer each time it is called.
 <p>The caller is responsible for ensuring that the returned writer is closed.
 @throw IOExceptionif an I/O error occurs while opening the writer
 */
- (JavaIoWriter *)openStream;

/*!
 @brief Writes the given character sequence to this sink.
 @throw IOExceptionif an I/O error while writing to this sink
 */
- (void)writeWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)charSequence;

/*!
 @brief Writes all the text from the given <code>Readable</code> (such as a <code>Reader</code>) to this sink.
 Does not close <code>readable</code> if it is <code>Closeable</code>.
 @return the number of characters written
 @throw IOExceptionif an I/O error occurs while reading from <code>readable</code> or writing to
      this sink
 */
- (jlong)writeFromWithJavaLangReadable:(id<JavaLangReadable> __nonnull)readable;

/*!
 @brief Writes the given lines of text to this sink with each line (including the last) terminated with
  the operating system's default line separator.This method is equivalent to <code>writeLines(lines, System.getProperty("line.separator"))</code>
 .
 @throw IOExceptionif an I/O error occurs while writing to this sink
 */
- (void)writeLinesWithJavaLangIterable:(id<JavaLangIterable> __nonnull)lines;

/*!
 @brief Writes the given lines of text to this sink with each line (including the last) terminated with
  the given line separator.
 @throw IOExceptionif an I/O error occurs while writing to this sink
 */
- (void)writeLinesWithJavaLangIterable:(id<JavaLangIterable> __nonnull)lines
                          withNSString:(NSString * __nonnull)lineSeparator;

/*!
 @brief Writes the given lines of text to this sink with each line (including the last) terminated with
  the operating system's default line separator.This method is equivalent to <code>writeLines(lines, System.getProperty("line.separator"))</code>
 .
 @throw IOExceptionif an I/O error occurs while writing to this sink
 @since 22.0
 */
- (void)writeLinesWithJavaUtilStreamStream:(id<JavaUtilStreamStream> __nonnull)lines;

/*!
 @brief Writes the given lines of text to this sink with each line (including the last) terminated with
  the given line separator.
 @throw IOExceptionif an I/O error occurs while writing to this sink
 @since 22.0
 */
- (void)writeLinesWithJavaUtilStreamStream:(id<JavaUtilStreamStream> __nonnull)lines
                              withNSString:(NSString * __nonnull)lineSeparator;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSink)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSink_init(ComGoogleCommonIoCharSink *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSink)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCharSink")
