#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char job[4];
	int data;
	struct node *next;
};
int size,max;
struct node *r = NULL;
struct node *f = NULL;
void enqueue(char *j, int ele)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->data=ele;
	strcpy(temp->job,j);
	temp->next = NULL;
	if(f==NULL && r==NULL){
		f = temp;
		r = temp;
		temp->next = temp;
		max = ele;
	}
	else {
		temp->next = f;
		r->next = temp;
		r = temp;
		if(max < ele) max = ele;
	}
	size++;

}

void display(){
	struct node *temp = f;
	int s = size;
	printf("Queue data : ");
	while(s--){
		printf("(%s,%d) ",temp->job,temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void dequeue(){
	struct node *a = f;
	f = f->next;
	r->next = f;
	size--;
	printf("dequeued data : (%s,%d)\n",a->job,a->data);
}

int main()
{
	struct node *f = (struct node *) malloc(sizeof(struct node));

	enqueue("J1",2);
	display();
	enqueue("J1",15); 
	display();
	enqueue("J1",5); 
	display();
	dequeue();
	display();
	printf("Max value is : %d\n\n ",max);
	return 0;
}
