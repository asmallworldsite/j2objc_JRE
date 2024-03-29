//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/ls/LSException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomLsLSException")
#ifdef RESTRICT_OrgW3cDomLsLSException
#define INCLUDE_ALL_OrgW3cDomLsLSException 0
#else
#define INCLUDE_ALL_OrgW3cDomLsLSException 1
#endif
#undef RESTRICT_OrgW3cDomLsLSException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomLsLSException_) && (INCLUDE_ALL_OrgW3cDomLsLSException || defined(INCLUDE_OrgW3cDomLsLSException))
#define OrgW3cDomLsLSException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangBoolean;
@class JavaLangShort;
@class JavaLangThrowable;

/*!
 @brief Parser or write operations may throw an <code>LSException</code> if the
  processing is stopped.The processing can be stopped due to a 
 <code>DOMError</code> with a severity of 
 <code>DOMError.SEVERITY_FATAL_ERROR</code> or a non recovered 
 <code>DOMError.SEVERITY_ERROR</code>, or if 
 <code>DOMErrorHandler.handleError()</code> returned <code>false</code>.
 <p><b>Note:</b>  As suggested in the definition of the constants in the 
 <code>DOMError</code> interface, a DOM implementation may choose to
  continue after a fatal error, but the resulting DOM tree is then
  implementation dependent. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@interface OrgW3cDomLsLSException : JavaLangRuntimeException {
 @public
  jshort code_;
}

#pragma mark Public

- (instancetype __nonnull)initWithShort:(jshort)code
                           withNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSException)

/*!
 @brief If an attempt was made to load a document, or an XML Fragment, using 
 <code>LSParser</code> and the processing has been stopped.
 */
inline jshort OrgW3cDomLsLSException_get_PARSE_ERR(void);
#define OrgW3cDomLsLSException_PARSE_ERR 81
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsLSException, PARSE_ERR, jshort)

/*!
 @brief If an attempt was made to serialize a <code>Node</code> using 
 <code>LSSerializer</code> and the processing has been stopped.
 */
inline jshort OrgW3cDomLsLSException_get_SERIALIZE_ERR(void);
#define OrgW3cDomLsLSException_SERIALIZE_ERR 82
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomLsLSException, SERIALIZE_ERR, jshort)

FOUNDATION_EXPORT void OrgW3cDomLsLSException_initWithShort_withNSString_(OrgW3cDomLsLSException *self, jshort code, NSString *message);

FOUNDATION_EXPORT OrgW3cDomLsLSException *new_OrgW3cDomLsLSException_initWithShort_withNSString_(jshort code, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgW3cDomLsLSException *create_OrgW3cDomLsLSException_initWithShort_withNSString_(jshort code, NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomLsLSException")
