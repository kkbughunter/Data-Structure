#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
#include"graph.h"
 


 
int main(){
    struct graph *gr = create_graph();
    int st;
    displayadj(gr);
    printf("Enter the starting point : ");
    scanf("%d",&st);
    BFS(gr,st);

    return 0;
}
/*
Test case 1
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

/*
Test case 2
6 7
1
2
3
4
5
6
1 2
2 3
2 4
4 5
5 6
3 6
3 1

2 2
A
B
1 2
2 1

*/