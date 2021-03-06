//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/BaseDescription.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestBaseDescription")
#ifdef RESTRICT_OrgHamcrestBaseDescription
#define INCLUDE_ALL_OrgHamcrestBaseDescription 0
#else
#define INCLUDE_ALL_OrgHamcrestBaseDescription 1
#endif
#undef RESTRICT_OrgHamcrestBaseDescription

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgHamcrestBaseDescription_) && (INCLUDE_ALL_OrgHamcrestBaseDescription || defined(INCLUDE_OrgHamcrestBaseDescription))
#define OrgHamcrestBaseDescription_

#define RESTRICT_OrgHamcrestDescription 1
#define INCLUDE_OrgHamcrestDescription 1
#include "org/hamcrest/Description.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestSelfDescribing;

/*!
 @brief A <code>Description</code> that is stored as a string.
 */
@interface OrgHamcrestBaseDescription : NSObject < OrgHamcrestDescription >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

#pragma mark Protected

/*!
 @brief Append the char <var>c</var> to the description.
 */
- (void)appendWithChar:(jchar)c;

/*!
 @brief Append the String <var>str</var> to the description.
 The default implementation passes every character to <code>append(char)</code>.  
  Override in subclasses to provide an efficient implementation.
 */
- (void)appendWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestBaseDescription)

FOUNDATION_EXPORT void OrgHamcrestBaseDescription_init(OrgHamcrestBaseDescription *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestBaseDescription)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestBaseDescription")
