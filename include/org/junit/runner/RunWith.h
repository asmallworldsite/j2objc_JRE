//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/junit/runner/RunWith.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerRunWith")
#ifdef RESTRICT_OrgJunitRunnerRunWith
#define INCLUDE_ALL_OrgJunitRunnerRunWith 0
#else
#define INCLUDE_ALL_OrgJunitRunnerRunWith 1
#endif
#undef RESTRICT_OrgJunitRunnerRunWith

#if !defined (OrgJunitRunnerRunWith_) && (INCLUDE_ALL_OrgJunitRunnerRunWith || defined(INCLUDE_OrgJunitRunnerRunWith))
#define OrgJunitRunnerRunWith_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol OrgJunitRunnerRunWith < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitRunnerRunWith : NSObject < OrgJunitRunnerRunWith > {
 @public
  IOSClass *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerRunWith)

FOUNDATION_EXPORT id<OrgJunitRunnerRunWith> create_OrgJunitRunnerRunWith(IOSClass *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerRunWith)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerRunWith")
