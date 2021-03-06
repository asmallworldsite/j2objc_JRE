//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/base/Absent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseAbsent")
#ifdef RESTRICT_ComGoogleCommonBaseAbsent
#define INCLUDE_ALL_ComGoogleCommonBaseAbsent 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseAbsent 1
#endif
#undef RESTRICT_ComGoogleCommonBaseAbsent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseAbsent_) && (INCLUDE_ALL_ComGoogleCommonBaseAbsent || defined(INCLUDE_ComGoogleCommonBaseAbsent))
#define ComGoogleCommonBaseAbsent_

#define RESTRICT_ComGoogleCommonBaseOptional 1
#define INCLUDE_ComGoogleCommonBaseOptional 1
#include "com/google/common/base/Optional.h"

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilSet;

/*!
 @brief Implementation of an <code>Optional</code> not containing a reference.
 */
@interface ComGoogleCommonBaseAbsent : ComGoogleCommonBaseOptional
@property (readonly, class, strong) ComGoogleCommonBaseAbsent *INSTANCE NS_SWIFT_NAME(INSTANCE);

#pragma mark Public

- (id<JavaUtilSet>)asSet;

- (jboolean)isEqual:(id __nullable)object;

- (id)get;

- (NSUInteger)hash;

- (jboolean)isPresent;

- (ComGoogleCommonBaseOptional *)or__WithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional * __nonnull)secondChoice;

- (id)or__WithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier> __nonnull)supplier;

- (id)or__WithId:(id __nonnull)defaultValue;

- (id)orNull;

- (NSString *)description;

- (ComGoogleCommonBaseOptional *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)function;

#pragma mark Package-Private

+ (ComGoogleCommonBaseOptional *)withType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseAbsent)

inline ComGoogleCommonBaseAbsent *ComGoogleCommonBaseAbsent_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseAbsent *ComGoogleCommonBaseAbsent_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseAbsent, INSTANCE, ComGoogleCommonBaseAbsent *)

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseAbsent_withType(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseAbsent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseAbsent")
