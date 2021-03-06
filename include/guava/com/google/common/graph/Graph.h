//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/Graph.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphGraph")
#ifdef RESTRICT_ComGoogleCommonGraphGraph
#define INCLUDE_ALL_ComGoogleCommonGraphGraph 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphGraph 1
#endif
#undef RESTRICT_ComGoogleCommonGraphGraph

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphGraph_) && (INCLUDE_ALL_ComGoogleCommonGraphGraph || defined(INCLUDE_ComGoogleCommonGraphGraph))
#define ComGoogleCommonGraphGraph_

#define RESTRICT_ComGoogleCommonGraphBaseGraph 1
#define INCLUDE_ComGoogleCommonGraphBaseGraph 1
#include "com/google/common/graph/BaseGraph.h"

@class ComGoogleCommonGraphElementOrder;
@class ComGoogleCommonGraphEndpointPair;
@protocol JavaUtilSet;

/*!
 @brief An interface for <a href="https://en.wikipedia.org/wiki/Graph_(discrete_mathematics)">
 graph</a>-structured data,
  whose edges are anonymous entities with no identity or information of their own.
 <p>A graph is composed of a set of nodes and a set of edges connecting pairs of nodes. 
 <p>There are three primary interfaces provided to represent graphs. In order of increasing
  complexity they are: <code>Graph</code>, <code>ValueGraph</code>, and <code>Network</code>. You should generally
  prefer the simplest interface that satisfies your use case. See the <a href="https://github.com/google/guava/wiki/GraphsExplained#choosing-the-right-graph-type">
  "Choosing the right graph type"</a> section of the Guava User Guide for more details. 
 <h3>Capabilities</h3>
  
 <p><code>Graph</code> supports the following use cases (<a href="https://github.com/google/guava/wiki/GraphsExplained#definitions">
 definitions of
  terms</a>):
  
 <ul>
    <li>directed graphs
    <li>undirected graphs
    <li>graphs that do/don't allow self-loops
    <li>graphs whose nodes/edges are insertion-ordered, sorted, or unordered 
 </ul>
  
 <p><code>Graph</code> explicitly does not support parallel edges, and forbids implementations or
  extensions with parallel edges. If you need parallel edges, use <code>Network</code>.
  
 <h3>Building a <code>Graph</code></h3>
  
 <p>The implementation classes that <code>common.graph</code> provides are not public, by design. To
  create an instance of one of the built-in implementations of <code>Graph</code>, use the <code>GraphBuilder</code>
  class: 
 @code
 MutableGraph<Integer> graph = GraphBuilder.undirected().build(); 
 
@endcode
  
 <p><code>GraphBuilder.build()</code> returns an instance of <code>MutableGraph</code>, which is a subtype
  of <code>Graph</code> that provides methods for adding and removing nodes and edges. If you do not
  need to mutate a graph (e.g. if you write a method than runs a read-only algorithm on the graph),
  you should use the non-mutating <code>Graph</code> interface, or an <code>ImmutableGraph</code>.
  
 <p>You can create an immutable copy of an existing <code>Graph</code> using <code>ImmutableGraph.copyOf(Graph)</code>
 :
  
 @code
 ImmutableGraph<Integer> immutableGraph = ImmutableGraph.copyOf(graph); 
 
@endcode
  
 <p>Instances of <code>ImmutableGraph</code> do not implement <code>MutableGraph</code> (obviously!) and are
  contractually guaranteed to be unmodifiable and thread-safe. 
 <p>The Guava User Guide has <a href="https://github.com/google/guava/wiki/GraphsExplained#building-graph-instances">
 more
  information on (and examples of) building graphs</a>.
  
 <h3>Additional documentation</h3>
  
 <p>See the Guava User Guide for the <code>common.graph</code> package (<a href="https://github.com/google/guava/wiki/GraphsExplained">
 "Graphs Explained"</a>) for
  additional documentation, including: 
 <ul>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#equals-hashcode-and-graph-equivalence">
        <code>equals()</code>, <code>hashCode()</code>, and graph equivalence</a>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#synchronization">
        Synchronization policy</a>
    <li><a href="https://github.com/google/guava/wiki/GraphsExplained#notes-for-implementors">Notes
        for implementors</a>
  </ul>
 @author James Sexton
 @author Joshua O'Madadhain
 @since 20.0
 */
@protocol ComGoogleCommonGraphGraph < ComGoogleCommonGraphBaseGraph, JavaObject >

/*!
 @brief Returns all nodes in this graph, in the order specified by <code>nodeOrder()</code>.
 */
- (id<JavaUtilSet>)nodes;

/*!
 @brief Returns all edges in this graph.
 */
- (id<JavaUtilSet>)edges;

/*!
 @brief Returns true if the edges in this graph are directed.Directed edges connect a <code>source node</code>
  to a <code>target node</code>, while
  undirected edges connect a pair of nodes to each other.
 */
- (jboolean)isDirected;

/*!
 @brief Returns true if this graph allows self-loops (edges that connect a node to itself).Attempting
  to add a self-loop to a graph that does not allow them will throw an <code>IllegalArgumentException</code>
 .
 */
- (jboolean)allowsSelfLoops;

/*!
 @brief Returns the order of iteration for the elements of <code>nodes()</code>.
 */
- (ComGoogleCommonGraphElementOrder *)nodeOrder;

/*!
 @brief Returns an <code>ElementOrder</code> that specifies the order of iteration for the elements of 
 <code>edges()</code>, <code>adjacentNodes(Object)</code>, <code>predecessors(Object)</code>, <code>successors(Object)</code>
  and <code>incidentEdges(Object)</code>.
 @since 29.0
 */
- (ComGoogleCommonGraphElementOrder *)incidentEdgeOrder;

/*!
 @brief Returns the nodes which have an incident edge in common with <code>node</code> in this graph.
 <p>This is equal to the union of <code>predecessors(Object)</code> and <code>successors(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)adjacentNodesWithId:(id __nonnull)node;

/*!
 @brief Returns all nodes in this graph adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s incoming edges <i>against</i> the direction (if any) of the edge.
 <p>In an undirected graph, this is equivalent to <code>adjacentNodes(Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)predecessorsWithId:(id __nonnull)node;

/*!
 @brief Returns all nodes in this graph adjacent to <code>node</code> which can be reached by traversing 
 <code>node</code>'s outgoing edges in the direction (if any) of the edge.
 <p>In an undirected graph, this is equivalent to <code>adjacentNodes(Object)</code>.
  
 <p>This is <i>not</i> the same as "all nodes reachable from <code>node</code> by following outgoing
  edges". For that functionality, see <code>Graphs.reachableNodes(Graph, Object)</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (id<JavaUtilSet>)successorsWithId:(id __nonnull)node;

/*!
 @brief Returns the edges in this graph whose endpoints include <code>node</code>.
 <p>This is equal to the union of incoming and outgoing edges.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 @since 24.0
 */
- (id<JavaUtilSet>)incidentEdgesWithId:(id __nonnull)node;

/*!
 @brief Returns the count of <code>node</code>'s incident edges, counting self-loops twice (equivalently,
  the number of times an edge touches <code>node</code>).
 <p>For directed graphs, this is equal to <code>inDegree(node) + outDegree(node)</code>.
  
 <p>For undirected graphs, this is equal to <code>incidentEdges(node).size()</code> + (number of
  self-loops incident to <code>node</code>).
  
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)degreeWithId:(id __nonnull)node;

/*!
 @brief Returns the count of <code>node</code>'s incoming edges (equal to <code>predecessors(node).size()</code>)
  in a directed graph.In an undirected graph, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)inDegreeWithId:(id __nonnull)node;

/*!
 @brief Returns the count of <code>node</code>'s outgoing edges (equal to <code>successors(node).size()</code>)
  in a directed graph.In an undirected graph, returns the <code>degree(Object)</code>.
 <p>If the count is greater than <code>Integer.MAX_VALUE</code>, returns <code>Integer.MAX_VALUE</code>.
 @throw IllegalArgumentExceptionif <code>node</code> is not an element of this graph
 */
- (jint)outDegreeWithId:(id __nonnull)node;

/*!
 @brief Returns true if there is an edge that directly connects <code>nodeU</code> to <code>nodeV</code>.This is
  equivalent to <code>nodes().contains(nodeU) && successors(nodeU).contains(nodeV)</code>.
 <p>In an undirected graph, this is equal to <code>hasEdgeConnecting(nodeV, nodeU)</code>.
 @since 23.0
 */
- (jboolean)hasEdgeConnectingWithId:(id __nonnull)nodeU
                             withId:(id __nonnull)nodeV;

/*!
 @brief Returns true if there is an edge that directly connects <code>endpoints</code> (in the order, if
  any, specified by <code>endpoints</code>).This is equivalent to <code>edges().contains(endpoints)</code>
 .
 <p>Unlike the other <code>EndpointPair</code>-accepting methods, this method does not throw if the
  endpoints are unordered and the graph is directed; it simply returns <code>false</code>. This is for
  consistency with the behavior of <code>Collection.contains(Object)</code> (which does not generally
  throw if the object cannot be present in the collection), and the desire to have this method's
  behavior be compatible with <code>edges().contains(endpoints)</code>.
 @since 27.1
 */
- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

/*!
 @brief Returns <code>true</code> iff <code>object</code> is a <code>Graph</code> that has the same elements and the
  same structural relationships as those in this graph.
 <p>Thus, two graphs A and B are equal if <b>all</b> of the following are true: 
 <ul>
    <li>A and B have equal <code>directedness</code>.
    <li>A and B have equal <code>node sets</code>.
    <li>A and B have equal <code>edge sets</code>.
  </ul>
  
 <p>Graph properties besides <code>directedness</code> do <b>not</b> affect equality.
  For example, two graphs may be considered equal even if one allows self-loops and the other
  doesn't. Additionally, the order in which nodes or edges are added to the graph, and the order
  in which they are iterated over, are irrelevant. 
 <p>A reference implementation of this is provided by <code>AbstractGraph.equals(Object)</code>.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the hash code for this graph.The hash code of a graph is defined as the hash code of
  the set returned by <code>edges()</code>.
 <p>A reference implementation of this is provided by <code>AbstractGraph.hashCode()</code>.
 */
- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphGraph)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphGraph)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphGraph")
