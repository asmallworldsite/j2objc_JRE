//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsDeepStubs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs))
#define OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class OrgMockitoInternalUtilReflectionGenericMetadataSupport;
@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Returning deep stub implementation.
 Will return previously created mock if the invocation matches. 
 <p>Supports nested generic information, with this answer you can write code like this : 
 <pre class="code"><code class="java">
      interface GenericsNest&lt;K extends Comparable&lt;K&gt; & Cloneable&gt; extends Map&lt;K, Set&lt;Number&gt;&gt; {}
      GenericsNest&lt;?&gt; mock = mock(GenericsNest.class, new ReturnsGenericDeepStubs());
      Number number = mock.entrySet().iterator().next().getValue().iterator().next(); 
 </code>
@endcode
  </p>
 - seealso: org.mockito.Mockito#RETURNS_DEEP_STUBS
 - seealso: org.mockito.Answers#RETURNS_DEEP_STUBS
 */
@interface OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

#pragma mark Protected

- (OrgMockitoInternalUtilReflectionGenericMetadataSupport *)actualParameterizedTypeWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs_init(OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs *new_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs *create_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsDeepStubs")
