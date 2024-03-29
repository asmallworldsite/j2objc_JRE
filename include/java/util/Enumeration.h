//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Enumeration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilEnumeration")
#ifdef RESTRICT_JavaUtilEnumeration
#define INCLUDE_ALL_JavaUtilEnumeration 0
#else
#define INCLUDE_ALL_JavaUtilEnumeration 1
#endif
#undef RESTRICT_JavaUtilEnumeration

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilEnumeration_) && (INCLUDE_ALL_JavaUtilEnumeration || defined(INCLUDE_JavaUtilEnumeration))
#define JavaUtilEnumeration_

@class JavaLangBoolean;

/*!
 @brief An object that implements the Enumeration interface generates a
  series of elements, one at a time.Successive calls to the 
 <code>nextElement</code> method return successive elements of the
  series.
 <p>
  For example, to print all elements of a <tt>Vector&lt;E&gt;</tt> <i>v</i>:
  @code

    for (Enumeration&lt;E&gt; e = v.elements(); e.hasMoreElements();)
        System.out.println(e.nextElement());
@endcode
  <p>
  Methods are provided to enumerate through the elements of a
  vector, the keys of a hashtable, and the values in a hashtable.
  Enumerations are also used to specify the input streams to a 
 <code>SequenceInputStream</code>.
  <p>
  NOTE: The functionality of this interface is duplicated by the Iterator
  interface.  In addition, Iterator adds an optional remove operation, and
  has shorter method names.  New implementations should consider using
  Iterator in preference to Enumeration.
 - seealso: java.util.Iterator
 - seealso: java.io.SequenceInputStream
 - seealso: java.util.Enumeration#nextElement()
 - seealso: java.util.Hashtable
 - seealso: java.util.Hashtable#elements()
 - seealso: java.util.Hashtable#keys()
 - seealso: java.util.Vector
 - seealso: java.util.Vector#elements()
 @author Lee Boynton
 @since JDK1.0
 */
@protocol JavaUtilEnumeration < JavaObject >

/*!
 @brief Tests if this enumeration contains more elements.
 @return <code>true</code> if and only if this enumeration object
            contains at least one more element to provide;          
 <code>false</code> otherwise.
 */
- (jboolean)hasMoreElements;

/*!
 @brief Returns the next element of this enumeration if this enumeration
  object has at least one more element to provide.
 @return the next element of this enumeration.
 @throw NoSuchElementExceptionif no more elements exist.
 */
- (id)nextElement;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEnumeration)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumeration)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilEnumeration")
