//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/ConnectionPoolDataSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSqlConnectionPoolDataSource")
#ifdef RESTRICT_JavaxSqlConnectionPoolDataSource
#define INCLUDE_ALL_JavaxSqlConnectionPoolDataSource 0
#else
#define INCLUDE_ALL_JavaxSqlConnectionPoolDataSource 1
#endif
#undef RESTRICT_JavaxSqlConnectionPoolDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlConnectionPoolDataSource_) && (INCLUDE_ALL_JavaxSqlConnectionPoolDataSource || defined(INCLUDE_JavaxSqlConnectionPoolDataSource))
#define JavaxSqlConnectionPoolDataSource_

#define RESTRICT_JavaxSqlCommonDataSource 1
#define INCLUDE_JavaxSqlCommonDataSource 1
#include "javax/sql/CommonDataSource.h"

@protocol JavaxSqlPooledConnection;

/*!
 @brief A factory for <code>PooledConnection</code>
  objects.An object that implements this interface will typically be
  registered with a naming service that is based on the
  Java<sup><font size=-2>TM</font></sup> Naming and Directory Interface
  (JNDI).
 @since 1.4
 */
@protocol JavaxSqlConnectionPoolDataSource < JavaxSqlCommonDataSource, JavaObject >

/*!
 @brief Attempts to establish a physical database connection that can
  be used as a pooled connection.
 @return a <code>PooledConnection</code> object that is a physical
          connection to the database that this         
 <code>ConnectionPoolDataSource</code> object represents
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.4
 */
- (id<JavaxSqlPooledConnection>)getPooledConnection;

/*!
 @brief Attempts to establish a physical database connection that can
  be used as a pooled connection.
 @param user the database user on whose behalf the connection is being made
 @param password the user's password
 @return a <code>PooledConnection</code> object that is a physical
          connection to the database that this         
 <code>ConnectionPoolDataSource</code> object represents
 @throw SQLExceptionif a database access error occurs
 @throw SQLFeatureNotSupportedExceptionif the JDBC driver does not support
  this method
 @since 1.4
 */
- (id<JavaxSqlPooledConnection>)getPooledConnectionWithNSString:(NSString *)user
                                                   withNSString:(NSString *)password;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlConnectionPoolDataSource)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlConnectionPoolDataSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSqlConnectionPoolDataSource")
