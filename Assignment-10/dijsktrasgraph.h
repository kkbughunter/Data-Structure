#include <stdio.h>
#include <stdlib.h>

struct graph{
    int vertex;
    int edges;
    int **adj;
    char **data;
};

struct graph* create_graph(){
    int u,v,i,data;
    struct graph *g;
    g = (struct graph *) malloc(sizeof(struct graph));
    printf("Enter the number of Nodes and Edges (N,E) : ");
    scanf("%d %d",&g->vertex,&g->edges);
    g->adj = (int **) malloc(g->vertex * sizeof(int));
    g->data = (char **) malloc(g->vertex * sizeof(char));
    g->data[0] = (char *) malloc(5 * sizeof(char));

    
    // adj matrix
    for(u=0; u<g->vertex; u++){
        g->adj[u] = (int *) malloc(g->vertex * sizeof(int));
        for(v=0; v<g->vertex; v++){
            g->adj[u][v] = 0;
        }
    }
    printf("Enter the nodes in pair (a -> b) \n");
    for(i=0; i<g->edges; i++){
        scanf("%d %d %d",&u,&v,&data);
        g->adj[u-1][v-1] = data;
    }
    printf("Enter the All Data :- \n");
    for(i=0; i<g->vertex; i++){
        g->data[i] = (char *) malloc(5 * sizeof(char));
        printf("Enter the data %d : ",i+1);
        scanf("%s ",g->data[i]);
    }
    return g;
}

void displayadj(struct graph *g){
    int u,v;
    printf("Adj : matrix \n");
    for(u=0; u<g->vertex; u++){
        for(v=0; v<g->vertex; v++){
            printf("%d ",g->adj[u][v]);
        }
        printf("\n");
    }
    printf("\nData : matrix \n");
    for(u=0; u<g->vertex; u++){
        printf("%s ",g->data[u]);
    }
}

int min(struct graph *gr, int **distance, int sptSet[])
{
	int min = 999999, min_index;

	for (int v = 0; v < gr->vertex; v++)
		if (sptSet[v] == 0 && distance[1][v] <= min)
			min = distance[1][v], min_index = v;

	return min_index;
}
void displayTable(struct graph *gr, int **distance)
{
	printf("Vertex -> distanceance\n");
	for (int i = 0; i < gr->vertex; i++)
		printf(" %d) %s   --->   %d  -->  %s\n", i+1, gr->data[i], distance[1][i], gr->data[distance[2][i]]);
}
int** dijkstra(struct graph *gr, int src)
{
    int **graph = gr->adj;
	int **distance = (int**) malloc(4 * sizeof(int));
	distance[0] = (int*) malloc(gr->vertex * sizeof(int));
	distance[1] = (int*) malloc(gr->vertex * sizeof(int));
	distance[2] = (int*) malloc(gr->vertex * sizeof(int));
    
	int sptSet[gr->vertex]; 

	for (int i = 0; i < gr->vertex; i++){
        distance[0][i] = i;
		distance[1][i] = 99999, sptSet[i] = 0;
    }
    // printf("\t%d,%d %s\n",u,v,gr->data[src]);
	distance[1][src] = 0;
	for (int count = 0; count < gr->vertex - 1; count++) {
		int u = min(gr, distance, sptSet);
		sptSet[u] = 1;
		for (int v = 0; v < gr->vertex; v++){
			if (!sptSet[v] && graph[u][v] && distance[1][u] != 999999 && distance[1][u] + graph[u][v] < distance[1][v]){
				distance[1][v] = distance[1][u] + graph[u][v];
                distance[2][v] = u;
            }
        }
        distance[2][src] = -11;
        distance[1][src] = -1;
        displayTable(gr,distance);
        printf("\n");
	}
    return distance;
}

void printPath(int **table,int start){
    if(table[1][start] != -1){
        printPath(table,table[2][start]);
        printf(" to ");
    }
    printf("%s",table[2][start]);
}