#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct priorityQueue
{
int capacity;
int size;
  char *empid;
long int *salary;
};

void init(struct priorityQueue *PQ, int max)
{
PQ->salary=(long int *)malloc((max)*sizeof(long int));
  PQ->empid=(char *)malloc((max)*sizeof(char));
PQ->capacity=max;
PQ->size=0;
PQ->salary[0]= 100000;
  PQ->empid[0]='Z';
}

void insert(struct priorityQueue *PQ,char id,long int x)
{
int i;
for(i=++PQ->size;PQ->salary[i/2]<x; i/=2){
PQ->salary[i] = PQ->salary[i/2];
    PQ->empid[i] = PQ->empid[i/2];
  }
PQ->salary[i]=x;
  PQ->empid[i]=id;
}

int delete(struct priorityQueue *PQ)
{
int i, child;
int minelement, lastelement;
  char last;
minelement=PQ->salary[1];
lastelement=PQ->salary[PQ->size];
  last=PQ->empid[PQ->size--];
  for(i=1;(i *2)<= PQ->size;i=child)
{
child=i*2;
if(PQ->salary[child+1] > PQ->salary[child])
child++;
if(lastelement < PQ->salary[child]){
PQ->salary[i]=PQ->salary[child];
    PQ->empid[i]=PQ->empid[child];
  }
else
break;
}
PQ->salary[i]=lastelement;
  PQ->empid[i]=last;
return minelement;
}

void display(struct  priorityQueue *PQ){
  int i,count=1;
  for(i=1;i<=PQ->size;i++){
    printf("%ld %c ",PQ->salary[i],PQ->empid[i]);
    if(i==pow(2,count)-1){
      printf("\n");
      count++;
    }
  }
  printf("\n");
 printf("\n");

}
