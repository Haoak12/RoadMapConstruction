#include <iostream>
#include "graph.h"

using namespace std;

int main() {
	Graph g;
	cout << "PMST" << endl;
	g.PrimMinimumSpanningTree();
	cout << "BFS" << endl;
	g.BFStraversal("a");
	cout << "DFS" << endl;
	g.DFStraversal("a");
}