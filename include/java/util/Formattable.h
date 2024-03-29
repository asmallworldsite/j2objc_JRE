//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Formattable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormattable")
#ifdef RESTRICT_JavaUtilFormattable
#define INCLUDE_ALL_JavaUtilFormattable 0
#else
#define INCLUDE_ALL_JavaUtilFormattable 1
#endif
#undef RESTRICT_JavaUtilFormattable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFormattable_) && (INCLUDE_ALL_JavaUtilFormattable || defined(INCLUDE_JavaUtilFormattable))
#define JavaUtilFormattable_

@class JavaLangInteger;
@class JavaUtilFormatter;

/*!
 @brief The <tt>Formattable</tt> interface must be implemented by any class that
  needs to perform custom formatting using the <tt>'s'</tt> conversion
  specifier of <code>java.util.Formatter</code>.This interface allows basic
  control for formatting arbitrary objects.
 For example, the following class prints out different representations of a
  stock's name depending on the flags and length constraints: 
 <code>import java.nio.CharBuffer;
    import java.util.Formatter;
    import java.util.Formattable;
    import java.util.Locale;
    import static java.util.FormattableFlags.*;
   ...
    public class StockName implements Formattable {
        private String symbol, companyName, frenchCompanyName;
        public StockName(String symbol, String companyName,
                         String frenchCompanyName) {
            ...
        }
        ...
        public void formatTo(Formatter fmt, int f, int width, int precision) {
            StringBuilder sb = new StringBuilder();
            // decide form of name
            String name = companyName;
            if (fmt.locale().equals(Locale.FRANCE))
                name = frenchCompanyName;
            boolean alternate = (f & ALTERNATE) == ALTERNATE;
            boolean usesymbol = alternate || (precision != -1 && precision < 10);
            String out = (usesymbol ? symbol : name);
            // apply precision
            if (precision == -1 || out.length() < precision) {
                // write it all
                sb.append(out);
            } else {
                sb.append(out.substring(0, precision - 1)).append('*');
            }
            // apply width and justification
            int len = sb.length();
            if (len < width)
                for (int i = 0; i < width - len; i++)
                    if ((f & LEFT_JUSTIFY) == LEFT_JUSTIFY)
                        sb.append(' ');
                    else
                        sb.insert(0, ' ');
            fmt.format(sb.toString());
        }
        public String toString() {
            return String.format("%s - %s", symbol, companyName);
        }   }</code>
  
 <p> When used in conjunction with the <code>java.util.Formatter</code>, the above
  class produces the following output for various format strings. 
 <code>Formatter fmt = new Formatter();
    StockName sn = new StockName("HUGE", "Huge Fruit, Inc.",
                                 "Fruit Titanesque, Inc.");
    fmt.format("%s", sn);                   //   -> "Huge Fruit, Inc."
    fmt.format("%s", sn.toString());        //   -> "HUGE - Huge Fruit, Inc."
    fmt.format("%#s", sn);                  //   -> "HUGE"
    fmt.format("%-10.8s", sn);              //   -> "HUGE      "
    fmt.format("%.12s", sn);                //   -> "Huge Fruit,*"
    fmt.format(Locale.FRANCE, "%25s", sn);  //   -> "   Fruit Titanesque, Inc."</code>
  
 <p> Formattables are not necessarily safe for multithreaded access.  Thread
  safety is optional and may be enforced by classes that extend and implement
  this interface. 
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to
  any method in this interface will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@protocol JavaUtilFormattable < JavaObject >

/*!
 @brief Formats the object using the provided <code>formatter</code>.
 @param formatter The 
 <code>formatter</code> .  Implementing classes may call          <code>formatter.out()</code>
   or <code>formatter.locale()</code>
   to obtain the <code>Appendable</code>
   or <code>Locale</code>  used by this           <tt> formatter
  </tt>  respectively.
 @param flags The flags modify the output format.  The value is interpreted as
           a bitmask.  Any combination of the following flags may be set:
           <code>FormattableFlags.LEFT_JUSTIFY</code>
  , <code>FormattableFlags.UPPERCASE</code>
  , and <code>FormattableFlags.ALTERNATE</code>
  .  If no flags are set, the default          formatting of the implementing class will apply.
 @param width The minimum number of characters to be written to the output.
           If the length of the converted value is less than the
            <tt> width </tt>
   then the output will be padded by           <tt> ' &nbsp; &nbsp; ' </tt>  until the total number of characters          equals width.  The padding is at the beginning by default.  If          the <code>FormattableFlags.LEFT_JUSTIFY</code>  flag is set then the          padding will be at the end.  If  <tt> width </tt>  is  <tt> -1 </tt>          then there is no minimum.
 @param precision The maximum number of characters to be written to the output.
           The precision is applied before the width, thus the output will
           be truncated to 
  <tt> precision </tt>  characters even if the           <tt> width </tt>
   is greater than the  <tt> precision </tt> .  If           <tt> precision
  </tt>  is  <tt> -1 </tt>  then there is no explicit          limit on the number of characters.
 @throw IllegalFormatException
 If any of the parameters are invalid.  For specification of all
           possible formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 */
- (void)formatToWithJavaUtilFormatter:(JavaUtilFormatter *)formatter
                              withInt:(jint)flags
                              withInt:(jint)width
                              withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattable)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormattable")
