//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/jsr305/build_result/java/javax/annotation/Tainted.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationTainted")
#ifdef RESTRICT_JavaxAnnotationTainted
#define INCLUDE_ALL_JavaxAnnotationTainted 0
#else
#define INCLUDE_ALL_JavaxAnnotationTainted 1
#endif
#undef RESTRICT_JavaxAnnotationTainted

#if !defined (JavaxAnnotationTainted_) && (INCLUDE_ALL_JavaxAnnotationTainted || defined(INCLUDE_JavaxAnnotationTainted))
#define JavaxAnnotationTainted_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationTainted < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationTainted : NSObject < JavaxAnnotationTainted >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationTainted)

FOUNDATION_EXPORT id<JavaxAnnotationTainted> create_JavaxAnnotationTainted(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationTainted)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationTainted")
