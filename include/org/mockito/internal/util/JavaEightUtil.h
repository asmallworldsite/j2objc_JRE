//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/JavaEightUtil.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilJavaEightUtil")
#ifdef RESTRICT_OrgMockitoInternalUtilJavaEightUtil
#define INCLUDE_ALL_OrgMockitoInternalUtilJavaEightUtil 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilJavaEightUtil 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilJavaEightUtil

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilJavaEightUtil_) && (INCLUDE_ALL_OrgMockitoInternalUtilJavaEightUtil || defined(INCLUDE_OrgMockitoInternalUtilJavaEightUtil))
#define OrgMockitoInternalUtilJavaEightUtil_

/*!
 @brief Helper class to work with features that were introduced in Java versions after 1.5.
 This class uses reflection in most places to avoid coupling with a newer JDK.
 */
@interface OrgMockitoInternalUtilJavaEightUtil : NSObject

#pragma mark Public

/*!
 @brief Creates an empty DoubleStream using reflection to stay backwards-compatible with older JDKs.
 @return an empty DoubleStream.
 */
+ (id)emptyDoubleStream;

/*!
 @brief Creates an empty IntStream using reflection to stay backwards-compatible with older JDKs.
 @return an empty IntStream.
 */
+ (id)emptyIntStream;

/*!
 @brief Creates an empty LongStream using reflection to stay backwards-compatible with older JDKs.
 @return an empty LongStream.
 */
+ (id)emptyLongStream;

/*!
 @brief Creates an empty Optional using reflection to stay backwards-compatible with older JDKs.
 @return an empty Optional.
 */
+ (id)emptyOptional;

/*!
 @brief Creates an empty OptionalDouble using reflection to stay backwards-compatible with older JDKs.
 @return an empty OptionalDouble.
 */
+ (id)emptyOptionalDouble;

/*!
 @brief Creates an empty OptionalInt using reflection to stay backwards-compatible with older JDKs.
 @return an empty OptionalInt.
 */
+ (id)emptyOptionalInt;

/*!
 @brief Creates an empty OptionalLong using reflection to stay backwards-compatible with older JDKs.
 @return an empty OptionalLong.
 */
+ (id)emptyOptionalLong;

/*!
 @brief Creates an empty Stream using reflection to stay backwards-compatible with older JDKs.
 @return an empty Stream.
 */
+ (id)emptyStream;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilJavaEightUtil)

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyOptional(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyOptionalDouble(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyOptionalInt(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyOptionalLong(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyStream(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyDoubleStream(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyIntStream(void);

FOUNDATION_EXPORT id OrgMockitoInternalUtilJavaEightUtil_emptyLongStream(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilJavaEightUtil)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilJavaEightUtil")
