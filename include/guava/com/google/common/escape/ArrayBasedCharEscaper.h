//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/escape/ArrayBasedCharEscaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeArrayBasedCharEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeArrayBasedCharEscaper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeArrayBasedCharEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper || defined(INCLUDE_ComGoogleCommonEscapeArrayBasedCharEscaper))
#define ComGoogleCommonEscapeArrayBasedCharEscaper_

#define RESTRICT_ComGoogleCommonEscapeCharEscaper 1
#define INCLUDE_ComGoogleCommonEscapeCharEscaper 1
#include "com/google/common/escape/CharEscaper.h"

@class ComGoogleCommonEscapeArrayBasedEscaperMap;
@class IOSCharArray;
@protocol JavaUtilMap;

/*!
 @brief A <code>CharEscaper</code> that uses an array to quickly look up replacement characters for a given 
 <code>char</code> value.An additional safe range is provided that determines whether <code>char</code>
  values without specific replacements are to be considered safe and left unescaped or should be
  escaped in a general way.
 <p>A good example of usage of this class is for Java source code escaping where the replacement
  array contains information about special ASCII characters such as <code>\\t</code> and <code>\\n</code>
  while <code>escapeUnsafe</code> is overridden to handle general escaping of the form <code>\\uxxxx</code>.
  
 <p>The size of the data structure used by <code>ArrayBasedCharEscaper</code> is proportional to the
  highest valued character that requires escaping. For example a replacement map containing the
  single character '<code>\</code><code>u1000</code>' will require approximately 16K of memory. If you need
  to create multiple escaper instances that have the same character replacement mapping consider
  using <code>ArrayBasedEscaperMap</code>.
 @author Sven Mawson
 @author David Beaumont
 @since 15.0
 */
@interface ComGoogleCommonEscapeArrayBasedCharEscaper : ComGoogleCommonEscapeCharEscaper

#pragma mark Public

- (NSString *)escapeWithNSString:(NSString * __nonnull)s;

#pragma mark Protected

/*!
 @brief Creates a new ArrayBasedCharEscaper instance with the given replacement map and specified safe
  range.If <code>safeMax < safeMin</code> then no characters are considered safe.
 This initializer is
  useful when explicit instances of ArrayBasedEscaperMap are used to allow the sharing of large
  replacement mappings. 
 <p>If a character has no mapped replacement then it is checked against the safe range. If it
  lies outside that, then <code>escapeUnsafe</code> is called, otherwise no escaping is performed.
 @param escaperMap the mapping of characters to be escaped
 @param safeMin the lowest character value in the safe range
 @param safeMax the highest character value in the safe range
 */
- (instancetype __nonnull)initWithComGoogleCommonEscapeArrayBasedEscaperMap:(ComGoogleCommonEscapeArrayBasedEscaperMap * __nonnull)escaperMap
                                                                   withChar:(jchar)safeMin
                                                                   withChar:(jchar)safeMax;

/*!
 @brief Creates a new ArrayBasedCharEscaper instance with the given replacement map and specified safe
  range.If <code>safeMax < safeMin</code> then no characters are considered safe.
 <p>If a character has no mapped replacement then it is checked against the safe range. If it
  lies outside that, then <code>escapeUnsafe</code> is called, otherwise no escaping is performed.
 @param replacementMap a map of characters to their escaped representations
 @param safeMin the lowest character value in the safe range
 @param safeMax the highest character value in the safe range
 */
- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap> __nonnull)replacementMap
                                     withChar:(jchar)safeMin
                                     withChar:(jchar)safeMax;

/*!
 @brief Escapes a single character using the replacement array and safe range values.If the given
  character does not have an explicit replacement and lies outside the safe range then <code>escapeUnsafe</code>
  is called.
 */
- (IOSCharArray *)escapeWithChar:(jchar)c;

/*!
 @brief Escapes a <code>char</code> value that has no direct explicit value in the replacement array and
  lies outside the stated safe range.Subclasses should override this method to provide
  generalized escaping for characters.
 <p>Note that arrays returned by this method must not be modified once they have been returned.
  However it is acceptable to return the same array multiple times (even for different input
  characters).
 @param c the character to escape
 @return the replacement characters, or <code>null</code> if no escaping was required
 */
- (IOSCharArray *)escapeUnsafeWithChar:(jchar)c;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeArrayBasedCharEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedCharEscaper_initWithJavaUtilMap_withChar_withChar_(ComGoogleCommonEscapeArrayBasedCharEscaper *self, id<JavaUtilMap> replacementMap, jchar safeMin, jchar safeMax);

FOUNDATION_EXPORT void ComGoogleCommonEscapeArrayBasedCharEscaper_initWithComGoogleCommonEscapeArrayBasedEscaperMap_withChar_withChar_(ComGoogleCommonEscapeArrayBasedCharEscaper *self, ComGoogleCommonEscapeArrayBasedEscaperMap *escaperMap, jchar safeMin, jchar safeMax);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeArrayBasedCharEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeArrayBasedCharEscaper")
