cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_SalihAlperen14)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Array)
include_directories(Array/Heap)
include_directories(General)
include_directories(List)
include_directories(List/Graph)

add_executable(graph_puzzle_game_SalihAlperen14
    Array/Heap/Heap.cpp
    Array/Heap/Heap.h
    Array/Heap/HeapNode.cpp
    Array/Heap/HeapNode.h
    Array/Heap/MinHeap.cpp
    Array/Heap/MinHeap.h
    Array/DisjointSet.cpp
    Array/DisjointSet.h
    Array/Set.cpp
    Array/Set.h
    General/AbstractGraph.cpp
    General/AbstractGraph.h
    General/Path.cpp
    General/Path.h
    List/Graph/Edge.cpp
    List/Graph/Edge.h
    List/Graph/EdgeList.cpp
    List/Graph/EdgeList.h
    List/Graph/Graph.cpp
    List/Graph/Graph.h
    List/Node.cpp
    List/Node.h
    List/Queue.cpp
    List/Queue.h
        Main.h Main.cpp)
