//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/hash/AbstractCompositeHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractCompositeHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashAbstractCompositeHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashAbstractCompositeHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractCompositeHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractCompositeHashFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractCompositeHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractCompositeHashFunction || defined(INCLUDE_ComGoogleCommonHashAbstractCompositeHashFunction))
#define ComGoogleCommonHashAbstractCompositeHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractHashFunction 1
#include "com/google/common/hash/AbstractHashFunction.h"

@class ComGoogleCommonHashHashCode;
@class IOSObjectArray;
@protocol ComGoogleCommonHashHasher;

/*!
 @brief An abstract composition of multiple hash functions.newHasher() delegates to the 
 <code>Hasher</code> objects of the delegate hash functions, and in the end, they are used by 
 makeHash(Hasher[]) that constructs the final <code>HashCode</code>.
 @author Dimitris Andreou
 */
@interface ComGoogleCommonHashAbstractCompositeHashFunction : ComGoogleCommonHashAbstractHashFunction {
 @public
  IOSObjectArray *functions_;
}

#pragma mark Public

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonHashHashFunctionArray:(IOSObjectArray * __nonnull)functions;

/*!
 @brief Constructs a <code>HashCode</code> from the <code>Hasher</code> objects of the functions.Each of them
  has consumed the entire input and they are ready to output a <code>HashCode</code>.
 The order of the
  hashers are the same order as the functions given to the constructor.
 */
- (ComGoogleCommonHashHashCode *)makeHashWithComGoogleCommonHashHasherArray:(IOSObjectArray * __nonnull)hashers;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractCompositeHashFunction)

J2OBJC_FIELD_SETTER(ComGoogleCommonHashAbstractCompositeHashFunction, functions_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractCompositeHashFunction_initPackagePrivateWithComGoogleCommonHashHashFunctionArray_(ComGoogleCommonHashAbstractCompositeHashFunction *self, IOSObjectArray *functions);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractCompositeHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractCompositeHashFunction")
