//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathProcessorException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathProcessorException")
#ifdef RESTRICT_OrgApacheXpathXPathProcessorException
#define INCLUDE_ALL_OrgApacheXpathXPathProcessorException 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathProcessorException 1
#endif
#undef RESTRICT_OrgApacheXpathXPathProcessorException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathXPathProcessorException_) && (INCLUDE_ALL_OrgApacheXpathXPathProcessorException || defined(INCLUDE_OrgApacheXpathXPathProcessorException))
#define OrgApacheXpathXPathProcessorException_

#define RESTRICT_OrgApacheXpathXPathException 1
#define INCLUDE_OrgApacheXpathXPathException 1
#include "org/apache/xpath/XPathException.h"

@class JavaLangException;
@protocol OrgApacheXpathExpressionNode;
@protocol OrgW3cDomNode;

/*!
 @brief Derived from XPathException in order that XPath processor
  exceptions may be specifically caught.
 */
@interface OrgApacheXpathXPathProcessorException : OrgApacheXpathXPathException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Create an XPathProcessorException object that holds
  an error message.
 @param message The error message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Create an XPathProcessorException object that holds
  an error message, and another exception
  that caused this exception.
 @param message The error message.
 @param e The exception that caused this exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangException:(JavaLangException *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                                    withId:(id)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
          withOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                         withOrgW3cDomNode:(id<OrgW3cDomNode>)arg1
                     withJavaLangException:(JavaLangException *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathProcessorException)

inline jlong OrgApacheXpathXPathProcessorException_get_serialVersionUID(void);
#define OrgApacheXpathXPathProcessorException_serialVersionUID 1215509418326642603LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathXPathProcessorException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathXPathProcessorException_initWithNSString_(OrgApacheXpathXPathProcessorException *self, NSString *message);

FOUNDATION_EXPORT OrgApacheXpathXPathProcessorException *new_OrgApacheXpathXPathProcessorException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathProcessorException *create_OrgApacheXpathXPathProcessorException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgApacheXpathXPathProcessorException_initWithNSString_withJavaLangException_(OrgApacheXpathXPathProcessorException *self, NSString *message, JavaLangException *e);

FOUNDATION_EXPORT OrgApacheXpathXPathProcessorException *new_OrgApacheXpathXPathProcessorException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathProcessorException *create_OrgApacheXpathXPathProcessorException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathProcessorException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathProcessorException")
