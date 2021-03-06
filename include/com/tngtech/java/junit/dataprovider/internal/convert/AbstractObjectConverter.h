//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/convert/AbstractObjectConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter))
#define ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter_

@class IOSObjectArray;

@interface ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Converts the given <code>data</code> to its corresponding arguments using the provided information.Additionally
  checks the arguments against the given parameter types before returning.
 @param data array of arguments for test method
 @param isVarArgs determines whether test method has a varargs parameter
 @param parameterTypes target types of parameters
 @return <code>Object[]</code> which is converted for varargs support and checked against <code>parameterTypes</code>
 @throw IllegalArgumentExceptioniif the data does not fit somehow
 */
- (IOSObjectArray *)convertWithId:(id)data
                      withBoolean:(jboolean)isVarArgs
                withIOSClassArray:(IOSObjectArray *)parameterTypes;

#pragma mark Protected

/*!
 @brief Checks if the types of the given list of <code>arguments</code> matches the given test methods <code>parameterTypes</code>
  and throws an <code>Error</code> if not.
 <p>
  This method is package private (= visible) for testing. 
 </p>
 @param arguments the arguments to be used for each test method to be executed
 @param parameterTypes test method parameter types (from <code>Method.getParameterTypes()</code> )
 @throw NullPointerExceptioniif given <code>parameterTypes</code> or <code>settings</code> are <code>null</code>
 @throw IllegalArgumentExceptioniif test methods parameter types does not match the given <code>arguments</code>
 */
- (void)checkIfArgumentsMatchParameterTypesWithNSObjectArray:(IOSObjectArray *)arguments
                                           withIOSClassArray:(IOSObjectArray *)parameterTypes;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter_init(ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter *self);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalConvertAbstractObjectConverter")
