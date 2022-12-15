#include<stdio.h>
#include<stdlib.h>
#include"Application2.h"
 
int main(){

    struct graph *gr = create_graph();
    int st,di;
    printf("Enter the starting point : ");
    scanf("%d",&st);
    printf("Enter the Ending point : ");
    scanf("%d",&di);
    BFS(gr,st,di);
    // DFS(gr,st);

    return 0;
}
