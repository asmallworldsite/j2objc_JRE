//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/DosFileAttributeView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeDosFileAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeDosFileAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeDosFileAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeDosFileAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeDosFileAttributeView

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeDosFileAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeDosFileAttributeView || defined(INCLUDE_JavaNioFileAttributeDosFileAttributeView))
#define JavaNioFileAttributeDosFileAttributeView_

#define RESTRICT_JavaNioFileAttributeBasicFileAttributeView 1
#define INCLUDE_JavaNioFileAttributeBasicFileAttributeView 1
#include "java/nio/file/attribute/BasicFileAttributeView.h"

@class JavaLangBoolean;
@protocol JavaNioFileAttributeDosFileAttributes;

/*!
 @brief A file attribute view that provides a view of the legacy "DOS" file attributes.
 These attributes are supported by file systems such as the File Allocation
  Table (FAT) format commonly used in <em>consumer devices</em>.
  
 <p> A <code>DosFileAttributeView</code> is a <code>BasicFileAttributeView</code> that
  additionally supports access to the set of DOS attribute flags that are used
  to indicate if the file is read-only, hidden, a system file, or archived. 
 <p> Where dynamic access to file attributes is required, the attributes
  supported by this attribute view are as defined by <code>BasicFileAttributeView</code>
 , and in addition, the following attributes are
  supported: 
 <blockquote>
  <table class="striped">
  <caption style="display:none">Supported attributes</caption>
  <thead>
    <tr>
      <th scope="col"> Name </th>
      <th scope="col"> Type </th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th scope="row"> readonly </th>
      <td> <code>Boolean</code> </td>
    </tr>
    <tr>
      <th scope="row"> hidden </th>
      <td> <code>Boolean</code> </td>
    </tr>
    <tr>
      <th scope="row"> system </th>
      <td> <code>Boolean</code> </td>
    </tr>
    <tr>
      <th scope="row"> archive </th>
      <td> <code>Boolean</code> </td>
    </tr>
  </tbody>
  </table>
  </blockquote>
  
 <p> The <code>getAttribute</code> method may
  be used to read any of these attributes, or any of the attributes defined by 
 <code>BasicFileAttributeView</code> as if by invoking the <code>readAttributes()</code>
  method. 
 <p> The <code>setAttribute</code> method may
  be used to update the file's last modified time, last access time or create
  time attributes as defined by <code>BasicFileAttributeView</code>. It may also be
  used to update the DOS attributes as if by invoking the <code>setReadOnly</code>
 , <code>setHidden</code>, <code>setSystem</code>, and 
 <code>setArchive</code> methods respectively.
 @since 1.7
 */
@protocol JavaNioFileAttributeDosFileAttributeView < JavaNioFileAttributeBasicFileAttributeView, JavaObject >

/*!
 @brief Returns the name of the attribute view.Attribute views of this type
  have the name <code>"dos"</code>.
 */
- (NSString *)name;

/*!
 @throw IOException
 @throw SecurityException
 */
- (id<JavaNioFileAttributeDosFileAttributes>)readAttributes;

/*!
 @brief Updates the value of the read-only attribute.
 <p> It is implementation specific if the attribute can be updated as an
  atomic operation with respect to other file system operations. An
  implementation may, for example, require to read the existing value of
  the DOS attribute in order to update this attribute.
 @param value the new value of the attribute
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default, and a security manager is installed,
           its  <code>checkWrite</code> method
           is invoked to check write access to the file
 */
- (void)setReadOnlyWithBoolean:(jboolean)value;

/*!
 @brief Updates the value of the hidden attribute.
 <p> It is implementation specific if the attribute can be updated as an
  atomic operation with respect to other file system operations. An
  implementation may, for example, require to read the existing value of
  the DOS attribute in order to update this attribute.
 @param value the new value of the attribute
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default, and a security manager is installed,
           its  <code>checkWrite</code> method
           is invoked to check write access to the file
 */
- (void)setHiddenWithBoolean:(jboolean)value;

/*!
 @brief Updates the value of the system attribute.
 <p> It is implementation specific if the attribute can be updated as an
  atomic operation with respect to other file system operations. An
  implementation may, for example, require to read the existing value of
  the DOS attribute in order to update this attribute.
 @param value the new value of the attribute
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default, and a security manager is installed,
           its  <code>checkWrite</code> method
           is invoked to check write access to the file
 */
- (void)setSystemWithBoolean:(jboolean)value;

/*!
 @brief Updates the value of the archive attribute.
 <p> It is implementation specific if the attribute can be updated as an
  atomic operation with respect to other file system operations. An
  implementation may, for example, require to read the existing value of
  the DOS attribute in order to update this attribute.
 @param value the new value of the attribute
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default, and a security manager is installed,
           its  <code>checkWrite</code> method
           is invoked to check write access to the file
 */
- (void)setArchiveWithBoolean:(jboolean)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeDosFileAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeDosFileAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeDosFileAttributeView")
