#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "adt.h"

void main(){
struct  priorityQueue *PQ;
PQ=(struct  priorityQueue *)malloc(sizeof(struct  priorityQueue));
init(PQ,100);
insert(PQ,14);    
insert(PQ,16);
insert(PQ,22);    
insert(PQ,11);
insert(PQ,9);      
insert(PQ,18);
insert(PQ,10);    
insert(PQ,7);
insert(PQ,4);    
insert(PQ,1);
printf("After Inserting The Elements : \n");
displayb(PQ);
printf("After Deleting one Element : \n");
delete(PQ);
displayb(PQ);
printf("After Deleting one Element :\n");
delete(PQ);
displayb(PQ);
printf("After Deleting one Element :\n");
delete(PQ);
displayb(PQ);
printf("After Deleting one Element : \n");
delete(PQ);
displayb(PQ);
}


