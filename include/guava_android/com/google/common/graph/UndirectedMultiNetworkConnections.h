//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/graph/UndirectedMultiNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedMultiNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphUndirectedMultiNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedMultiNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphUndirectedMultiNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphUndirectedMultiNetworkConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphUndirectedMultiNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphUndirectedMultiNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphUndirectedMultiNetworkConnections))
#define ComGoogleCommonGraphUndirectedMultiNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphAbstractUndirectedNetworkConnections 1
#include "com/google/common/graph/AbstractUndirectedNetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief An implementation of <code>NetworkConnections</code> for undirected networks with parallel edges.
 @author James Sexton
 */
@interface ComGoogleCommonGraphUndirectedMultiNetworkConnections : ComGoogleCommonGraphAbstractUndirectedNetworkConnections

#pragma mark Public

- (void)addInEdgeWithId:(id __nonnull)edge
                 withId:(id __nonnull)node
            withBoolean:(jboolean)isSelfLoop;

- (void)addOutEdgeWithId:(id __nonnull)edge
                  withId:(id __nonnull)node;

- (id<JavaUtilSet>)adjacentNodes;

- (id<JavaUtilSet>)edgesConnectingWithId:(id __nonnull)node;

- (id)removeInEdgeWithId:(id __nonnull)edge
             withBoolean:(jboolean)isSelfLoop;

- (id)removeOutEdgeWithId:(id __nonnull)edge;

#pragma mark Package-Private

+ (ComGoogleCommonGraphUndirectedMultiNetworkConnections *)of;

+ (ComGoogleCommonGraphUndirectedMultiNetworkConnections *)ofImmutableWithJavaUtilMap:(id<JavaUtilMap> __nonnull)incidentEdges;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphUndirectedMultiNetworkConnections)

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedMultiNetworkConnections *ComGoogleCommonGraphUndirectedMultiNetworkConnections_of(void);

FOUNDATION_EXPORT ComGoogleCommonGraphUndirectedMultiNetworkConnections *ComGoogleCommonGraphUndirectedMultiNetworkConnections_ofImmutableWithJavaUtilMap_(id<JavaUtilMap> incidentEdges);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphUndirectedMultiNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphUndirectedMultiNetworkConnections")
