//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/XMLFormatter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingXMLFormatter")
#ifdef RESTRICT_JavaUtilLoggingXMLFormatter
#define INCLUDE_ALL_JavaUtilLoggingXMLFormatter 0
#else
#define INCLUDE_ALL_JavaUtilLoggingXMLFormatter 1
#endif
#undef RESTRICT_JavaUtilLoggingXMLFormatter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingXMLFormatter_) && (INCLUDE_ALL_JavaUtilLoggingXMLFormatter || defined(INCLUDE_JavaUtilLoggingXMLFormatter))
#define JavaUtilLoggingXMLFormatter_

#define RESTRICT_JavaUtilLoggingFormatter 1
#define INCLUDE_JavaUtilLoggingFormatter 1
#include "java/util/logging/Formatter.h"

@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLogRecord;

/*!
 @brief Format a LogRecord into a standard XML format.
 <p>
  The DTD specification is provided as Appendix A to the
  Java Logging APIs specification. 
 <p>
  The XMLFormatter can be used with arbitrary character encodings,
  but it is recommended that it normally be used with UTF-8.  The
  character encoding can be set on the output Handler.
 @since 1.4
 */
@interface JavaUtilLoggingXMLFormatter : JavaUtilLoggingFormatter

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Format the given message to XML.
 <p>
  This method can be overridden in a subclass.
  It is recommended to use the <code>Formatter.formatMessage</code>
  convenience method to localize and format the message field.
 @param record the log record to be formatted.
 @return a formatted log record
 */
- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

/*!
 @brief Return the header string for a set of XML formatted records.
 @param h The target handler (can be null)
 @return a valid XML string
 */
- (NSString *)getHeadWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

/*!
 @brief Return the tail string for a set of XML formatted records.
 @param h The target handler (can be null)
 @return a valid XML string
 */
- (NSString *)getTailWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingXMLFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingXMLFormatter_init(JavaUtilLoggingXMLFormatter *self);

FOUNDATION_EXPORT JavaUtilLoggingXMLFormatter *new_JavaUtilLoggingXMLFormatter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingXMLFormatter *create_JavaUtilLoggingXMLFormatter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingXMLFormatter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingXMLFormatter")
