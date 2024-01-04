//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "EdgeList.h"
#include "../../General/AbstractGraph.h"
#include "vector"

namespace list {

    class Graph : public AbstractGraph{
    private:
        EdgeList *edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentsDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
        void prim();
        Path *updatedBellmanFord(int source,int to);
        std::vector<int> dijkstra_(int source);
        void breadthFirstSearch(bool* visited, int startNode) override;
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;

        Edge* edgeList(int& edgeCount) override;



    };

}
#endif //DATASTRUCTURES_CPP_GRAPH_H