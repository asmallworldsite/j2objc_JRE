//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/stream/StreamSupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStreamStreamSupport")
#ifdef RESTRICT_JavaUtilStreamStreamSupport
#define INCLUDE_ALL_JavaUtilStreamStreamSupport 0
#else
#define INCLUDE_ALL_JavaUtilStreamStreamSupport 1
#endif
#undef RESTRICT_JavaUtilStreamStreamSupport

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilStreamStreamSupport_) && (INCLUDE_ALL_JavaUtilStreamStreamSupport || defined(INCLUDE_JavaUtilStreamStreamSupport))
#define JavaUtilStreamStreamSupport_

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilFunctionSupplier;
@protocol JavaUtilSpliterator;
@protocol JavaUtilSpliterator_OfDouble;
@protocol JavaUtilSpliterator_OfInt;
@protocol JavaUtilSpliterator_OfLong;
@protocol JavaUtilStreamDoubleStream;
@protocol JavaUtilStreamIntStream;
@protocol JavaUtilStreamLongStream;
@protocol JavaUtilStreamStream;

/*!
 @brief Low-level utility methods for creating and manipulating streams.
 <p>This class is mostly for library writers presenting stream views
  of data structures; most static stream methods intended for end users are in
  the various <code>Stream</code> classes.
 @since 1.8
 */
@interface JavaUtilStreamStreamSupport : NSObject

#pragma mark Public

/*!
 @brief Creates a new sequential or parallel <code>DoubleStream</code> from a 
 <code>Spliterator.OfDouble</code>.
 <p>The spliterator is only traversed, split, or queried for estimated size
  after the terminal operation of the stream pipeline commences. 
 <p>It is strongly recommended the spliterator report a characteristic of 
 <code>IMMUTABLE</code> or <code>CONCURRENT</code>, or be 
 <a href="../Spliterator.html#binding">late-binding</a>.  Otherwise, 
 <code>doubleStream(java.util.function.Supplier, int, boolean)</code> should
  be used to reduce the scope of potential interference with the source.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param spliterator A <code>Spliterator.OfDouble</code>  describing the stream elements
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>DoubleStream</code>
 */
+ (id<JavaUtilStreamDoubleStream>)doubleStreamWithJavaUtilSpliterator_OfDouble:(id<JavaUtilSpliterator_OfDouble>)spliterator
                                                                   withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>DoubleStream</code> from a 
 <code>Supplier</code> of <code>Spliterator.OfDouble</code>.
 <p>The <code>Supplier.get()</code> method will be invoked on the supplier no
  more than once, and only after the terminal operation of the stream pipeline
  commences. 
 <p>For spliterators that report a characteristic of <code>IMMUTABLE</code>
  or <code>CONCURRENT</code>, or that are 
 <a href="../Spliterator.html#binding">late-binding</a>, it is likely
  more efficient to use <code>doubleStream(java.util.Spliterator.OfDouble, boolean)</code>
  instead. 
 <p>The use of a <code>Supplier</code> in this form provides a level of
  indirection that reduces the scope of potential interference with the
  source.  Since the supplier is only invoked after the terminal operation
  commences, any modifications to the source up to the start of the
  terminal operation are reflected in the stream result.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param supplier A <code>Supplier</code>  of a <code>Spliterator.OfDouble</code>
 @param characteristics Spliterator characteristics of the supplied         
 <code>Spliterator.OfDouble</code> .  The characteristics must be equal to         
 <code>supplier.get().characteristics()</code> , otherwise undefined         behavior may occur when terminal operation commences.
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>DoubleStream</code>
 - seealso: #doubleStream(java.util.Spliterator.OfDouble, boolean)
 */
+ (id<JavaUtilStreamDoubleStream>)doubleStreamWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                                                                   withInt:(jint)characteristics
                                                               withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>IntStream</code> from a 
 <code>Spliterator.OfInt</code>.
 <p>The spliterator is only traversed, split, or queried for estimated size
  after the terminal operation of the stream pipeline commences. 
 <p>It is strongly recommended the spliterator report a characteristic of 
 <code>IMMUTABLE</code> or <code>CONCURRENT</code>, or be 
 <a href="../Spliterator.html#binding">late-binding</a>.  Otherwise, 
 <code>intStream(java.util.function.Supplier, int, boolean)</code> should be
  used to reduce the scope of potential interference with the source.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param spliterator a <code>Spliterator.OfInt</code>  describing the stream elements
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>IntStream</code>
 */
