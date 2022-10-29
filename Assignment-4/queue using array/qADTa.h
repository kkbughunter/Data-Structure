#include<stdio.h>
#include<stdlib.h>
struct queue{
	int arr[3];
	int size;
	int f,r;
};

void createQueue(struct queue *Q,int lim){
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

int isFill(struct queue *Q){
	if(Q->r == Q->size-1)
		return 1;
	else return 0;
}

int dequeue(struct queue *Q){
	if(isEmpty(Q))
		return -1;
	else{
		Q->f++;
		return Q->arr[Q->f];
	}
}

int isEmpty(struct queue *Q){
	if(Q->f == Q->r)
		return 1;
	else return 0;
}

void display(struct queue *Q){
	for(int i=Q->f+1; i<Q->r+1; i++)
		printf("%d ",Q->arr[i]);
}
