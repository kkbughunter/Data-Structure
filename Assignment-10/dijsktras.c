#include <limits.h>
#include <stdio.h>
#include "dijsktrasgraph.h"

void path(struct graph *gr, int source, int destination){

}
int main()
{
	struct graph *g = create_graph();
	int *distance = dijkstra(g, 0);

	displayTable(g,distance);
	return 0;
}

/*
Test case 1 

7 12
v1
v2
v3
v4
v5
v6
v7
1 4 1
1 2 2
2 4 3
2 5 10
5 7 6
7 6 1
3 1 4
3 6 5
4 3 2
4 5 2
4 7 4
4 6 8

*/