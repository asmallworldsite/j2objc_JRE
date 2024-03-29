//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/ShutdownChannelGroupException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsShutdownChannelGroupException")
#ifdef RESTRICT_JavaNioChannelsShutdownChannelGroupException
#define INCLUDE_ALL_JavaNioChannelsShutdownChannelGroupException 0
#else
#define INCLUDE_ALL_JavaNioChannelsShutdownChannelGroupException 1
#endif
#undef RESTRICT_JavaNioChannelsShutdownChannelGroupException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsShutdownChannelGroupException_) && (INCLUDE_ALL_JavaNioChannelsShutdownChannelGroupException || defined(INCLUDE_JavaNioChannelsShutdownChannelGroupException))
#define JavaNioChannelsShutdownChannelGroupException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to construct a channel in 
  a group that is shutdown or the completion handler for an I/O operation 
  cannot be invoked because the channel group has terminated.
 @since 1.7
 */
@interface JavaNioChannelsShutdownChannelGroupException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsShutdownChannelGroupException)

FOUNDATION_EXPORT void JavaNioChannelsShutdownChannelGroupException_init(JavaNioChannelsShutdownChannelGroupException *self);

FOUNDATION_EXPORT JavaNioChannelsShutdownChannelGroupException *new_JavaNioChannelsShutdownChannelGroupException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsShutdownChannelGroupException *create_JavaNioChannelsShutdownChannelGroupException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsShutdownChannelGroupException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsShutdownChannelGroupException")
