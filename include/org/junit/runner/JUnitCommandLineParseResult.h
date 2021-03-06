//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/JUnitCommandLineParseResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult")
#ifdef RESTRICT_OrgJunitRunnerJUnitCommandLineParseResult
#define INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult 0
#else
#define INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult 1
#endif
#undef RESTRICT_OrgJunitRunnerJUnitCommandLineParseResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerJUnitCommandLineParseResult_) && (INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult || defined(INCLUDE_OrgJunitRunnerJUnitCommandLineParseResult))
#define OrgJunitRunnerJUnitCommandLineParseResult_

@class IOSObjectArray;
@class OrgJunitRunnerComputer;
@class OrgJunitRunnerRequest;
@protocol JavaUtilList;

@interface OrgJunitRunnerJUnitCommandLineParseResult : NSObject

#pragma mark Public

/*!
 @brief Creates a <code>Request</code>.
 @param computer<code>Computer</code>  to be used.
 */
- (OrgJunitRunnerRequest *)createRequestWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer;

/*!
 @brief Returns test classes parsed from command line.
 */
- (id<JavaUtilList>)getClasses;

/*!
 @brief Returns filter specs parsed from command line.
 */
- (id<JavaUtilList>)getFilterSpecs;

/*!
 @brief Parses the arguments.
 @param args Arguments
 */
+ (OrgJunitRunnerJUnitCommandLineParseResult *)parseWithNSStringArray:(IOSObjectArray *)args;

#pragma mark Package-Private

/*!
 @brief Do not use.Testing purposes only.
 */
- (instancetype __nonnull)initPackagePrivate;

- (IOSObjectArray *)parseOptionsWithNSStringArray:(IOSObjectArray *)args;

- (void)parseParametersWithNSStringArray:(IOSObjectArray *)args;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerJUnitCommandLineParseResult)

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCommandLineParseResult_initPackagePrivate(OrgJunitRunnerJUnitCommandLineParseResult *self);

FOUNDATION_EXPORT OrgJunitRunnerJUnitCommandLineParseResult *new_OrgJunitRunnerJUnitCommandLineParseResult_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerJUnitCommandLineParseResult *create_OrgJunitRunnerJUnitCommandLineParseResult_initPackagePrivate(void);

FOUNDATION_EXPORT OrgJunitRunnerJUnitCommandLineParseResult *OrgJunitRunnerJUnitCommandLineParseResult_parseWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerJUnitCommandLineParseResult)

#endif

#if !defined (OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError_) && (INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult || defined(INCLUDE_OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError))
#define OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Exception used if there's a problem parsing the command line.
 */
@interface OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError)

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError_initWithNSString_(OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError *self, NSString *message);

FOUNDATION_EXPORT OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError *new_OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError *create_OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerJUnitCommandLineParseResult_CommandLineParserError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCommandLineParseResult")
