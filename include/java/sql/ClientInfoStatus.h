//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/ClientInfoStatus.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlClientInfoStatus")
#ifdef RESTRICT_JavaSqlClientInfoStatus
#define INCLUDE_ALL_JavaSqlClientInfoStatus 0
#else
#define INCLUDE_ALL_JavaSqlClientInfoStatus 1
#endif
#undef RESTRICT_JavaSqlClientInfoStatus

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlClientInfoStatus_) && (INCLUDE_ALL_JavaSqlClientInfoStatus || defined(INCLUDE_JavaSqlClientInfoStatus))
#define JavaSqlClientInfoStatus_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(jint, JavaSqlClientInfoStatus_Enum) {
  JavaSqlClientInfoStatus_Enum_REASON_UNKNOWN = 0,
  JavaSqlClientInfoStatus_Enum_REASON_UNKNOWN_PROPERTY = 1,
  JavaSqlClientInfoStatus_Enum_REASON_VALUE_INVALID = 2,
  JavaSqlClientInfoStatus_Enum_REASON_VALUE_TRUNCATED = 3,
};
#if J2OBJC_IMPORTED_BY_JAVA_IMPLEMENTATION
#define JavaSqlClientInfoStatus_ORDINAL jint
#else
#define JavaSqlClientInfoStatus_ORDINAL JavaSqlClientInfoStatus_Enum
#endif


/*!
 @brief Enumeration for status of the reason that a property could not be set
  via a call to <code>Connection.setClientInfo</code>
 @since 1.6
 */
@interface JavaSqlClientInfoStatus : JavaLangEnum

#pragma mark Public

+ (JavaSqlClientInfoStatus *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaSqlClientInfoStatus_Enum)toNSEnum;

- (JavaSqlClientInfoStatus_ORDINAL)ordinal;

@end

J2OBJC_STATIC_INIT(JavaSqlClientInfoStatus)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_values_[];

/*!
 @brief The client info property could not be set for some unknown reason
 @since 1.6
 */
inline JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_get_REASON_UNKNOWN(void);
J2OBJC_ENUM_CONSTANT(JavaSqlClientInfoStatus, REASON_UNKNOWN)

/*!
 @brief The client info property name specified was not a recognized property
  name.
 @since 1.6
 */
inline JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_get_REASON_UNKNOWN_PROPERTY(void);
J2OBJC_ENUM_CONSTANT(JavaSqlClientInfoStatus, REASON_UNKNOWN_PROPERTY)

/*!
 @brief The value specified for the client info property was not valid.
 @since 1.6
 */
inline JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_get_REASON_VALUE_INVALID(void);
J2OBJC_ENUM_CONSTANT(JavaSqlClientInfoStatus, REASON_VALUE_INVALID)

/*!
 @brief The value specified for the client info property was too large.
 @since 1.6
 */
inline JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_get_REASON_VALUE_TRUNCATED(void);
J2OBJC_ENUM_CONSTANT(JavaSqlClientInfoStatus, REASON_VALUE_TRUNCATED)

FOUNDATION_EXPORT IOSObjectArray *JavaSqlClientInfoStatus_values(void);

FOUNDATION_EXPORT JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaSqlClientInfoStatus *JavaSqlClientInfoStatus_fromOrdinal(JavaSqlClientInfoStatus_ORDINAL ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlClientInfoStatus)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlClientInfoStatus")
