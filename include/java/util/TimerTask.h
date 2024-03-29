//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/TimerTask.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTimerTask")
#ifdef RESTRICT_JavaUtilTimerTask
#define INCLUDE_ALL_JavaUtilTimerTask 0
#else
#define INCLUDE_ALL_JavaUtilTimerTask 1
#endif
#undef RESTRICT_JavaUtilTimerTask

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilTimerTask_) && (INCLUDE_ALL_JavaUtilTimerTask || defined(INCLUDE_JavaUtilTimerTask))
#define JavaUtilTimerTask_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

/*!
 @brief A task that can be scheduled for one-time or repeated execution by a Timer.
 @author Josh Bloch
 - seealso: Timer
 @since 1.3
 */
@interface JavaUtilTimerTask : NSObject < JavaLangRunnable > {
 @public
  /*!
   @brief This object is used to control access to the TimerTask internals.
   */
  id lock_;
  /*!
   @brief The state of this task, chosen from the constants below.
   */
  jint state_;
  /*!
   @brief Next execution time for this task in the format returned by
  System.currentTimeMillis, assuming this task is scheduled for execution.
   For repeating tasks, this field is updated prior to each task execution.
   */
  jlong nextExecutionTime_;
  /*!
   @brief Period in milliseconds for repeating tasks.A positive value indicates
  fixed-rate execution.
   A negative value indicates fixed-delay execution.
  A value of 0 indicates a non-repeating task.
   */
  jlong period_;
}

#pragma mark Public

/*!
 @brief Cancels this timer task.If the task has been scheduled for one-time
  execution and has not yet run, or has not yet been scheduled, it will
  never run.
 If the task has been scheduled for repeated execution, it
  will never run again.  (If the task is running when this call occurs,
  the task will run to completion, but will never run again.) 
 <p>Note that calling this method from within the <tt>run</tt> method of
  a repeating timer task absolutely guarantees that the timer task will
  not run again. 
 <p>This method may be called repeatedly; the second and subsequent
  calls have no effect.
 @return true if this task is scheduled for one-time execution and has
          not yet run, or this task is scheduled for repeated execution.
          Returns false if the task was scheduled for one-time execution
          and has already run, or if the task was never scheduled, or if
          the task was already cancelled.  (Loosely speaking, this method
          returns <tt>true</tt> if it prevents one or more scheduled
          executions from taking place.)
 */
- (jboolean)cancel;

/*!
 @brief The action to be performed by this timer task.
 */
- (void)run;

/*!
 @brief Returns the <i>scheduled</i> execution time of the most recent 
 <i>actual</i> execution of this task.
 (If this method is invoked
  while task execution is in progress, the return value is the scheduled
  execution time of the ongoing task execution.) 
 <p>This method is typically invoked from within a task's run method, to
  determine whether the current execution of the task is sufficiently
  timely to warrant performing the scheduled activity: 
 @code
   public void run() {
        if (System.currentTimeMillis() - scheduledExecutionTime() >=
            MAX_TARDINESS)
                return;  // Too late; skip this execution.
        // Perform the task
    } 
 
@endcode
  This method is typically <i>not</i> used in conjunction with 
 <i>fixed-delay execution</i> repeating tasks, as their scheduled
  execution times are allowed to drift over time, and so are not terribly
  significant.
 @return the time at which the most recent execution of this task was
          scheduled to occur, in the format returned by Date.getTime().
          The return value is undefined if the task has yet to commence
          its first execution.
 - seealso: Date#getTime()
 */
- (jlong)scheduledExecutionTime;

#pragma mark Protected

/*!
 @brief Creates a new timer task.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimerTask)

J2OBJC_FIELD_SETTER(JavaUtilTimerTask, lock_, id)

/*!
 @brief This task has not yet been scheduled.
 */
inline jint JavaUtilTimerTask_get_VIRGIN(void);
#define JavaUtilTimerTask_VIRGIN 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimerTask, VIRGIN, jint)

/*!
 @brief This task is scheduled for execution.If it is a non-repeating task,
  it has not yet been executed.
 */
inline jint JavaUtilTimerTask_get_SCHEDULED(void);
#define JavaUtilTimerTask_SCHEDULED 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimerTask, SCHEDULED, jint)

/*!
 @brief This non-repeating task has already executed (or is currently
  executing) and has not been cancelled.
 */
inline jint JavaUtilTimerTask_get_EXECUTED(void);
#define JavaUtilTimerTask_EXECUTED 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimerTask, EXECUTED, jint)

/*!
 @brief This task has been cancelled (with a call to TimerTask.cancel).
 */
inline jint JavaUtilTimerTask_get_CANCELLED(void);
#define JavaUtilTimerTask_CANCELLED 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimerTask, CANCELLED, jint)

FOUNDATION_EXPORT void JavaUtilTimerTask_init(JavaUtilTimerTask *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimerTask)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilTimerTask")
