//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Ref.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlRef")
#ifdef RESTRICT_JavaSqlRef
#define INCLUDE_ALL_JavaSqlRef 0
#else
#define INCLUDE_ALL_JavaSqlRef 1
#endif
#undef RESTRICT_JavaSqlRef

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlRef_) && (INCLUDE_ALL_JavaSqlRef || defined(INCLUDE_JavaSqlRef))
#define JavaSqlRef_

@protocol JavaUtilMap;

/*!
 @brief The mapping in the Java programming language of an SQL <code>REF</code>
  value, which is a reference to an SQL structured type value in the database.
 <P>
  SQL <code>REF</code> values are stored in a table that contains
  instances of a referenceable SQL structured type, and each <code>REF</code>
  value is a unique identifier for one instance in that table.
  An SQL <code>REF</code> value may be used in place of the
  SQL structured type it references, either as a column value in a
  table or an attribute value in a structured type. 
 <P>
  Because an SQL <code>REF</code> value is a logical pointer to an
  SQL structured type, a <code>Ref</code> object is by default also a logical
  pointer. Thus, retrieving an SQL <code>REF</code> value as
  a <code>Ref</code> object does not materialize
  the attributes of the structured type on the client. 
 <P>
  A <code>Ref</code> object can be stored in the database using the 
 <code>PreparedStatement.setRef</code> method. 
 <p>
  All methods on the <code>Ref</code> interface must be fully implemented if the
  JDBC driver supports the data type.
 - seealso: Struct
 @since 1.2
 */
@protocol JavaSqlRef < JavaObject >

/*!
 @brief Retrieves the fully-qualified SQL name of the SQL structured type that
  this <code>Ref</code> object references.
 @return the fully-qualified SQL name of the referenced SQL structured type
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.2
 */
- (NSString *)getBaseTypeName;

/*!
 @brief Retrieves the referenced object and maps it to a Java type
  using the given type map.
 @param map a  <code> java.util.Map </code>  object that contains
          the mapping to use (the fully-qualified name of the SQL         structured type being referenced and the class object for
          
  <code> SQLData </code>  implementation to which the SQL         structured type will be mapped)
 @return a Java <code>Object</code> that is the custom mapping for
           the SQL structured type to which this <code>Ref</code>
           object refers
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.4
 - seealso: #setObject
 */
- (id)getObjectWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Retrieves the SQL structured type instance referenced by
  this <code>Ref</code> object.If the connection's type map has an entry
  for the structured type, the instance will be custom mapped to
  the Java class indicated in the type map.
 Otherwise, the
  structured type instance will be mapped to a <code>Struct</code> object.
 @return a Java <code>Object</code> that is the mapping for
           the SQL structured type to which this <code>Ref</code>
           object refers
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.4
 - seealso: #setObject
 */
- (id)getObject;

/*!
 @brief Sets the structured type value that this <code>Ref</code>
  object references to the given instance of <code>Object</code>.
 The driver converts this to an SQL structured type when it
  sends it to the database.
 @param value an  <code> Object </code>  representing the SQL
          structured type instance that this         
  <code> Ref </code>  object will reference
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.4
 - seealso: #getObject()
 - seealso: #getObject(Map)
 - seealso: PreparedStatement#setObject(int, Object)
 - seealso: CallableStatement#setObject(String, Object)
 */
- (void)setObjectWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlRef)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRef)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlRef")
