//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/jsr305/build_result/java/javax/annotation/Signed.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationSigned")
#ifdef RESTRICT_JavaxAnnotationSigned
#define INCLUDE_ALL_JavaxAnnotationSigned 0
#else
#define INCLUDE_ALL_JavaxAnnotationSigned 1
#endif
#undef RESTRICT_JavaxAnnotationSigned

#if !defined (JavaxAnnotationSigned_) && (INCLUDE_ALL_JavaxAnnotationSigned || defined(INCLUDE_JavaxAnnotationSigned))
#define JavaxAnnotationSigned_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationSigned < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationSigned : NSObject < JavaxAnnotationSigned >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationSigned)

FOUNDATION_EXPORT id<JavaxAnnotationSigned> create_JavaxAnnotationSigned(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationSigned)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationSigned")
