#include<stdio.h>
#include<stdlib.h>
#include"Application2.h"
 
int main(){

    struct graph *gr = create_graph();
    int st, di, i=0, visit[gr->vertex];
    for(i=0; i<gr->vertex; i++) visit[i]=0;
    for(i=0; i<gr->vertex; i++){
        if(visit[i] == 0 ){
            BFS(gr,i+1,visit);
        }
    }
    return 0;
}
