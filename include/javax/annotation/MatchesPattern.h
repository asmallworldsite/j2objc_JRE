//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/jsr305/build_result/java/javax/annotation/MatchesPattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMatchesPattern")
#ifdef RESTRICT_JavaxAnnotationMatchesPattern
#define INCLUDE_ALL_JavaxAnnotationMatchesPattern 0
#else
#define INCLUDE_ALL_JavaxAnnotationMatchesPattern 1
#endif
#undef RESTRICT_JavaxAnnotationMatchesPattern

#if !defined (JavaxAnnotationMatchesPattern_) && (INCLUDE_ALL_JavaxAnnotationMatchesPattern || defined(INCLUDE_JavaxAnnotationMatchesPattern))
#define JavaxAnnotationMatchesPattern_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol JavaxAnnotationMatchesPattern < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) jint flags;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationMatchesPattern : NSObject < JavaxAnnotationMatchesPattern > {
 @public
  NSString *value_;
  jint flags_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern)

FOUNDATION_EXPORT id<JavaxAnnotationMatchesPattern> create_JavaxAnnotationMatchesPattern(jint flags, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern)

#endif

#if !defined (JavaxAnnotationMatchesPattern_Checker_) && (INCLUDE_ALL_JavaxAnnotationMatchesPattern || defined(INCLUDE_JavaxAnnotationMatchesPattern_Checker))
#define JavaxAnnotationMatchesPattern_Checker_

#define RESTRICT_JavaxAnnotationMetaTypeQualifierValidator 1
#define INCLUDE_JavaxAnnotationMetaTypeQualifierValidator 1
#include "javax/annotation/meta/TypeQualifierValidator.h"

@class JavaxAnnotationMetaWhen;
@protocol JavaxAnnotationMatchesPattern;

@interface JavaxAnnotationMatchesPattern_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhen *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationMatchesPattern>)annotation
                                                                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern_Checker)

FOUNDATION_EXPORT void JavaxAnnotationMatchesPattern_Checker_init(JavaxAnnotationMatchesPattern_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationMatchesPattern_Checker *new_JavaxAnnotationMatchesPattern_Checker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxAnnotationMatchesPattern_Checker *create_JavaxAnnotationMatchesPattern_Checker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern_Checker)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMatchesPattern")
