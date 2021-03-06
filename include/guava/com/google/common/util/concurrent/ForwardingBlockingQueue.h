//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/ForwardingBlockingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingQueue
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingBlockingQueue_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingBlockingQueue))
#define ComGoogleCommonUtilConcurrentForwardingBlockingQueue_

#define RESTRICT_ComGoogleCommonCollectForwardingQueue 1
#define INCLUDE_ComGoogleCommonCollectForwardingQueue 1
#include "com/google/common/collect/ForwardingQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "java/util/concurrent/BlockingQueue.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;

/*!
 @brief A <code>BlockingQueue</code> which forwards all its method calls to another <code>BlockingQueue</code>.
 Subclasses should override one or more methods to modify the behavior of the backing collection
  as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">decorator
  pattern</a>.
  
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingBlockingQueue</code>.
 @author Raimundo Mirisola
 @since 4.0
 */
@interface ComGoogleCommonUtilConcurrentForwardingBlockingQueue : ComGoogleCommonCollectForwardingQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id __nonnull)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (void)putWithId:(id __nonnull)e;

- (jint)remainingCapacity;

- (id)take;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentBlockingQueue>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingBlockingQueue_init(ComGoogleCommonUtilConcurrentForwardingBlockingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingBlockingQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingQueue")
