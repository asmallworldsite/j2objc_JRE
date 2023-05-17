//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/rory/Workspace/j2objc-git/junit/build_result/java/org/hamcrest/StringDescription.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestStringDescription")
#ifdef RESTRICT_OrgHamcrestStringDescription
#define INCLUDE_ALL_OrgHamcrestStringDescription 0
#else
#define INCLUDE_ALL_OrgHamcrestStringDescription 1
#endif
#undef RESTRICT_OrgHamcrestStringDescription

#if !defined (OrgHamcrestStringDescription_) && (INCLUDE_ALL_OrgHamcrestStringDescription || defined(INCLUDE_OrgHamcrestStringDescription))
#define OrgHamcrestStringDescription_

#define RESTRICT_OrgHamcrestBaseDescription 1
#define INCLUDE_OrgHamcrestBaseDescription 1
#include "org/hamcrest/BaseDescription.h"

@class JavaLangCharacter;
@protocol JavaLangAppendable;
@protocol OrgHamcrestSelfDescribing;

@interface OrgHamcrestStringDescription : OrgHamcrestBaseDescription

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)outArg;

+ (NSString *)asStringWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)selfDescribing;

- (NSString *)description;

+ (NSString *)toStringWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)selfDescribing;

#pragma mark Protected

- (void)appendWithChar:(jchar)c;

- (void)appendWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestStringDescription)

FOUNDATION_EXPORT void OrgHamcrestStringDescription_init(OrgHamcrestStringDescription *self);

FOUNDATION_EXPORT OrgHamcrestStringDescription *new_OrgHamcrestStringDescription_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestStringDescription *create_OrgHamcrestStringDescription_init(void);

FOUNDATION_EXPORT void OrgHamcrestStringDescription_initWithJavaLangAppendable_(OrgHamcrestStringDescription *self, id<JavaLangAppendable> outArg);

FOUNDATION_EXPORT OrgHamcrestStringDescription *new_OrgHamcrestStringDescription_initWithJavaLangAppendable_(id<JavaLangAppendable> outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestStringDescription *create_OrgHamcrestStringDescription_initWithJavaLangAppendable_(id<JavaLangAppendable> outArg);

FOUNDATION_EXPORT NSString *OrgHamcrestStringDescription_toStringWithOrgHamcrestSelfDescribing_(id<OrgHamcrestSelfDescribing> selfDescribing);

FOUNDATION_EXPORT NSString *OrgHamcrestStringDescription_asStringWithOrgHamcrestSelfDescribing_(id<OrgHamcrestSelfDescribing> selfDescribing);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestStringDescription)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestStringDescription")
