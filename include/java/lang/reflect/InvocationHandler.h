//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/InvocationHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectInvocationHandler")
#ifdef RESTRICT_JavaLangReflectInvocationHandler
#define INCLUDE_ALL_JavaLangReflectInvocationHandler 0
#else
#define INCLUDE_ALL_JavaLangReflectInvocationHandler 1
#endif
#undef RESTRICT_JavaLangReflectInvocationHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectInvocationHandler_) && (INCLUDE_ALL_JavaLangReflectInvocationHandler || defined(INCLUDE_JavaLangReflectInvocationHandler))
#define JavaLangReflectInvocationHandler_

@class IOSObjectArray;
@class JavaLangReflectMethod;

/*!
 @brief <code>InvocationHandler</code> is the interface implemented by the 
 <i>invocation handler</i> of a proxy instance.
 <p>Each proxy instance has an associated invocation handler.
  When a method is invoked on a proxy instance, the method
  invocation is encoded and dispatched to the <code>invoke</code>
  method of its invocation handler.
 @author Peter Jones
 - seealso: Proxy
 @since 1.3
 */
@protocol JavaLangReflectInvocationHandler < JavaObject >

/*!
 @brief Processes a method invocation on a proxy instance and returns
  the result.This method will be invoked on an invocation handler
  when a method is invoked on a proxy instance that it is
  associated with.
 @param proxy the proxy instance that the method was invoked on
 @param method the <code>Method</code>  instance corresponding to
   the interface method invoked on the proxy instance.  The declaring  class of the 
 <code>Method</code>  object will be the interface that  the method was declared in, which may be a superinterface of the
   proxy interface that the proxy class inherits the method through.
 @param args an array of objects containing the values of the  arguments passed in the method invocation on the proxy instance,
   or <code>null</code>
   if interface method takes no arguments.  Arguments of primitive types are wrapped in instances of the
   appropriate primitive wrapper class, such as
   <code>java.lang.Integer</code>
   or <code>java.lang.Boolean</code> .
 @return the value to return from the method invocation on the
  proxy instance.  If the declared return type of the interface
  method is a primitive type, then the value returned by
  this method must be an instance of the corresponding primitive
  wrapper class; otherwise, it must be a type assignable to the
  declared return type.  If the value returned by this method is 
 <code>null</code> and the interface method's return type is
  primitive, then a <code>NullPointerException</code> will be
  thrown by the method invocation on the proxy instance.  If the
  value returned by this method is otherwise not compatible with
  the interface method's declared return type as described above,
  a <code>ClassCastException</code> will be thrown by the method
  invocation on the proxy instance.
 @throw Throwablethe exception to throw from the method
  invocation on the proxy instance.  The exception's type must be
  assignable either to any of the exception types declared in the 
 <code>throws</code> clause of the interface method or to the
  unchecked exception types <code>java.lang.RuntimeException</code>
  or <code>java.lang.Error</code>.  If a checked exception is
  thrown by this method that is not assignable to any of the
  exception types declared in the <code>throws</code> clause of
  the interface method, then an 
 <code>UndeclaredThrowableException</code> containing the
  exception that was thrown by this method will be thrown by the
  method invocation on the proxy instance.
 - seealso: UndeclaredThrowableException
 */
- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectInvocationHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectInvocationHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectInvocationHandler")
