//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ExecutionSequencer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentExecutionSequencer
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentExecutionSequencer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentExecutionSequencer_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer || defined(INCLUDE_ComGoogleCommonUtilConcurrentExecutionSequencer))
#define ComGoogleCommonUtilConcurrentExecutionSequencer_

@protocol ComGoogleCommonUtilConcurrentAsyncCallable;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief Serializes execution of tasks, somewhat like an "asynchronous <code>synchronized</code> block."
 Each 
 enqueued callable will not be submitted to its associated executor until the
  previous callable has returned -- and, if the previous callable was an <code>AsyncCallable</code>, not
  until the <code>Future</code> it returned is done (successful, failed, or
  cancelled).
 <p>This class has limited support for cancellation and other "early completion": 
 <ul>
    <li>While calls to <code>submit</code> and <code>submitAsync</code> return a <code>Future</code> that can be
        cancelled, cancellation never propagates to a task that has started to run -- neither to
        the callable itself nor to any <code>Future</code> returned by an <code>AsyncCallable</code>.
        (However, cancellation can prevent an <i>unstarted</i> task from running.) Therefore, the
        next task will wait for any running callable (or pending <code>Future</code> returned by an
        <code>AsyncCallable</code>) to complete, without interrupting it (and without calling <code>cancel</code>
  on the <code>Future</code>). So beware: <i>Even if you cancel every precededing <code>Future</code>
  returned by this class, the next task may still have to wait.</i>.
    <li>Once an <code>AsyncCallable</code> returns a <code>Future</code>, this class considers that task to
        be "done" as soon as <i>that</i> <code>Future</code> completes in any way. Notably, a <code>Future</code>
  is "completed" even if it is cancelled while its underlying work continues on a
        thread, an RPC, etc. The <code>Future</code> is also "completed" if it fails "early" -- for
        example, if the deadline expires on a <code>Future</code> returned from <code>Futures.withTimeout</code>
  while the <code>Future</code> it wraps continues its underlying work. So
        beware: <i>Your <code>AsyncCallable</code> should not complete its <code>Future</code> until it is
        safe for the next task to start.</i>
  </ul>
  
 <p>An additional limitation: this class serializes execution of <i>tasks</i> but not any 
 <i>listeners</i> of those tasks. 
 <p>This class is similar to <code>MoreExecutors.newSequentialExecutor</code>. This class is different
  in a few ways: 
 <ul>
    <li>Each task may be associated with a different executor.
    <li>Tasks may be of type <code>AsyncCallable</code>.
    <li>Running tasks <i>cannot</i> be interrupted. (Note that <code>newSequentialExecutor</code> does
        not return <code>Future</code> objects, so it doesn't support interruption directly, either.
        However, utilities that <i>use</i> that executor have the ability to interrupt tasks
        running on it. This class, by contrast, does not expose an <code>Executor</code> API.) 
 </ul>
  
 <p>If you don't need the features of this class, you may prefer <code>newSequentialExecutor</code> for
  its simplicity and ability to accommodate interruption.
 @since 26.0
 */
@interface ComGoogleCommonUtilConcurrentExecutionSequencer : NSObject

#pragma mark Public

/*!
 @brief Creates a new instance.
 */
+ (ComGoogleCommonUtilConcurrentExecutionSequencer *)create;

/*!
 @brief Enqueues a task to run when the previous task (if any) completes.
 <p>Cancellation does not propagate from the output future to a callable that has begun to
  execute, but if the output future is cancelled before <code>Callable.call()</code> is invoked, 
 <code>Callable.call()</code> will not be invoked.
 */
- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable
                                                           withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

/*!
 @brief Enqueues a task to run when the previous task (if any) completes.
 <p>Cancellation does not propagate from the output future to the future returned from <code>callable</code>
  or a callable that has begun to execute, but if the output future is cancelled before 
 <code>AsyncCallable.call()</code> is invoked, <code>AsyncCallable.call()</code> will not be invoked.
 */
- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitAsyncWithComGoogleCommonUtilConcurrentAsyncCallable:(id<ComGoogleCommonUtilConcurrentAsyncCallable> __nonnull)callable
                                                                                withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentExecutionSequencer)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionSequencer *ComGoogleCommonUtilConcurrentExecutionSequencer_create(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentExecutionSequencer)

#endif

#if !defined (ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer || defined(INCLUDE_ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState))
#define ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_Enum) {
  ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_Enum_NOT_RUN = 0,
  ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_Enum_CANCELLED = 1,
  ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_Enum_STARTED = 2,
};

@interface ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *NOT_RUN NS_SWIFT_NAME(NOT_RUN);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *CANCELLED NS_SWIFT_NAME(CANCELLED);
@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *STARTED NS_SWIFT_NAME(STARTED);
#pragma mark Public

+ (ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_values_[];

inline ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_get_NOT_RUN(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState, NOT_RUN)

inline ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_get_CANCELLED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState, CANCELLED)

inline ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_get_STARTED(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState, STARTED)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState *ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentExecutionSequencer_RunningState)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionSequencer")
