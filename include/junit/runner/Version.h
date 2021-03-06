//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/runner/Version.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitRunnerVersion")
#ifdef RESTRICT_JunitRunnerVersion
#define INCLUDE_ALL_JunitRunnerVersion 0
#else
#define INCLUDE_ALL_JunitRunnerVersion 1
#endif
#undef RESTRICT_JunitRunnerVersion

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JunitRunnerVersion_) && (INCLUDE_ALL_JunitRunnerVersion || defined(INCLUDE_JunitRunnerVersion))
#define JunitRunnerVersion_

@class IOSObjectArray;

/*!
 @brief This class defines the current version of JUnit
 */
@interface JunitRunnerVersion : NSObject

#pragma mark Public

+ (NSString *)id__;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitRunnerVersion)

FOUNDATION_EXPORT NSString *JunitRunnerVersion_id__(void);

FOUNDATION_EXPORT void JunitRunnerVersion_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JunitRunnerVersion)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitRunnerVersion")
