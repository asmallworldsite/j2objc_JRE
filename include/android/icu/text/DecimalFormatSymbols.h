//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/DecimalFormatSymbols.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextDecimalFormatSymbols")
#ifdef RESTRICT_AndroidIcuTextDecimalFormatSymbols
#define INCLUDE_ALL_AndroidIcuTextDecimalFormatSymbols 0
#else
#define INCLUDE_ALL_AndroidIcuTextDecimalFormatSymbols 1
#endif
#undef RESTRICT_AndroidIcuTextDecimalFormatSymbols

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextDecimalFormatSymbols_) && (INCLUDE_ALL_AndroidIcuTextDecimalFormatSymbols || defined(INCLUDE_AndroidIcuTextDecimalFormatSymbols))
#define AndroidIcuTextDecimalFormatSymbols_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class AndroidIcuUtilCurrency;
@class AndroidIcuUtilULocale;
@class AndroidIcuUtilULocale_Type;
@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaLangInteger;
@class JavaUtilLocale;

/*!
 @brief <strong>[icu enhancement]</strong> ICU's replacement for <code>java.text.DecimalFormatSymbols</code>.
 &nbsp;Methods, fields, and other functionality specific to ICU are labeled '<strong>[icu]</strong>'.
 This class represents the set of symbols (such as the decimal separator, the grouping
  separator, and so on) needed by <code>DecimalFormat</code> to format
  numbers. <code>DecimalFormat</code> creates for itself an instance of 
 <code>DecimalFormatSymbols</code> from its locale data.  If you need to change any of
  these symbols, you can get the <code>DecimalFormatSymbols</code> object from your 
 <code>DecimalFormat</code> and modify it.
 - seealso: java.util.Locale
 - seealso: DecimalFormat
 @author Mark Davis
 @author Alan Liu
 */
@interface AndroidIcuTextDecimalFormatSymbols : NSObject < NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a DecimalFormatSymbols object for the default <code>FORMAT</code> locale.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a DecimalFormatSymbols object for the given locale.
 @param locale the locale
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief <strong>[icu]</strong> Creates a DecimalFormatSymbols object for the given locale.
 @param locale the locale
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 */
- (id)java_clone;

/*!
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns an array of all locales for which the <code>getInstance</code> methods of
  this class can return localized instances.
 <p><strong>Note:</strong> Unlike 
 <code>java.text.DecimalFormatSymbols#getAvailableLocales</code>, this method simply
  returns the array of <code>Locale</code>s available for this class.  ICU currently
  does not support <code>DecimalFormatSymbolsProvider</code>, which was introduced in
  Java 6.
 @return An array of <code>Locale</code>s for which localized 
 <code>DecimalFormatSymbols</code> instances are available.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief <strong>[icu]</strong> Returns an array of all locales for which the <code>getInstance</code>
  methods of this class can return localized instances.
 <p><strong>Note:</strong> Unlike 
 <code>java.text.DecimalFormatSymbols#getAvailableLocales</code>, this method simply
  returns the array of <code>ULocale</code>s available in this class.  ICU currently
  does not support <code>DecimalFormatSymbolsProvider</code>, which was introduced in
  Java 6.
 @return An array of <code>ULocale</code>s for which localized 
 <code>DecimalFormatSymbols</code> instances are available.
 */
+ (IOSObjectArray *)getAvailableULocales;

/*!
 @brief Returns the currency symbol, for <code>DecimalFormatSymbols.getCurrency()</code> API
  compatibility only.ICU clients should use the Currency API directly.
 @return the currency used, or null
 */
- (AndroidIcuUtilCurrency *)getCurrency;

/*!
 @brief Returns the string denoting the local currency.
 @return the local currency String.
 */
- (NSString *)getCurrencySymbol;

/*!
 @brief Returns the character used for decimal sign.Different for French, etc.
 @return the decimal character
 */
- (jchar)getDecimalSeparator;

/*!
 @brief <strong>[icu]</strong> Returns the string used for decimal sign.
 @return the decimal sign string
 - seealso: #setDecimalSeparatorString(String)
 */