+ (id<JavaUtilStreamIntStream>)intStreamWithJavaUtilSpliterator_OfInt:(id<JavaUtilSpliterator_OfInt>)spliterator
                                                          withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>IntStream</code> from a 
 <code>Supplier</code> of <code>Spliterator.OfInt</code>.
 <p>The <code>Supplier.get()</code> method will be invoked on the supplier no
  more than once, and only after the terminal operation of the stream pipeline
  commences. 
 <p>For spliterators that report a characteristic of <code>IMMUTABLE</code>
  or <code>CONCURRENT</code>, or that are 
 <a href="../Spliterator.html#binding">late-binding</a>, it is likely
  more efficient to use <code>intStream(java.util.Spliterator.OfInt, boolean)</code>
  instead. 
 <p>The use of a <code>Supplier</code> in this form provides a level of
  indirection that reduces the scope of potential interference with the
  source.  Since the supplier is only invoked after the terminal operation
  commences, any modifications to the source up to the start of the
  terminal operation are reflected in the stream result.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param supplier a <code>Supplier</code>  of a <code>Spliterator.OfInt</code>
 @param characteristics Spliterator characteristics of the supplied         
 <code>Spliterator.OfInt</code> .  The characteristics must be equal to         
 <code>supplier.get().characteristics()</code> , otherwise undefined         behavior may occur when terminal operation commences.
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>IntStream</code>
 - seealso: #intStream(java.util.Spliterator.OfInt, boolean)
 */
+ (id<JavaUtilStreamIntStream>)intStreamWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                                                             withInt:(jint)characteristics
                                                         withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>LongStream</code> from a 
 <code>Spliterator.OfLong</code>.
 <p>The spliterator is only traversed, split, or queried for estimated
  size after the terminal operation of the stream pipeline commences. 
 <p>It is strongly recommended the spliterator report a characteristic of 
 <code>IMMUTABLE</code> or <code>CONCURRENT</code>, or be 
 <a href="../Spliterator.html#binding">late-binding</a>.  Otherwise, 
 <code>longStream(java.util.function.Supplier, int, boolean)</code> should be
  used to reduce the scope of potential interference with the source.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param spliterator a <code>Spliterator.OfLong</code>  describing the stream elements
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>LongStream</code>
 */
+ (id<JavaUtilStreamLongStream>)longStreamWithJavaUtilSpliterator_OfLong:(id<JavaUtilSpliterator_OfLong>)spliterator
                                                             withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>LongStream</code> from a 
 <code>Supplier</code> of <code>Spliterator.OfLong</code>.
 <p>The <code>Supplier.get()</code> method will be invoked on the supplier no
  more than once, and only after the terminal operation of the stream pipeline
  commences. 
 <p>For spliterators that report a characteristic of <code>IMMUTABLE</code>
  or <code>CONCURRENT</code>, or that are 
 <a href="../Spliterator.html#binding">late-binding</a>, it is likely
  more efficient to use <code>longStream(java.util.Spliterator.OfLong, boolean)</code>
  instead. 
 <p>The use of a <code>Supplier</code> in this form provides a level of
  indirection that reduces the scope of potential interference with the
  source.  Since the supplier is only invoked after the terminal operation
  commences, any modifications to the source up to the start of the
  terminal operation are reflected in the stream result.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param supplier a <code>Supplier</code>  of a <code>Spliterator.OfLong</code>
 @param characteristics Spliterator characteristics of the supplied         
 <code>Spliterator.OfLong</code> .  The characteristics must be equal to         
 <code>supplier.get().characteristics()</code> , otherwise undefined         behavior may occur when terminal operation commences.
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>LongStream</code>
 - seealso: #longStream(java.util.Spliterator.OfLong, boolean)
 */
+ (id<JavaUtilStreamLongStream>)longStreamWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                                                               withInt:(jint)characteristics
                                                           withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>Stream</code> from a 
 <code>Spliterator</code>.
 <p>The spliterator is only traversed, split, or queried for estimated
  size after the terminal operation of the stream pipeline commences. 
 <p>It is strongly recommended the spliterator report a characteristic of 
 <code>IMMUTABLE</code> or <code>CONCURRENT</code>, or be 
 <a href="../Spliterator.html#binding">late-binding</a>.  Otherwise, 
 <code>stream(java.util.function.Supplier, int, boolean)</code> should be used
  to reduce the scope of potential interference with the source.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param spliterator a <code>Spliterator</code>  describing the stream elements
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>Stream</code>
 */
+ (id<JavaUtilStreamStream>)streamWithJavaUtilSpliterator:(id<JavaUtilSpliterator>)spliterator
                                              withBoolean:(jboolean)parallel;

/*!
 @brief Creates a new sequential or parallel <code>Stream</code> from a 
 <code>Supplier</code> of <code>Spliterator</code>.
 <p>The <code>Supplier.get()</code> method will be invoked on the supplier no
  more than once, and only after the terminal operation of the stream pipeline
  commences. 
 <p>For spliterators that report a characteristic of <code>IMMUTABLE</code>
  or <code>CONCURRENT</code>, or that are 
 <a href="../Spliterator.html#binding">late-binding</a>, it is likely
  more efficient to use <code>stream(java.util.Spliterator, boolean)</code>
  instead. 
 <p>The use of a <code>Supplier</code> in this form provides a level of
  indirection that reduces the scope of potential interference with the
  source.  Since the supplier is only invoked after the terminal operation
  commences, any modifications to the source up to the start of the
  terminal operation are reflected in the stream result.  See 
 <a href="package-summary.html#NonInterference">Non-Interference</a> for
  more details.
 @param supplier a <code>Supplier</code>  of a <code>Spliterator</code>
 @param characteristics Spliterator characteristics of the supplied         
 <code>Spliterator</code> .  The characteristics must be equal to         
 <code>supplier.get().characteristics()</code> , otherwise undefined         behavior may occur when terminal operation commences.
 @param parallel if <code>true</code>  then the returned stream is a parallel
          stream; if <code>false</code>  the returned stream is a sequential         stream.
 @return a new sequential or parallel <code>Stream</code>
 - seealso: #stream(java.util.Spliterator, boolean)
 */
+ (id<JavaUtilStreamStream>)streamWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                                                       withInt:(jint)characteristics
                                                   withBoolean:(jboolean)parallel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamStreamSupport)

FOUNDATION_EXPORT id<JavaUtilStreamStream> JavaUtilStreamStreamSupport_streamWithJavaUtilSpliterator_withBoolean_(id<JavaUtilSpliterator> spliterator, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamStream> JavaUtilStreamStreamSupport_streamWithJavaUtilFunctionSupplier_withInt_withBoolean_(id<JavaUtilFunctionSupplier> supplier, jint characteristics, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamIntStream> JavaUtilStreamStreamSupport_intStreamWithJavaUtilSpliterator_OfInt_withBoolean_(id<JavaUtilSpliterator_OfInt> spliterator, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamIntStream> JavaUtilStreamStreamSupport_intStreamWithJavaUtilFunctionSupplier_withInt_withBoolean_(id<JavaUtilFunctionSupplier> supplier, jint characteristics, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamStreamSupport_longStreamWithJavaUtilSpliterator_OfLong_withBoolean_(id<JavaUtilSpliterator_OfLong> spliterator, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamStreamSupport_longStreamWithJavaUtilFunctionSupplier_withInt_withBoolean_(id<JavaUtilFunctionSupplier> supplier, jint characteristics, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamDoubleStream> JavaUtilStreamStreamSupport_doubleStreamWithJavaUtilSpliterator_OfDouble_withBoolean_(id<JavaUtilSpliterator_OfDouble> spliterator, jboolean parallel);

FOUNDATION_EXPORT id<JavaUtilStreamDoubleStream> JavaUtilStreamStreamSupport_doubleStreamWithJavaUtilFunctionSupplier_withInt_withBoolean_(id<JavaUtilFunctionSupplier> supplier, jint characteristics, jboolean parallel);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamStreamSupport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilStreamStreamSupport")
