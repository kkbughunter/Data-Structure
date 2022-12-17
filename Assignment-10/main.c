#include <limits.h>
#include <stdio.h>
#include "dijsktrasgraph.h"


int main()
{
	struct graph *g = create_graph();
	int start;
	printf("Enter the starting point : ");
	scanf("%d",&start);
	int **table = dijkstra(g, start-1);

	printf("\tFinal Tablie :-\n");
	displayTable(g,table);


	printf("Enter the starting point : ");
	scanf("%d",&start);
	printf("\tPath Printing :-\n");
	printPath(table,start);

	return 0;
}



/*
Test case 1 


7 12
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
v1
v2
v3
v4
v5
v6
v7

*/