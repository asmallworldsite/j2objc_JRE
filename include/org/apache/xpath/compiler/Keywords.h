//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/Keywords.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerKeywords")
#ifdef RESTRICT_OrgApacheXpathCompilerKeywords
#define INCLUDE_ALL_OrgApacheXpathCompilerKeywords 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerKeywords 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerKeywords

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathCompilerKeywords_) && (INCLUDE_ALL_OrgApacheXpathCompilerKeywords || defined(INCLUDE_OrgApacheXpathCompilerKeywords))
#define OrgApacheXpathCompilerKeywords_

/*!
 @brief Table of strings to operation code lookups.
 */
@interface OrgApacheXpathCompilerKeywords : NSObject
@property (readonly, copy, class) NSString *FUNC_CURRENT_STRING NS_SWIFT_NAME(FUNC_CURRENT_STRING);
@property (readonly, copy, class) NSString *FUNC_LAST_STRING NS_SWIFT_NAME(FUNC_LAST_STRING);
@property (readonly, copy, class) NSString *FUNC_POSITION_STRING NS_SWIFT_NAME(FUNC_POSITION_STRING);
@property (readonly, copy, class) NSString *FUNC_COUNT_STRING NS_SWIFT_NAME(FUNC_COUNT_STRING);
@property (readonly, copy, class) NSString *FUNC_ID_STRING NS_SWIFT_NAME(FUNC_ID_STRING);
@property (readonly, copy, class) NSString *FUNC_KEY_STRING NS_SWIFT_NAME(FUNC_KEY_STRING);
@property (readonly, copy, class) NSString *FUNC_LOCAL_PART_STRING NS_SWIFT_NAME(FUNC_LOCAL_PART_STRING);
@property (readonly, copy, class) NSString *FUNC_NAMESPACE_STRING NS_SWIFT_NAME(FUNC_NAMESPACE_STRING);
@property (readonly, copy, class) NSString *FUNC_NAME_STRING NS_SWIFT_NAME(FUNC_NAME_STRING);
@property (readonly, copy, class) NSString *FUNC_GENERATE_ID_STRING NS_SWIFT_NAME(FUNC_GENERATE_ID_STRING);
@property (readonly, copy, class) NSString *FUNC_NOT_STRING NS_SWIFT_NAME(FUNC_NOT_STRING);
@property (readonly, copy, class) NSString *FUNC_TRUE_STRING NS_SWIFT_NAME(FUNC_TRUE_STRING);
@property (readonly, copy, class) NSString *FUNC_FALSE_STRING NS_SWIFT_NAME(FUNC_FALSE_STRING);
@property (readonly, copy, class) NSString *FUNC_BOOLEAN_STRING NS_SWIFT_NAME(FUNC_BOOLEAN_STRING);
@property (readonly, copy, class) NSString *FUNC_LANG_STRING NS_SWIFT_NAME(FUNC_LANG_STRING);
@property (readonly, copy, class) NSString *FUNC_NUMBER_STRING NS_SWIFT_NAME(FUNC_NUMBER_STRING);
@property (readonly, copy, class) NSString *FUNC_FLOOR_STRING NS_SWIFT_NAME(FUNC_FLOOR_STRING);
@property (readonly, copy, class) NSString *FUNC_CEILING_STRING NS_SWIFT_NAME(FUNC_CEILING_STRING);
@property (readonly, copy, class) NSString *FUNC_ROUND_STRING NS_SWIFT_NAME(FUNC_ROUND_STRING);
@property (readonly, copy, class) NSString *FUNC_SUM_STRING NS_SWIFT_NAME(FUNC_SUM_STRING);
@property (readonly, copy, class) NSString *FUNC_STRING_STRING NS_SWIFT_NAME(FUNC_STRING_STRING);
@property (readonly, copy, class) NSString *FUNC_STARTS_WITH_STRING NS_SWIFT_NAME(FUNC_STARTS_WITH_STRING);
@property (readonly, copy, class) NSString *FUNC_CONTAINS_STRING NS_SWIFT_NAME(FUNC_CONTAINS_STRING);
@property (readonly, copy, class) NSString *FUNC_SUBSTRING_BEFORE_STRING NS_SWIFT_NAME(FUNC_SUBSTRING_BEFORE_STRING);
@property (readonly, copy, class) NSString *FUNC_SUBSTRING_AFTER_STRING NS_SWIFT_NAME(FUNC_SUBSTRING_AFTER_STRING);
@property (readonly, copy, class) NSString *FUNC_NORMALIZE_SPACE_STRING NS_SWIFT_NAME(FUNC_NORMALIZE_SPACE_STRING);
@property (readonly, copy, class) NSString *FUNC_TRANSLATE_STRING NS_SWIFT_NAME(FUNC_TRANSLATE_STRING);
@property (readonly, copy, class) NSString *FUNC_CONCAT_STRING NS_SWIFT_NAME(FUNC_CONCAT_STRING);
@property (readonly, copy, class) NSString *FUNC_SYSTEM_PROPERTY_STRING NS_SWIFT_NAME(FUNC_SYSTEM_PROPERTY_STRING);
@property (readonly, copy, class) NSString *FUNC_EXT_FUNCTION_AVAILABLE_STRING NS_SWIFT_NAME(FUNC_EXT_FUNCTION_AVAILABLE_STRING);
@property (readonly, copy, class) NSString *FUNC_EXT_ELEM_AVAILABLE_STRING NS_SWIFT_NAME(FUNC_EXT_ELEM_AVAILABLE_STRING);
@property (readonly, copy, class) NSString *FUNC_SUBSTRING_STRING NS_SWIFT_NAME(FUNC_SUBSTRING_STRING);
@property (readonly, copy, class) NSString *FUNC_STRING_LENGTH_STRING NS_SWIFT_NAME(FUNC_STRING_LENGTH_STRING);
@property (readonly, copy, class) NSString *FUNC_UNPARSED_ENTITY_URI_STRING NS_SWIFT_NAME(FUNC_UNPARSED_ENTITY_URI_STRING);
@property (readonly, copy, class) NSString *FUNC_DOCLOCATION_STRING NS_SWIFT_NAME(FUNC_DOCLOCATION_STRING);

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Package-Private

+ (id)getAxisNameWithNSString:(NSString *)key;

+ (id)getKeyWordWithNSString:(NSString *)key;

+ (id)getNodeTypeWithNSString:(NSString *)key;

+ (id)lookupNodeTestWithNSString:(NSString *)key;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathCompilerKeywords)

/*!
 @brief current function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_CURRENT_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_CURRENT_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_CURRENT_STRING, NSString *)

/*!
 @brief last function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_LAST_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_LAST_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_LAST_STRING, NSString *)

/*!
 @brief position function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_POSITION_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_POSITION_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_POSITION_STRING, NSString *)

/*!
 @brief count function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_COUNT_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_COUNT_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_COUNT_STRING, NSString *)

/*!
 @brief id function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_ID_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_ID_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_ID_STRING, NSString *)

/*!
 @brief key function string (XSLT).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_KEY_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_KEY_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_KEY_STRING, NSString *)

/*!
 @brief local-name function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_LOCAL_PART_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_LOCAL_PART_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_LOCAL_PART_STRING, NSString *)

/*!
 @brief namespace-uri function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_NAMESPACE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_NAMESPACE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_NAMESPACE_STRING, NSString *)

/*!
 @brief name function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_NAME_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_NAME_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_NAME_STRING, NSString *)

/*!
 @brief generate-id function string (XSLT).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_GENERATE_ID_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_GENERATE_ID_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_GENERATE_ID_STRING, NSString *)

/*!
 @brief not function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_NOT_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_NOT_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_NOT_STRING, NSString *)

/*!
 @brief true function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_TRUE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_TRUE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_TRUE_STRING, NSString *)

/*!
 @brief false function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_FALSE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_FALSE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_FALSE_STRING, NSString *)

/*!
 @brief boolean function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_BOOLEAN_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_BOOLEAN_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_BOOLEAN_STRING, NSString *)

/*!
 @brief lang function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_LANG_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_LANG_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_LANG_STRING, NSString *)

/*!
 @brief number function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_NUMBER_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_NUMBER_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_NUMBER_STRING, NSString *)

/*!
 @brief floor function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_FLOOR_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_FLOOR_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_FLOOR_STRING, NSString *)

/*!
 @brief ceiling function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_CEILING_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_CEILING_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_CEILING_STRING, NSString *)

/*!
 @brief round function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_ROUND_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_ROUND_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_ROUND_STRING, NSString *)

/*!
 @brief sum function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_SUM_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_SUM_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_SUM_STRING, NSString *)

/*!
 @brief string function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_STRING_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_STRING_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_STRING_STRING, NSString *)

/*!
 @brief starts-with function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_STARTS_WITH_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_STARTS_WITH_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_STARTS_WITH_STRING, NSString *)

/*!
 @brief contains function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_CONTAINS_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_CONTAINS_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_CONTAINS_STRING, NSString *)

/*!
 @brief substring-before function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_SUBSTRING_BEFORE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_SUBSTRING_BEFORE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_SUBSTRING_BEFORE_STRING, NSString *)

/*!
 @brief substring-after function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_SUBSTRING_AFTER_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_SUBSTRING_AFTER_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_SUBSTRING_AFTER_STRING, NSString *)

/*!
 @brief normalize-space function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_NORMALIZE_SPACE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_NORMALIZE_SPACE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_NORMALIZE_SPACE_STRING, NSString *)

/*!
 @brief translate function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_TRANSLATE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_TRANSLATE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_TRANSLATE_STRING, NSString *)

/*!
 @brief concat function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_CONCAT_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_CONCAT_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_CONCAT_STRING, NSString *)

/*!
 @brief system-property function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_SYSTEM_PROPERTY_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_SYSTEM_PROPERTY_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_SYSTEM_PROPERTY_STRING, NSString *)

/*!
 @brief function-available function string (XSLT).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_EXT_FUNCTION_AVAILABLE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_EXT_FUNCTION_AVAILABLE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_EXT_FUNCTION_AVAILABLE_STRING, NSString *)

/*!
 @brief element-available function string (XSLT).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_EXT_ELEM_AVAILABLE_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_EXT_ELEM_AVAILABLE_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_EXT_ELEM_AVAILABLE_STRING, NSString *)

/*!
 @brief substring function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_SUBSTRING_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_SUBSTRING_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_SUBSTRING_STRING, NSString *)

/*!
 @brief string-length function string.
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_STRING_LENGTH_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_STRING_LENGTH_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_STRING_LENGTH_STRING, NSString *)

/*!
 @brief unparsed-entity-uri function string (XSLT).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_UNPARSED_ENTITY_URI_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_UNPARSED_ENTITY_URI_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_UNPARSED_ENTITY_URI_STRING, NSString *)

/*!
 @brief current function string (Proprietary).
 */
inline NSString *OrgApacheXpathCompilerKeywords_get_FUNC_DOCLOCATION_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerKeywords_FUNC_DOCLOCATION_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerKeywords, FUNC_DOCLOCATION_STRING, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathCompilerKeywords_init(OrgApacheXpathCompilerKeywords *self);

FOUNDATION_EXPORT OrgApacheXpathCompilerKeywords *new_OrgApacheXpathCompilerKeywords_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerKeywords *create_OrgApacheXpathCompilerKeywords_init(void);

FOUNDATION_EXPORT id OrgApacheXpathCompilerKeywords_getAxisNameWithNSString_(NSString *key);

FOUNDATION_EXPORT id OrgApacheXpathCompilerKeywords_lookupNodeTestWithNSString_(NSString *key);

FOUNDATION_EXPORT id OrgApacheXpathCompilerKeywords_getKeyWordWithNSString_(NSString *key);

FOUNDATION_EXPORT id OrgApacheXpathCompilerKeywords_getNodeTypeWithNSString_(NSString *key);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerKeywords)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerKeywords")
