#pragma once
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

struct Edge
{
	int source;
	int destination;
};


class InDirectedweightedGraph
{
private:
	int numberOfVertices;
	vector<vector<int>> adjacencyList;

public:
	
	InDirectedweightedGraph(int count)
	{
		count = numberOfVertices;
	}
	void addEdge(Edge edge)
	{
		adjacencyList[0].push_back(0);
	}
	
};