#include<stdio.h>
#include<stdlib.h>
#include"qADTa.h"
int main(){
	int de;
	struct queue *Q=(struct queue *) malloc(sizeof(struct queue));
	printf("\n");
	printf("\n");
	de =dequeue(Q);
	(de==-1)?printf("Empty\n"):printf("Dequeue value : %d \n",de);
	createQueue(Q,3);
	printf("Inserting : \n");
	enqueue(Q,2);
	display(Q);
	printf("\n");
	enqueue(Q,13);
	display(Q);
	printf("\n");
	enqueue(Q,5);
	display(Q);
	printf("\n");
	de =dequeue(Q);
	(de==-1)?printf("Empty\n"):printf("Dequeue value : %d \n",de);
	display(Q);
	printf("\n");
	de =dequeue(Q);
	(de==-1)?printf("Empty\n"):printf("Dequeue value : %d \n",de);
	display(Q);
	printf("\n");
	printf("\n");
	return 0;
}