- (NSString *)getDecimalSeparatorString;

/*!
 @brief Returns the character used for a digit in a pattern.
 @return the digit pattern character
 */
- (jchar)getDigit;

/*!
 @brief Returns the array of characters used as digits, in order from 0 through 9
 @return The array
 - seealso: #getDigitStrings()
 */
- (IOSCharArray *)getDigits;

/*!
 @brief <strong>[icu]</strong> Returns the array of strings used as digits, in order from 0 through 9
 @return The array of ten digit strings
 - seealso: #setDigitStrings(String[])
 */
- (IOSObjectArray *)getDigitStrings;

/*!
 @brief Returns the multiplication sign
 */
- (NSString *)getExponentMultiplicationSign;

/*!
 @brief <strong>[icu]</strong> Returns the string used to separate the mantissa from the exponent.
 Examples: "x10^" for 1.23x10^4, "E" for 1.23E4.
 @return the localized exponent symbol, used in localized patterns
  and formatted strings
 - seealso: #setExponentSeparator
 */
- (NSString *)getExponentSeparator;

/*!
 @brief Returns the character used for grouping separator.Different for French, etc.
 @return the thousands character
 */
- (jchar)getGroupingSeparator;

/*!
 @brief <strong>[icu]</strong> Returns the string used for grouping separator.Different for French, etc.
 @return the grouping separator string
 - seealso: #setGroupingSeparatorString(String)
 */
- (NSString *)getGroupingSeparatorString;

/*!
 @brief Returns the String used to represent infinity.Almost always left
  unchanged.
 @return the Infinity string
 */
- (NSString *)getInfinity;

/*!
 @brief Returns a DecimalFormatSymbols instance for the default locale.
 <p><strong>Note:</strong> Unlike 
 <code>java.text.DecimalFormatSymbols#getInstance</code>, this method simply returns 
 <code>new android.icu.text.DecimalFormatSymbols()</code>.  ICU currently does not
  support <code>DecimalFormatSymbolsProvider</code>, which was introduced in Java 6.
 @return A DecimalFormatSymbols instance.
 */
+ (AndroidIcuTextDecimalFormatSymbols *)getInstance;

/*!
 @brief Returns a DecimalFormatSymbols instance for the given locale.
 <p><strong>Note:</strong> Unlike 
 <code>java.text.DecimalFormatSymbols#getInstance</code>, this method simply returns 
 <code>new android.icu.text.DecimalFormatSymbols(locale)</code>.  ICU currently does
  not support <code>DecimalFormatSymbolsProvider</code>, which was introduced in Java
  6.
 @param locale the locale.
 @return A DecimalFormatSymbols instance.
 */
+ (AndroidIcuTextDecimalFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a DecimalFormatSymbols instance for the given locale.
 <p><strong>Note:</strong> Unlike 
 <code>java.text.DecimalFormatSymbols#getInstance</code>, this method simply returns 
 <code>new android.icu.text.DecimalFormatSymbols(locale)</code>.  ICU currently does
  not support <code>DecimalFormatSymbolsProvider</code>, which was introduced in Java
  6.
 @param locale the locale.
 @return A DecimalFormatSymbols instance.
 */
+ (AndroidIcuTextDecimalFormatSymbols *)getInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale;

/*!
 @brief Returns the international string denoting the local currency.
 @return the international string denoting the local currency
 */
- (NSString *)getInternationalCurrencySymbol;

/*!
 @brief Returns the locale for which this object was constructed.
 @return the locale for which this object was constructed
 */
- (JavaUtilLocale *)getLocale;

/*!
 @brief <strong>[icu]</strong> Returns the locale that was used to create this object, or null.
 This may may differ from the locale requested at the time of
  this object's creation.  For example, if an object is created
  for locale <tt>en_US_CALIFORNIA</tt>, the actual data may be
  drawn from <tt>en</tt> (the <i>actual</i> locale), and 
 <tt>en_US</tt> may be the most specific locale that exists (the 
 <i>valid</i> locale). 
 <p>Note: The <i>actual</i> locale is returned correctly, but the <i>valid</i>
  locale is not, in most cases.
 @param type type of information requested, either <code>android.icu.util.ULocale.VALID_LOCALE</code>
   or <code>android.icu.util.ULocale.ACTUAL_LOCALE</code>
  .
 @return the information specified by <i>type</i>, or null if
  this object was not constructed from locale data.
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (AndroidIcuUtilULocale *)getLocaleWithAndroidIcuUtilULocale_Type:(AndroidIcuUtilULocale_Type *)type;

/*!
 @brief Returns the character used to represent minus sign.If no explicit
  negative format is specified, one is formed by prefixing
  minusSign to the positive format.
 @return the minus sign character
 */
- (jchar)getMinusSign;

/*!
 @brief <strong>[icu]</strong> Returns the string used to represent minus sign.
 @return the minus sign string
 - seealso: #setMinusSignString(String)
 */
- (NSString *)getMinusSignString;

/*!
 @brief Returns the monetary decimal separator.
 @return the monetary decimal separator character
 */
- (jchar)getMonetaryDecimalSeparator;

/*!
 @brief <strong>[icu]</strong> Returns the monetary decimal separator string.
 @return the monetary decimal separator string
 - seealso: #setMonetaryDecimalSeparatorString(String)
 */
- (NSString *)getMonetaryDecimalSeparatorString;

/*!
 @brief <strong>[icu]</strong> Returns the monetary grouping separator.
 @return the monetary grouping separator character
 */
- (jchar)getMonetaryGroupingSeparator;

/*!
 @brief <strong>[icu]</strong> Returns the monetary grouping separator.
 @return the monetary grouping separator string
 - seealso: #setMonetaryGroupingSeparatorString(String)
 */
- (NSString *)getMonetaryGroupingSeparatorString;

/*!
 @brief Returns the String used to represent NaN.Almost always left
  unchanged.
 @return the NaN String
 */
- (NSString *)getNaN;

/*!
 @brief <strong>[icu]</strong> Returns the character used to pad numbers out to a specified width.This is
  not the pad character itself; rather, it is the special pattern character 
 <em>preceding</em> the pad character.
 In the pattern "*_#,##0", '*' is the pad
  escape, and '_' is the pad character.
 @return the character
 - seealso: #setPadEscape
 - seealso: DecimalFormat#getFormatWidth
 - seealso: DecimalFormat#getPadPosition
 - seealso: DecimalFormat#getPadCharacter
 */
- (jchar)getPadEscape;

/*!
 @brief <strong>[icu]</strong> Returns the desired currency spacing value.Original values come from ICU's
  CLDR data based on the locale provided during construction, and can be null.
 These
  values govern what and when text is inserted between a currency code/name/symbol
  and the currency amount when formatting money. 
 <p>For more information, see <a href="http://www.unicode.org/reports/tr35/#Currencies">
 UTS#35 section 5.10.2</a>.
  
 <p><strong>Note:</strong> ICU4J does not currently use this information.
 @param itemType one of CURRENCY_SPC_CURRENCY_MATCH, CURRENCY_SPC_SURROUNDING_MATCH  or CURRENCY_SPC_INSERT
 @param beforeCurrency true to get the  <code> beforeCurrency </code>  values, false
   to get the  <code> afterCurrency </code>  values.
 @return the value, or null.
 - seealso: #setPatternForCurrencySpacing(int, boolean, String)
 */
- (NSString *)getPatternForCurrencySpacingWithInt:(jint)itemType
                                      withBoolean:(jboolean)beforeCurrency;

/*!
 @brief Returns the character used to separate positive and negative subpatterns
  in a pattern.
 @return the pattern separator character
 */
- (jchar)getPatternSeparator;

/*!
 @brief Returns the character used for percent sign.Different for Arabic, etc.
 @return the percent character
 */
- (jchar)getPercent;

/*!
 @brief <strong>[icu]</strong> Returns the string used for percent sign.
 @return the percent string
 - seealso: #setPercentString(String)
 */
- (NSString *)getPercentString;

/*!
 @brief Returns the character used for mille percent sign.Different for Arabic, etc.
 @return the mille percent character
 */
- (jchar)getPerMill;

/*!
 @brief <strong>[icu]</strong> Returns the string used for permille sign.
 @return the permille string
 - seealso: #setPerMillString(String)
 */
- (NSString *)getPerMillString;

/*!
 @brief <strong>[icu]</strong> Returns the localized plus sign.
 @return the plus sign, used in localized patterns and formatted
  strings
 - seealso: #setPlusSign
 - seealso: #setMinusSign
 - seealso: #getMinusSign
 */
- (jchar)getPlusSign;

/*!
 @brief <strong>[icu]</strong> Returns the string used to represent plus sign.
 @return the plus sign string
 */
- (NSString *)getPlusSignString;

/*!
 @brief Returns the character used to represent a significant digit in a pattern.
 @return the significant digit pattern character
 */
- (jchar)getSignificantDigit;

/*!
 @brief Returns the locale for which this object was constructed.
 @return the locale for which this object was constructed
 */
- (AndroidIcuUtilULocale *)getULocale;

/*!
 @brief Returns the character used for zero.Different for Arabic, etc.
 @return the character
 */
- (jchar)getZeroDigit;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief Sets the currency.
 <p><strong>Note:</strong> ICU does not use the DecimalFormatSymbols for the currency
  any more.  This API is present for API compatibility only. 
 <p>This also sets the currency symbol attribute to the currency's symbol
  in the DecimalFormatSymbols' locale, and the international currency
  symbol attribute to the currency's ISO 4217 currency code.
 @param currency the new currency to be used
 @throw NullPointerExceptionif <code>currency</code> is null
 - seealso: #setCurrencySymbol
 - seealso: #setInternationalCurrencySymbol
 */
- (void)setCurrencyWithAndroidIcuUtilCurrency:(AndroidIcuUtilCurrency *)currency;

/*!
 @brief Sets the string denoting the local currency.
 @param currency the local currency String.
 */
- (void)setCurrencySymbolWithNSString:(NSString *)currency;

/*!
 @brief Sets the character used for decimal sign.Different for French, etc.
 @param decimalSeparator the decimal character
 */
- (void)setDecimalSeparatorWithChar:(jchar)decimalSeparator;

/*!
 @brief <strong>[icu]</strong> Sets the string used for decimal sign.
 <p>
  <b>Note:</b> When the input decimal separator String is represented
  by multiple Java chars, then <code>getDecimalSeparator()</code> will
  return the default decimal separator character ('.').
 @param decimalSeparatorString the decimal sign string
 @throw NullPointerExceptionif <code>decimalSeparatorString</code> is null.
 - seealso: #getDecimalSeparatorString()
 */
- (void)setDecimalSeparatorStringWithNSString:(NSString *)decimalSeparatorString;

/*!
 @brief Sets the character used for a digit in a pattern.
 @param digit the digit pattern character
 */
- (void)setDigitWithChar:(jchar)digit;

/*!
 @brief <strong>[icu]</strong> Sets the array of strings used as digits, in order from 0 through 9
 <p>
  <b>Note:</b>
  <p>
  When the input array of digit strings contains any strings
  represented by multiple Java chars, then <code>getDigits()</code> will return
  the default digits ('0' - '9') and <code>getZeroDigit()</code> will return the
  default zero digit ('0').
 @param digitStrings The array of digit strings. The length of the array must be exactly 10.
 @throw NullPointerExceptionif the <code>digitStrings</code> is null.
 @throw IllegalArgumentExceptionif the length of the array is not 10.
 - seealso: #getDigitStrings()
 */
- (void)setDigitStringsWithNSStringArray:(IOSObjectArray *)digitStrings;

/*!
 @brief Sets the multiplication sign
 */
- (void)setExponentMultiplicationSignWithNSString:(NSString *)exponentMultiplicationSign;

/*!
 @brief <strong>[icu]</strong> Sets the string used to separate the mantissa from the exponent.
 Examples: "x10^" for 1.23x10^4, "E" for 1.23E4.
 @param exp the localized exponent symbol, used in localized patterns  and formatted strings
 - seealso: #getExponentSeparator
 */
- (void)setExponentSeparatorWithNSString:(NSString *)exp;

/*!
 @brief Sets the character used for grouping separator.Different for French, etc.
 @param groupingSeparator the thousands character
 - seealso: #setGroupingSeparatorString(String)
 */
- (void)setGroupingSeparatorWithChar:(jchar)groupingSeparator;

/*!
 @brief <strong>[icu]</strong> Sets the string used for grouping separator.
 <p>
  <b>Note:</b> When the input grouping separator String is represented
  by multiple Java chars, then <code>getGroupingSeparator()</code> will
  return the default grouping separator character (',').
 @param groupingSeparatorString the grouping separator string
 @throw NullPointerExceptionif <code>groupingSeparatorString</code> is null.
 - seealso: #getGroupingSeparatorString()
 */
- (void)setGroupingSeparatorStringWithNSString:(NSString *)groupingSeparatorString;

/*!
 @brief Sets the String used to represent infinity.Almost always left
  unchanged.
 @param infinity the Infinity String
 */
- (void)setInfinityWithNSString:(NSString *)infinity;

/*!
 @brief Sets the international string denoting the local currency.
 @param currency the international string denoting the local currency.
 */
- (void)setInternationalCurrencySymbolWithNSString:(NSString *)currency;

/*!
 @brief Sets the character used to represent minus sign.If no explicit
  negative format is specified, one is formed by prefixing
  minusSign to the positive format.
 @param minusSign the minus sign character
 */
- (void)setMinusSignWithChar:(jchar)minusSign;

/*!
 @brief <strong>[icu]</strong> Sets the string used to represent minus sign.
 <p>
  <b>Note:</b> When the input minus sign String is represented
  by multiple Java chars, then <code>getMinusSign()</code> will
  return the default minus sign character ('-').
 @param minusSignString the minus sign string
 @throw NullPointerExceptionif <code>minusSignString</code> is null.
 - seealso: #getGroupingSeparatorString()
 */
- (void)setMinusSignStringWithNSString:(NSString *)minusSignString;

/*!
 @brief Sets the monetary decimal separator.
 @param sep the monetary decimal separator character
 */
- (void)setMonetaryDecimalSeparatorWithChar:(jchar)sep;

/*!
 @brief <strong>[icu]</strong> Sets the monetary decimal separator string.
 <p>
  <b>Note:</b> When the input monetary decimal separator String is represented
  by multiple Java chars, then <code>getMonetaryDecimalSeparatorString()</code> will
  return the default monetary decimal separator character ('.').
 @param sep the monetary decimal separator string
 @throw NullPointerExceptionif <code>sep</code> is null.
 - seealso: #getMonetaryDecimalSeparatorString()
 */
- (void)setMonetaryDecimalSeparatorStringWithNSString:(NSString *)sep;

/*!
 @brief <strong>[icu]</strong> Sets the monetary grouping separator.
 @param sep the monetary grouping separator character
 */
- (void)setMonetaryGroupingSeparatorWithChar:(jchar)sep;

/*!
 @brief <strong>[icu]</strong> Sets the monetary grouping separator string.
 <p>
  <b>Note:</b> When the input grouping separator String is represented
  by multiple Java chars, then <code>getMonetaryGroupingSeparator()</code> will
  return the default monetary grouping separator character (',').
 @param sep the monetary grouping separator string
 @throw NullPointerExceptionif <code>sep</code> is null.
 - seealso: #getMonetaryGroupingSeparatorString()
 */
- (void)setMonetaryGroupingSeparatorStringWithNSString:(NSString *)sep;

/*!
 @brief Sets the String used to represent NaN.Almost always left
  unchanged.
 @param NaN the NaN String
 */
- (void)setNaNWithNSString:(NSString *)NaN;

/*!
 @brief <strong>[icu]</strong> Sets the character used to pad numbers out to a specified width.This is not
  the pad character itself; rather, it is the special pattern character 
 <em>preceding</em> the pad character.
 In the pattern "*_#,##0", '*' is the pad
  escape, and '_' is the pad character.
 - seealso: #getPadEscape
 - seealso: DecimalFormat#setFormatWidth
 - seealso: DecimalFormat#setPadPosition
 - seealso: DecimalFormat#setPadCharacter
 */
- (void)setPadEscapeWithChar:(jchar)c;

/*!
 @brief <strong>[icu]</strong> Sets the indicated currency spacing pattern or value.See <code>getPatternForCurrencySpacing</code>
  for more information.
 <p>Values for currency match and surrounding match must be <code>android.icu.text.UnicodeSet</code>
  patterns. Values for insert can be any string. 
 <p><strong>Note:</strong> ICU4J does not currently use this information.
 @param itemType one of CURRENCY_SPC_CURRENCY_MATCH, CURRENCY_SPC_SURROUNDING_MATCH  or CURRENCY_SPC_INSERT
 @param beforeCurrency true if the pattern is for before the currency symbol.  false if the pattern is for after it.
 @param pattern string to override current setting; can be null.
 - seealso: #getPatternForCurrencySpacing(int, boolean)
 */
- (void)setPatternForCurrencySpacingWithInt:(jint)itemType
                                withBoolean:(jboolean)beforeCurrency
                               withNSString:(NSString *)pattern;

/*!
 @brief Sets the character used to separate positive and negative subpatterns
  in a pattern.
 @param patternSeparator the pattern separator character
 */
- (void)setPatternSeparatorWithChar:(jchar)patternSeparator;

/*!
 @brief Sets the character used for percent sign.Different for Arabic, etc.
 @param percent the percent character
 */
- (void)setPercentWithChar:(jchar)percent;

/*!
 @brief <strong>[icu]</strong> Sets the string used for percent sign.
 <p>
  <b>Note:</b> When the input grouping separator String is represented
  by multiple Java chars, then <code>getPercent()</code> will
  return the default percent sign character ('%').
 @param percentString the percent string
 @throw NullPointerExceptionif <code>percentString</code> is null.
 - seealso: #getPercentString()
 */
- (void)setPercentStringWithNSString:(NSString *)percentString;

/*!
 @brief Sets the character used for mille percent sign.Different for Arabic, etc.
 @param perMill the mille percent character
 */
- (void)setPerMillWithChar:(jchar)perMill;

/*!
 @brief <strong>[icu]</strong> Sets the string used for permille sign.
 <p>
  <b>Note:</b> When the input permille String is represented
  by multiple Java chars, then <code>getPerMill()</code> will
  return the default permille character ('&#x2030;').
 @param perMillString the permille string
 @throw NullPointerExceptionif <code>perMillString</code> is null.
 - seealso: #getPerMillString()
 */
- (void)setPerMillStringWithNSString:(NSString *)perMillString;

/*!
 @brief <strong>[icu]</strong> Sets the localized plus sign.
 @param plus the plus sign, used in localized patterns and formatted  strings
 - seealso: #getPlusSign
 - seealso: #setMinusSign
 - seealso: #getMinusSign
 */
- (void)setPlusSignWithChar:(jchar)plus;

/*!
 @brief <strong>[icu]</strong> Sets the localized plus sign string.
 <p>
  <b>Note:</b> When the input plus sign String is represented
  by multiple Java chars, then <code>getPlusSign()</code> will
  return the default plus sign character ('+').
 @param plusSignString the plus sign string, used in localized patterns and formatted  strings
 @throw NullPointerExceptionif <code>plusSignString</code> is null.
 - seealso: #getPlusSignString()
 */
- (void)setPlusSignStringWithNSString:(NSString *)plusSignString;

/*!
 @brief Sets the character used to represent a significant digit in a pattern.
 @param sigDigit the significant digit pattern character
 */
- (void)setSignificantDigitWithChar:(jchar)sigDigit;

/*!
 @brief Sets the character used for zero.
 <p>
  <b>Note:</b> When the specified zeroDigit is a Unicode decimal digit character
  (category:Nd) and the number value is 0, then this method propagate digit 1 to
  digit 9 by incrementing code point one by one.
 @param zeroDigit the zero character.
 */
- (void)setZeroDigitWithChar:(jchar)zeroDigit;

#pragma mark Package-Private

/*!
 @brief }
  Internal API for NumberFormat
 @return String currency pattern string
 */
- (NSString *)getCurrencyPattern;

/*!
 @brief Returns the array of strings used as digits, in order from 0 through 9
  Package private method - doesn't create a defensively copy.
 @return the array of digit strings
 */
- (IOSObjectArray *)getDigitStringsLocal;

/*!
 @brief <strong>[icu]</strong> Sets information about the locales that were used to create this
  object.If the object was not constructed from locale data,
  both arguments should be set to null.
 Otherwise, neither
  should be null.  The actual locale must be at the same level or
  less specific than the valid locale.  This method is intended
  for use by factories or other entities that create objects of
  this class.
 @param valid the most specific locale containing any resource  data, or null
 @param actual the locale containing data used to construct this  object, or null
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (void)setLocaleWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)valid
                 withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)actual;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextDecimalFormatSymbols)

/*!
 @brief <strong>[icu]</strong> Indicates the currency match pattern used in <code>getPatternForCurrencySpacing</code>.
 */
inline jint AndroidIcuTextDecimalFormatSymbols_get_CURRENCY_SPC_CURRENCY_MATCH(void);
#define AndroidIcuTextDecimalFormatSymbols_CURRENCY_SPC_CURRENCY_MATCH 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDecimalFormatSymbols, CURRENCY_SPC_CURRENCY_MATCH, jint)

/*!
 @brief <strong>[icu]</strong> Indicates the surrounding match pattern used in <code>getPatternForCurrencySpacing</code>
 .
 */
inline jint AndroidIcuTextDecimalFormatSymbols_get_CURRENCY_SPC_SURROUNDING_MATCH(void);
#define AndroidIcuTextDecimalFormatSymbols_CURRENCY_SPC_SURROUNDING_MATCH 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDecimalFormatSymbols, CURRENCY_SPC_SURROUNDING_MATCH, jint)

/*!
 @brief <strong>[icu]</strong> Indicates the insertion value used in <code>getPatternForCurrencySpacing</code>.
 */
inline jint AndroidIcuTextDecimalFormatSymbols_get_CURRENCY_SPC_INSERT(void);
#define AndroidIcuTextDecimalFormatSymbols_CURRENCY_SPC_INSERT 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDecimalFormatSymbols, CURRENCY_SPC_INSERT, jint)

FOUNDATION_EXPORT void AndroidIcuTextDecimalFormatSymbols_init(AndroidIcuTextDecimalFormatSymbols *self);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *new_AndroidIcuTextDecimalFormatSymbols_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *create_AndroidIcuTextDecimalFormatSymbols_init(void);

FOUNDATION_EXPORT void AndroidIcuTextDecimalFormatSymbols_initWithJavaUtilLocale_(AndroidIcuTextDecimalFormatSymbols *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *new_AndroidIcuTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *create_AndroidIcuTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT void AndroidIcuTextDecimalFormatSymbols_initWithAndroidIcuUtilULocale_(AndroidIcuTextDecimalFormatSymbols *self, AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *new_AndroidIcuTextDecimalFormatSymbols_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *create_AndroidIcuTextDecimalFormatSymbols_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *AndroidIcuTextDecimalFormatSymbols_getInstance(void);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *AndroidIcuTextDecimalFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT AndroidIcuTextDecimalFormatSymbols *AndroidIcuTextDecimalFormatSymbols_getInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *locale);

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextDecimalFormatSymbols_getAvailableLocales(void);

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextDecimalFormatSymbols_getAvailableULocales(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextDecimalFormatSymbols)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextDecimalFormatSymbols")
