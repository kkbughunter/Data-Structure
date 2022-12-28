#include<stdio.h>
#include<stdlib.h>

struct PriarityQueueADT
{
    int size,capacity;
    int *array;
};

struct PriarityQueueADT * init(struct PriarityQueueADT *pq,int max){
    if(pq == NULL){
        pq = (struct PriarityQueueADT *) malloc(sizeof(struct PriarityQueueADT));
        pq->array = (int *) malloc(max * sizeof(int));
        pq->capacity = max;
        pq->size = 0;
        pq->array[0] = -10;
    }
    return pq;
}

void Insert(struct PriarityQueueADT *pq,int x){
    int i=0;

    for(i = ++pq->size; pq->array[i/2] > x; i/=2)
        pq->array[i] = pq->array[i/2];
    pq->array[i] = x;
}

void Display(struct PriarityQueueADT *pq){
    printf("\n");
    for(int i=1; i<pq->size+1; i++)
        printf("%d ",pq->array[i]);
}

int Delete(struct PriarityQueueADT *pq){
    if(pq->size == 0) return -999;
    int i, min, last, child;
    min = pq->array[1];
    last = pq->array[pq->size--];
    for(i = 1; (i*2) <= pq->size; i=child){
        child = i*2;
        if(pq->array[child-1] < pq->array[child])
            child++;
        if(pq->array[child] < last)
            pq->array[i] = pq->array[child];
        else break;
    }
    pq->array[i] = last;
    return min;
}