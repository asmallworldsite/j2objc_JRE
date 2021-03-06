//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/ForwardingGraph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingGraph")
#ifdef RESTRICT_ComGoogleCommonGraphForwardingGraph
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphForwardingGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphForwardingGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphForwardingGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphForwardingGraph || defined(INCLUDE_ComGoogleCommonGraphForwardingGraph))
#define ComGoogleCommonGraphForwardingGraph_

#define RESTRICT_ComGoogleCommonGraphAbstractGraph 1
#define INCLUDE_ComGoogleCommonGraphAbstractGraph 1
#include "com/google/common/graph/AbstractGraph.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@protocol ComGoogleCommonGraphBaseGraph;
@protocol JavaUtilSet;

/*!
 @brief A class to allow <code>Graph</code> implementations to be backed by a <code>BaseGraph</code>.This is not
  currently planned to be released as a general-purpose forwarding class.
 @author James Sexton
 */
@interface ComGoogleCommonGraphForwardingGraph : ComGoogleCommonGraphAbstractGraph

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id __nonnull)node;

- (jboolean)allowsSelfLoops;

- (jint)degreeWithId:(id __nonnull)node;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (jboolean)hasEdgeConnectingWithId:(id __nonnull)nodeU
                             withId:(id __nonnull)nodeV;

- (ComGoogleCommonGraphElementOrder *)incidentEdgeOrder;

- (id<JavaUtilSet>)incidentEdgesWithId:(id __nonnull)node;

- (jint)inDegreeWithId:(id __nonnull)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (jint)outDegreeWithId:(id __nonnull)node;

- (id<JavaUtilSet>)predecessorsWithId:(id __nonnull)node;

- (id<JavaUtilSet>)successorsWithId:(id __nonnull)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphBaseGraph>)delegate;

/*!
 @brief Defer to <code>AbstractGraph.edges()</code> (based on <code>successors(Object)</code>) for full edges()
  implementation.
 */
- (jlong)edgeCount;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphForwardingGraph)

FOUNDATION_EXPORT void ComGoogleCommonGraphForwardingGraph_initPackagePrivate(ComGoogleCommonGraphForwardingGraph *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphForwardingGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphForwardingGraph")
