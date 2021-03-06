//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/OpMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpMap")
#ifdef RESTRICT_OrgApacheXpathCompilerOpMap
#define INCLUDE_ALL_OrgApacheXpathCompilerOpMap 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerOpMap 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerOpMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathCompilerOpMap_) && (INCLUDE_ALL_OrgApacheXpathCompilerOpMap || defined(INCLUDE_OrgApacheXpathCompilerOpMap))
#define OrgApacheXpathCompilerOpMap_

@class IOSIntArray;
@class IOSObjectArray;
@class OrgApacheXmlUtilsObjectVector;
@class OrgApacheXpathCompilerOpMapVector;

/*!
 @brief This class represents the data structure basics of the XPath
  object.
 */
@interface OrgApacheXpathCompilerOpMap : NSObject {
 @public
  /*!
   @brief The current pattern string, for diagnostics purposes
   */
  NSString *m_currentPattern_;
  /*!
   @brief TokenStack is the queue of used tokens.The current token is the token at the
  end of the m_tokenQueue.
   The idea is that the queue can be marked and a sequence
  of tokens can be reused.
   */
  OrgApacheXmlUtilsObjectVector *m_tokenQueue_;
  /*!
   @brief An operations map is used instead of a proper parse tree.It contains
  operations codes and indexes into the m_tokenQueue.
   I use an array instead of a full parse tree in order to cut down
  on the number of objects created.
   */
  OrgApacheXpathCompilerOpMapVector *m_opMap_;
}
@property (readonly, class) jint MAXTOKENQUEUESIZE NS_SWIFT_NAME(MAXTOKENQUEUESIZE);
@property (readonly, class) jint BLOCKTOKENQUEUESIZE NS_SWIFT_NAME(BLOCKTOKENQUEUESIZE);
@property (readonly, class) jint MAPINDEX_LENGTH NS_SWIFT_NAME(MAPINDEX_LENGTH);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Tell the user of an error, and probably throw an
  exception.
 @param msg An error msgkey that corresponds to one of the constants found              in 
 <code>org.apache.xpath.res.XPATHErrorResources</code> , which is              a key for a format string.
 @param args An array of arguments represented in the format string, which               may be null.
 @throw TransformerExceptionif the current ErrorListoner determines to 
                               throw an exception.
 */
- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Get the length of an operation.
 @param opPos The position of the operation in the op map.
 @return The size of the operation.
 */
- (jint)getArgLengthWithInt:(jint)opPos;

/*!
 @brief Given a location step, get the length of that step.
 @param opPos Position of location step in op map.
 @return The length of the step.
 */
- (jint)getArgLengthOfStepWithInt:(jint)opPos;

/*!
 @brief Go to the first child of a given operation.
 @param opPos position of operation.
 @return The position of the first child of the operation.
 */
+ (jint)getFirstChildPosWithInt:(jint)opPos;

/*!
 @brief Get the first child position of a given location step.
 @param opPos Position of location step in the location map.
 @return The first child position of the step.
 */
+ (jint)getFirstChildPosOfStepWithInt:(jint)opPos;

/*!
 @brief Given an FROM_stepType position, return the position of the
  first predicate, if there is one, or else this will point
  to the end of the FROM_stepType.
 Example:
   int posOfPredicate = xpath.getNextOpPos(stepPos);
   boolean hasPredicates =
             OpCodes.OP_PREDICATE == xpath.getOp(posOfPredicate);
 @param opPos position of FROM_stepType op.
 @return position of predicate in FROM_stepType structure.
 */
- (jint)getFirstPredicateOpPosWithInt:(jint)opPos;

/*!
 @brief Given an operation position, return the end position, i.e.the
  beginning of the next operation.
 @param opPos An op position of an operation for which there is a size                entry following.
 @return position of next operation in m_opMap.
 */
- (jint)getNextOpPosWithInt:(jint)opPos;

/*!
 @brief Given an operation position, return the end position, i.e.the
  beginning of the next operation.
 @param opMap The operations map.
 @param opPos index to operation, for which there is a size entry following.
 @return position of next operation in m_opMap.
 */
+ (jint)getNextOpPosWithIntArray:(IOSIntArray *)opMap
                         withInt:(jint)opPos;

/*!
 @brief Given a location step position, return the end position, i.e.the
  beginning of the next step.
 @param opPos the position of a location step.
 @return the position of the next location step.
 */
- (jint)getNextStepPosWithInt:(jint)opPos;

/*!
 @brief Given an operation position, return the current op.
 @param opPos index into op map.
 @return the op that corresponds to the opPos argument.
 */
- (jint)getOpWithInt:(jint)opPos;

/*!
 @brief Get the opcode list that describes the XPath operations.It contains
  operations codes and indexes into the m_tokenQueue.
 I use an array instead of a full parse tree in order to cut down
  on the number of objects created.
 @return An IntVector that is the opcode list that describes the XPath operations.
 */
- (OrgApacheXpathCompilerOpMapVector *)getOpMap;

/*!
 @brief Return the expression as a string for diagnostics.
 @return The expression string.
 */
- (NSString *)getPatternString;

/*!
 @brief Get the local name of the step.
 @param opPosOfStep The position of the FROM_XXX step.
 @return OpCodes.EMPTY, OpCodes.ELEMWILDCARD, or the local name.
 */
- (NSString *)getStepLocalNameWithInt:(jint)opPosOfStep;

/*!
 @brief Get the namespace of the step.
 @param opPosOfStep The position of the FROM_XXX step.
 @return The step's namespace, NodeTest.WILD, or null for null namespace.
 */
- (NSString *)getStepNSWithInt:(jint)opPosOfStep;

/*!
 @brief Get the test type of the step, i.e.NODETYPE_XXX value.
 @param opPosOfStep The position of the FROM_XXX step.
 @return NODETYPE_XXX value.
 */
- (jint)getStepTestTypeWithInt:(jint)opPosOfStep;

/*!
 @brief Get the XPath as a list of tokens.
 @param pos index into token queue.
 @return The token, normally a string.
 */
- (id)getTokenWithInt:(jint)pos;

/*!
 @brief Get the XPath as a list of tokens.
 @return ObjectVector of tokens.
 */
- (OrgApacheXmlUtilsObjectVector *)getTokenQueue;

/*!
 @brief Get size of the token queue.
 @return The size of the token queue.
 */
- (jint)getTokenQueueSize;

/*!
 @brief Set the op at index to the given int.
 @param opPos index into op map.
 @param value Value to set
 */
- (void)setOpWithInt:(jint)opPos
             withInt:(jint)value;

/*!
 @brief Return the expression as a string for diagnostics.
 @return The expression string.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Replace the large arrays
  with a small array.
 */
- (void)shrink;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathCompilerOpMap)

J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerOpMap, m_currentPattern_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerOpMap, m_tokenQueue_, OrgApacheXmlUtilsObjectVector *)
J2OBJC_FIELD_SETTER(OrgApacheXpathCompilerOpMap, m_opMap_, OrgApacheXpathCompilerOpMapVector *)

/*!
 @brief The starting size of the token queue.
 */
inline jint OrgApacheXpathCompilerOpMap_get_MAXTOKENQUEUESIZE(void);
#define OrgApacheXpathCompilerOpMap_MAXTOKENQUEUESIZE 500
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpMap, MAXTOKENQUEUESIZE, jint)

inline jint OrgApacheXpathCompilerOpMap_get_BLOCKTOKENQUEUESIZE(void);
#define OrgApacheXpathCompilerOpMap_BLOCKTOKENQUEUESIZE 500
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpMap, BLOCKTOKENQUEUESIZE, jint)

/*!
 @brief The length is always the opcode position + 1.
 Length is always expressed as the opcode+length bytes,
  so it is always 2 or greater.
 */
inline jint OrgApacheXpathCompilerOpMap_get_MAPINDEX_LENGTH(void);
#define OrgApacheXpathCompilerOpMap_MAPINDEX_LENGTH 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerOpMap, MAPINDEX_LENGTH, jint)

FOUNDATION_EXPORT void OrgApacheXpathCompilerOpMap_init(OrgApacheXpathCompilerOpMap *self);

FOUNDATION_EXPORT OrgApacheXpathCompilerOpMap *new_OrgApacheXpathCompilerOpMap_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerOpMap *create_OrgApacheXpathCompilerOpMap_init(void);

FOUNDATION_EXPORT jint OrgApacheXpathCompilerOpMap_getNextOpPosWithIntArray_withInt_(IOSIntArray *opMap, jint opPos);

FOUNDATION_EXPORT jint OrgApacheXpathCompilerOpMap_getFirstChildPosWithInt_(jint opPos);

FOUNDATION_EXPORT jint OrgApacheXpathCompilerOpMap_getFirstChildPosOfStepWithInt_(jint opPos);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerOpMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerOpMap")
