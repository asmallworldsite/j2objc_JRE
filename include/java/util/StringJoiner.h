//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/StringJoiner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStringJoiner")
#ifdef RESTRICT_JavaUtilStringJoiner
#define INCLUDE_ALL_JavaUtilStringJoiner 0
#else
#define INCLUDE_ALL_JavaUtilStringJoiner 1
#endif
#undef RESTRICT_JavaUtilStringJoiner

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilStringJoiner_) && (INCLUDE_ALL_JavaUtilStringJoiner || defined(INCLUDE_JavaUtilStringJoiner))
#define JavaUtilStringJoiner_

@class JavaLangInteger;
@protocol JavaLangCharSequence;

/*!
 @brief <code>StringJoiner</code> is used to construct a sequence of characters separated
  by a delimiter and optionally starting with a supplied prefix
  and ending with a supplied suffix.
 <p>
  Prior to adding something to the <code>StringJoiner</code>, its 
 <code>sj.toString()</code> method will, by default, return <code>prefix + suffix</code>.
  However, if the <code>setEmptyValue</code> method is called, the <code>emptyValue</code>
  supplied will be returned instead. This can be used, for example, when
  creating a string using set notation to indicate an empty set, i.e. 
 <code>"{}"</code>, where the <code>prefix</code> is <code>"{"</code>, the 
 <code>suffix</code> is <code>"}"</code> and nothing has been added to the 
 <code>StringJoiner</code>.
 - seealso: java.util.stream.Collectors#joining(CharSequence)
 - seealso: java.util.stream.Collectors#joining(CharSequence, CharSequence, CharSequence)
 @since 1.8
 */
@interface JavaUtilStringJoiner : NSObject

#pragma mark Public

/*!
 @brief Constructs a <code>StringJoiner</code> with no characters in it, with no 
 <code>prefix</code> or <code>suffix</code>, and a copy of the supplied 
 <code>delimiter</code>.
 If no characters are added to the <code>StringJoiner</code> and methods
  accessing the value of it are invoked, it will not return a 
 <code>prefix</code> or <code>suffix</code> (or properties thereof) in the result,
  unless <code>setEmptyValue</code> has first been called.
 @param delimiter the sequence of characters to be used between each          element added to the 
 <code>StringJoiner</code>  value
 @throw NullPointerExceptionif <code>delimiter</code> is <code>null</code>
 */
- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)delimiter;

/*!
 @brief Constructs a <code>StringJoiner</code> with no characters in it using copies
  of the supplied <code>prefix</code>, <code>delimiter</code> and <code>suffix</code>.
 If no characters are added to the <code>StringJoiner</code> and methods
  accessing the string value of it are invoked, it will return the 
 <code>prefix + suffix</code> (or properties thereof) in the result, unless 
 <code>setEmptyValue</code> has first been called.
 @param delimiter the sequence of characters to be used between each          element added to the 
 <code>StringJoiner</code>
 @param prefix the sequence of characters to be used at the beginning
 @param suffix the sequence of characters to be used at the end
 @throw NullPointerExceptionif <code>prefix</code>, <code>delimiter</code>, or
          <code>suffix</code> is <code>null</code>
 */
- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)delimiter
                              withJavaLangCharSequence:(id<JavaLangCharSequence>)prefix
                              withJavaLangCharSequence:(id<JavaLangCharSequence>)suffix;

/*!
 @brief Adds a copy of the given <code>CharSequence</code> value as the next
  element of the <code>StringJoiner</code> value.If <code>newElement</code> is 
 <code>null</code>, then <code>"null"</code> is added.
 @param newElement The element to add
 @return a reference to this <code>StringJoiner</code>
 */
- (JavaUtilStringJoiner *)addWithJavaLangCharSequence:(id<JavaLangCharSequence>)newElement;

/*!
 @brief Returns the length of the <code>String</code> representation
  of this <code>StringJoiner</code>.Note that if
  no add methods have been called, then the length of the <code>String</code>
  representation (either <code>prefix + suffix</code> or <code>emptyValue</code>)
  will be returned.
 The value should be equivalent to 
 <code>toString().length()</code>.
 @return the length of the current value of <code>StringJoiner</code>
 */
- (jint)length;

/*!
 @brief Adds the contents of the given <code>StringJoiner</code> without prefix and
  suffix as the next element if it is non-empty.If the given <code>StringJoiner</code>
  is empty, the call has no effect.
 <p>A <code>StringJoiner</code> is empty if <code>add()</code>
  has never been called, and if <code>merge()</code> has never been called
  with a non-empty <code>StringJoiner</code> argument. 
 <p>If the other <code>StringJoiner</code> is using a different delimiter,
  then elements from the other <code>StringJoiner</code> are concatenated with
  that delimiter and the result is appended to this <code>StringJoiner</code>
  as a single element.
 @param other The <code>StringJoiner</code>  whose contents should be merged
                into this one
 @throw NullPointerExceptionif the other <code>StringJoiner</code> is null
 @return This <code>StringJoiner</code>
 */
- (JavaUtilStringJoiner *)mergeWithJavaUtilStringJoiner:(JavaUtilStringJoiner *)other;

/*!
 @brief Sets the sequence of characters to be used when determining the string
  representation of this <code>StringJoiner</code> and no elements have been
  added yet, that is, when it is empty.A copy of the <code>emptyValue</code>
  parameter is made for this purpose.
 Note that once an add method has been
  called, the <code>StringJoiner</code> is no longer considered empty, even if
  the element(s) added correspond to the empty <code>String</code>.
 @param emptyValue the characters to return as the value of an empty          
 <code>StringJoiner</code>
 @return this <code>StringJoiner</code> itself so the calls may be chained
 @throw NullPointerExceptionwhen the <code>emptyValue</code> parameter is
          <code>null</code>
 */
- (JavaUtilStringJoiner *)setEmptyValueWithJavaLangCharSequence:(id<JavaLangCharSequence>)emptyValue;

/*!
 @brief Returns the current value, consisting of the <code>prefix</code>, the values
  added so far separated by the <code>delimiter</code>, and the <code>suffix</code>,
  unless no elements have been added in which case, the 
 <code>prefix + suffix</code> or the <code>emptyValue</code> characters are returned
 @return the string representation of this <code>StringJoiner</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStringJoiner)

FOUNDATION_EXPORT void JavaUtilStringJoiner_initWithJavaLangCharSequence_(JavaUtilStringJoiner *self, id<JavaLangCharSequence> delimiter);

FOUNDATION_EXPORT JavaUtilStringJoiner *new_JavaUtilStringJoiner_initWithJavaLangCharSequence_(id<JavaLangCharSequence> delimiter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStringJoiner *create_JavaUtilStringJoiner_initWithJavaLangCharSequence_(id<JavaLangCharSequence> delimiter);

FOUNDATION_EXPORT void JavaUtilStringJoiner_initWithJavaLangCharSequence_withJavaLangCharSequence_withJavaLangCharSequence_(JavaUtilStringJoiner *self, id<JavaLangCharSequence> delimiter, id<JavaLangCharSequence> prefix, id<JavaLangCharSequence> suffix);

FOUNDATION_EXPORT JavaUtilStringJoiner *new_JavaUtilStringJoiner_initWithJavaLangCharSequence_withJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> delimiter, id<JavaLangCharSequence> prefix, id<JavaLangCharSequence> suffix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStringJoiner *create_JavaUtilStringJoiner_initWithJavaLangCharSequence_withJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> delimiter, id<JavaLangCharSequence> prefix, id<JavaLangCharSequence> suffix);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStringJoiner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilStringJoiner")
