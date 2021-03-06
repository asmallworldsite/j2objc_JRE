//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/FastStringBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsFastStringBuffer")
#ifdef RESTRICT_OrgApacheXmlUtilsFastStringBuffer
#define INCLUDE_ALL_OrgApacheXmlUtilsFastStringBuffer 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsFastStringBuffer 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsFastStringBuffer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsFastStringBuffer_) && (INCLUDE_ALL_OrgApacheXmlUtilsFastStringBuffer || defined(INCLUDE_OrgApacheXmlUtilsFastStringBuffer))
#define OrgApacheXmlUtilsFastStringBuffer_

@class IOSCharArray;
@class IOSObjectArray;
@class JavaLangStringBuffer;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief Bare-bones, unsafe, fast string buffer.No thread-safety, no
  parameter range checking, exposed fields.
 Note that in typical
  applications, thread-safety of a StringBuffer is a somewhat
  dubious concept in any case. 
 <p>
  Note that Stree and DTM used a single FastStringBuffer as a string pool,
  by recording start and length indices within this single buffer. This
  minimizes heap overhead, but of course requires more work when retrieving
  the data. 
 <p>
  FastStringBuffer operates as a "chunked buffer". Doing so
  reduces the need to recopy existing information when an append
  exceeds the space available; we just allocate another chunk and
  flow across to it. (The array of chunks may need to grow,
  admittedly, but that's a much smaller object.) Some excess
  recopying may arise when we extract Strings which cross chunk
  boundaries; larger chunks make that less frequent. 
 <p>
  The size values are parameterized, to allow tuning this code. In
  theory, Result Tree Fragments might want to be tuned differently 
  from the main document's text.  
 <p>
  %REVIEW% An experiment in self-tuning is
  included in the code (using nested FastStringBuffers to achieve
  variation in chunk sizes), but this implementation has proven to
  be problematic when data may be being copied from the FSB into itself.
  We should either re-architect that to make this safe (if possible)
  or remove that code and clean up for performance/maintainability reasons. 
 <p>
 */
@interface OrgApacheXmlUtilsFastStringBuffer : NSObject {
 @public
  /*!
   @brief Field m_chunkBits sets our chunking strategy, by saying how many
  bits of index can be used within a single chunk before flowing over
  to the next chunk.For example, if m_chunkbits is set to 15, each
  chunk can contain up to 2^15 (32K) characters
   */
  jint m_chunkBits_;
  /*!
   @brief Field m_maxChunkBits affects our chunk-growth strategy, by saying what
  the largest permissible chunk size is in this particular FastStringBuffer
  hierarchy.
   */
  jint m_maxChunkBits_;
  /*!
   @brief Field m_rechunkBits affects our chunk-growth strategy, by saying how
  many chunks should be allocated at one size before we encapsulate them
  into the first chunk of the next size up.For example, if m_rechunkBits
  is set to 3, then after 8 chunks at a given size we will rebundle
  them as the first element of a FastStringBuffer using a chunk size
  8 times larger (chunkBits shifted left three bits).
   */
  jint m_rebundleBits_;
  /*!
   @brief Field m_chunkSize establishes the maximum size of one chunk of the array
  as 2**chunkbits characters.
   (Which may also be the minimum size if we aren't tuning for storage)
   */
  jint m_chunkSize_;
  /*!
   @brief Field m_chunkMask is m_chunkSize-1 -- in other words, m_chunkBits
  worth of low-order '1' bits, useful for shift-and-mask addressing
  within the chunks.
   */
  jint m_chunkMask_;
  /*!
   @brief Field m_array holds the string buffer's text contents, using an
  array-of-arrays.Note that this array, and the arrays it contains, may be
  reallocated when necessary in order to allow the buffer to grow;
  references to them should be considered to be invalidated after any
  append.
   However, the only time these arrays are directly exposed
  is in the sendSAXcharacters call.
   */
  IOSObjectArray *m_array_;
  /*!
   @brief Field m_lastChunk is an index into m_array[], pointing to the last
  chunk of the Chunked Array currently in use.Note that additional
  chunks may actually be allocated, eg if the FastStringBuffer had
  previously been truncated or if someone issued an ensureSpace request.
   <p>
  The insertion point for append operations is addressed by the combination
  of m_lastChunk and m_firstFree.
   */
  jint m_lastChunk_;
  /*!
   @brief Field m_firstFree is an index into m_array[m_lastChunk][], pointing to
  the first character in the Chunked Array which is not part of the
  FastStringBuffer's current content.Since m_array[][] is zero-based,
  the length of that content can be calculated as
  (m_lastChunk<<m_chunkBits) + m_firstFree
   */
  jint m_firstFree_;
  /*!
   @brief Field m_innerFSB, when non-null, is a FastStringBuffer whose total
  length equals m_chunkSize, and which replaces m_array[0].This allows
  building a hierarchy of FastStringBuffers, where early appends use
  a smaller chunkSize (for less wasted memory overhead) but later
  ones use a larger chunkSize (for less heap activity overhead).
   */
  OrgApacheXmlUtilsFastStringBuffer *m_innerFSB_;
}
@property (readonly, class) jint DEBUG_FORCE_INIT_BITS NS_SWIFT_NAME(DEBUG_FORCE_INIT_BITS);
@property (readonly, class) jboolean DEBUG_FORCE_FIXED_CHUNKSIZE NS_SWIFT_NAME(DEBUG_FORCE_FIXED_CHUNKSIZE);
@property (readonly, class) jint SUPPRESS_LEADING_WS NS_SWIFT_NAME(SUPPRESS_LEADING_WS);
@property (readonly, class) jint SUPPRESS_TRAILING_WS NS_SWIFT_NAME(SUPPRESS_TRAILING_WS);
@property (readonly, class) jint SUPPRESS_BOTH NS_SWIFT_NAME(SUPPRESS_BOTH);
@property (readonly, class, strong) IOSCharArray *SINGLE_SPACE NS_SWIFT_NAME(SINGLE_SPACE);

#pragma mark Public

/*!
 @brief Construct a FastStringBuffer, using a default allocation policy.
 */
- (instancetype __nonnull)init;

/*!
 @brief Construct a FastStringBuffer, using default maxChunkBits and
  rebundleBits values.
 <p>
  ISSUE: Should this call assert initial size, or fixed size?
  Now configured as initial, with a default for fixed.
  NEEDSDOC @@param initChunkBits
 */
- (instancetype __nonnull)initWithInt:(jint)initChunkBits;

/*!
 @brief Construct a FastStringBuffer, using a default rebundleBits value.
 NEEDSDOC @@param initChunkBits
  NEEDSDOC @@param maxChunkBits
 */
- (instancetype __nonnull)initWithInt:(jint)initChunkBits
                              withInt:(jint)maxChunkBits;

/*!
 @brief Construct a FastStringBuffer, with allocation policy as per parameters.
 <p>
  For coding convenience, I've expressed both allocation sizes in terms of
  a number of bits. That's needed for the final size of a chunk,
  to permit fast and efficient shift-and-mask addressing. It's less critical
  for the inital size, and may be reconsidered. 
 <p>
  An alternative would be to accept integer sizes and round to powers of two;
  that really doesn't seem to buy us much, if anything.
 @param initChunkBits Length in characters of the initial allocation  of a chunk, expressed in log-base-2. (That is, 10 means allocate 1024
   characters.) Later chunks will use larger allocation units, to trade off
   allocation speed of large document against storage efficiency of small
   ones.
 @param maxChunkBits Number of character-offset bits that should be used for  addressing within a chunk. Maximum length of a chunk is 2^chunkBits
   characters.
 @param rebundleBits Number of character-offset bits that addressing should  advance before we attempt to take a step from initChunkBits to maxChunkBits
 */
- (instancetype __nonnull)initWithInt:(jint)initChunkBits
                              withInt:(jint)maxChunkBits
                              withInt:(jint)rebundleBits;

/*!
 @brief Append a single character onto the FastStringBuffer, growing the
  storage if necessary.
 <p>
  NOTE THAT after calling append(), previously obtained
  references to m_array[][] may no longer be valid....
  though in fact they should be in this instance.
 @param value character to be appended.
 */
- (void)appendWithChar:(jchar)value;

/*!
 @brief Append part of the contents of a Character Array onto the
  FastStringBuffer,  growing the storage if necessary.
 <p>
  NOTE THAT after calling append(), previously obtained
  references to m_array[] may no longer be valid.
 @param chars character array from which data is to be copied
 @param start offset in chars of first character to be copied,  zero-based.
 @param length number of characters to be copied
 */
- (void)appendWithCharArray:(IOSCharArray *)chars
                    withInt:(jint)start
                    withInt:(jint)length;

/*!
 @brief Append the contents of another FastStringBuffer onto
  this FastStringBuffer, growing the storage if necessary.
 <p>
  NOTE THAT after calling append(), previously obtained
  references to m_array[] may no longer be valid.
 @param value FastStringBuffer whose contents are  to be appended.
 */
- (void)appendWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)value;

/*!
 @brief Append the contents of a String onto the FastStringBuffer,
  growing the storage if necessary.
 <p>
  NOTE THAT after calling append(), previously obtained
  references to m_array[] may no longer be valid.
 @param value String whose contents are to be appended.
 */
- (void)appendWithNSString:(NSString *)value;

/*!
 @brief Append the contents of a StringBuffer onto the FastStringBuffer,
  growing the storage if necessary.
 <p>
  NOTE THAT after calling append(), previously obtained
  references to m_array[] may no longer be valid.
 @param value StringBuffer whose contents are to be appended.
 */
- (void)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)value;

/*!
 @brief Get a single character from the string buffer.
 @param pos character position requested.
 @return A character from the requested position.
 */
- (jchar)charAtWithInt:(jint)pos;

/*!
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 @return a new String object initialized from the specified range of
  characters.
 */
- (NSString *)getStringWithInt:(jint)start
                       withInt:(jint)length;

/*!
 @return true if the specified range of characters are all whitespace,
  as defined by XMLCharacterRecognizer. 
 <p>
  CURRENTLY DOES NOT CHECK FOR OUT-OF-RANGE.
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 */
- (jboolean)isWhitespaceWithInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Get the length of the list.Synonym for size().
 @return the number of characters in the FastStringBuffer's content.
 */
