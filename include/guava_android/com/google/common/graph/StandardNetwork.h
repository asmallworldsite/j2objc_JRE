//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/graph/StandardNetwork.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphStandardNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphStandardNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphStandardNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphStandardNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphStandardNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphStandardNetwork || defined(INCLUDE_ComGoogleCommonGraphStandardNetwork))
#define ComGoogleCommonGraphStandardNetwork_

#define RESTRICT_ComGoogleCommonGraphAbstractNetwork 1
#define INCLUDE_ComGoogleCommonGraphAbstractNetwork 1
#include "com/google/common/graph/AbstractNetwork.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@class ComGoogleCommonGraphMapIteratorCache;
@class ComGoogleCommonGraphNetworkBuilder;
@protocol ComGoogleCommonGraphNetworkConnections;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Standard implementation of <code>Network</code> that supports the options supplied by <code>NetworkBuilder</code>
 .
 <p>This class maintains a map of nodes to <code>NetworkConnections</code>. This class also maintains a
  map of edges to reference nodes. The reference node is defined to be the edge's source node on
  directed graphs, and an arbitrary endpoint of the edge on undirected graphs. 
 <p>Collection-returning accessors return unmodifiable views: the view returned will reflect
  changes to the graph (if the graph is mutable) but may not be modified by the user. 
 <p>The time complexity of all collection-returning accessors is O(1), since views are returned.
 @author James Sexton
 @author Joshua O'Madadhain
 @author Omar Darwish
 */
@interface ComGoogleCommonGraphStandardNetwork : ComGoogleCommonGraphAbstractNetwork {
 @public
  ComGoogleCommonGraphMapIteratorCache *nodeConnections_;
  ComGoogleCommonGraphMapIteratorCache *edgeToReferenceNode_;
}

#pragma mark Public

- (id<JavaUtilSet>)adjacentNodesWithId:(id __nonnull)node;

- (jboolean)allowsParallelEdges;

- (jboolean)allowsSelfLoops;

- (ComGoogleCommonGraphElementOrder *)edgeOrder;

- (id<JavaUtilSet>)edges;

- (id<JavaUtilSet>)edgesConnectingWithId:(id __nonnull)nodeU
                                  withId:(id __nonnull)nodeV;

- (id<JavaUtilSet>)incidentEdgesWithId:(id __nonnull)node;

- (ComGoogleCommonGraphEndpointPair *)incidentNodesWithId:(id __nonnull)edge;

- (id<JavaUtilSet>)inEdgesWithId:(id __nonnull)node;

- (jboolean)isDirected;

- (ComGoogleCommonGraphElementOrder *)nodeOrder;

- (id<JavaUtilSet>)nodes;

- (id<JavaUtilSet>)outEdgesWithId:(id __nonnull)node;

- (id<JavaUtilSet>)predecessorsWithId:(id __nonnull)node;

- (id<JavaUtilSet>)successorsWithId:(id __nonnull)node;

#pragma mark Protected

- (id<ComGoogleCommonGraphNetworkConnections>)checkedConnectionsWithId:(id __nonnull)node;

- (id)checkedReferenceNodeWithId:(id __nonnull)edge;

- (jboolean)containsEdgeWithId:(id __nullable)edge;

- (jboolean)containsNodeWithId:(id __nullable)node;

#pragma mark Package-Private

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>.
 */
- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder * __nonnull)builder;

/*!
 @brief Constructs a graph with the properties specified in <code>builder</code>, initialized with the given
  node and edge maps.
 */
- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonGraphNetworkBuilder:(ComGoogleCommonGraphNetworkBuilder * __nonnull)builder
                                                                   withJavaUtilMap:(id<JavaUtilMap> __nonnull)nodeConnections
                                                                   withJavaUtilMap:(id<JavaUtilMap> __nonnull)edgeToReferenceNode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphStandardNetwork)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphStandardNetwork, nodeConnections_, ComGoogleCommonGraphMapIteratorCache *)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphStandardNetwork, edgeToReferenceNode_, ComGoogleCommonGraphMapIteratorCache *)

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphStandardNetwork *self, ComGoogleCommonGraphNetworkBuilder *builder);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardNetwork *new_ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardNetwork *create_ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_(ComGoogleCommonGraphNetworkBuilder *builder);

FOUNDATION_EXPORT void ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphStandardNetwork *self, ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode);

FOUNDATION_EXPORT ComGoogleCommonGraphStandardNetwork *new_ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphStandardNetwork *create_ComGoogleCommonGraphStandardNetwork_initPackagePrivateWithComGoogleCommonGraphNetworkBuilder_withJavaUtilMap_withJavaUtilMap_(ComGoogleCommonGraphNetworkBuilder *builder, id<JavaUtilMap> nodeConnections, id<JavaUtilMap> edgeToReferenceNode);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphStandardNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphStandardNetwork")
