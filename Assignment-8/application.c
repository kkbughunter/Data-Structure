#include "adt1.h"
void main(){
struct  priorityQueue *PQ;
PQ=(struct  priorityQueue *)malloc(sizeof(struct  priorityQueue));
init(PQ,100);

insert(PQ,'A',15000);    
insert(PQ,'K',12000);
insert(PQ,'R',4000);    
insert(PQ,'T',3500);
insert(PQ,'L',4600);      
insert(PQ,'P',6000);
insert(PQ,'Y',8600);  
printf("After Inserting Employees the Max Heap Is\n");
display(PQ);
printf("After Deleting one Employee the Max Heap Is\n");
delete(PQ);
display(PQ);
printf("After Deleting one Employee the Max Heap Is\n");
delete(PQ);
display(PQ);
printf("After Deleting one Employee the Max Heap Is\n");
delete(PQ);
display(PQ);
printf("After Deleting one Employee the Max Heap Is\n");
delete(PQ);
display(PQ);
 
}