- (jint)length;

/*!
 @brief Discard the content of the FastStringBuffer, and most of the memory
  that was allocated by it, restoring the initial state.Note that this
  may eventually be different from setLength(0), which see.
 */
- (void)reset;

/*!
 @brief Directly normalize and dispatch the character array.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @param handler SAX ContentHandler object to receive the event.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
+ (void)sendNormalizedSAXcharactersWithCharArray:(IOSCharArray *)ch
                                         withInt:(jint)start
                                         withInt:(jint)length
                     withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Sends the specified range of characters as one or more SAX characters()
  events, normalizing the characters according to XSLT rules.
 @param ch SAX ContentHandler object to receive the event.
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 @return normalization status to apply to next chunk (because we may
  have been called recursively to process an inner FSB): 
 <dl>
  <dt>0</dt>
  <dd>if this output did not end in retained whitespace, and thus whitespace
  at the start of the following chunk (if any) should be converted to a
  single space. 
 <dt>SUPPRESS_LEADING_WS</dt>
  <dd>if this output ended in retained whitespace, and thus whitespace
  at the start of the following chunk (if any) should be completely
  suppressed.</dd>
  </dd>
  </dl>
 @throw org.xml.sax.SAXExceptionmay be thrown by handler's
  characters() method.
 */
- (jint)sendNormalizedSAXcharactersWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch
                                                       withInt:(jint)start
                                                       withInt:(jint)length;

/*!
 @brief Sends the specified range of characters as one or more SAX characters()
  events.
 Note that the buffer reference passed to the ContentHandler may be
  invalidated if the FastStringBuffer is edited; it's the user's
  responsibility to manage access to the FastStringBuffer to prevent this
  problem from arising. 
 <p>
  Note too that there is no promise that the output will be sent as a
  single call. As is always true in SAX, one logical string may be split
  across multiple blocks of memory and hence delivered as several
  successive events.
 @param ch SAX ContentHandler object to receive the event.
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 @throw org.xml.sax.SAXExceptionmay be thrown by handler's
  characters() method.
 */
- (void)sendSAXcharactersWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch
                                             withInt:(jint)start
                                             withInt:(jint)length;

/*!
 @brief Sends the specified range of characters as sax Comment.
 <p>
  Note that, unlike sendSAXcharacters, this has to be done as a single 
  call to LexicalHandler#comment.
 @param ch SAX LexicalHandler object to receive the event.
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 @throw org.xml.sax.SAXExceptionmay be thrown by handler's
  characters() method.
 */
- (void)sendSAXCommentWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)ch
                                             withInt:(jint)start
                                             withInt:(jint)length;

/*!
 @brief Directly set how much of the FastStringBuffer's storage is to be
  considered part of its content.This is a fast but hazardous
  operation.
 It is not protected against negative values, or values
  greater than the amount of storage currently available... and even
  if additional storage does exist, its contents are unpredictable.
  The only safe use for our setLength() is to truncate the FastStringBuffer
  to a shorter string.
 @param l New length. If l < 0 or l > =getLength(), this operation will
   not report an error but future operations will almost certainly fail.
 */
- (void)setLengthWithInt:(jint)l;

