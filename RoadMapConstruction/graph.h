#pragma once
#include <unordered_map>
#include <list>
#include <string>
using namespace std;

class Edge 
{
	string vertex1, vertex2;
public:
	Edge(string, string, double);
	Edge();
	double length;

	string getVertex1();
	string getVertex2();

	bool operator < (Edge e);
	bool operator == (Edge e);

};

class Graph
{
public:
	unordered_map<string, list<Edge>> adjacencyList;
	
	void insertVertex(string);
	void insertEdge(string, string, double);
	void deleteVertex(string);
	void deleteEdge(string, string);
	void DFStraversal(string);
	void BFStraversal(string);
	void PrimMinimumSpanningTree();
};

