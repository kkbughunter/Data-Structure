#include <stdio.h>
#include <stdlib.h>

struct node{
	char *job;
	int time;
	struct node *next;
};

void createQueue(struct node *ptr[],char *size){
	ptr[0]->next = NULL;
	ptr[1]->next = NULL;
	ptr[0]->job = size;
	ptr[0]->time = 0;
}


void enqueue(struct node *ptr[],char *j,int t){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->job = j;
	temp->time = t;
	int size = atoi(ptr[0]->job);
	if(ptr[0]->time == size){
		printf("queue is full\n");
	}
	else{
		if(ptr[0]->next==NULL && ptr[1]->next==NULL){
			ptr[0]->next = temp;
			ptr[1] = temp;
			ptr[1]->next = ptr[0];
		}
		else{
			temp->next = ptr[1]->next;
			ptr[1]->next = temp;
			ptr[1] = temp;
		}
		ptr[0]->time++;
	}
	printf("enqueued Element : (%s,%d)\n",j,t);
}

void display(struct node *ptr[]){
	struct node *temp;
	
	printf("Queue data : ");
	temp = (struct node*)malloc(sizeof(struct node));
	temp = ptr[0]->next;
	while(temp != ptr[0]){
		printf("(%s,%d) ",temp->job,temp->time);
		temp = temp->next;
	}
	printf("\n");
}

void dequeue(struct node *ptr[]){
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	 ptr[1]->next = ptr[0]->next;
	temp =  ptr[0];
	 ptr[0] =  ptr[0]->next;
	printf("Element dequeued \n");
	free(temp);
}































