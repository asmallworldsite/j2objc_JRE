//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/xml/src/main/java/org/xmlpull/v1/XmlPullParserException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlpullV1XmlPullParserException")
#ifdef RESTRICT_OrgXmlpullV1XmlPullParserException
#define INCLUDE_ALL_OrgXmlpullV1XmlPullParserException 0
#else
#define INCLUDE_ALL_OrgXmlpullV1XmlPullParserException 1
#endif
#undef RESTRICT_OrgXmlpullV1XmlPullParserException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlpullV1XmlPullParserException_) && (INCLUDE_ALL_OrgXmlpullV1XmlPullParserException || defined(INCLUDE_OrgXmlpullV1XmlPullParserException))
#define OrgXmlpullV1XmlPullParserException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThrowable;
@protocol OrgXmlpullV1XmlPullParser;

/*!
 @brief This exception is thrown to signal XML Pull Parser related faults.
 @author <a href="http://www.extreme.indiana.edu/~aslom/">Aleksander Slominski</a>
 */
@interface OrgXmlpullV1XmlPullParserException : JavaLangException {
 @public
  JavaLangThrowable *detail_;
  jint row_;
  jint column_;
}

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)s;

- (instancetype __nonnull)initWithNSString:(NSString *)msg
             withOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)parser
                     withJavaLangThrowable:(JavaLangThrowable *)chain;

- (jint)getColumnNumber;

- (JavaLangThrowable *)getDetail;

- (jint)getLineNumber;

- (void)printStackTrace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1XmlPullParserException)

J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserException, detail_, JavaLangThrowable *)

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_(OrgXmlpullV1XmlPullParserException *self, NSString *s);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *create_OrgXmlpullV1XmlPullParserException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withJavaLangThrowable_(OrgXmlpullV1XmlPullParserException *self, NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, JavaLangThrowable *chain);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withJavaLangThrowable_(NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, JavaLangThrowable *chain) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *create_OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withJavaLangThrowable_(NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, JavaLangThrowable *chain);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1XmlPullParserException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgXmlpullV1XmlPullParserException")
