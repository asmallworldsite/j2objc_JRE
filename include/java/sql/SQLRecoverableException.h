//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLRecoverableException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLRecoverableException")
#ifdef RESTRICT_JavaSqlSQLRecoverableException
#define INCLUDE_ALL_JavaSqlSQLRecoverableException 0
#else
#define INCLUDE_ALL_JavaSqlSQLRecoverableException 1
#endif
#undef RESTRICT_JavaSqlSQLRecoverableException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlSQLRecoverableException_) && (INCLUDE_ALL_JavaSqlSQLRecoverableException || defined(INCLUDE_JavaSqlSQLRecoverableException))
#define JavaSqlSQLRecoverableException_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include "java/sql/SQLException.h"

@class JavaLangInteger;
@class JavaLangThrowable;

/*!
 @brief The subclass of <code>SQLException</code> thrown in situations where a
  previously failed operation might be able to succeed if the application performs
   some recovery steps and retries the entire transaction or in the case of a
  distributed transaction, the transaction branch.At a minimum,
  the recovery operation must include closing the current connection and getting
  a new connection.
 <p>
 @since 1.6
 */
@interface JavaSqlSQLRecoverableException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @since 1.6
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
   with a given <code>reason</code>.The <code>SQLState</code>
  is initialized to <code>null</code> and the vender code is initialized
  to 0.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
  with a given <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
   with a given <code>reason</code>, <code>SQLState</code>  and 
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor specific exception code
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
  with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLRecoverableException</code> object
  with a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLRecoverableException)

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_init(JavaSqlSQLRecoverableException *self);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_init(void);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_(JavaSqlSQLRecoverableException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithJavaLangThrowable_(JavaSqlSQLRecoverableException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *create_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLRecoverableException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLRecoverableException")
