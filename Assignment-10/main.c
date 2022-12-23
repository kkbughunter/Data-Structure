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

	// printf("\n Table Structure\n");
	// for (int i = 0; i < g->vertex; i++)
	// 	printf(" %d   --->   %d  -->  %d\n",table[0][i],table[1][i],table[2][i]);

	printf("Enter the Destination point : ");
	scanf("%d",&start);
	start--;
	printf("\n\n\tPath Printing for %s \n",g->data[start]);
	printPath(g,table,start);
	printf("\n\n");
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

7 6
1 2 1
1 3 1
3 4 1
4 5 1
5 6 1
7 2 1
A
B
C
D
E
F
G


*/
