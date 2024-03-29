//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/OptionalDataException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoOptionalDataException")
#ifdef RESTRICT_JavaIoOptionalDataException
#define INCLUDE_ALL_JavaIoOptionalDataException 0
#else
#define INCLUDE_ALL_JavaIoOptionalDataException 1
#endif
#undef RESTRICT_JavaIoOptionalDataException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoOptionalDataException_) && (INCLUDE_ALL_JavaIoOptionalDataException || defined(INCLUDE_JavaIoOptionalDataException))
#define JavaIoOptionalDataException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "java/io/ObjectStreamException.h"

@class JavaLangBoolean;
@class JavaLangInteger;

/*!
 @brief Exception indicating the failure of an object read operation due to
  unread primitive data, or the end of data belonging to a serialized
  object in the stream.This exception may be thrown in two cases: 
 <ul>
    <li>An attempt was made to read an object when the next element in the
        stream is primitive data.
 In this case, the OptionalDataException's
        length field is set to the number of bytes of primitive data
        immediately readable from the stream, and the eof field is set to
        false.   
 <li>An attempt was made to read past the end of data consumable by a
        class-defined readObject or readExternal method.  In this case, the
        OptionalDataException's eof field is set to true, and the length field
        is set to 0. 
 </ul>
 @since 1.1
 */
@interface JavaIoOptionalDataException : JavaIoObjectStreamException {
 @public
  /*!
   @brief The number of bytes of primitive data available to be read
  in the current buffer.
   */
  jint length_;
  /*!
   @brief True if there is no more data in the buffered part of the stream.
   */
  jboolean eof_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithBoolean:(jboolean)end;

- (instancetype __nonnull)initWithInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoOptionalDataException)

FOUNDATION_EXPORT void JavaIoOptionalDataException_initWithInt_(JavaIoOptionalDataException *self, jint len);

FOUNDATION_EXPORT JavaIoOptionalDataException *new_JavaIoOptionalDataException_initWithInt_(jint len) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOptionalDataException *create_JavaIoOptionalDataException_initWithInt_(jint len);

FOUNDATION_EXPORT void JavaIoOptionalDataException_initWithBoolean_(JavaIoOptionalDataException *self, jboolean end);

FOUNDATION_EXPORT JavaIoOptionalDataException *new_JavaIoOptionalDataException_initWithBoolean_(jboolean end) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoOptionalDataException *create_JavaIoOptionalDataException_initWithBoolean_(jboolean end);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoOptionalDataException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaIoOptionalDataException")