/*!
 @brief Get the length of the list.Synonym for length().
 @return the number of characters in the FastStringBuffer's content.
 */
- (jint)size;

/*!
 @brief Note that this operation has been somewhat deoptimized by the shift to a
  chunked array, as there is no factory method to produce a String object
  directly from an array of arrays and hence a double copy is needed.
 By using ensureCapacity we hope to minimize the heap overhead of building
  the intermediate StringBuffer. 
 <p>
  (It really is a pity that Java didn't design String as a final subclass
  of MutableString, rather than having StringBuffer be a separate hierarchy.
  We'd avoid a <strong>lot</strong> of double-buffering.)
 @return the contents of the FastStringBuffer as a standard Java string.
 */
- (NSString *)description;

#pragma mark Protected

- (NSString *)getOneChunkStringWithInt:(jint)startChunk
                               withInt:(jint)startColumn
                               withInt:(jint)length;

#pragma mark Package-Private

/*!
 @param sb StringBuffer to be appended to
 @param start Offset of first character in the range.
 @param length Number of characters to send.
 @return sb with the requested text appended to it
 */
- (JavaLangStringBuffer *)getStringWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb
                                                    withInt:(jint)start
                                                    withInt:(jint)length;

/*!
 @brief Internal support for toString() and getString().
 PLEASE NOTE SIGNATURE CHANGE from earlier versions; it now appends into
  and returns a StringBuffer supplied by the caller. This simplifies
  m_innerFSB support. 
 <p>
  Note that this operation has been somewhat deoptimized by the shift to a
  chunked array, as there is no factory method to produce a String object
  directly from an array of arrays and hence a double copy is needed.
  By presetting length we hope to minimize the heap overhead of building
  the intermediate StringBuffer. 
 <p>
  (It really is a pity that Java didn't design String as a final subclass
  of MutableString, rather than having StringBuffer be a separate hierarchy.
  We'd avoid a <strong>lot</strong> of double-buffering.)
 @param sb
 @param startChunk
 @param startColumn
 @param length
 @return the contents of the FastStringBuffer as a standard Java string.
 */
- (JavaLangStringBuffer *)getStringWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb
                                                    withInt:(jint)startChunk
                                                    withInt:(jint)startColumn
                                                    withInt:(jint)length;

/*!
 @brief Internal method to directly normalize and dispatch the character array.
 This version is aware of the fact that it may be called several times
  in succession if the data is made up of multiple "chunks", and thus
  must actively manage the handling of leading and trailing whitespace. 
  Note: The recursion is due to the possible recursion of inner FSBs.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @param handler SAX ContentHandler object to receive the event.
 @param edgeTreatmentFlags How leading/trailing spaces should be handled.   This is a bitfield contining two flags, bitwise-ORed together:
    <dl>
    <dt> SUPPRESS_LEADING_WS
  </dt>   <dd> When false, causes leading whitespace to be converted to a single
   space; when true, causes it to be discarded entirely.
   Should be set TRUE for the first chunk, and (in multi-chunk output)
   whenever the previous chunk ended in retained whitespace.
  </dd>   <dt> SUPPRESS_TRAILING_WS
  </dt>   <dd> When false, causes trailing whitespace to be converted to a single
   space; when true, causes it to be discarded entirely.
   Should be set TRUE for the last or only chunk.
    </dd>   </dl>
 @return normalization status, as in the edgeTreatmentFlags parameter: 
 <dl>
  <dt>0</dt>
  <dd>if this output did not end in retained whitespace, and thus whitespace
  at the start of the following chunk (if any) should be converted to a
  single space. 
 <dt>SUPPRESS_LEADING_WS</dt>
  <dd>if this output ended in retained whitespace, and thus whitespace
  at the start of the following chunk (if any) should be completely
  suppressed.</dd>
  </dd>
  </dl>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
+ (jint)sendNormalizedSAXcharactersWithCharArray:(IOSCharArray *)ch
                                         withInt:(jint)start
                                         withInt:(jint)length
                     withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler
                                         withInt:(jint)edgeTreatmentFlags;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsFastStringBuffer)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsFastStringBuffer, m_array_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsFastStringBuffer, m_innerFSB_, OrgApacheXmlUtilsFastStringBuffer *)

/*!
 */
inline jint OrgApacheXmlUtilsFastStringBuffer_get_DEBUG_FORCE_INIT_BITS(void);
#define OrgApacheXmlUtilsFastStringBuffer_DEBUG_FORCE_INIT_BITS 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsFastStringBuffer, DEBUG_FORCE_INIT_BITS, jint)

