//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/atomic/AtomicIntegerFieldUpdater.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater))
#define JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilFunctionIntBinaryOperator;
@protocol JavaUtilFunctionIntUnaryOperator;

/*!
 @brief A reflection-based utility that enables atomic updates to
  designated <code>volatile int</code> fields of designated classes.
 This class is designed for use in atomic data structures in which
  several fields of the same node are independently subject to atomic
  updates. 
 <p>Note that the guarantees of the <code>compareAndSet</code>
  method in this class are weaker than in other atomic classes.
  Because this class cannot ensure that all uses of the field
  are appropriate for purposes of atomic access, it can
  guarantee atomicity only with respect to other invocations of 
 <code>compareAndSet</code> and <code>set</code> on the same updater. 
 <p>Object arguments for parameters of type <code>T</code> that are not
  instances of the class passed to <code>newUpdater</code> will result in
  a <code>ClassCastException</code> being thrown.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater : NSObject

#pragma mark Public

/*!
 @brief Atomically updates (with memory effects as specified by <code>VarHandle.compareAndSet</code>
 ) the field of the given object managed
  by this updater with the results of applying the given function
  to the current and given values, returning the updated value.
 The function should be side-effect-free, since it may be
  re-applied when attempted updates fail due to contention among
  threads.  The function is applied with the current value as its
  first argument, and the given update as the second argument.
 @param obj An object whose field to get and set
 @param x the update value
 @param accumulatorFunction a side-effect-free function of two arguments
 @return the updated value
 @since 1.8
 */
- (jint)accumulateAndGetWithId:(id)obj
                       withInt:(jint)x
withJavaUtilFunctionIntBinaryOperator:(id<JavaUtilFunctionIntBinaryOperator>)accumulatorFunction;

/*!
 @brief Atomically adds the given value to the current value of the field of
  the given object managed by this updater.
 @param obj An object whose field to get and set
 @param delta the value to add
 @return the updated value
 */
- (jint)addAndGetWithId:(id)obj
                withInt:(jint)delta;

/*!
 @brief Atomically sets the field of the given object managed by this updater
  to the given updated value if the current value <code>==</code> the
  expected value.This method is guaranteed to be atomic with respect to
  other calls to <code>compareAndSet</code> and <code>set</code>, but not
  necessarily with respect to other changes in the field.
 @param obj An object whose field to conditionally set
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful
 */
- (jboolean)compareAndSetWithId:(id)obj
                        withInt:(jint)expect
                        withInt:(jint)update;

/*!
 @brief Atomically decrements by one the current value of the field of the
  given object managed by this updater.
 @param obj An object whose field to get and set
 @return the updated value
 */
- (jint)decrementAndGetWithId:(id)obj;

/*!
 @brief Returns the current value held in the field of the given object
  managed by this updater.
 @param obj An object whose field to get
 @return the current value
 */
- (jint)getWithId:(id)obj;

/*!
 @brief Atomically updates (with memory effects as specified by <code>VarHandle.compareAndSet</code>
 ) the field of the given object managed
  by this updater with the results of applying the given function
  to the current and given values, returning the previous value.
 The function should be side-effect-free, since it may be
  re-applied when attempted updates fail due to contention among
  threads.  The function is applied with the current value as its
  first argument, and the given update as the second argument.
 @param obj An object whose field to get and set
 @param x the update value
 @param accumulatorFunction a side-effect-free function of two arguments
 @return the previous value
 @since 1.8
 */
- (jint)getAndAccumulateWithId:(id)obj
                       withInt:(jint)x
withJavaUtilFunctionIntBinaryOperator:(id<JavaUtilFunctionIntBinaryOperator>)accumulatorFunction;

/*!
 @brief Atomically adds the given value to the current value of the field of
  the given object managed by this updater.
 @param obj An object whose field to get and set
 @param delta the value to add
 @return the previous value
 */
- (jint)getAndAddWithId:(id)obj
                withInt:(jint)delta;

/*!
 @brief Atomically decrements by one the current value of the field of the
  given object managed by this updater.
 @param obj An object whose field to get and set
 @return the previous value
 */
- (jint)getAndDecrementWithId:(id)obj;

/*!
 @brief Atomically increments by one the current value of the field of the
  given object managed by this updater.
 @param obj An object whose field to get and set
 @return the previous value
 */
- (jint)getAndIncrementWithId:(id)obj;

/*!
 @brief Atomically sets the field of the given object managed by this updater
  to the given value and returns the old value.
 @param obj An object whose field to get and set
 @param newValue the new value
 @return the previous value
 */
- (jint)getAndSetWithId:(id)obj
                withInt:(jint)newValue;

/*!
 @brief Atomically updates (with memory effects as specified by <code>VarHandle.compareAndSet</code>
 ) the field of the given object managed
  by this updater with the results of applying the given
  function, returning the previous value.The function should be
  side-effect-free, since it may be re-applied when attempted
  updates fail due to contention among threads.
 @param obj An object whose field to get and set
 @param updateFunction a side-effect-free function
 @return the previous value
 @since 1.8
 */
- (jint)getAndUpdateWithId:(id)obj
withJavaUtilFunctionIntUnaryOperator:(id<JavaUtilFunctionIntUnaryOperator>)updateFunction;

/*!
 @brief Atomically increments by one the current value of the field of the
  given object managed by this updater.
 @param obj An object whose field to get and set
 @return the updated value
 */
- (jint)incrementAndGetWithId:(id)obj;

/*!
 @brief Eventually sets the field of the given object managed by this
  updater to the given updated value.
 @param obj An object whose field to set
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithId:(id)obj
              withInt:(jint)newValue;

/*!
 @brief Creates and returns an updater for objects with the given field.
 The Class argument is needed to check that reflective types and
  generic types match.
 @param tclass the class of the objects holding the field
 @param fieldName the name of the field to be updated
 @return the updater
 @throw IllegalArgumentExceptionif the field is not a
  volatile integer type
 @throw RuntimeExceptionwith a nested reflection-based
  exception if the class does not hold field or is the wrong type,
  or the field is inaccessible to the caller according to Java language
  access control
 */
+ (JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *)newUpdaterWithIOSClass:(IOSClass *)tclass
                                                                 withNSString:(NSString *)fieldName OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Sets the field of the given object managed by this updater to the
  given updated value.This operation is guaranteed to act as a volatile
  store with respect to subsequent invocations of <code>compareAndSet</code>.
 @param obj An object whose field to set
 @param newValue the new value
 */
- (void)setWithId:(id)obj
          withInt:(jint)newValue;

/*!
 @brief Atomically updates (with memory effects as specified by <code>VarHandle.compareAndSet</code>
 ) the field of the given object managed
  by this updater with the results of applying the given
  function, returning the updated value.The function should be
  side-effect-free, since it may be re-applied when attempted
  updates fail due to contention among threads.
 @param obj An object whose field to get and set
 @param updateFunction a side-effect-free function
 @return the updated value
 @since 1.8
 */
- (jint)updateAndGetWithId:(id)obj
withJavaUtilFunctionIntUnaryOperator:(id<JavaUtilFunctionIntUnaryOperator>)updateFunction;

/*!
 @brief Atomically sets the field of the given object managed by this updater
  to the given updated value if the current value <code>==</code> the
  expected value.This method is guaranteed to be atomic with respect to
  other calls to <code>compareAndSet</code> and <code>set</code>, but not
  necessarily with respect to other changes in the field.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
  spuriously and does not provide ordering guarantees</a>, so is
  only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param obj An object whose field to conditionally set
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful
 */
- (jboolean)weakCompareAndSetWithId:(id)obj
                            withInt:(jint)expect
                            withInt:(jint)update;

#pragma mark Protected

/*!
 @brief Protected do-nothing constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_newUpdaterWithIOSClass_withNSString_(IOSClass *tclass, NSString *fieldName);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater_init(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicIntegerFieldUpdater")
