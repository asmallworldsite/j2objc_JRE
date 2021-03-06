//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/AtomicDoubleArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDoubleArray")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomicDoubleArray
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDoubleArray 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDoubleArray 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomicDoubleArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomicDoubleArray_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDoubleArray || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomicDoubleArray))
#define ComGoogleCommonUtilConcurrentAtomicDoubleArray_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSDoubleArray;

/*!
 @brief A <code>double</code> array in which elements may be updated atomically.See the <code>java.util.concurrent.atomic</code>
  package specification for description of the properties of atomic
  variables.
 <p><a id="bitEquals"></a>This class compares primitive <code>double</code> values in methods such as 
 <code>compareAndSet</code> by comparing their bitwise representation using <code>Double.doubleToRawLongBits</code>
 , which differs from both the primitive double <code>==</code> operator and
  from <code>Double.equals</code>, as if implemented by: 
 @code
 static boolean bitEquals(double x, double y) {
    long xBits = Double.doubleToRawLongBits(x);
    long yBits = Double.doubleToRawLongBits(y);
    return xBits == yBits;
  } 
 
@endcode
 @author Doug Lea
 @author Martin Buchholz
 @since 11.0
 */
@interface ComGoogleCommonUtilConcurrentAtomicDoubleArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new <code>AtomicDoubleArray</code> with the same length as, and all elements copied from,
  the given array.
 @param array the array to copy elements from
 @throw NullPointerExceptionif array is null
 */
- (instancetype __nonnull)initWithDoubleArray:(IOSDoubleArray * __nonnull)array;

/*!
 @brief Creates a new <code>AtomicDoubleArray</code> of the given length, with all elements initially zero.
 @param length the length of the array
 */
- (instancetype __nonnull)initWithInt:(jint)length;

/*!
 @brief Atomically adds the given value to the element at index <code>i</code>.
 @param i the index
 @param delta the value to add
 @return the updated value
 */
- (jdouble)addAndGetWithInt:(jint)i
                 withDouble:(jdouble)delta;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given updated value if the current
  value is <a href="#bitEquals">bitwise equal</a> to the expected value.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that the actual value was not equal to the
      expected value.
 */
- (jboolean)compareAndSetWithInt:(jint)i
                      withDouble:(jdouble)expect
                      withDouble:(jdouble)update;

/*!
 @brief Gets the current value at position <code>i</code>.
 @param i the index
 @return the current value
 */
- (jdouble)getWithInt:(jint)i;

/*!
 @brief Atomically adds the given value to the element at index <code>i</code>.
 @param i the index
 @param delta the value to add
 @return the previous value
 */
- (jdouble)getAndAddWithInt:(jint)i
                 withDouble:(jdouble)delta;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given value and returns the old value.
 @param i the index
 @param newValue the new value
 @return the previous value
 */
- (jdouble)getAndSetWithInt:(jint)i
                 withDouble:(jdouble)newValue;

/*!
 @brief Eventually sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 */
- (void)lazySetWithInt:(jint)i
            withDouble:(jdouble)newValue;

/*!
 @brief Returns the length of the array.
 @return the length of the array
 */
- (jint)length;

/*!
 @brief Sets the element at position <code>i</code> to the given value.
 @param i the index
 @param newValue the new value
 */
- (void)setWithInt:(jint)i
        withDouble:(jdouble)newValue;

/*!
 @brief Returns the String representation of the current values of array.
 @return the String representation of the current values of array
 */
- (NSString *)description;

/*!
 @brief Atomically sets the element at position <code>i</code> to the given updated value if the current
  value is <a href="#bitEquals">bitwise equal</a> to the expected value.
 <p>May <a href="http://download.oracle.com/javase/7/docs/api/java/util/concurrent/atomic/package-summary.html#Spurious">
  fail spuriously</a> and does not provide ordering guarantees, so is only rarely an appropriate
  alternative to <code>compareAndSet</code>.
 @param i the index
 @param expect the expected value
 @param update the new value
 @return true if successful
 */
- (jboolean)weakCompareAndSetWithInt:(jint)i
                          withDouble:(jdouble)expect
                          withDouble:(jdouble)update;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomicDoubleArray)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithInt_(ComGoogleCommonUtilConcurrentAtomicDoubleArray *self, jint length);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDoubleArray *new_ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithInt_(jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDoubleArray *create_ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithInt_(jint length);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithDoubleArray_(ComGoogleCommonUtilConcurrentAtomicDoubleArray *self, IOSDoubleArray *array);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDoubleArray *new_ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithDoubleArray_(IOSDoubleArray *array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicDoubleArray *create_ComGoogleCommonUtilConcurrentAtomicDoubleArray_initWithDoubleArray_(IOSDoubleArray *array);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomicDoubleArray)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicDoubleArray")
