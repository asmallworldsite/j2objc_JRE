//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/FileAttributeView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeFileAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeFileAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeFileAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeFileAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeFileAttributeView

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeFileAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeFileAttributeView || defined(INCLUDE_JavaNioFileAttributeFileAttributeView))
#define JavaNioFileAttributeFileAttributeView_

#define RESTRICT_JavaNioFileAttributeAttributeView 1
#define INCLUDE_JavaNioFileAttributeAttributeView 1
#include "java/nio/file/attribute/AttributeView.h"

/*!
 @brief An attribute view that is a read-only or updatable view of non-opaque
  values associated with a file in a filesystem.This interface is extended or
  implemented by specific file attribute views that define methods to read
  and/or update the attributes of a file.
 @since 1.7
 - seealso: java.nio.file.Files#getFileAttributeView(Path,Class,java.nio.file.LinkOption[])
 */
@protocol JavaNioFileAttributeFileAttributeView < JavaNioFileAttributeAttributeView, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeFileAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeFileAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeFileAttributeView")
