# Bellman-Ford

#### Problem Statement

Given a weighted directed graph G(V,E) and a source vertex s ∈ V, determine for each vertex v ∈ V the shortest path between s and v.

#### Approach

- Initialize the distance from the source to all vertices as infinite.
- Initialize the distance to itself as 0.
- Create an array dist[] of size |V| with all values as infinite except dist[s].
- Repeat the following |V| - 1 times. Where |V| is number of vertices.
- Create another loop to go through each edge (u, v) in E and do the following:
	1. dist[v] = minimum(dist[v], dist[u] + weight of edge).
- Lastly iterate through all edges on last time to make sure there are no negatively weighted cycles.

#### Time Complexity

O(VE)

#### Space Complexity

O(V^2)

#### Founder's Name

- Richard Bellman & Lester Ford, Jr.

#### Example

```
    # of vertices in graph = 5 [A, B, C, D, E]
    # of edges in graph = 8 

    edges  [A->B, A->C, B->C, B->D, B->E, D->C, D->B, E->D]
    weight [ -1,    4,    3,    2,    2,    5,    1,   -4 ]
    source [  A,    A,    B,    B,    B,    D,    D,    E ]



    // edge A->B 
    graph->edge[0].src = A 
    graph->edge[0].dest = B 
    graph->edge[0].weight = -1 
  
    // edge A->C 
    graph->edge[1].src = A 
    graph->edge[1].dest = C 
    graph->edge[1].weight = 4 
  
    // edge B->C 
    graph->edge[2].src = B 
    graph->edge[2].dest = C 
    graph->edge[2].weight = 3 
  
    // edge B->D 
    graph->edge[3].src = B 
    graph->edge[3].dest = D 
    graph->edge[3].weight = 2 
  
    // edge B->E 
    graph->edge[4].src = B 
    graph->edge[4].dest = E 
    graph->edge[4].weight = 2 
  
    // edge D->C 
    graph->edge[5].src = D
    graph->edge[5].dest = C 
    graph->edge[5].weight = 5 
  
    // edge D->B 
    graph->edge[6].src = D
    graph->edge[6].dest = B 
    graph->edge[6].weight = 1 
  
    // edge E->D 
    graph->edge[7].src = E
    graph->edge[7].dest = D 
    graph->edge[7].weight = -3

    for source = A

    Vertex   Distance from Source
	A                0				A->A
	B                -1				A->B
	C                2 				A->B->C = -1 + 3
	D                -2				A->B->E->D = -1 + 2 + -3
	E                1				A->B->E = -1 + 2
 ```


#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/DataStructures/Graphs/BellmanFord.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Dynamic%20Programming/Bellman-Ford.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/data_structures/graph/bellman_ford.py)
- [C](https://github.com/TheAlgorithms/C/blob/master/data_structures/graphs/Bellman-Ford.c)

#### Video Explanation

[A video explaining the Bellman-Ford Algorithm](https://www.youtube.com/watch?v=hxMWBBCpR6A)

#### Others

Sources Used:
- https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
- https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm
