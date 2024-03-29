//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/NClob.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlNClob")
#ifdef RESTRICT_JavaSqlNClob
#define INCLUDE_ALL_JavaSqlNClob 0
#else
#define INCLUDE_ALL_JavaSqlNClob 1
#endif
#undef RESTRICT_JavaSqlNClob

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlNClob_) && (INCLUDE_ALL_JavaSqlNClob || defined(INCLUDE_JavaSqlNClob))
#define JavaSqlNClob_

#define RESTRICT_JavaSqlClob 1
#define INCLUDE_JavaSqlClob 1
#include "java/sql/Clob.h"

/*!
 @brief The mapping in the Java<sup><font size=-2>TM</font></sup> programming language
  for the SQL <code>NCLOB</code> type.
 An SQL <code>NCLOB</code> is a built-in type
  that stores a Character Large Object using the National Character Set
   as a column value in a row of  a database table. 
 <P>The <code>NClob</code> interface extends the <code>Clob</code> interface
  which provides provides methods for getting the
  length of an SQL <code>NCLOB</code> value,
  for materializing a <code>NCLOB</code> value on the client, and for
  searching for a substring or <code>NCLOB</code> object within a 
 <code>NCLOB</code> value. A <code>NClob</code> object, just like a <code>Clob</code> object, is valid for the duration
  of the transaction in which it was created.
  Methods in the interfaces <code>ResultSet</code>,
  <code>CallableStatement</code>, and <code>PreparedStatement</code>, such as 
 <code>getNClob</code> and <code>setNClob</code> allow a programmer to
  access an SQL <code>NCLOB</code> value.  In addition, this interface
  has methods for updating a <code>NCLOB</code> value. 
 <p>
  All methods on the <code>NClob</code> interface must be fully implemented if the
  JDBC driver supports the data type.
 @since 1.6
 */
@protocol JavaSqlNClob < JavaSqlClob, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlNClob)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlNClob)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlNClob")
