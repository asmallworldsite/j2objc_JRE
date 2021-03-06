//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/hash/Funnel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashFunnel")
#ifdef RESTRICT_ComGoogleCommonHashFunnel
#define INCLUDE_ALL_ComGoogleCommonHashFunnel 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashFunnel 1
#endif
#undef RESTRICT_ComGoogleCommonHashFunnel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashFunnel_) && (INCLUDE_ALL_ComGoogleCommonHashFunnel || defined(INCLUDE_ComGoogleCommonHashFunnel))
#define ComGoogleCommonHashFunnel_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashPrimitiveSink;

/*!
 @brief An object which can send data from an object of type <code>T</code> into a <code>PrimitiveSink</code>.
 Implementations for common types can be found in <code>Funnels</code>.
  
 <p>Note that serialization of bloom filters requires the proper
  serialization of funnels. When possible, it is recommended that funnels be implemented as a
  single-element enum to maintain serialization guarantees. See Effective Java (2nd Edition), Item
  3: "Enforce the singleton property with a private constructor or an enum type". For example: 
 @code
 public enum PersonFunnel implements Funnel<Person> {
    INSTANCE;
    public void funnel(Person person, PrimitiveSink into) {
      into.putUnencodedChars(person.getFirstName())
          .putUnencodedChars(person.getLastName())
          .putInt(person.getAge());
    }  }  
 
@endcode
 @author Dimitris Andreou
 @since 11.0
 */
@protocol ComGoogleCommonHashFunnel < JavaIoSerializable, JavaObject >

/*!
 @brief Sends a stream of data from the <code>from</code> object into the sink <code>into</code>.There is no
  requirement that this data be complete enough to fully reconstitute the object later.
 @since 12.0 (in Guava 11.0, <code>PrimitiveSink</code> was named <code>Sink</code>)
 */
- (void)funnelWithId:(id __nonnull)from
withComGoogleCommonHashPrimitiveSink:(id<ComGoogleCommonHashPrimitiveSink> __nonnull)into;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashFunnel)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashFunnel)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashFunnel")
