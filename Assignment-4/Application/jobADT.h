#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
 char jobid[5];
 int burst;
 struct node *next;
};
struct header{
 int size;
 int counter;
};


void create(struct header *head,int size) {
 head->size=size;
 head->counter=0;


}

void enqueue(struct header *head,struct node *ptr[],char job[],int time) {
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->burst=time;
 strcpy(temp->jobid,job);
 temp->next=NULL;

 if(head->counter<head->size) {
  if(ptr[1]==NULL) {
   ptr[0]=ptr[1]=temp;
   ptr[1]->next=ptr[0];
   head->counter++;
  
  }
  else {
   ptr[1]->next=temp;
   ptr[1]=temp;
   ptr[1]->next=ptr[0];
   head->counter++;


  }
 }
 else {
  printf("The Queue is full\n");
 }

 
 printf("enqueue\n");


}

void dequeue(struct header *head,struct node *ptr[]) {

 if(ptr[0]==NULL && ptr[1]==NULL) {
  printf("The Queue is Empty");
 }
 else if (ptr[0]==ptr[1]) {
  ptr[0]=ptr[1]=0;
  head->counter--;

 }
 else {
  ptr[0]=ptr[0]->next;
  ptr[1]->next=ptr[0];
  head->counter--;
 }
  printf("dequeue\n");
}

void display(struct header *head,struct node *ptr[]) {
 struct node *temp;
 temp=ptr[0];
 printf("The Queue element : ");
 if(ptr[0]==0 && ptr[1]==0) {
  printf("The Queue is Empty\n");
 }
 else {
  while(temp->next!=ptr[0]) {
   printf("(%s,%d) ",temp->jobid,temp->burst);
   temp=temp->next;
  }
  printf("(%s,%d) \n",temp->jobid,temp->burst);
 }

}

