//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/Rule.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRule")
#ifdef RESTRICT_OrgJunitRule
#define INCLUDE_ALL_OrgJunitRule 0
#else
#define INCLUDE_ALL_OrgJunitRule 1
#endif
#undef RESTRICT_OrgJunitRule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRule_) && (INCLUDE_ALL_OrgJunitRule || defined(INCLUDE_OrgJunitRule))
#define OrgJunitRule_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotates fields that reference rules or methods that return a rule.A field must be public, not
  static, and a subtype of <code>org.junit.rules.TestRule</code> (preferred) or 
 <code>org.junit.rules.MethodRule</code>.
 A method must be public, not static,
  and must return a subtype of <code>org.junit.rules.TestRule</code> (preferred) or 
 <code>org.junit.rules.MethodRule</code>.
  <p>
  The <code>org.junit.runners.model.Statement</code> passed
  to the <code>org.junit.rules.TestRule</code> will run any <code>Before</code> methods,
  then the <code>Test</code> method, and finally any <code>After</code> methods,
  throwing an exception if any of these fail.  If there are multiple
  annotated <code>Rule</code>s on a class, they will be applied in order of methods first, then fields.
  However, if there are multiple fields (or methods) they will be applied in an order
  that depends on your JVM's implementation of the reflection API, which is
  undefined, in general. Rules defined by fields will always be applied
  after Rules defined by methods, i.e. the Statements returned by the former will
  be executed around those returned by the latter. 
 <h3>Usage</h3>
  <p>
  For example, here is a test class that creates a temporary folder before
  each test method, and deletes it after each: 
 @code

  public static class HasTempFolder {
          &#064;Rule
      public TemporaryFolder folder= new TemporaryFolder();     
     &#064;Test
      public void testUsingTempFolder() throws IOException {
          File createdFile= folder.newFile(&quot;myfile.txt&quot;);
          File createdFolder= folder.newFolder(&quot;subfolder&quot;);
          // ...
      }    }    
  
@endcode
  <p>
  And the same using a method. 
 @code

  public static class HasTempFolder {
      private TemporaryFolder folder= new TemporaryFolder();     
     &#064;Rule
      public TemporaryFolder getFolder() {
          return folder;
      }     
     &#064;Test
      public void testUsingTempFolder() throws IOException {
          File createdFile= folder.newFile(&quot;myfile.txt&quot;);
          File createdFolder= folder.newFolder(&quot;subfolder&quot;);
          // ...
      }    }    
  
@endcode
  <p>
  For more information and more examples, see 
 <code>org.junit.rules.TestRule</code>.
  
 <h3>Ordering</h3>
  <p>
  You can use <code>order()</code> if you want to have control over the order in
  which the Rules are applied. 
 @code

  public class ThreeRules {
          &#064;Rule(order = 0)
      public LoggingRule outer = new LoggingRule("outer rule");     
     &#064;Rule(order = 1)
      public LoggingRule middle = new LoggingRule("middle rule");     
     &#064;Rule(order = 2)
      public LoggingRule inner = new LoggingRule("inner rule");
      // ...
  } 
  
@endcode
 @since 4.7
 */
@protocol OrgJunitRule < JavaLangAnnotationAnnotation >

@property (readonly) jint order;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitRule : NSObject < OrgJunitRule > {
 @public
  jint order_;
}
@property (readonly, class) jint DEFAULT_ORDER NS_SWIFT_NAME(DEFAULT_ORDER);

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRule)

inline jint OrgJunitRule_get_DEFAULT_ORDER(void);
#define OrgJunitRule_DEFAULT_ORDER -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgJunitRule, DEFAULT_ORDER, jint)

FOUNDATION_EXPORT id<OrgJunitRule> create_OrgJunitRule(jint order);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRule)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRule")
