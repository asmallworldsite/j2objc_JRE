//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/io/Closeables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCloseables")
#ifdef RESTRICT_ComGoogleCommonIoCloseables
#define INCLUDE_ALL_ComGoogleCommonIoCloseables 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCloseables 1
#endif
#undef RESTRICT_ComGoogleCommonIoCloseables

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoCloseables_) && (INCLUDE_ALL_ComGoogleCommonIoCloseables || defined(INCLUDE_ComGoogleCommonIoCloseables))
#define ComGoogleCommonIoCloseables_

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaUtilLoggingLogger;
@protocol JavaIoCloseable;

/*!
 @brief Utility methods for working with <code>Closeable</code> objects.
 @author Michael Lancaster
 @since 1.0
 */
@interface ComGoogleCommonIoCloseables : NSObject
@property (readonly, class, strong) JavaUtilLoggingLogger *logger NS_SWIFT_NAME(logger);

#pragma mark Public

/*!
 @brief Closes a <code>Closeable</code>, with control over whether an <code>IOException</code> may be thrown.
 This is primarily useful in a finally block, where a thrown exception needs to be logged but
  not propagated (otherwise the original exception will be lost). 
 <p>If <code>swallowIOException</code> is true then we never throw <code>IOException</code> but merely log
  it. 
 <p>Example:
  
 @code
 public void useStreamNicely() throws IOException {
    SomeStream stream = new SomeStream("foo");
    boolean threw = true;
    try {
      // ... code which does something with the stream ...
      threw = false;
    } finally {
      // If an exception occurs, rethrow it only if threw==false:
      Closeables.close(stream, threw);
    }  }  
 
@endcode
 @param closeable the <code>Closeable</code>  object to be closed, or null, in which case this method
       does nothing
 @param swallowIOException if true, don't propagate IO exceptions thrown by the <code>close</code>      methods
 @throw IOExceptionif <code>swallowIOException</code> is false and <code>close</code> throws an <code>IOException</code>
 .
 */
+ (void)closeWithJavaIoCloseable:(id<JavaIoCloseable> __nullable)closeable
                     withBoolean:(jboolean)swallowIOException;

/*!
 @brief Closes the given <code>InputStream</code>, logging any <code>IOException</code> that's thrown rather than
  propagating it.
 <p>While it's not safe in the general case to ignore exceptions that are thrown when closing an
  I/O resource, it should generally be safe in the case of a resource that's being used only for
  reading, such as an <code>InputStream</code>. Unlike with writable resources, there's no chance that
  a failure that occurs when closing the stream indicates a meaningful problem such as a failure
  to flush all bytes to the underlying resource.
 @param inputStream the input stream to be closed, or <code>null</code>  in which case this method
       does nothing
 @since 17.0
 */
+ (void)closeQuietlyWithJavaIoInputStream:(JavaIoInputStream * __nullable)inputStream;

/*!
 @brief Closes the given <code>Reader</code>, logging any <code>IOException</code> that's thrown rather than
  propagating it.
 <p>While it's not safe in the general case to ignore exceptions that are thrown when closing an
  I/O resource, it should generally be safe in the case of a resource that's being used only for
  reading, such as a <code>Reader</code>. Unlike with writable resources, there's no chance that a
  failure that occurs when closing the reader indicates a meaningful problem such as a failure to
  flush all bytes to the underlying resource.
 @param reader the reader to be closed, or <code>null</code>  in which case this method does nothing
 @since 17.0
 */
+ (void)closeQuietlyWithJavaIoReader:(JavaIoReader * __nullable)reader;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoCloseables)

inline JavaUtilLoggingLogger *ComGoogleCommonIoCloseables_get_logger(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonIoCloseables_logger;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonIoCloseables, logger, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void ComGoogleCommonIoCloseables_closeWithJavaIoCloseable_withBoolean_(id<JavaIoCloseable> closeable, jboolean swallowIOException);

FOUNDATION_EXPORT void ComGoogleCommonIoCloseables_closeQuietlyWithJavaIoInputStream_(JavaIoInputStream *inputStream);

FOUNDATION_EXPORT void ComGoogleCommonIoCloseables_closeQuietlyWithJavaIoReader_(JavaIoReader *reader);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloseables)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCloseables")
