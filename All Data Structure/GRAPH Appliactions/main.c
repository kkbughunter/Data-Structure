#include<stdio.h>
#include<stdlib.h>
#include"graph.h"
 
int main(){

    struct graph *gr = create_graph();
    int st, **table;
    printf("Enter the starting point : ");
    scanf("%d",&st);
    st--;
    table = dijkstra(gr,st);

    printf("Enter the Ending point : ");
    scanf("%d",&st);
    st--;
    printPath(gr,table,st);
    return 0;
}


/*
Test case 3 
6 7
1 6
6 2
6 5
5 4
4 3
2 3
2 1
Chennai
Oouty
Selam
Ambur
Theni
Maduri
1
4

*/