//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/errorprone/annotations/Var.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsVar")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsVar
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsVar 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsVar 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsVar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsVar_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsVar || defined(INCLUDE_ComGoogleErrorproneAnnotationsVar))
#define ComGoogleErrorproneAnnotationsVar_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief The parameter or local variable to which this annotation is applied is non-final.
 <p>Most references are never modified, and accidentally modifying a reference is a potential
  source of bugs. To prevent accidental modifications, the accompanying Error Prone <a href="http://errorprone.info/bugpattern/Var">
 check</a> prevents parameters and local variables
  from being modified unless they are explicitly annotated with @@Var. 
 <p>Since Java 8 can infer whether a local variable or parameter is effectively <code>final</code>, and 
 <code>@@Var</code> makes it clear whether any variable is non- <code>final</code>, explicitly marking local
  variables and parameters as <code>final</code> is discouraged. 
 <p>The annotation can also be applied to fields, to indicate that the field is deliberately
  non-final.
 */
@protocol ComGoogleErrorproneAnnotationsVar < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsVar : NSObject < ComGoogleErrorproneAnnotationsVar >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsVar)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsVar> create_ComGoogleErrorproneAnnotationsVar(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsVar)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsVar")
