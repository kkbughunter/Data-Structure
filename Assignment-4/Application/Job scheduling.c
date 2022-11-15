#include "jobADT.h"
int avgtime(struct node *ptr[]){
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 int sum=ptr[0]->burst,count=1;
 temp=ptr[0]->next;
 while(temp!=ptr[0]){
  sum+=temp->burst;
  count++;
  temp=temp->next;
 }
 return sum/count;
}

void insert(struct node *ptr[],struct node *ptr1[],struct header *Head1,struct header *Head2,char *job,int time){
 if(ptr[0]==NULL){
  enqueue(Head1,ptr,job,time);
 }
 else if(ptr1[0]==NULL){
  enqueue(Head2,ptr1,job,time);
 }
 else if(avgtime(ptr)<avgtime(ptr1)){
  enqueue(Head1,ptr,job,time);
 }
 else{
  enqueue(Head2,ptr1,job,time);
 }
}
void main() {
 struct header *Header,*Header1;
 struct node *ptr[2],*ptr1[2];
 ptr[0]=(struct node *)malloc(sizeof(struct node));
 ptr[1]=(struct node *)malloc(sizeof(struct node));
 ptr[0]=ptr[1]=NULL;
 Header=(struct header*)malloc(sizeof(struct header));
 create(Header,10);
 ptr1[0]=(struct node *)malloc(sizeof(struct node));
 ptr1[1]=(struct node *)malloc(sizeof(struct node));
 ptr1[0]=ptr1[1]=NULL;
 Header1=(struct header*)malloc(sizeof(struct header));
 create(Header1,10);
 insert(ptr,ptr1,Header,Header1,"j1",2);
 insert(ptr,ptr1,Header,Header1,"j2",4);
 insert(ptr,ptr1,Header,Header1,"j3",8);
 insert(ptr,ptr1,Header,Header1,"j4",5);
 insert(ptr,ptr1,Header,Header1,"j5",2);
 insert(ptr,ptr1,Header,Header1,"j6",7);
 insert(ptr,ptr1,Header,Header1,"j7",4);
 insert(ptr,ptr1,Header,Header1,"j8",3);
 insert(ptr,ptr1,Header,Header1,"j9",6);
 insert(ptr,ptr1,Header,Header1,"j10",6);
 printf("QUEUE 1:\n");
 display(Header,ptr);
 printf("QUEUE 2:\n");
 display(Header1,ptr1);
}

