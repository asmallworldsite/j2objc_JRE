//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/VoidAnswer4.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer4")
#ifdef RESTRICT_OrgMockitoStubbingVoidAnswer4
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer4 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer4 1
#endif
#undef RESTRICT_OrgMockitoStubbingVoidAnswer4

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingVoidAnswer4_) && (INCLUDE_ALL_OrgMockitoStubbingVoidAnswer4 || defined(INCLUDE_OrgMockitoStubbingVoidAnswer4))
#define OrgMockitoStubbingVoidAnswer4_

/*!
 @brief Generic interface to be used for configuring mock's answer for a four argument invocation that returns nothing.
 Answer specifies an action that is executed when you interact with the mock. 
 <p>
  Example of stubbing a mock with this custom answer: 
 <pre class="code"><code class="java">
  import static org.mockito.AdditionalAnswers.answerVoid;
  doAnswer(answerVoid(
      new VoidAnswer4&lt;String, Integer, String, Character&gt;() {
          public void answer(String msg, Integer count, String another, Character c) throws Exception {
              throw new Exception(String.format(msg, another, c, count));
          }
  })).when(mock).someMethod(anyString(), anyInt(), anyString(), anyChar());
  //Following will raise an exception with the message "ka-boom <3"
  mock.someMethod("%s-boom %c%d", 3, "ka", '&lt;');
  </code>
@endcode
 - seealso: Answer
 */
@protocol OrgMockitoStubbingVoidAnswer4 < JavaObject >

/*!
 @param argument0 the first argument.
 @param argument1 the second argument.
 @param argument2 the third argument.
 @param argument3 the fourth argument.
 @throw Throwablethe throwable to be thrown
 */
- (void)answerWithId:(id)argument0
              withId:(id)argument1
              withId:(id)argument2
              withId:(id)argument3;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingVoidAnswer4)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingVoidAnswer4)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer4")