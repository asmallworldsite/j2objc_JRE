//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/StubbingLookupListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalListenersStubbingLookupListener")
#ifdef RESTRICT_OrgMockitoInternalListenersStubbingLookupListener
#define INCLUDE_ALL_OrgMockitoInternalListenersStubbingLookupListener 0
#else
#define INCLUDE_ALL_OrgMockitoInternalListenersStubbingLookupListener 1
#endif
#undef RESTRICT_OrgMockitoInternalListenersStubbingLookupListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalListenersStubbingLookupListener_) && (INCLUDE_ALL_OrgMockitoInternalListenersStubbingLookupListener || defined(INCLUDE_OrgMockitoInternalListenersStubbingLookupListener))
#define OrgMockitoInternalListenersStubbingLookupListener_

@protocol OrgMockitoInternalListenersStubbingLookupEvent;

/*!
 @brief Listens to attempts to look up stubbing answer for given mocks.This class is internal for now.
 <p>
  How does it work?
  When method is called on the mock object, Mockito looks for any answer (stubbing) declared on that mock.
  If the stubbed answer is found, that answer is invoked (value returned, thrown exception, etc.).
  If the answer is not found (e.g. that invocation was not stubbed on the mock), mock's default answer is used.
  This listener implementation is notified when Mockito looked up an answer for invocation on a mock. 
 <p>
  If we make this interface a part of public API (and we should):
   - make the implementation unified with InvocationListener (for example: common parent, marker interface MockObjectListener
   single method for adding listeners so long they inherit from the parent)
   - make the error handling strict
  so that Mockito provides decent message when listener fails due to poor implementation.
 */
@protocol OrgMockitoInternalListenersStubbingLookupListener < JavaObject >

/*!
 @brief Called by the framework when Mockito looked up an answer for invocation on a mock.
 @param stubbingLookupEvent - Information about the looked up stubbing
 */
- (void)onStubbingLookupWithOrgMockitoInternalListenersStubbingLookupEvent:(id<OrgMockitoInternalListenersStubbingLookupEvent>)stubbingLookupEvent;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersStubbingLookupListener)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersStubbingLookupListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalListenersStubbingLookupListener")
