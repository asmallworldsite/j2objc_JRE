//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLSessionBindingListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener")
#ifdef RESTRICT_JavaxNetSslSSLSessionBindingListener
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener 1
#endif
#undef RESTRICT_JavaxNetSslSSLSessionBindingListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLSessionBindingListener_) && (INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener || defined(INCLUDE_JavaxNetSslSSLSessionBindingListener))
#define JavaxNetSslSSLSessionBindingListener_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include "java/util/EventListener.h"

@class JavaxNetSslSSLSessionBindingEvent;

/*!
 @brief This interface is implemented by objects which want to know when
  they are being bound or unbound from a SSLSession.When either event
  occurs via <code>SSLSession.putValue(String, Object)</code>
  or <code>SSLSession.removeValue(String)</code>, the event is communicated
  through a SSLSessionBindingEvent identifying the session.
 - seealso: SSLSession
 - seealso: SSLSessionBindingEvent
 @since 1.4
 @author Nathan Abramson
 @author David Brownell
 */
@protocol JavaxNetSslSSLSessionBindingListener < JavaUtilEventListener, JavaObject >

/*!
 @brief This is called to notify the listener that it is being bound into
  an SSLSession.
 @param event the event identifying the SSLSession into           which the listener is being bound.
 */
- (void)valueBoundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

/*!
 @brief This is called to notify the listener that it is being unbound
  from a SSLSession.
 @param event the event identifying the SSLSession from           which the listener is being unbound.
 */
- (void)valueUnboundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener")
