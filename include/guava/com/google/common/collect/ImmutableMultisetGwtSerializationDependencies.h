//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ImmutableMultisetGwtSerializationDependencies.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies || defined(INCLUDE_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies))
#define ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies_

#define RESTRICT_ComGoogleCommonCollectImmutableCollection 1
#define INCLUDE_ComGoogleCommonCollectImmutableCollection 1
#include "com/google/common/collect/ImmutableCollection.h"

/*!
 @brief A dummy superclass to support GWT serialization of the element type of an <code>ImmutableMultiset</code>
 .The GWT supersource for this class contains a field of type <code>E</code>.
 <p>For details about this hack, see <code>GwtSerializationDependencies</code>, which takes the same
  approach but with a subclass rather than a superclass. 
 <p>TODO(cpovirk): Consider applying this subclass approach to our other types. 
 <p>For <code>ImmutableMultiset</code> in particular, I ran into a problem with the <code>GwtSerializationDependencies</code>
  approach: When autogenerating a serializer for the new class, GWT
  tries to refer to our dummy serializer for the superclass,
  ImmutableMultiset_CustomFieldSerializer. But that type has no methods (since it's never actually
  used). We could probably fix the problem by adding dummy methods to that class, but that is
  starting to sound harder than taking the superclass approach, which I've been coming to like,
  anyway, since it doesn't require us to declare dummy methods (though occasionally constructors)
  and make types non-final.
 */
@interface ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies : ComGoogleCommonCollectImmutableCollection

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies_initPackagePrivate(ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMultisetGwtSerializationDependencies")
