//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/OpMapVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpMapVector")
#ifdef RESTRICT_OrgApacheXpathCompilerOpMapVector
#define INCLUDE_ALL_OrgApacheXpathCompilerOpMapVector 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerOpMapVector 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerOpMapVector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathCompilerOpMapVector_) && (INCLUDE_ALL_OrgApacheXpathCompilerOpMapVector || defined(INCLUDE_OrgApacheXpathCompilerOpMapVector))
#define OrgApacheXpathCompilerOpMapVector_

@class IOSIntArray;

/*!
 @brief Like IntVector, but used only for the OpMap array.Length of array
  is kept in the m_lengthPos position of the array.
 Only the required methods 
  are in included here.
 */
@interface OrgApacheXpathCompilerOpMapVector : NSObject {
 @public
  /*!
   @brief Size of blocks to allocate
   */
  jint m_blocksize_;
  /*!
   @brief Array of ints
   */
  IOSIntArray *m_map_;
  /*!
   @brief Position where size of array is kept
   */
  jint m_lengthPos_;
  /*!
   @brief Size of array
   */
  jint m_mapSize_;
}

#pragma mark Public

/*!
 @brief Construct a OpMapVector, using the given block size.
 @param blocksize Size of block to allocate
 */
- (instancetype __nonnull)initWithInt:(jint)blocksize
                              withInt:(jint)increaseSize
                              withInt:(jint)lengthPos;

/*!
 @brief Get the nth element.
 @param i index of object to get
 @return object at given index
 */
- (jint)elementAtWithInt:(jint)i;

/*!
 @brief Sets the component at the specified index of this vector to be the
  specified object.The previous component at that position is discarded.
 The index must be a value greater than or equal to 0 and less
  than the current size of the vector.
 @param value object to set
 @param index Index of where to set the object
 */
- (void)setElementAtWithInt:(jint)value
                    withInt:(jint)index;

- (void)setToSizeWithInt:(jint)size;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathCompilerOpMapVector)

J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerOpMapVector, m_map_, IOSIntArray *)

FOUNDATION_EXPORT void OrgApacheXpathCompilerOpMapVector_initWithInt_withInt_withInt_(OrgApacheXpathCompilerOpMapVector *self, jint blocksize, jint increaseSize, jint lengthPos);

FOUNDATION_EXPORT OrgApacheXpathCompilerOpMapVector *new_OrgApacheXpathCompilerOpMapVector_initWithInt_withInt_withInt_(jint blocksize, jint increaseSize, jint lengthPos) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerOpMapVector *create_OrgApacheXpathCompilerOpMapVector_initWithInt_withInt_withInt_(jint blocksize, jint increaseSize, jint lengthPos);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerOpMapVector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpMapVector")