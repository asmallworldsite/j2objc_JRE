//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/TestValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalTestValidator")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalTestValidator
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalTestValidator 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalTestValidator 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalTestValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderInternalTestValidator_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalTestValidator || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalTestValidator))
#define ComTngtechJavaJunitDataproviderInternalTestValidator_

@class ComTngtechJavaJunitDataproviderInternalDataConverter;
@class OrgJunitRunnersModelFrameworkMethod;
@protocol ComTngtechJavaJunitDataproviderDataProvider;
@protocol JavaUtilList;

@interface ComTngtechJavaJunitDataproviderInternalTestValidator : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithComTngtechJavaJunitDataproviderInternalDataConverter:(ComTngtechJavaJunitDataproviderInternalDataConverter *)dataConverter;

/*!
 @brief Checks if the given <code>dataProviderMethod</code> is a valid dataprovider and adds a <code>Exception</code> to 
 <code>errors</code> if it 
 <ul>
  <li>is not public,</li>
  <li>is not static,</li>
  <li>takes parameters, or</li>
  <li>does return a convertible type, see <code>DataConverter.canConvert(java.lang.reflect.Type)</code>
  </ul>
 <p>
  This method is package private (= visible) for testing.
 </p>
 @param dataProviderMethod the method to check
 @param dataProvider the <code>@@</code><code>DataProvider</code>  annotation used on <code>dataProviderMethod</code>
 @param errors to be "returned" and thrown as <code>InitializationError</code>
 @throw NullPointerExceptioniif any argument is <code>null</code>
 */
- (void)validateDataProviderMethodWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)dataProviderMethod
                          withComTngtechJavaJunitDataproviderDataProvider:(id<ComTngtechJavaJunitDataproviderDataProvider>)dataProvider
                                                         withJavaUtilList:(id<JavaUtilList>)errors;

/*!
 @brief Checks if the given <code>testMethod</code> is a valid test method depending on the dataprovider relevant annotation 
 <code>@@</code><code>DataProvider</code> and <code>@@</code><code>UseDataProvider</code>.Adds <code>Exception</code>s to <code>errors</code> for
  each invalid property.
 A normal test method must be is public, void instance method with no arguments. A data
  provider test method must be is public and void instance method but have a least one argument.
 @param testMethod the test method to be validated
 @param errors to be "returned" and thrown as <code>InitializationError</code>
 @throw IllegalArgumentExceptionif given <code>errors</code> is <code>null</code>
 */
- (void)validateTestMethodWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)testMethod
                                                 withJavaUtilList:(id<JavaUtilList>)errors;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalTestValidator)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalTestValidator_initWithComTngtechJavaJunitDataproviderInternalDataConverter_(ComTngtechJavaJunitDataproviderInternalTestValidator *self, ComTngtechJavaJunitDataproviderInternalDataConverter *dataConverter);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalTestValidator *new_ComTngtechJavaJunitDataproviderInternalTestValidator_initWithComTngtechJavaJunitDataproviderInternalDataConverter_(ComTngtechJavaJunitDataproviderInternalDataConverter *dataConverter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalTestValidator *create_ComTngtechJavaJunitDataproviderInternalTestValidator_initWithComTngtechJavaJunitDataproviderInternalDataConverter_(ComTngtechJavaJunitDataproviderInternalDataConverter *dataConverter);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalTestValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalTestValidator")
