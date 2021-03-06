//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/base/Supplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseSupplier")
#ifdef RESTRICT_ComGoogleCommonBaseSupplier
#define INCLUDE_ALL_ComGoogleCommonBaseSupplier 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseSupplier 1
#endif
#undef RESTRICT_ComGoogleCommonBaseSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseSupplier_) && (INCLUDE_ALL_ComGoogleCommonBaseSupplier || defined(INCLUDE_ComGoogleCommonBaseSupplier))
#define ComGoogleCommonBaseSupplier_

#define RESTRICT_JavaUtilFunctionSupplier 1
#define INCLUDE_JavaUtilFunctionSupplier 1
#include "java/util/function/Supplier.h"

/*!
 @brief Legacy version of <code>java.util.function.Supplier</code>.Semantically,
  this could be a factory, generator, builder, closure, or something else entirely.
 No guarantees
  are implied by this interface. 
 <p>The <code>Suppliers</code> class provides common suppliers and related utilities. 
 <p>As this interface extends <code>java.util.function.Supplier</code>, an instance of this type can be
  used as a <code>java.util.function.Supplier</code> directly. To use a <code>java.util.function.Supplier</code>
  in a context where a <code>com.google.common.base.Supplier</code> is
  needed, use <code>supplier::get</code>.
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/FunctionalExplained">
 the use of <code>Function</code></a>.
 @author Harry Heymann
 @since 2.0
 */
@protocol ComGoogleCommonBaseSupplier < JavaUtilFunctionSupplier, JavaObject >

/*!
 @brief Retrieves an instance of the appropriate type.The returned object may or may not be a new
  instance, depending on the implementation.
 @return an instance of the appropriate type
 */
- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSupplier)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSupplier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseSupplier")