inline jboolean OrgApacheXmlUtilsFastStringBuffer_get_DEBUG_FORCE_FIXED_CHUNKSIZE(void);
#define OrgApacheXmlUtilsFastStringBuffer_DEBUG_FORCE_FIXED_CHUNKSIZE true
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsFastStringBuffer, DEBUG_FORCE_FIXED_CHUNKSIZE, jboolean)

/*!
 @brief Manifest constant: Suppress leading whitespace.
 This should be used when normalize-to-SAX is called for the first chunk of a
  multi-chunk output, or one following unsuppressed whitespace in a previous
  chunk.
 - seealso: #sendNormalizedSAXcharacters(org.xml.sax.ContentHandler,int,int)
 */
inline jint OrgApacheXmlUtilsFastStringBuffer_get_SUPPRESS_LEADING_WS(void);
#define OrgApacheXmlUtilsFastStringBuffer_SUPPRESS_LEADING_WS 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsFastStringBuffer, SUPPRESS_LEADING_WS, jint)

/*!
 @brief Manifest constant: Suppress trailing whitespace.
 This should be used when normalize-to-SAX is called for the last chunk of a
  multi-chunk output; it may have to be or'ed with SUPPRESS_LEADING_WS.
 */
inline jint OrgApacheXmlUtilsFastStringBuffer_get_SUPPRESS_TRAILING_WS(void);
#define OrgApacheXmlUtilsFastStringBuffer_SUPPRESS_TRAILING_WS 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsFastStringBuffer, SUPPRESS_TRAILING_WS, jint)

/*!
 @brief Manifest constant: Suppress both leading and trailing whitespace.
 This should be used when normalize-to-SAX is called for a complete string.
  (I'm not wild about the name of this one. Ideas welcome.)
 - seealso: #sendNormalizedSAXcharacters(org.xml.sax.ContentHandler,int,int)
 */
inline jint OrgApacheXmlUtilsFastStringBuffer_get_SUPPRESS_BOTH(void);
#define OrgApacheXmlUtilsFastStringBuffer_SUPPRESS_BOTH 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsFastStringBuffer, SUPPRESS_BOTH, jint)

inline IOSCharArray *OrgApacheXmlUtilsFastStringBuffer_get_SINGLE_SPACE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSCharArray *OrgApacheXmlUtilsFastStringBuffer_SINGLE_SPACE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsFastStringBuffer, SINGLE_SPACE, IOSCharArray *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_withInt_(OrgApacheXmlUtilsFastStringBuffer *self, jint initChunkBits, jint maxChunkBits, jint rebundleBits);

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *new_OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_withInt_(jint initChunkBits, jint maxChunkBits, jint rebundleBits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *create_OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_withInt_(jint initChunkBits, jint maxChunkBits, jint rebundleBits);

FOUNDATION_EXPORT void OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_(OrgApacheXmlUtilsFastStringBuffer *self, jint initChunkBits, jint maxChunkBits);

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *new_OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_(jint initChunkBits, jint maxChunkBits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *create_OrgApacheXmlUtilsFastStringBuffer_initWithInt_withInt_(jint initChunkBits, jint maxChunkBits);

FOUNDATION_EXPORT void OrgApacheXmlUtilsFastStringBuffer_initWithInt_(OrgApacheXmlUtilsFastStringBuffer *self, jint initChunkBits);

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *new_OrgApacheXmlUtilsFastStringBuffer_initWithInt_(jint initChunkBits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *create_OrgApacheXmlUtilsFastStringBuffer_initWithInt_(jint initChunkBits);

FOUNDATION_EXPORT void OrgApacheXmlUtilsFastStringBuffer_init(OrgApacheXmlUtilsFastStringBuffer *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *new_OrgApacheXmlUtilsFastStringBuffer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsFastStringBuffer *create_OrgApacheXmlUtilsFastStringBuffer_init(void);

FOUNDATION_EXPORT jint OrgApacheXmlUtilsFastStringBuffer_sendNormalizedSAXcharactersWithCharArray_withInt_withInt_withOrgXmlSaxContentHandler_withInt_(IOSCharArray *ch, jint start, jint length, id<OrgXmlSaxContentHandler> handler, jint edgeTreatmentFlags);

FOUNDATION_EXPORT void OrgApacheXmlUtilsFastStringBuffer_sendNormalizedSAXcharactersWithCharArray_withInt_withInt_withOrgXmlSaxContentHandler_(IOSCharArray *ch, jint start, jint length, id<OrgXmlSaxContentHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsFastStringBuffer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsFastStringBuffer")
