//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/MockSettings.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMockSettings")
#ifdef RESTRICT_OrgMockitoMockSettings
#define INCLUDE_ALL_OrgMockitoMockSettings 0
#else
#define INCLUDE_ALL_OrgMockitoMockSettings 1
#endif
#undef RESTRICT_OrgMockitoMockSettings

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoMockSettings_) && (INCLUDE_ALL_OrgMockitoMockSettings || defined(INCLUDE_OrgMockitoMockSettings))
#define OrgMockitoMockSettings_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgMockitoMockSerializableMode;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Allows mock creation with additional mock settings.
 <p>
  Don't use it too often.
  Consider writing simple tests that use simple mocks.
  Repeat after me: simple tests push simple, KISSy, readable & maintainable code.
  If you cannot write a test in a simple way - refactor the code under test. 
 <p>
  Examples of mock settings: 
 <pre class="code"><code class="java">
    //Creates mock with different default answer & name
    Foo mock = mock(Foo.class, withSettings()
                                 .defaultAnswer(RETURNS_SMART_NULLS)
                                 .name("cool mockie")
                                 );
    //Creates mock with different default answer, descriptive name and extra interfaces
    Foo mock = mock(Foo.class, withSettings()
                                 .defaultAnswer(RETURNS_SMART_NULLS)
                                 .name("cool mockie")
                                 .extraInterfaces(Bar.class)); 
 </code>
@endcode
  <code>MockSettings</code> has been introduced for two reasons.
  Firstly, to make it easy to add another mock setting when the demand comes.
  Secondly, to enable combining together different mock settings without introducing zillions of overloaded mock() methods.
 */
@protocol OrgMockitoMockSettings < JavaIoSerializable, JavaObject >

/*!
 @brief Specifies extra interfaces the mock should implement.Might be useful for legacy code or some corner cases.
 <p>
  This mysterious feature should be used very occasionally.
  The object under test should know exactly its collaborators & dependencies.
  If you happen to use it often than please make sure you are really producing simple, clean & readable code. 
 <p>
  Examples: 
 <pre class="code"><code class="java">
    Foo foo = mock(Foo.class, withSettings().extraInterfaces(Bar.class, Baz.class));
    //now, the mock implements extra interfaces, so following casting is possible:
    Bar bar = (Bar) foo;
    Baz baz = (Baz) foo; 
 </code>
@endcode
 @param interfaces extra interfaces the should implement.
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)extraInterfacesWithIOSClassArray:(IOSObjectArray *)interfaces;

/*!
 @brief Specifies mock name.Naming mocks can be helpful for debugging - the name is used in all verification errors.
 <p>
  Beware that naming mocks is not a solution for complex code which uses too many mocks or collaborators. 
 <b>If you have too many mocks then refactor the code</b> so that it's easy to test/debug without necessity of naming mocks. 
 <p>
  <b>If you use &#064;Mock annotation then you've got naming mocks for free!</b> &#064;Mock uses field name as mock name. <code>Read more.</code>
  <p>
  Examples: 
 <pre class="code"><code class="java">
    Foo foo = mock(Foo.class, withSettings().name("foo"));
    //Below does exactly the same:
    Foo foo = mock(Foo.class, "foo"); 
 </code>
@endcode
 @param name the name of the mock, later used in all verification errors
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)nameWithNSString:(NSString *)name;

/*!
 @brief Specifies the instance to spy on.Makes sense only for spies/partial mocks.
 Sets the instance that will be spied. Actually copies the internal fields of the passed instance to the mock. 
 <p>
  As usual you are going to read <b>the partial mock warning</b>:
  Object oriented programming is more or less about tackling complexity by dividing the complexity into separate, specific, SRPy objects.
  How does partial mock fit into this paradigm? Well, it just doesn't...
  Partial mock usually means that the complexity has been moved to a different method on the same object.
  In most cases, this is not the way you want to design your application. 
 <p>
  However, there are rare cases when partial mocks come handy:
  dealing with code you cannot change easily (3rd party interfaces, interim refactoring of legacy code etc.)
  However, I wouldn't use partial mocks for new, test-driven & well-designed code. 
 <p>
  Enough warnings about partial mocks, see an example how spiedInstance() works: 
 <pre class="code"><code class="java">
    Foo foo = mock(Foo.class, withSettings().spiedInstance(fooInstance));
    //Below does exactly the same:
    Foo foo = spy(fooInstance); 
 </code>
@endcode
  About stubbing for a partial mock, as it is a spy it will always call the real method, unless you use the 
 <code>doReturn</code>|<code>Throw</code>|<code>Answer</code>|<code>CallRealMethod</code> stubbing style. Example: 
 <pre class="code"><code class="java">
    List list = new LinkedList();
    List spy = spy(list);
    //Impossible: real method is called so spy.get(0) throws IndexOutOfBoundsException (the list is yet empty)
    when(spy.get(0)).thenReturn("foo");
    //You have to use doReturn() for stubbing
    doReturn("foo").when(spy).get(0); 
 </code>
 @param instance to spy on
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)spiedInstanceWithId:(id)instance;

/*!
 @brief Specifies default answers to interactions.
 It's quite advanced feature and typically you don't need it to write decent tests.
  However it can be helpful when working with legacy systems. 
 <p>
  It is the default answer so it will be used <b>only when you don't</b> stub the method call. 
 <pre class="code"><code class="java">
    Foo mock = mock(Foo.class, withSettings().defaultAnswer(RETURNS_SMART_NULLS));
    Foo mockTwo = mock(Foo.class, withSettings().defaultAnswer(new YourOwnAnswer()));
    //Below does exactly the same:
    Foo mockTwo = mock(Foo.class, new YourOwnAnswer()); 
 </code>
@endcode
 @param defaultAnswer default answer to be used by mock when not stubbed
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)defaultAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)defaultAnswer;

/*!
 @brief Configures the mock to be serializable.With this feature you can use a mock in a place that requires dependencies to be serializable.
 <p>
  WARNING: This should be rarely used in unit testing. 
 <p>
  The behaviour was implemented for a specific use case of a BDD spec that had an unreliable external dependency.  This
  was in a web environment and the objects from the external dependency were being serialized to pass between layers. 
 <p>
  Example: 
 <pre class="code"><code class="java">
    List serializableMock = mock(List.class, withSettings().serializable()); 
 </code>
@endcode
 @return settings instance so that you can fluently specify other settings
 @since 1.8.1
 */
