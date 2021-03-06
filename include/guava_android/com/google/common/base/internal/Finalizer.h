//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/internal/Finalizer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseInternalFinalizer")
#ifdef RESTRICT_ComGoogleCommonBaseInternalFinalizer
#define INCLUDE_ALL_ComGoogleCommonBaseInternalFinalizer 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseInternalFinalizer 1
#endif
#undef RESTRICT_ComGoogleCommonBaseInternalFinalizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseInternalFinalizer_) && (INCLUDE_ALL_ComGoogleCommonBaseInternalFinalizer || defined(INCLUDE_ComGoogleCommonBaseInternalFinalizer))
#define ComGoogleCommonBaseInternalFinalizer_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class IOSClass;
@class JavaLangRefPhantomReference;
@class JavaLangRefReferenceQueue;

/*!
 @brief Thread that finalizes referents.All references should implement <code>com.google.common.base.FinalizableReference</code>
 .
 <p>While this class is public, we consider it to be *internal* and not part of our published API.
  It is public so we can access it reflectively across class loaders in secure environments. 
 <p>This class can't depend on other Guava code. If we were to load this class in the same class
  loader as the rest of Guava, this thread would keep an indirect strong reference to the class
  loader and prevent it from being garbage collected. This poses a problem for environments where
  you want to throw away the class loader. For example, dynamically reloading a web application or
  unloading an OSGi bundle. 
 <p><code>com.google.common.base.FinalizableReferenceQueue</code> loads this class in its own class
  loader. That way, this class doesn't prevent the main class loader from getting garbage
  collected, and this class can detect when the main class loader has been garbage collected and
  stop itself.
 */
@interface ComGoogleCommonBaseInternalFinalizer : NSObject < JavaLangRunnable >

#pragma mark Public

/*!
 @brief Loops continuously, pulling references off the queue and cleaning them up.
 */
- (void)run;

/*!
 @brief Starts the Finalizer thread.FinalizableReferenceQueue calls this method reflectively.
 @param finalizableReferenceClass FinalizableReference.class.
 @param queue a reference queue that the thread will poll.
 @param frqReference a phantom reference to the FinalizableReferenceQueue, which will be queued      either when the FinalizableReferenceQueue is no longer referenced anywhere, or when its
       close() method is called.
 */
+ (void)startFinalizerWithIOSClass:(IOSClass *)finalizableReferenceClass
     withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)queue
   withJavaLangRefPhantomReference:(JavaLangRefPhantomReference *)frqReference;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseInternalFinalizer)

FOUNDATION_EXPORT void ComGoogleCommonBaseInternalFinalizer_startFinalizerWithIOSClass_withJavaLangRefReferenceQueue_withJavaLangRefPhantomReference_(IOSClass *finalizableReferenceClass, JavaLangRefReferenceQueue *queue, JavaLangRefPhantomReference *frqReference);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseInternalFinalizer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseInternalFinalizer")
