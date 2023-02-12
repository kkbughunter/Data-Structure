#include<stdio.h>
#include<stdlib.h>
struct queue{
	int *arr;
	int size;
	int f,r;
};

int isEmpty(struct queue *Q){
	if(Q->f == Q->r)
		return 1;
	else return 0;
}

int isFill(struct queue *Q){
	if(Q->r == Q->size-1)
		return 1;
	else return 0;
}


struct queue * createQueue(int lim){
    struct queue *Q=(struct queue *) malloc(sizeof(struct queue));
    Q->arr = (int *) malloc(lim * sizeof(int));
	Q->size = lim;
	Q->f = -1;
	Q->r = -1;
}

void enqueue( struct queue *Q, int info){
	if (isFill(Q))
		printf("full");
	else{
		Q->r++;
		Q->arr[Q->r] = info;
	}
}


int dequeue(struct queue *Q){
	if(isEmpty(Q))
		return -1;
	else{
		Q->f++;
		return Q->arr[Q->f];
	}
}


void display(struct queue *Q){
    printf("\n");
	for(int i=Q->f+1; i<Q->r+1; i++)
		printf("%d ",Q->arr[i]);
}