- (id<OrgMockitoMockSettings>)serializable;

/*!
 @brief Configures the mock to be serializable with a specific serializable mode.
 With this feature you can use a mock in a place that requires dependencies to be serializable. 
 <p>
  WARNING: This should be rarely used in unit testing. 
 <p>
  The behaviour was implemented for a specific use case of a BDD spec that had an unreliable external dependency.  This
  was in a web environment and the objects from the external dependency were being serialized to pass between layers. 
 <pre class="code"><code class="java">
    List serializableMock = mock(List.class, withSettings().serializable(SerializableMode.ACROSS_CLASSLOADERS)); 
 </code>
@endcode
 @param mode serialization mode
 @return settings instance so that you can fluently specify other settings
 @since 1.10.0
 */
- (id<OrgMockitoMockSettings>)serializableWithOrgMockitoMockSerializableMode:(OrgMockitoMockSerializableMode *)mode;

/*!
 @brief Enables real-time logging of method invocations on this mock.Can be used
  during test debugging in order to find wrong interactions with this mock.
 <p>
  Invocations are logged as they happen to the standard output stream. 
 <p>
  Calling this method multiple times makes no difference. 
 <p>
  Example: 
 <pre class="code"><code class="java">
  List mockWithLogger = mock(List.class, withSettings().verboseLogging()); 
 </code>
@endcode
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)verboseLogging;

/*!
 @brief Registers a listener for method invocations on this mock.The listener is
  notified every time a method on this mock is called.
 <p>
  Multiple listeners may be added and they will be notified in the order they were supplied.
  Example: 
 <pre class="code"><code class="java">
   List mockWithListener = mock(List.class, withSettings().invocationListeners(new YourInvocationListener())); 
 </code>
@endcode
  See the <code>listener interface</code> for more details.
 @param listeners The invocation listeners to add. May not be null.
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)invocationListenersWithOrgMockitoListenersInvocationListenerArray:(IOSObjectArray *)listeners;

/*!
 @brief Registers a listener(s) that will be notified when user starts verification.
 See <code>VerificationStartedListener</code> on how such listener can be useful. 
 <p>
  When multiple listeners are added, they are notified in order they were supplied.
  There is no reason to supply multiple listeners but we wanted to keep the API
  simple and consistent with <code>invocationListeners(InvocationListener...)</code>.
  <p>
  Throws exception when any of the passed listeners is null or when the entire vararg array is null.
 @param listeners to be notified when user starts verification.
 @return settings instance so that you can fluently specify other settings
 @since 2.11.0
 */
