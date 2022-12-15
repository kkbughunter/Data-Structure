#include <stdio.h>
#include <stdlib.h>
#include"Queue.h"
#include "Stack.h"

struct graph{
    int vertex;
    int edges;
    int **adj;
    char data[100][20];
};

struct graph* create_graph(){
    int i,j,k,data;
    struct graph *g;
    g = (struct graph *) malloc(sizeof(struct graph));
    printf("Enter the number of Nodes and Edges (N,E) : ");
    scanf("%d %d",&g->vertex,&g->edges);
    g->adj = (int **) malloc(g->vertex * sizeof(int));
    g->adj[0] = (int *) malloc(g->vertex * sizeof(int));

    for(i=0; i<g->vertex; i++){
        g->adj[i] = (int *) malloc(g->vertex * sizeof(int));
        for(j=0; j<g->vertex; j++)
            g->adj[i][j] = 0;
    }
    printf("Enter the nodes in pair (a -> b) \n");
    for(i=0; i<g->edges; i++){
        scanf("%d",&j);
        scanf("%d",&k);
        g->adj[j-1][k-1] = 1;
    }
    printf("Enter the all data : \n");
    for(int i=0; i<g->vertex; i++)
        scanf("%s",g->data[i]);
    return g;
}

void displayadj(struct graph *g){
    int u,v;
    printf("Adj : matrix \n");
    for(u=0; u<g->vertex; u++){
        for(v=0; v<g->vertex; v++)
            printf("%d ",g->adj[u][v]);
        printf("\n");
    }
}

void BFS(struct graph *g, int start, int dis){

    int i=0,visit[g->vertex],flag =0;
    dis--;
    for(i=0; i<g->vertex; i++) visit[i]=0;
    struct queue *q = createQueue(20);
    printf("\n\n");
    printf("BFS : ");
    start--;
    visit[start] = 1;
    enqueue(q,start);
    while (!isEmpty(q))
    {
        int deq = dequeue(q);
        for(i=0; i<g->vertex; i++){
            if(g->adj[deq][i] == 1 && visit[i]==0 ){
                visit[i] = 1;
                enqueue(q,i);
                if(g->adj[deq][i] == g->adj[deq][dis]){
                    flag =1;
                    break;
                }
            }
            if(flag) break;
        }
    }
    if(flag == 0) printf("NO Path\n");
    else printf("Ther is a Path \n");
    printf("*\n\n");
}
/*
Test case 1
5 3
1 2
1 3
4 5
1
0
2
4
5

*/
