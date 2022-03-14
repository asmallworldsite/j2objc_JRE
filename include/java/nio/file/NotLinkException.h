//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/NotLinkException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileNotLinkException")
#ifdef RESTRICT_JavaNioFileNotLinkException
#define INCLUDE_ALL_JavaNioFileNotLinkException 0
#else
#define INCLUDE_ALL_JavaNioFileNotLinkException 1
#endif
#undef RESTRICT_JavaNioFileNotLinkException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileNotLinkException_) && (INCLUDE_ALL_JavaNioFileNotLinkException || defined(INCLUDE_JavaNioFileNotLinkException))
#define JavaNioFileNotLinkException_

#define RESTRICT_JavaNioFileFileSystemException 1
#define INCLUDE_JavaNioFileFileSystemException 1
#include "java/nio/file/FileSystemException.h"

/*!
 @brief Checked exception thrown when a file system operation fails because a file
  is not a symbolic link.
 @since 1.7
 */
@interface JavaNioFileNotLinkException : JavaNioFileFileSystemException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 @param file a string identifying the file or 
 <code>null</code>  if not known
 */
- (instancetype __nonnull)initWithNSString:(NSString *)file;

/*!
 @brief Constructs an instance of this class.
 @param file a string identifying the file or 
 <code>null</code>  if not known
 @param other a string identifying the other file or 
 <code>null</code>  if not known
 @param reason a reason message with additional information or 
 <code>null</code>
 */
- (instancetype __nonnull)initWithNSString:(NSString *)file
                              withNSString:(NSString *)other
                              withNSString:(NSString *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileNotLinkException)

inline jlong JavaNioFileNotLinkException_get_serialVersionUID(void);
#define JavaNioFileNotLinkException_serialVersionUID -388655596416518021LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileNotLinkException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileNotLinkException_initWithNSString_(JavaNioFileNotLinkException *self, NSString *file);

FOUNDATION_EXPORT JavaNioFileNotLinkException *new_JavaNioFileNotLinkException_initWithNSString_(NSString *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileNotLinkException *create_JavaNioFileNotLinkException_initWithNSString_(NSString *file);

FOUNDATION_EXPORT void JavaNioFileNotLinkException_initWithNSString_withNSString_withNSString_(JavaNioFileNotLinkException *self, NSString *file, NSString *other, NSString *reason);

FOUNDATION_EXPORT JavaNioFileNotLinkException *new_JavaNioFileNotLinkException_initWithNSString_withNSString_withNSString_(NSString *file, NSString *other, NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileNotLinkException *create_JavaNioFileNotLinkException_initWithNSString_withNSString_withNSString_(NSString *file, NSString *other, NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileNotLinkException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileNotLinkException")