#include<stdio.h>
#include<stdlib.h>
#include"graph.h"
 
int main(){

    struct graph *gr = create_graph();
    int st;
    printf("Enter the starting point : ");
    scanf("%d",&st);
    BFS(gr,st);
    DFS(gr,st);

    return 0;
}
