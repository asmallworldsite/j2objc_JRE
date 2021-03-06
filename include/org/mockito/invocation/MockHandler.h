//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/invocation/MockHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationMockHandler")
#ifdef RESTRICT_OrgMockitoInvocationMockHandler
#define INCLUDE_ALL_OrgMockitoInvocationMockHandler 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationMockHandler 1
#endif
#undef RESTRICT_OrgMockitoInvocationMockHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInvocationMockHandler_) && (INCLUDE_ALL_OrgMockitoInvocationMockHandler || defined(INCLUDE_OrgMockitoInvocationMockHandler))
#define OrgMockitoInvocationMockHandler_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationInvocationContainer;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Mockito handler of an invocation on a mock.This is a core part of the API, the heart of Mockito.
 See also the <code>org.mockito.plugins.MockMaker</code>.
  Handler can be used to programmatically simulate invocations on the mock object. 
 <p>
  Mockito will provide you with the implementation of this interface via <code>org.mockito.plugins.MockMaker</code> methods: 
 <code>org.mockito.plugins.MockMaker.createMock(MockCreationSettings, MockHandler)</code>
  and <code>org.mockito.plugins.MockMaker.resetMock(Object, MockHandler, MockCreationSettings)</code>.
  <p>
  You can provide your own implementation of MockHandler but make sure that the right instance is returned by 
 <code>org.mockito.plugins.MockMaker.getHandler(Object)</code>.
 */
@protocol OrgMockitoInvocationMockHandler < JavaIoSerializable, JavaObject >

/*!
 @brief Takes an invocation object and handles it.
 <p>
  The default implementation provided by Mockito handles invocations by recording
  method calls on mocks for further verification, captures the stubbing information when mock is stubbed,
  returns the stubbed values for invocations that have been stubbed, and much more.
 @param invocation The invocation to handle
 @return Result
 @throw ThrowableThrowable
 */
- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

/*!
 @brief Read-only settings the mock object was created with.
 See <code>org.mockito.Mockito.mock(Class, MockSettings)</code>
 @return read-only settings of the mock
 @since 2.10.0
 */
- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

/*!
 @brief Returns the object that holds all invocations on the mock object,
  including stubbings with declared answers.Do not provide your own implementation.
 Returned object is an internal implementation, hidden beneath a public marker interface. 
 <p>
  Please do not provide your own implementation of <code>InvocationContainer</code> interface at this point.
  If you have a use case that requires your own implementation of <code>InvocationContainer</code>
  please reach out to us. You can open a ticket in our issue tracker to start a discussion.
 @return container of invocations, stubbings, and answers of the mock.
           The container is not part of the public API, please do not cast it or provide custom implementations.
 @since 2.10.0
 */
- (id<OrgMockitoInvocationInvocationContainer>)getInvocationContainer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationMockHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationMockHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationMockHandler")
