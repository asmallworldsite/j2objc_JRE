//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Observer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilObserver")
#ifdef RESTRICT_JavaUtilObserver
#define INCLUDE_ALL_JavaUtilObserver 0
#else
#define INCLUDE_ALL_JavaUtilObserver 1
#endif
#undef RESTRICT_JavaUtilObserver

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilObserver_) && (INCLUDE_ALL_JavaUtilObserver || defined(INCLUDE_JavaUtilObserver))
#define JavaUtilObserver_

@class JavaUtilObservable;

/*!
 @brief A class can implement the <code>Observer</code> interface when it
  wants to be informed of changes in observable objects.
 @author Chris Warth
 - seealso: java.util.Observable
 @since JDK1.0
 */
@protocol JavaUtilObserver < JavaObject >

/*!
 @brief This method is called whenever the observed object is changed.An
  application calls an <tt>Observable</tt> object's 
 <code>notifyObservers</code> method to have all the object's
  observers notified of the change.
 @param o the observable object.
 @param arg an argument passed to the  <code> notifyObservers </code>
                   method.
 */
- (void)updateWithJavaUtilObservable:(JavaUtilObservable *)o
                              withId:(id)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilObserver)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilObserver)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilObserver")