- (id<OrgMockitoMockSettings>)verificationStartedListenersWithOrgMockitoListenersVerificationStartedListenerArray:(IOSObjectArray *)listeners;

/*!
 @brief A stub-only mock does not record method
  invocations, thus saving memory but
  disallowing verification of invocations.
 <p>
  Example: 
 <pre class="code"><code class="java">
  List stubOnly = mock(List.class, withSettings().stubOnly()); 
 </code>
@endcode
 @return settings instance so that you can fluently specify other settings
 */
- (id<OrgMockitoMockSettings>)stubOnly;

/*!
 @brief Mockito attempts to use constructor when creating instance of the mock.
 This is particularly useful for spying on abstract classes. See also <code>Mockito.spy(Class)</code>.
  <p>
  Example: 
 <pre class="code"><code class="java">
  //Robust API, via settings builder:
  OtherAbstract spy = mock(OtherAbstract.class, withSettings()
    .useConstructor().defaultAnswer(CALLS_REAL_METHODS));
  //Mocking an abstract class with constructor arguments
  SomeAbstract spy = mock(SomeAbstract.class, withSettings()
    .useConstructor("arg1", 123).defaultAnswer(CALLS_REAL_METHODS));
  //Mocking a non-static inner abstract class:
  InnerAbstract spy = mock(InnerAbstract.class, withSettings()
    .useConstructor().outerInstance(outerInstance).defaultAnswer(CALLS_REAL_METHODS)); 
 </code>
@endcode
 @param args The arguments to pass to the constructor. Not passing any arguments means that a parameter-less              constructor will be called
 @return settings instance so that you can fluently specify other settings
 @since 2.7.14 (useConstructor with no arguments was supported since 1.10.12)
 */
- (id<OrgMockitoMockSettings>)useConstructorWithNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Makes it possible to mock non-static inner classes in conjunction with <code>useConstructor(Object...)
 </code>.
 <p>
  Example: 
 <pre class="code"><code class="java">
  InnerClass mock = mock(InnerClass.class, withSettings()
    .useConstructor().outerInstance(outerInstance).defaultAnswer(CALLS_REAL_METHODS)); 
 </code>
@endcode
 @return settings instance so that you can fluently specify other settings
 @since 1.10.12
 */
- (id<OrgMockitoMockSettings>)outerInstanceWithId:(id)outerClassInstance;

/*!
 @brief By default, Mockito makes an attempt to preserve all annotation meta data on the mocked
  type and its methods to mirror the mocked type as closely as possible.If this is not
  desired, this option can be used to disable this behavior.
 @return settings instance so that you can fluently specify other settings
 @since 1.10.13
 */
- (id<OrgMockitoMockSettings>)withoutAnnotations;

/*!
 @brief Creates immutable view of mock settings used later by Mockito.
 Framework integrators can use this method to create instances of creation settings
  and use them in advanced use cases, for example to create invocations with <code>InvocationFactory</code>,
  or to implement custom <code>MockHandler</code>.
  Since <code>MockCreationSettings</code> is <code>NotExtensible</code>, Mockito public API needs a creation method for this type.
 @param typeToMock class to mock
 @return immutable view of mock settings
 @since 2.10.0
 */
- (id<OrgMockitoMockMockCreationSettings>)buildWithIOSClass:(IOSClass *)typeToMock;

/*!
 @brief Lenient mocks bypass "strict stubbing" validation (see <code>Strictness.STRICT_STUBS</code>).
 When mock is declared as lenient none of its stubbings will be checked for potential stubbing problems such as
  'unnecessary stubbing' (<code>UnnecessaryStubbingException</code>) or for 'stubbing argument mismatch' <code>PotentialStubbingProblem</code>.
  
 <pre class="code"><code class="java">
    Foo mock = mock(Foo.class, withSettings.lenient()); 
 </code>
@endcode
  For more information and an elaborate example, see <code>Mockito.lenient()</code>.
 */
- (id<OrgMockitoMockSettings>)lenient;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMockSettings)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockSettings)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMockSettings")
