//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/hamcrest/Factory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestFactory")
#ifdef RESTRICT_OrgHamcrestFactory
#define INCLUDE_ALL_OrgHamcrestFactory 0
#else
#define INCLUDE_ALL_OrgHamcrestFactory 1
#endif
#undef RESTRICT_OrgHamcrestFactory

#if !defined (OrgHamcrestFactory_) && (INCLUDE_ALL_OrgHamcrestFactory || defined(INCLUDE_OrgHamcrestFactory))
#define OrgHamcrestFactory_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol OrgHamcrestFactory < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgHamcrestFactory : NSObject < OrgHamcrestFactory >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestFactory)

FOUNDATION_EXPORT id<OrgHamcrestFactory> create_OrgHamcrestFactory(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestFactory")
