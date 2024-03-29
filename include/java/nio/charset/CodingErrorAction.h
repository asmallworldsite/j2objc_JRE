//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/CodingErrorAction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetCodingErrorAction")
#ifdef RESTRICT_JavaNioCharsetCodingErrorAction
#define INCLUDE_ALL_JavaNioCharsetCodingErrorAction 0
#else
#define INCLUDE_ALL_JavaNioCharsetCodingErrorAction 1
#endif
#undef RESTRICT_JavaNioCharsetCodingErrorAction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetCodingErrorAction_) && (INCLUDE_ALL_JavaNioCharsetCodingErrorAction || defined(INCLUDE_JavaNioCharsetCodingErrorAction))
#define JavaNioCharsetCodingErrorAction_

/*!
 @brief A typesafe enumeration for coding-error actions.
 <p> Instances of this class are used to specify how malformed-input and
  unmappable-character errors are to be handled by charset <a href="CharsetDecoder.html#cae">
 decoders</a> and <a href="CharsetEncoder.html#cae">
 encoders</a>.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioCharsetCodingErrorAction : NSObject

#pragma mark Public

/*!
 @brief Returns a string describing this action.
 @return A descriptive string
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetCodingErrorAction)

/*!
 @brief Action indicating that a coding error is to be handled by dropping the
  erroneous input and resuming the coding operation.
 */
inline JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_get_IGNORE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_IGNORE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetCodingErrorAction, IGNORE, JavaNioCharsetCodingErrorAction *)

/*!
 @brief Action indicating that a coding error is to be handled by dropping the
  erroneous input, appending the coder's replacement value to the output
  buffer, and resuming the coding operation.
 */
inline JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_get_REPLACE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_REPLACE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetCodingErrorAction, REPLACE, JavaNioCharsetCodingErrorAction *)

/*!
 @brief Action indicating that a coding error is to be reported, either by
  returning a <code>CoderResult</code> object or by throwing a <code>CharacterCodingException</code>
 , whichever is appropriate for the method
  implementing the coding process.
 */
inline JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_get_REPORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCodingErrorAction *JavaNioCharsetCodingErrorAction_REPORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetCodingErrorAction, REPORT, JavaNioCharsetCodingErrorAction *)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCodingErrorAction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetCodingErrorAction")
