#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct priorityQueue
{
int capacity;
int size;
int *elements;
};

void init(struct priorityQueue *PQ, int max)
{
PQ->elements=(int *)malloc((max)*sizeof(int));
PQ->capacity=max;
PQ->size=0;
PQ->elements[0]= 999;
}

void insert(struct priorityQueue *PQ,int x)
{
int i;
for(i=++PQ->size;PQ->elements[i/2]<x; i/=2){
PQ->elements[i] = PQ->elements[i/2];
  }
PQ->elements[i]=x;
}

int delete(struct priorityQueue *PQ)
{
int i, child;
int minelement, lastelement;
minelement=PQ->elements[1];
lastelement=PQ->elements[PQ->size--];
  for(i=1;(i *2)<= PQ->size;i=child)
{
child=i*2;
if(PQ->elements[child+1] > PQ->elements[child])
child++;
if(lastelement < PQ->elements[child])
PQ->elements[i]=PQ->elements[child];
else
break;
}
PQ->elements[i]=lastelement;
return minelement;
}

void displayb(struct  priorityQueue *PQ){
  int i,count=1;
  for(i=1;i<=PQ->size;i++){
    printf("%d ",PQ->elements[i]);
    if(i==pow(2,count)-1){
      printf("\n");
      count++;
    }
  }
  printf("\n");
printf("\n");
}
