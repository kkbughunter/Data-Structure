#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree *left, *right;
};

struct queue{
	struct tree **arr;
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
    Q->arr = (struct tree **) malloc( lim * sizeof(struct tree));
	Q->size = lim;
	Q->f = -1;
	Q->r = -1;
    return Q;
}

void enqueue( struct queue *Q, struct tree * info){
	if (isFill(Q))
		printf("full");
	else{
		Q->r++;
		Q->arr[Q->r] = info;
	}
}


void dequeue(struct queue *Q){
	if(isEmpty(Q))
		return ;
	else{
		Q->f++;
	}
}


void display(struct queue *Q){
    printf("\n");
	for(int i=Q->f+1; i<Q->r+1; i++)
		printf("%d ",Q->arr[i]->data);
}

struct tree * peek(struct queue *q){
	if(isEmpty(q)) return NULL;
	else return q->arr[q->r];
}
