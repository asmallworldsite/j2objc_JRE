//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/lang/model/type/TypeKind.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxLangModelTypeTypeKind")
#ifdef RESTRICT_JavaxLangModelTypeTypeKind
#define INCLUDE_ALL_JavaxLangModelTypeTypeKind 0
#else
#define INCLUDE_ALL_JavaxLangModelTypeTypeKind 1
#endif
#undef RESTRICT_JavaxLangModelTypeTypeKind

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxLangModelTypeTypeKind_) && (INCLUDE_ALL_JavaxLangModelTypeTypeKind || defined(INCLUDE_JavaxLangModelTypeTypeKind))
#define JavaxLangModelTypeTypeKind_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxLangModelTypeTypeKind_Enum) {
  JavaxLangModelTypeTypeKind_Enum_BOOLEAN = 0,
  JavaxLangModelTypeTypeKind_Enum_BYTE = 1,
  JavaxLangModelTypeTypeKind_Enum_SHORT = 2,
  JavaxLangModelTypeTypeKind_Enum_INT = 3,
  JavaxLangModelTypeTypeKind_Enum_LONG = 4,
  JavaxLangModelTypeTypeKind_Enum_CHAR = 5,
  JavaxLangModelTypeTypeKind_Enum_FLOAT = 6,
  JavaxLangModelTypeTypeKind_Enum_DOUBLE = 7,
  JavaxLangModelTypeTypeKind_Enum_VOID = 8,
  JavaxLangModelTypeTypeKind_Enum_NONE = 9,
  JavaxLangModelTypeTypeKind_Enum_NULL = 10,
  JavaxLangModelTypeTypeKind_Enum_ARRAY = 11,
  JavaxLangModelTypeTypeKind_Enum_DECLARED = 12,
  JavaxLangModelTypeTypeKind_Enum_ERROR = 13,
  JavaxLangModelTypeTypeKind_Enum_TYPEVAR = 14,
  JavaxLangModelTypeTypeKind_Enum_WILDCARD = 15,
  JavaxLangModelTypeTypeKind_Enum_PACKAGE = 16,
  JavaxLangModelTypeTypeKind_Enum_EXECUTABLE = 17,
  JavaxLangModelTypeTypeKind_Enum_OTHER = 18,
  JavaxLangModelTypeTypeKind_Enum_UNION = 19,
  JavaxLangModelTypeTypeKind_Enum_INTERSECTION = 20,
};

@interface JavaxLangModelTypeTypeKind : JavaLangEnum

@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *BOOLEAN NS_SWIFT_NAME(BOOLEAN);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *BYTE NS_SWIFT_NAME(BYTE);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *SHORT NS_SWIFT_NAME(SHORT);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *INT NS_SWIFT_NAME(INT);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *LONG NS_SWIFT_NAME(LONG);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *CHAR NS_SWIFT_NAME(CHAR);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *FLOAT NS_SWIFT_NAME(FLOAT);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *DOUBLE NS_SWIFT_NAME(DOUBLE);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *VOID NS_SWIFT_NAME(VOID);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *NULL_ NS_SWIFT_NAME(NULL_);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *ARRAY NS_SWIFT_NAME(ARRAY);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *DECLARED NS_SWIFT_NAME(DECLARED);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *ERROR NS_SWIFT_NAME(ERROR);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *TYPEVAR NS_SWIFT_NAME(TYPEVAR);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *WILDCARD NS_SWIFT_NAME(WILDCARD);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *PACKAGE NS_SWIFT_NAME(PACKAGE);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *EXECUTABLE NS_SWIFT_NAME(EXECUTABLE);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *OTHER NS_SWIFT_NAME(OTHER);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *UNION NS_SWIFT_NAME(UNION);
@property (readonly, class, nonnull) JavaxLangModelTypeTypeKind *INTERSECTION NS_SWIFT_NAME(INTERSECTION);
#pragma mark Public

- (jboolean)isPrimitive;

+ (JavaxLangModelTypeTypeKind *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaxLangModelTypeTypeKind_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaxLangModelTypeTypeKind)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_values_[];

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_BOOLEAN(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, BOOLEAN)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_BYTE(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, BYTE)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_SHORT(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, SHORT)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_INT(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, INT)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_LONG(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, LONG)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_CHAR(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, CHAR)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_FLOAT(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, FLOAT)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_DOUBLE(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, DOUBLE)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_VOID(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, VOID)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_NONE(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, NONE)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_NULL(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, NULL)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_ARRAY(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, ARRAY)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_DECLARED(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, DECLARED)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_ERROR(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, ERROR)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_TYPEVAR(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, TYPEVAR)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_WILDCARD(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, WILDCARD)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_PACKAGE(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, PACKAGE)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_EXECUTABLE(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, EXECUTABLE)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_OTHER(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, OTHER)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_UNION(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, UNION)

inline JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_get_INTERSECTION(void);
J2OBJC_ENUM_CONSTANT(JavaxLangModelTypeTypeKind, INTERSECTION)

FOUNDATION_EXPORT IOSObjectArray *JavaxLangModelTypeTypeKind_values(void);

FOUNDATION_EXPORT JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxLangModelTypeTypeKind *JavaxLangModelTypeTypeKind_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxLangModelTypeTypeKind)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxLangModelTypeTypeKind")