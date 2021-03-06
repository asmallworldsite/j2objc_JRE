//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XString.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXString")
#ifdef RESTRICT_OrgApacheXpathObjectsXString
#define INCLUDE_ALL_OrgApacheXpathObjectsXString 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXString 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXString

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathObjectsXString_) && (INCLUDE_ALL_OrgApacheXpathObjectsXString || defined(INCLUDE_OrgApacheXpathObjectsXString))
#define OrgApacheXpathObjectsXString_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "org/apache/xpath/objects/XObject.h"

#define RESTRICT_OrgApacheXmlUtilsXMLString 1
#define INCLUDE_OrgApacheXmlUtilsXMLString 1
#include "org/apache/xml/utils/XMLString.h"

@class IOSCharArray;
@class JavaUtilLocale;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXpathExpressionOwner;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief This class represents an XPath string object, and is capable of
  converting the string to other types, such as a number.
 */
@interface OrgApacheXpathObjectsXString : OrgApacheXpathObjectsXObject < OrgApacheXmlUtilsXMLString >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, class, strong) OrgApacheXpathObjectsXString *EMPTYSTRING NS_SWIFT_NAME(EMPTYSTRING);

#pragma mark Public

/*!
 @brief Construct a XNodeSet object.
 @param val String object this will wrap.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)val;

/*!
 @brief Cast result object to a boolean.
 @return True if the length of this string object is greater
  than 0.
 */
- (jboolean)bool__;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner, XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Returns the character at the specified index.An index ranges
  from <code>0</code> to <code>length() - 1</code>.
 The first character
  of the sequence is at index <code>0</code>, the next at index 
 <code>1</code>, and so on, as for array indexing.
 @param index the index of the character.
 @return the character at the specified index of this string.
              The first character is at index <code>0</code>.
 @throw IndexOutOfBoundsExceptionif the <code>index</code>
              argument is negative or not less than the length of this
              string.
 */
- (jchar)charAtWithInt:(jint)index;

/*!
 @brief Compares two strings lexicographically.
 @param xstr the  <code> String </code>  to be compared.
 @return the value <code>0</code> if the argument string is equal to
           this string; a value less than <code>0</code> if this string
           is lexicographically less than the string argument; and a
           value greater than <code>0</code> if this string is
           lexicographically greater than the string argument.
 @throw java.lang.NullPointerExceptionif <code>anotherString</code>
           is <code>null</code>.
 */
- (jint)compareToWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)xstr;

/*!
 @brief Compares two strings lexicographically, ignoring case considerations.
 This method returns an integer whose sign is that of 
 <code>this.toUpperCase().toLowerCase().compareTo(
  str.toUpperCase().toLowerCase())</code>.
  <p>
  Note that this method does <em>not</em> take locale into account,
  and will result in an unsatisfactory ordering for certain locales.
  The java.text package provides <em>collators</em> to allow
  locale-sensitive ordering.
 @param str the  <code> String </code>  to be compared.
 @return a negative integer, zero, or a positive integer as the
           the specified String is greater than, equal to, or less
           than this String, ignoring case considerations.
 - seealso: java.text.Collator#compare(String, String)
 @since 1.2
 */
- (jint)compareToIgnoreCaseWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)str;

/*!
 @brief Concatenates the specified string to the end of this string.
 @param str the  <code> String </code>  that is concatenated to the end
                  of this  <code> String </code> .
 @return a string that represents the concatenation of this object's
           characters followed by the string argument's characters.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>.
 */
- (id<OrgApacheXmlUtilsXMLString>)concatWithNSString:(NSString *)str;

/*!
 @brief Directly call the
  comment method on the passed LexicalHandler for the
  string-value.
 @param lh A non-null reference to a LexicalHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchAsCommentWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lh;

/*!
 @brief Directly call the
  characters method on the passed ContentHandler for the
  string-value.Multiple calls to the
  ContentHandler's characters methods may well occur for a single call to
  this method.
 @param ch A non-null reference to a ContentHandler.
 @throw org.xml.sax.SAXException
 */
- (void)dispatchCharactersEventsWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Tests if this string ends with the specified suffix.
 @param suffix the suffix.
 @return <code>true</code> if the character sequence represented by the
           argument is a suffix of the character sequence represented by
           this object; <code>false</code> otherwise. Note that the
           result will be <code>true</code> if the argument is the
           empty string or is equal to this <code>String</code> object
           as determined by the <code>equals(Object)</code> method.
 @throw java.lang.NullPointerExceptionif <code>suffix</code> is
           <code>null</code>.
 */
- (jboolean)endsWithWithNSString:(NSString *)suffix;

/*!
 @brief Compares this string to the specified object.
 The result is <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>String</code> object that represents
  the same sequence of characters as this object.
 @param obj2 the object to compare this  <code> String </code>                      against.
 @return <code>true</code> if the <code>String </code>are equal;
           <code>false</code> otherwise.
 - seealso: java.lang.String#compareTo(java.lang.String)
 - seealso: java.lang.String#equalsIgnoreCase(java.lang.String)
 */
- (jboolean)isEqual:(id)obj2;

/*!
 @brief Compares this string to the specified <code>String</code>.
 The result is <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>String</code> object that represents
  the same sequence of characters as this object.
 @param obj2 the object to compare this  <code> String </code>  against.
 @return <code>true</code> if the <code>String</code>s are equal;
           <code>false</code> otherwise.
 - seealso: java.lang.String#compareTo(java.lang.String)
 - seealso: java.lang.String#equalsIgnoreCase(java.lang.String)
 */
- (jboolean)equalsWithNSString:(NSString *)obj2;

/*!
 @brief Compares this string to the specified object.
 The result is <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>String</code> object that represents
  the same sequence of characters as this object.
 @param obj2 the object to compare this  <code> String </code>
                       against.
 @return <code>true</code> if the <code>String </code>are equal;
           <code>false</code> otherwise.
 - seealso: java.lang.String#compareTo(java.lang.String)
 - seealso: java.lang.String#equalsIgnoreCase(java.lang.String)
 */
- (jboolean)equalsWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)obj2;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare this to
 @return true if the two objects are equal
 @throw javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Compares this <code>String</code> to another <code>String</code>,
  ignoring case considerations.Two strings are considered equal
  ignoring case if they are of the same length, and corresponding
  characters in the two strings are equal ignoring case.
 @param anotherString the  <code> String </code>  to compare this
                             <code> String </code>  against.
 @return <code>true</code> if the argument is not <code>null</code>
           and the <code>String</code>s are equal,
           ignoring case; <code>false</code> otherwise.
 - seealso: #equals(Object)
 - seealso: java.lang.Character#toLowerCase(char)
 - seealso: java.lang.Character#toUpperCase(char)
 */
- (jboolean)equalsIgnoreCaseWithNSString:(NSString *)anotherString;

/*!
 @brief Conditionally trim all leading and trailing whitespace in the specified String.
 All strings of white space are
  replaced by a single space character (#x20), except spaces after punctuation which
  receive double spaces if doublePunctuationSpaces is true.
  This function may be useful to a formatter, but to get first class
  results, the formatter should probably do it's own white space handling
  based on the semantics of the formatting object.
 @param trimHead Trim leading whitespace?
 @param trimTail Trim trailing whitespace?
 @param doublePunctuationSpaces Use double spaces for punctuation?
 @return The trimmed string.
 */
- (id<OrgApacheXmlUtilsXMLString>)fixWhiteSpaceWithBoolean:(jboolean)trimHead
                                               withBoolean:(jboolean)trimTail
                                               withBoolean:(jboolean)doublePunctuationSpaces;

/*!
 @brief Copies characters from this string into the destination character
  array.
 @param srcBegin index of the first character in the string                         to copy.
 @param srcEnd index after the last character in the string                         to copy.
 @param dst the destination array.
 @param dstBegin the start offset in the destination array.
 @throw IndexOutOfBoundsExceptionIf any of the following
             is true:            
 <ul><li><code>srcBegin</code> is negative.
             <li><code>srcBegin</code> is greater than <code>srcEnd</code>
             <li><code>srcEnd</code> is greater than the length of this
                 string            
 <li><code>dstBegin</code> is negative
             <li><code>dstBegin+(srcEnd-srcBegin)</code> is larger than
                 <code>dst.length</code></ul>
 @throw NullPointerExceptionif <code>dst</code> is <code>null</code>
 */
- (void)getCharsWithInt:(jint)srcBegin
                withInt:(jint)srcEnd
          withCharArray:(IOSCharArray *)dst
                withInt:(jint)dstBegin;

/*!
 @brief Tell that this is a CLASS_STRING.
 @return type CLASS_STRING
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#STRING"
 */
- (NSString *)getTypeString;

/*!
 @brief Returns a hashcode for this string.The hashcode for a 
 <code>String</code> object is computed as 
 <blockquote>@code

  s[0]*31^(n-1) + s[1]*31^(n-2) + ... + s[n-1] 
  
@endcode</blockquote>
  using <code>int</code> arithmetic, where <code>s[i]</code> is the 
 <i>i</i>th character of the string, <code>n</code> is the length of
  the string, and <code>^</code> indicates exponentiation.
 (The hash value of the empty string is zero.)
 @return a hash code value for this object.
 */
- (NSUInteger)hash;

/*!
 @brief Tell if this object contains a java String object.
 @return true if this XMLString can return a string without creating one.
 */
- (jboolean)hasString;

/*!
 @brief Returns the index within this string of the first occurrence of the
  specified character.If a character with value <code>ch</code> occurs
  in the character sequence represented by this <code>String</code>
  object, then the index of the first such occurrence is returned --
  that is, the smallest value <i>k</i> such that: 
 <blockquote>@code

  this.charAt(<i>k</i>) == ch 
  
@endcode</blockquote>
  is <code>true</code>.
 If no such character occurs in this string,
  then <code>-1</code> is returned.
 @param ch a character.
 @return the index of the first occurrence of the character in the
           character sequence represented by this object, or          
 <code>-1</code> if the character does not occur.
 */
- (jint)indexOfWithInt:(jint)ch;

/*!
 @brief Returns the index within this string of the first occurrence of the
  specified character, starting the search at the specified index.
 <p>
  If a character with value <code>ch</code> occurs in the character
  sequence represented by this <code>String</code> object at an index
  no smaller than <code>fromIndex</code>, then the index of the first
  such occurrence is returned--that is, the smallest value <i>k</i>
  such that: 
 <blockquote>@code

  (this.charAt(<i>k</i>) == ch) && (<i>k</i> >= fromIndex) 
  
@endcode</blockquote>
  is true. If no such character occurs in this string at or after
  position <code>fromIndex</code>, then <code>-1</code> is returned. 
 <p>
  There is no restriction on the value of <code>fromIndex</code>. If it
  is negative, it has the same effect as if it were zero: this entire
  string may be searched. If it is greater than the length of this
  string, it has the same effect as if it were equal to the length of
  this string: <code>-1</code> is returned.
 @param ch a character.
 @param fromIndex the index to start the search from.
 @return the index of the first occurrence of the character in the
           character sequence represented by this object that is greater
           than or equal to <code>fromIndex</code>, or <code>-1</code>
           if the character does not occur.
 */
- (jint)indexOfWithInt:(jint)ch
               withInt:(jint)fromIndex;

/*!
 @brief Returns the index within this string of the first occurrence of the
  specified substring.The integer returned is the smallest value 
 <i>k</i> such that: 
 <blockquote>@code

  this.startsWith(str, <i>k</i>)
   
@endcode</blockquote>
  is <code>true</code>.
 @param str any string.
 @return if the string argument occurs as a substring within this
           object, then the index of the first character of the first
           such substring is returned; if it does not occur as a
           substring, <code>-1</code> is returned.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>.
 */
- (jint)indexOfWithNSString:(NSString *)str;

/*!
 @brief Returns the index within this string of the first occurrence of the
  specified substring, starting at the specified index.The integer
  returned is the smallest value <i>k</i> such that: 
 <blockquote>@code

  this.startsWith(str, <i>k</i>) && (<i>k</i> >= fromIndex) 
  
@endcode</blockquote>
  is <code>true</code>.
 <p>
  There is no restriction on the value of <code>fromIndex</code>. If
  it is negative, it has the same effect as if it were zero: this entire
  string may be searched. If it is greater than the length of this
  string, it has the same effect as if it were equal to the length of
  this string: <code>-1</code> is returned.
 @param str the substring to search for.
 @param fromIndex the index to start the search from.
 @return If the string argument occurs as a substring within this
           object at a starting index no smaller than          
 <code>fromIndex</code>, then the index of the first character
           of the first such substring is returned. If it does not occur
           as a substring starting at <code>fromIndex</code> or beyond,
           <code>-1</code> is returned.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>
 */
- (jint)indexOfWithNSString:(NSString *)str
                    withInt:(jint)fromIndex;

/*!
 @brief Returns the index within this string of the first occurrence of the
  specified substring.The integer returned is the smallest value 
 <i>k</i> such that: 
 <blockquote>@code

  this.startsWith(str, <i>k</i>)
   
@endcode</blockquote>
  is <code>true</code>.
 @param str any string.
 @return if the string argument occurs as a substring within this
           object, then the index of the first character of the first
           such substring is returned; if it does not occur as a
           substring, <code>-1</code> is returned.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>.
 */
- (jint)indexOfWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)str;

/*!
 @brief Returns the index within this string of the last occurrence of the
  specified character.That is, the index returned is the largest
  value <i>k</i> such that: 
 <blockquote>@code

  this.charAt(<i>k</i>) == ch 
  
@endcode</blockquote>
  is true.
 The String is searched backwards starting at the last character.
 @param ch a character.
 @return the index of the last occurrence of the character in the
           character sequence represented by this object, or          
 <code>-1</code> if the character does not occur.
 */
- (jint)lastIndexOfWithInt:(jint)ch;

/*!
 @brief Returns the index within this string of the last occurrence of the
  specified character, searching backward starting at the specified
  index.That is, the index returned is the largest value <i>k</i>
  such that: 
 <blockquote>@code

  this.charAt(k) == ch) && (k <= fromIndex) 
  
@endcode</blockquote>
  is true.
 @param ch a character.
 @param fromIndex the index to start the search from. There is no           restriction on the value of 
  <code> fromIndex </code> . If it is           greater than or equal to the length of this string, it has
            the same effect as if it were equal to one less than the
            length of this string: this entire string may be searched.
            If it is negative, it has the same effect as if it were -1:
            -1 is returned.
 @return the index of the last occurrence of the character in the
           character sequence represented by this object that is less
           than or equal to <code>fromIndex</code>, or <code>-1</code>
           if the character does not occur before that point.
 */
- (jint)lastIndexOfWithInt:(jint)ch
                   withInt:(jint)fromIndex;

/*!
 @brief Returns the index within this string of the rightmost occurrence
  of the specified substring.The rightmost empty string "" is
  considered to occur at the index value <code>this.length()</code>.
 The returned index is the largest value <i>k</i> such that 
 <blockquote>@code

  this.startsWith(str, k) 
  
@endcode</blockquote>
  is true.
 @param str the substring to search for.
 @return if the string argument occurs one or more times as a substring
           within this object, then the index of the first character of
           the last such substring is returned. If it does not occur as
           a substring, <code>-1</code> is returned.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>.
 */
- (jint)lastIndexOfWithNSString:(NSString *)str;

/*!
 @brief Returns the index within this string of the last occurrence of
  the specified substring.
 @param str the substring to search for.
 @param fromIndex the index to start the search from. There is no           restriction on the value of fromIndex. If it is greater than
            the length of this string, it has the same effect as if it
            were equal to the length of this string: this entire string
            may be searched. If it is negative, it has the same effect
            as if it were -1: -1 is returned.
 @return If the string argument occurs one or more times as a substring
           within this object at a starting index no greater than          
 <code>fromIndex</code>, then the index of the first character of
           the last such substring is returned. If it does not occur as a
           substring starting at <code>fromIndex</code> or earlier,
           <code>-1</code> is returned.
 @throw java.lang.NullPointerExceptionif <code>str</code> is
           <code>null</code>.
 */
- (jint)lastIndexOfWithNSString:(NSString *)str
                        withInt:(jint)fromIndex;

/*!
 @brief Returns the length of this string.
 @return the length of the sequence of characters represented by this
           object.
 */
- (jint)length;

/*!
 @brief Cast result object to a number.
 @return 0.0 if this string is null, numeric value of this string
  or NaN
 */
- (jdouble)num;

/*!
 @brief Cast result object to a result tree fragment.
 @param support Xpath context to use for the conversion
 @return A document fragment with this string as a child node
 */
- (jint)rtfWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Tests if this string starts with the specified prefix.
 @param prefix the prefix.
 @return <code>true</code> if the character sequence represented by the
           argument is a prefix of the character sequence represented by
           this string; <code>false</code> otherwise.
           Note also that <code>true</code> will be returned if the
           argument is an empty string or is equal to this          
 <code>String</code> object as determined by the
           <code>equals(Object)</code> method.
 @throw java.lang.NullPointerExceptionif <code>prefix</code> is
           <code>null</code>.
 */
- (jboolean)startsWithWithNSString:(NSString *)prefix;

/*!
 @brief Tests if this string starts with the specified prefix beginning
  a specified index.
 @param prefix the prefix.
 @param toffset where to begin looking in the string.
 @return <code>true</code> if the character sequence represented by the
           argument is a prefix of the substring of this object starting
           at index <code>toffset</code>; <code>false</code> otherwise.
           The result is <code>false</code> if <code>toffset</code> is
           negative or greater than the length of this          
 <code>String</code> object; otherwise the result is the same
           as the result of the expression          
 @code

           this.subString(toffset).startsWith(prefix)          
          
@endcode
 @throw java.lang.NullPointerExceptionif <code>prefix</code> is
           <code>null</code>.
 */
- (jboolean)startsWithWithNSString:(NSString *)prefix
                           withInt:(jint)toffset;

/*!
 @brief Tests if this string starts with the specified prefix.
 @param prefix the prefix.
 @return <code>true</code> if the character sequence represented by the
           argument is a prefix of the character sequence represented by
           this string; <code>false</code> otherwise.
           Note also that <code>true</code> will be returned if the
           argument is an empty string or is equal to this          
 <code>String</code> object as determined by the
           <code>equals(Object)</code> method.
 @throw java.lang.NullPointerExceptionif <code>prefix</code> is
           <code>null</code>.
 */
- (jboolean)startsWithWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)prefix;

/*!
 @brief Tests if this string starts with the specified prefix beginning
  a specified index.
 @param prefix the prefix.
 @param toffset where to begin looking in the string.
 @return <code>true</code> if the character sequence represented by the
           argument is a prefix of the substring of this object starting
           at index <code>toffset</code>; <code>false</code> otherwise.
           The result is <code>false</code> if <code>toffset</code> is
           negative or greater than the length of this          
 <code>String</code> object; otherwise the result is the same
           as the result of the expression          
 @code

           this.subString(toffset).startsWith(prefix)          
          
@endcode
 @throw java.lang.NullPointerExceptionif <code>prefix</code> is
           <code>null</code>.
 */
- (jboolean)startsWithWithOrgApacheXmlUtilsXMLString:(id<OrgApacheXmlUtilsXMLString>)prefix
                                             withInt:(jint)toffset;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (NSString *)str;

/*!
 @brief Returns a new string that is a substring of this string.The
  substring begins with the character at the specified index and
  extends to the end of this string.
 <p>
  Examples: 
 <blockquote>@code

  "unhappy".substring(2) returns "happy"
  "Harbison".substring(3) returns "bison"
  "emptiness".substring(9) returns "" (an empty string) 
  
@endcode</blockquote>
 @param beginIndex the beginning index, inclusive.
 @return the specified substring.
 @throw IndexOutOfBoundsExceptionif
              <code>beginIndex</code> is negative or larger than the
              length of this <code>String</code> object.
 */
- (id<OrgApacheXmlUtilsXMLString>)substringWithInt:(jint)beginIndex;

/*!
 @brief Returns a new string that is a substring of this string.The
  substring begins at the specified <code>beginIndex</code> and
  extends to the character at index <code>endIndex - 1</code>.
 Thus the length of the substring is <code>endIndex-beginIndex</code>.
 @param beginIndex the beginning index, inclusive.
 @param endIndex the ending index, exclusive.
 @return the specified substring.
 @throw IndexOutOfBoundsExceptionif the
              <code>beginIndex</code> is negative, or
              <code>endIndex</code> is larger than the length of
              this <code>String</code> object, or
              <code>beginIndex</code> is larger than
              <code>endIndex</code>.
 */
- (id<OrgApacheXmlUtilsXMLString>)substringWithInt:(jint)beginIndex
                                           withInt:(jint)endIndex;

/*!
 @brief Convert a string to a double -- Allowed input is in fixed
  notation ddd.fff.
 @return A double value representation of the string, or return Double.NaN
  if the string can not be converted.
 */
- (jdouble)toDouble;

/*!
 @brief Converts all of the characters in this <code>String</code> to lower
  case using the rules of the default locale, which is returned
  by <code>Locale.getDefault</code>.
 <p>
 @return the string, converted to lowercase.
 - seealso: java.lang.Character#toLowerCase(char)
 - seealso: java.lang.String#toLowerCase(Locale)
 */
- (id<OrgApacheXmlUtilsXMLString>)toLowerCase;

/*!
 @brief Converts all of the characters in this <code>String</code> to lower
  case using the rules of the given <code>Locale</code>.
 @param locale use the case transformation rules for this locale
 @return the String, converted to lowercase.
 - seealso: java.lang.Character#toLowerCase(char)
 - seealso: java.lang.String#toUpperCase(Locale)
 */
- (id<OrgApacheXmlUtilsXMLString>)toLowerCaseWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Converts all of the characters in this <code>String</code> to upper
  case using the rules of the default locale, which is returned
  by <code>Locale.getDefault</code>.
 <p>
  If no character in this string has a different uppercase version,
  based on calling the <code>toUpperCase</code> method defined by 
 <code>Character</code>, then the original string is returned. 
 <p>
  Otherwise, this method creates a new <code>String</code> object
  representing a character sequence identical in length to the
  character sequence represented by this <code>String</code> object and
  with every character equal to the result of applying the method 
 <code>Character.toUpperCase</code> to the corresponding character of
  this <code>String</code> object. <p>
  Examples: 
 <blockquote>@code

  "Fahrvergn&uuml;gen".toUpperCase() returns "FAHRVERGN&Uuml;GEN"
  "Visit Ljubinje!".toUpperCase() returns "VISIT LJUBINJE!" 
  
@endcode</blockquote>
 @return the string, converted to uppercase.
 - seealso: java.lang.Character#toUpperCase(char)
 - seealso: java.lang.String#toUpperCase(Locale)
 */
- (id<OrgApacheXmlUtilsXMLString>)toUpperCase;

/*!
 @brief Converts all of the characters in this <code>String</code> to upper
  case using the rules of the given locale.
 @param locale use the case transformation rules for this locale
 @return the String, converted to uppercase.
 - seealso: java.lang.Character#toUpperCase(char)
 - seealso: java.lang.String#toLowerCase(Locale)
 */
- (id<OrgApacheXmlUtilsXMLString>)toUpperCaseWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Removes white space from both ends of this string.
 @return this string, with white space removed from the front and end.
 */
- (id<OrgApacheXmlUtilsXMLString>)trim;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (id<OrgApacheXmlUtilsXMLString>)xstr;

#pragma mark Protected

/*!
 @brief Construct a XString object.This constructor exists for derived classes.
 @param val String object this will wrap.
 */
- (instancetype __nonnull)initWithId:(id)val;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXString)

inline jlong OrgApacheXpathObjectsXString_get_serialVersionUID(void);
#define OrgApacheXpathObjectsXString_serialVersionUID 2020470518395094525LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXString, serialVersionUID, jlong)

/*!
 @brief Empty string XString object
 */
inline OrgApacheXpathObjectsXString *OrgApacheXpathObjectsXString_get_EMPTYSTRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXString *OrgApacheXpathObjectsXString_EMPTYSTRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXString, EMPTYSTRING, OrgApacheXpathObjectsXString *)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXString_initWithId_(OrgApacheXpathObjectsXString *self, id val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXString *new_OrgApacheXpathObjectsXString_initWithId_(id val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXString *create_OrgApacheXpathObjectsXString_initWithId_(id val);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXString_initWithNSString_(OrgApacheXpathObjectsXString *self, NSString *val);

FOUNDATION_EXPORT OrgApacheXpathObjectsXString *new_OrgApacheXpathObjectsXString_initWithNSString_(NSString *val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXString *create_OrgApacheXpathObjectsXString_initWithNSString_(NSString *val);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXString)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXString")
