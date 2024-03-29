//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Types.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlTypes")
#ifdef RESTRICT_JavaSqlTypes
#define INCLUDE_ALL_JavaSqlTypes 0
#else
#define INCLUDE_ALL_JavaSqlTypes 1
#endif
#undef RESTRICT_JavaSqlTypes

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlTypes_) && (INCLUDE_ALL_JavaSqlTypes || defined(INCLUDE_JavaSqlTypes))
#define JavaSqlTypes_

@class JavaLangInteger;

/*!
 @brief <P>The class that defines the constants that are used to identify generic
  SQL types, called JDBC types.
 <p>
  This class is never instantiated.
 */
@interface JavaSqlTypes : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlTypes)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>BIT</code>.
 */
inline jint JavaSqlTypes_get_BIT(void);
#define JavaSqlTypes_BIT -7
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, BIT, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>TINYINT</code>.
 */
inline jint JavaSqlTypes_get_TINYINT(void);
#define JavaSqlTypes_TINYINT -6
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, TINYINT, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>SMALLINT</code>.
 */
inline jint JavaSqlTypes_get_SMALLINT(void);
#define JavaSqlTypes_SMALLINT 5
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, SMALLINT, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>INTEGER</code>.
 */
inline jint JavaSqlTypes_get_INTEGER(void);
#define JavaSqlTypes_INTEGER 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, INTEGER, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>BIGINT</code>.
 */
inline jint JavaSqlTypes_get_BIGINT(void);
#define JavaSqlTypes_BIGINT -5
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, BIGINT, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>FLOAT</code>.
 */
inline jint JavaSqlTypes_get_FLOAT(void);
#define JavaSqlTypes_FLOAT 6
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, FLOAT, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>REAL</code>.
 */
inline jint JavaSqlTypes_get_REAL(void);
#define JavaSqlTypes_REAL 7
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, REAL, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>DOUBLE</code>.
 */
inline jint JavaSqlTypes_get_DOUBLE(void);
#define JavaSqlTypes_DOUBLE 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, DOUBLE, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>NUMERIC</code>.
 */
inline jint JavaSqlTypes_get_NUMERIC(void);
#define JavaSqlTypes_NUMERIC 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, NUMERIC, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>DECIMAL</code>.
 */
inline jint JavaSqlTypes_get_DECIMAL(void);
#define JavaSqlTypes_DECIMAL 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, DECIMAL, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>CHAR</code>.
 */
inline jint JavaSqlTypes_get_CHAR(void);
#define JavaSqlTypes_CHAR 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, CHAR, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>VARCHAR</code>.
 */
inline jint JavaSqlTypes_get_VARCHAR(void);
#define JavaSqlTypes_VARCHAR 12
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, VARCHAR, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>LONGVARCHAR</code>.
 */
inline jint JavaSqlTypes_get_LONGVARCHAR(void);
#define JavaSqlTypes_LONGVARCHAR -1
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, LONGVARCHAR, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>DATE</code>.
 */
inline jint JavaSqlTypes_get_DATE(void);
#define JavaSqlTypes_DATE 91
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, DATE, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>TIME</code>.
 */
inline jint JavaSqlTypes_get_TIME(void);
#define JavaSqlTypes_TIME 92
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, TIME, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>TIMESTAMP</code>.
 */
inline jint JavaSqlTypes_get_TIMESTAMP(void);
#define JavaSqlTypes_TIMESTAMP 93
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, TIMESTAMP, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>BINARY</code>.
 */
inline jint JavaSqlTypes_get_BINARY(void);
#define JavaSqlTypes_BINARY -2
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, BINARY, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>VARBINARY</code>.
 */
inline jint JavaSqlTypes_get_VARBINARY(void);
#define JavaSqlTypes_VARBINARY -3
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, VARBINARY, jint)

/*!
 @brief <P>The constant in the Java programming language, sometimes referred
  to as a type code, that identifies the generic SQL type 
 <code>LONGVARBINARY</code>.
 */
inline jint JavaSqlTypes_get_LONGVARBINARY(void);
#define JavaSqlTypes_LONGVARBINARY -4
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, LONGVARBINARY, jint)

/*!
 @brief <P>The constant in the Java programming language
  that identifies the generic SQL value 
 <code>NULL</code>.
 */
inline jint JavaSqlTypes_get_NULL(void);
#define JavaSqlTypes_NULL 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, NULL, jint)

/*!
 @brief The constant in the Java programming language that indicates
  that the SQL type is database-specific and
  gets mapped to a Java object that can be accessed via
  the methods <code>getObject</code> and <code>setObject</code>.
 */
inline jint JavaSqlTypes_get_OTHER(void);
#define JavaSqlTypes_OTHER 1111
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, OTHER, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>JAVA_OBJECT</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_JAVA_OBJECT(void);
#define JavaSqlTypes_JAVA_OBJECT 2000
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, JAVA_OBJECT, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>DISTINCT</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_DISTINCT(void);
#define JavaSqlTypes_DISTINCT 2001
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, DISTINCT, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>STRUCT</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_STRUCT(void);
#define JavaSqlTypes_STRUCT 2002
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, STRUCT, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>ARRAY</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_ARRAY(void);
#define JavaSqlTypes_ARRAY 2003
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, ARRAY, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>BLOB</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_BLOB(void);
#define JavaSqlTypes_BLOB 2004
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, BLOB, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>CLOB</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_CLOB(void);
#define JavaSqlTypes_CLOB 2005
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, CLOB, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type 
 <code>REF</code>.
 @since 1.2
 */
inline jint JavaSqlTypes_get_REF(void);
#define JavaSqlTypes_REF 2006
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, REF, jint)

/*!
 @brief The constant in the Java programming language, somtimes referred to
  as a type code, that identifies the generic SQL type <code>DATALINK</code>.
 @since 1.4
 */
inline jint JavaSqlTypes_get_DATALINK(void);
#define JavaSqlTypes_DATALINK 70
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, DATALINK, jint)

/*!
 @brief The constant in the Java programming language, somtimes referred to
  as a type code, that identifies the generic SQL type <code>BOOLEAN</code>.
 @since 1.4
 */
inline jint JavaSqlTypes_get_BOOLEAN(void);
#define JavaSqlTypes_BOOLEAN 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, BOOLEAN, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>ROWID</code>
 @since 1.6
 */
inline jint JavaSqlTypes_get_ROWID(void);
#define JavaSqlTypes_ROWID -8
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, ROWID, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>NCHAR</code>
 @since 1.6
 */
inline jint JavaSqlTypes_get_NCHAR(void);
#define JavaSqlTypes_NCHAR -15
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, NCHAR, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>NVARCHAR</code>.
 @since 1.6
 */
inline jint JavaSqlTypes_get_NVARCHAR(void);
#define JavaSqlTypes_NVARCHAR -9
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, NVARCHAR, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>LONGNVARCHAR</code>.
 @since 1.6
 */
inline jint JavaSqlTypes_get_LONGNVARCHAR(void);
#define JavaSqlTypes_LONGNVARCHAR -16
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, LONGNVARCHAR, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>NCLOB</code>.
 @since 1.6
 */
inline jint JavaSqlTypes_get_NCLOB(void);
#define JavaSqlTypes_NCLOB 2011
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, NCLOB, jint)

/*!
 @brief The constant in the Java programming language, sometimes referred to
  as a type code, that identifies the generic SQL type <code>XML</code>.
 @since 1.6
 */
inline jint JavaSqlTypes_get_SQLXML(void);
#define JavaSqlTypes_SQLXML 2009
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTypes, SQLXML, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTypes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlTypes")
