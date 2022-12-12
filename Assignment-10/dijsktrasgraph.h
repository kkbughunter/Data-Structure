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

    // data part
    for(i=0; i<g->vertex; i++){
        g->data[i] = (char *) malloc(5 * sizeof(char));
        printf("Enter the data %d : ",i+1);
        scanf("%s ",g->data[i]);
    }
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

int min(struct graph *gr, int distance[], int sptSet[])
{
	int min = 999999, min_index;

	for (int v = 0; v < gr->vertex; v++)
		if (sptSet[v] == 0 && distance[v] <= min)
			min = distance[v], min_index = v;

	return min_index;
}
void displayTable(struct graph *gr, int *distance)
{
	printf("Vertex -> distanceance\n");
	for (int i = 0; i < gr->vertex; i++)
		printf(" %d)%s     --->    %d\n", i, gr->data[i], distance[i]);
}
int* dijkstra(struct graph *gr, int src)
{
    int **graph = gr->adj;
	int *distance = (int*) malloc(gr->vertex * sizeof(int));

	int sptSet[gr->vertex]; 

	for (int i = 0; i < gr->vertex; i++)
		distance[i] = 99999, sptSet[i] = 0;
	distance[src] = 0;
	for (int count = 0; count < gr->vertex - 1; count++) {
		int u = min(gr, distance, sptSet);
		sptSet[u] = 1;
		for (int v = 0; v < gr->vertex; v++)
			if (!sptSet[v] && graph[u][v] && distance[u] != 999999 && distance[u] + graph[u][v] < distance[v])
				distance[v] = distance[u] + graph[u][v];
	}
    return distance;
}
