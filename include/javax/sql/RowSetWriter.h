//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/RowSetWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSqlRowSetWriter")
#ifdef RESTRICT_JavaxSqlRowSetWriter
#define INCLUDE_ALL_JavaxSqlRowSetWriter 0
#else
#define INCLUDE_ALL_JavaxSqlRowSetWriter 1
#endif
#undef RESTRICT_JavaxSqlRowSetWriter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlRowSetWriter_) && (INCLUDE_ALL_JavaxSqlRowSetWriter || defined(INCLUDE_JavaxSqlRowSetWriter))
#define JavaxSqlRowSetWriter_

@class JavaLangBoolean;
@protocol JavaxSqlRowSetInternal;

/*!
 @brief An object that implements the <code>RowSetWriter</code> interface,
  called a <i>writer</i>.A writer may be registered with a <code>RowSet</code>
  object that supports the reader/writer paradigm.
 <P>
  If a disconnected <code>RowSet</code> object modifies some of its data,
  and it has a writer associated with it, it may be implemented so that it
  calls on the writer's <code>writeData</code> method internally
  to write the updates back to the data source. In order to do this, the writer
  must first establish a connection with the rowset's data source. 
 <P>
  If the data to be updated has already been changed in the data source, there
  is a conflict, in which case the writer will not write
  the changes to the data source.  The algorithm the writer uses for preventing
  or limiting conflicts depends entirely on its implementation.
 @since 1.4
 */
@protocol JavaxSqlRowSetWriter < JavaObject >

/*!
 @brief Writes the changes in this <code>RowSetWriter</code> object's
  rowset back to the data source from which it got its data.
 @param caller the  <code> RowSet </code>  object (1) that has implemented the
            <code> RowSetInternal </code>  interface, (2) with which this writer is
          registered, and (3) that called this method internally
 @return <code>true</code> if the modified data was written; <code>false</code>
           if not, which will be the case if there is a conflict
 @throw SQLExceptionif a database access error occurs
 */
- (jboolean)writeDataWithJavaxSqlRowSetInternal:(id<JavaxSqlRowSetInternal>)caller;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlRowSetWriter)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlRowSetWriter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxSqlRowSetWriter")
