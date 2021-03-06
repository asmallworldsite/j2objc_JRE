//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/FuturesGetChecked.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFuturesGetChecked
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFuturesGetChecked
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator
#define INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator;
@protocol JavaUtilConcurrentFuture;

/*!
 @brief Static methods used to implement <code>Futures.getChecked(Future, Class)</code>.
 */
@interface ComGoogleCommonUtilConcurrentFuturesGetChecked : NSObject

#pragma mark Package-Private

+ (void)checkExceptionClassValidityWithIOSClass:(IOSClass * __nonnull)exceptionClass;

+ (id)getCheckedWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture> __nonnull)future
                                withIOSClass:(IOSClass * __nonnull)exceptionClass;

/*!
 @brief Implementation of <code>Futures.getChecked(Future, Class, long, TimeUnit)</code>.
 */
+ (id)getCheckedWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture> __nonnull)future
                                withIOSClass:(IOSClass * __nonnull)exceptionClass
                                    withLong:(jlong)timeout
              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @brief Implementation of <code>Futures.getChecked(Future, Class)</code>.
 */
+ (id)getCheckedWithComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator:(id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> __nonnull)validator
                                                              withJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture> __nonnull)future
                                                                              withIOSClass:(IOSClass * __nonnull)exceptionClass;

+ (jboolean)isCheckedExceptionWithIOSClass:(IOSClass * __nonnull)type;

+ (id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)weakSetValidator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked)

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithJavaUtilConcurrentFuture_withIOSClass_(id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_withJavaUtilConcurrentFuture_withIOSClass_(id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> validator, id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentFuturesGetChecked_getCheckedWithJavaUtilConcurrentFuture_withIOSClass_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentFuture> future, IOSClass *exceptionClass, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_weakSetValidator(void);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentFuturesGetChecked_isCheckedExceptionWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFuturesGetChecked_checkExceptionClassValidityWithIOSClass_(IOSClass *exceptionClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator_

@class IOSClass;

@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator < JavaObject >

- (void)validateClassWithIOSClass:(IOSClass * __nonnull)exceptionClass;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_

@protocol ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator;

/*!
 @brief Provides a check of whether an exception type is valid for use with <code>FuturesGetChecked.getChecked(Future, Class)</code>
 , possibly using caching.
 <p>Uses reflection to gracefully fall back to when certain implementations aren't available.
 */
@interface ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder : NSObject
@property (readonly, copy, class) NSString *CLASS_VALUE_VALIDATOR_NAME NS_SWIFT_NAME(CLASS_VALUE_VALIDATOR_NAME);
@property (readonly, class, strong) id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> BEST_VALIDATOR NS_SWIFT_NAME(BEST_VALIDATOR);

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Returns the ClassValue-using validator, or falls back to the "weak Set" implementation if
  unable to do so.
 */
+ (id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)getBestValidator;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder)

inline NSString *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_get_CLASS_VALUE_VALIDATOR_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_CLASS_VALUE_VALIDATOR_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder, CLASS_VALUE_VALIDATOR_NAME, NSString *)

inline id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_get_BEST_VALIDATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_BEST_VALIDATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder, BEST_VALIDATOR, id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *new_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder *create_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_init(void);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator> ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_getBestValidator(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked || defined(INCLUDE_ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator))
#define ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_Enum) {
  ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator : JavaLangEnum < ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidator >

@property (readonly, class, nonnull) ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *INSTANCE NS_SWIFT_NAME(INSTANCE);
#pragma mark Public

- (void)validateClassWithIOSClass:(IOSClass * __nonnull)exceptionClass;

+ (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_values_[];

inline ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_get_INSTANCE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_values(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator *ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFuturesGetChecked_GetCheckedTypeValidatorHolder_WeakSetValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFuturesGetChecked")
