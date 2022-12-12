#include <stdio.h>
#include <stdlib.h>

struct graph{
    int vertex;
    int edges;
    int **adj;
    char **data;
    int *visit;
};

struct graph* create_graph(){
    int u,v,i,data;
    struct graph *g;
    g = (struct graph *) malloc(sizeof(struct graph));
    printf("Enter the number of Nodes and Edges (N,E) : ");
    scanf("%d %d",&g->vertex,&g->edges);
    g->adj = (int **) malloc(g->vertex * sizeof(int));
    g->data = (char **) malloc(g->vertex * sizeof(char));
    g->visit = (int *) malloc(g->vertex * sizeof(int));

    // data part
    for(i=0; i<g->vertex; i++){
        g->data[i] = (char *) malloc(5 * sizeof(char));
        printf("Enter the data %d : ",i+1);
        scanf("%s",g->data[i]);
        g->visit[i] = 0;
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
        scanf("%d %d",&u,&v);
        g->adj[u-1][v-1] = 1;
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

void BFS(struct graph *g, int start){
    start--;
    printf("BFS : ");
    int i,deq;
    struct queue *q = createQueue(50);
    printf("%s,",g->data[start]);    // to print data use : g->data[start]
    
    g->visit[start] = 1;
    enqueue(q,start);
    while (!isEmpty(q))
    {
        deq = dequeue(q);
        for(i=0; i<g->vertex; i++){
            if(g->adj[deq][i] == 1 && g->visit[i]==0){
                printf("%s,",g->data[i]);       // to print data use : g->data[i]
                g->visit[i] = 1;
                enqueue(q,i);
            }
        }
    }
}

/*
7 6
1
2
3
4
5
6
7
1 2
1 3
2 4
2 5
3 6
3 7

*/