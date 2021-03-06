//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/DefaultMockingDetails.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails")
#ifdef RESTRICT_OrgMockitoInternalUtilDefaultMockingDetails
#define INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilDefaultMockingDetails

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilDefaultMockingDetails_) && (INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails || defined(INCLUDE_OrgMockitoInternalUtilDefaultMockingDetails))
#define OrgMockitoInternalUtilDefaultMockingDetails_

#define RESTRICT_OrgMockitoMockingDetails 1
#define INCLUDE_OrgMockitoMockingDetails 1
#include "org/mockito/MockingDetails.h"

@protocol JavaUtilCollection;
@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Class to inspect any object, and identify whether a particular object is either a mock or a spy.This is
  a wrapper for <code>org.mockito.internal.util.MockUtil</code>.
 */
@interface OrgMockitoInternalUtilDefaultMockingDetails : NSObject < OrgMockitoMockingDetails >

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)toInspect;

- (id<JavaUtilCollection>)getInvocations;

- (id)getMock;

- (id<OrgMockitoMockMockCreationSettings>)getMockCreationSettings;

- (id<OrgMockitoInvocationMockHandler>)getMockHandler;

- (id<JavaUtilCollection>)getStubbings;

- (jboolean)isMock;

- (jboolean)isSpy;

- (NSString *)printInvocations;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilDefaultMockingDetails)

FOUNDATION_EXPORT void OrgMockitoInternalUtilDefaultMockingDetails_initWithId_(OrgMockitoInternalUtilDefaultMockingDetails *self, id toInspect);

FOUNDATION_EXPORT OrgMockitoInternalUtilDefaultMockingDetails *new_OrgMockitoInternalUtilDefaultMockingDetails_initWithId_(id toInspect) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilDefaultMockingDetails *create_OrgMockitoInternalUtilDefaultMockingDetails_initWithId_(id toInspect);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilDefaultMockingDetails)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails")
