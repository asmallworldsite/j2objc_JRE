//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/jsr305/build_result/java/javax/annotation/ParametersAreNonnullByDefault.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault")
#ifdef RESTRICT_JavaxAnnotationParametersAreNonnullByDefault
#define INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault 0
#else
#define INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault 1
#endif
#undef RESTRICT_JavaxAnnotationParametersAreNonnullByDefault

#if !defined (JavaxAnnotationParametersAreNonnullByDefault_) && (INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault || defined(INCLUDE_JavaxAnnotationParametersAreNonnullByDefault))
#define JavaxAnnotationParametersAreNonnullByDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationParametersAreNonnullByDefault < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationParametersAreNonnullByDefault : NSObject < JavaxAnnotationParametersAreNonnullByDefault >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationParametersAreNonnullByDefault)

FOUNDATION_EXPORT id<JavaxAnnotationParametersAreNonnullByDefault> create_JavaxAnnotationParametersAreNonnullByDefault(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationParametersAreNonnullByDefault)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationParametersAreNonnullByDefault")
