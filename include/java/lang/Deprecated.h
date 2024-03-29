//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Deprecated.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangDeprecated")
#ifdef RESTRICT_JavaLangDeprecated
#define INCLUDE_ALL_JavaLangDeprecated 0
#else
#define INCLUDE_ALL_JavaLangDeprecated 1
#endif
#undef RESTRICT_JavaLangDeprecated

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangDeprecated_) && (INCLUDE_ALL_JavaLangDeprecated || defined(INCLUDE_JavaLangDeprecated))
#define JavaLangDeprecated_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief A program element annotated <code>@@Deprecated</code> is one that programmers
  are discouraged from using.An element may be deprecated for any of several
  reasons, for example, its usage is likely to lead to errors; it may
  be changed incompatibly or removed in a future version; it has been
  superseded by a newer, usually preferable alternative; or it is obsolete.
 <p>Compilers issue warnings when a deprecated program element is used or
  overridden in non-deprecated code. Use of the <code>@@Deprecated</code>
  annotation on a local variable declaration or on a parameter declaration
  or a package declaration has no effect on the warnings issued by a compiler. 
 <p>When a module is deprecated, the use of that module in <code>requires</code>
 , but not in <code>exports</code> or <code>opens</code> clauses causes
  a warning to be issued. A module being deprecated does <em>not</em> cause
  warnings to be issued for uses of types within the module. 
 <p>This annotation type has a string-valued element <code>since</code>. The value
  of this element indicates the version in which the annotated program element
  was first deprecated. 
 <p>This annotation type has a boolean-valued element <code>forRemoval</code>.
  A value of <code>true</code> indicates intent to remove the annotated program
  element in a future version. A value of <code>false</code> indicates that use of
  the annotated program element is discouraged, but at the time the program
  element was annotated, there was no specific intent to remove it.
 @author Neal Gafter
 @since 1.5
 */
@protocol JavaLangDeprecated < JavaLangAnnotationAnnotation >

@property (readonly) NSString *since;
@property (readonly) jboolean forRemoval;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaLangDeprecated : NSObject < JavaLangDeprecated > {
 @public
  NSString *since_;
  jboolean forRemoval_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangDeprecated)

FOUNDATION_EXPORT id<JavaLangDeprecated> create_JavaLangDeprecated(jboolean forRemoval, NSString *since);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangDeprecated)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaLangDeprecated")
