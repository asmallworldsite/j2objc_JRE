//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/helpers/ParserFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersParserFactory")
#ifdef RESTRICT_OrgXmlSaxHelpersParserFactory
#define INCLUDE_ALL_OrgXmlSaxHelpersParserFactory 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersParserFactory 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersParserFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxHelpersParserFactory_) && (INCLUDE_ALL_OrgXmlSaxHelpersParserFactory || defined(INCLUDE_OrgXmlSaxHelpersParserFactory))
#define OrgXmlSaxHelpersParserFactory_

@protocol OrgXmlSaxParser;

/*!
 @brief Java-specific class for dynamically loading SAX parsers.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p><strong>Note:</strong> This class is designed to work with the now-deprecated
  SAX1 <code>Parser</code> class.  SAX2 applications should use 
 <code>XMLReaderFactory</code> instead.</p>
  
 <p>ParserFactory is not part of the platform-independent definition
  of SAX; it is an additional convenience class designed
  specifically for Java XML application writers.  SAX applications
  can use the static methods in this class to allocate a SAX parser
  dynamically at run-time based either on the value of the
  `org.xml.sax.parser' system property or on a string containing the class
  name.</p>
  
 <p>Note that the application still requires an XML parser that
  implements SAX1.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersParserFactory : NSObject

#pragma mark Public

/*!
 @brief Create a new SAX parser using the `org.xml.sax.parser' system property.
 <p>The named class must exist and must implement the 
 <code>Parser</code> interface.</p>
 @return the newly created parser.
 @throw java.lang.NullPointerExceptionThere is no value
             for the `org.xml.sax.parser' system property.
 @throw java.lang.ClassNotFoundExceptionThe SAX parser
             class was not found (check your CLASSPATH).
 @throw IllegalAccessExceptionThe SAX parser class was
             found, but you do not have permission to load
             it.
 @throw InstantiationExceptionThe SAX parser class was
             found but could not be instantiated.
 @throw java.lang.ClassCastExceptionThe SAX parser class
             was found and instantiated, but does not implement
             org.xml.sax.Parser.
 - seealso: #makeParser(java.lang.String)
 - seealso: org.xml.sax.Parser
 */
+ (id<OrgXmlSaxParser>)makeParser;

/*!
 @brief Create a new SAX parser object using the class name provided.
 <p>The named class must exist and must implement the 
 <code>Parser</code> interface.</p>
 @return the newly created parser.
 @param className_ A string containing the name of the                   SAX parser class.
 @throw java.lang.ClassNotFoundExceptionThe SAX parser
             class was not found (check your CLASSPATH).
 @throw IllegalAccessExceptionThe SAX parser class was
             found, but you do not have permission to load
             it.
 @throw InstantiationExceptionThe SAX parser class was
             found but could not be instantiated.
 @throw java.lang.ClassCastExceptionThe SAX parser class
             was found and instantiated, but does not implement
             org.xml.sax.Parser.
 - seealso: #makeParser()
 - seealso: org.xml.sax.Parser
 */
+ (id<OrgXmlSaxParser>)makeParserWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersParserFactory)

FOUNDATION_EXPORT id<OrgXmlSaxParser> OrgXmlSaxHelpersParserFactory_makeParser(void);

FOUNDATION_EXPORT id<OrgXmlSaxParser> OrgXmlSaxHelpersParserFactory_makeParserWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersParserFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersParserFactory")
