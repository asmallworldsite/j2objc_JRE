//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/runners/model/TestClass.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelTestClass")
#ifdef RESTRICT_OrgJunitRunnersModelTestClass
#define INCLUDE_ALL_OrgJunitRunnersModelTestClass 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelTestClass 1
#endif
#undef RESTRICT_OrgJunitRunnersModelTestClass

#if !defined (OrgJunitRunnersModelTestClass_) && (INCLUDE_ALL_OrgJunitRunnersModelTestClass || defined(INCLUDE_OrgJunitRunnersModelTestClass))
#define OrgJunitRunnersModelTestClass_

#define RESTRICT_OrgJunitRunnersModelAnnotatable 1
#define INCLUDE_OrgJunitRunnersModelAnnotatable 1
#include "org/junit/runners/model/Annotatable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangReflectConstructor;
@class OrgJunitRunnersModelFrameworkMember;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol OrgJunitRunnersModelMemberValueConsumer;

@interface OrgJunitRunnersModelTestClass : NSObject < OrgJunitRunnersModelAnnotatable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)clazz;

- (void)collectAnnotatedFieldValuesWithId:(id)test
                             withIOSClass:(IOSClass *)annotationClass
                             withIOSClass:(IOSClass *)valueClass
withOrgJunitRunnersModelMemberValueConsumer:(id<OrgJunitRunnersModelMemberValueConsumer>)consumer;

- (void)collectAnnotatedMethodValuesWithId:(id)test
                              withIOSClass:(IOSClass *)annotationClass
                              withIOSClass:(IOSClass *)valueClass
withOrgJunitRunnersModelMemberValueConsumer:(id<OrgJunitRunnersModelMemberValueConsumer>)consumer;

- (jboolean)isEqual:(id)obj;

- (id<JavaUtilList>)getAnnotatedFields;

- (id<JavaUtilList>)getAnnotatedFieldsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedFieldValuesWithId:(id)test
                                     withIOSClass:(IOSClass *)annotationClass
                                     withIOSClass:(IOSClass *)valueClass;

- (id<JavaUtilList>)getAnnotatedMethods;

- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedMethodValuesWithId:(id)test
                                      withIOSClass:(IOSClass *)annotationClass
                                      withIOSClass:(IOSClass *)valueClass;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (IOSObjectArray *)getAnnotations;

- (IOSClass *)getJavaClass;

- (NSString *)getName;

- (JavaLangReflectConstructor *)getOnlyConstructor;

- (NSUInteger)hash;

- (jboolean)isANonStaticInnerClass;

- (jboolean)isPublic;

#pragma mark Protected

+ (void)addToAnnotationListsWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMember *)member
                                                    withJavaUtilMap:(id<JavaUtilMap>)map;

- (void)scanAnnotatedMembersWithJavaUtilMap:(id<JavaUtilMap>)methodsForAnnotations
                            withJavaUtilMap:(id<JavaUtilMap>)fieldsForAnnotations;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnersModelTestClass)

FOUNDATION_EXPORT void OrgJunitRunnersModelTestClass_initWithIOSClass_(OrgJunitRunnersModelTestClass *self, IOSClass *clazz);

FOUNDATION_EXPORT OrgJunitRunnersModelTestClass *new_OrgJunitRunnersModelTestClass_initWithIOSClass_(IOSClass *clazz) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelTestClass *create_OrgJunitRunnersModelTestClass_initWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT void OrgJunitRunnersModelTestClass_addToAnnotationListsWithOrgJunitRunnersModelFrameworkMember_withJavaUtilMap_(OrgJunitRunnersModelFrameworkMember *member, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelTestClass)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelTestClass")
