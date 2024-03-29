//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/datatype/FactoryFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder")
#ifdef RESTRICT_JavaxXmlDatatypeFactoryFinder
#define INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder 0
#else
#define INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder 1
#endif
#undef RESTRICT_JavaxXmlDatatypeFactoryFinder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlDatatypeFactoryFinder_) && (INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder || defined(INCLUDE_JavaxXmlDatatypeFactoryFinder))
#define JavaxXmlDatatypeFactoryFinder_

@class JavaLangClassLoader;

/*!
 @brief <p>Implement pluggable data types.
 </p>
  
 <p>This class is duplicated for each JAXP subpackage so keep it in
  sync.  It is package private for secure class loading.</p>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 670432 $, $Date: 2008-06-22 19:02:08 -0700 (Sun, 22 Jun 2008) $
 @since 1.5
 */
@interface JavaxXmlDatatypeFactoryFinder : NSObject

#pragma mark Package-Private

/*!
 @brief Finds the implementation Class object in the specified order.Main
  entry point.
 Package private so this code can be shared.
 @param factoryId Name of the factory to find, same as a property name
 @param fallbackClassName Implementation class name, if nothing else is found.  Use null to mean no fallback.
 @return Class Object of factory, never null
 @throw ConfigurationErrorIf Class cannot be found.
 */
+ (id)findWithNSString:(NSString *)factoryId
          withNSString:(NSString *)fallbackClassName;

/*!
 @brief <p>Create an instance of a class using the specified ClassLoader.
 </p>
 @param className_ Name of class to create.
 @param classLoader ClassLoader to use to create named class.
 @return New instance of specified class created using the specified ClassLoader.
 @throw ConfigurationErrorIf class could not be created.
 */
+ (id)newInstanceWithNSString:(NSString *)className_
      withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxXmlDatatypeFactoryFinder)

FOUNDATION_EXPORT id JavaxXmlDatatypeFactoryFinder_newInstanceWithNSString_withJavaLangClassLoader_(NSString *className_, JavaLangClassLoader *classLoader);

FOUNDATION_EXPORT id JavaxXmlDatatypeFactoryFinder_findWithNSString_withNSString_(NSString *factoryId, NSString *fallbackClassName);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlDatatypeFactoryFinder)

#endif

#if !defined (JavaxXmlDatatypeFactoryFinder_ConfigurationError_) && (INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder || defined(INCLUDE_JavaxXmlDatatypeFactoryFinder_ConfigurationError))
#define JavaxXmlDatatypeFactoryFinder_ConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangBoolean;
@class JavaLangException;
@class JavaLangThrowable;

/*!
 @brief <p>Configuration Error.
 </p>
 */
@interface JavaxXmlDatatypeFactoryFinder_ConfigurationError : JavaLangError

#pragma mark Package-Private

/*!
 @brief <p>Construct a new instance with the specified detail string and
  exception.
 </p>
 @param msg Detail message for this error.
 @param x Exception that caused the error.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg
                     withJavaLangException:(JavaLangException *)x;

/*!
 @brief <p>Get the Exception that caused the error.
 </p>
 @return Exception that caused the error.
 */
- (JavaLangException *)getException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlDatatypeFactoryFinder_ConfigurationError)

FOUNDATION_EXPORT void JavaxXmlDatatypeFactoryFinder_ConfigurationError_initWithNSString_withJavaLangException_(JavaxXmlDatatypeFactoryFinder_ConfigurationError *self, NSString *msg, JavaLangException *x);

FOUNDATION_EXPORT JavaxXmlDatatypeFactoryFinder_ConfigurationError *new_JavaxXmlDatatypeFactoryFinder_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlDatatypeFactoryFinder_ConfigurationError *create_JavaxXmlDatatypeFactoryFinder_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlDatatypeFactoryFinder_ConfigurationError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxXmlDatatypeFactoryFinder")
