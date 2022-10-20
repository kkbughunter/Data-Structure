#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
void reverseList(struct node *h) {
	struct node *ptr, *after, *prev, *last;
	prev=h->next;
	last=prev;
	ptr=prev->next;
	while(ptr->next!=NULL)
	{
		after=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=after;
	}
	ptr->next=prev;
	h->next=ptr;
	last->next=NULL;
}


void insert(struct node *header,int data)
{
	struct node *temp,*ptr;
	temp = (struct node*) malloc(sizeof(struct node));

	temp->next = header->next;
	header->next = temp;
	temp->data = data;
}

void display(struct node *header)
{
	struct node  *ptr = header->next;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}

int length(struct node *header)
{
	struct node  *ptr = header->next;
	int count=0;
	while(ptr!=NULL){
		count++;
		ptr = ptr->next;
	}
	return count;
}

int search(struct node *header, int key)
{
	struct node  *ptr = header->next;
	while(ptr!=NULL){
		if(ptr->data == key){
			return ptr->data;
		}
		ptr = ptr->next;
	}
	return -1;
}

void delet(struct node *header, int key)
{

	struct node *ptr = header->next,*temp;
	temp = header->next;
	while(ptr!=NULL){
		if(ptr->data == key){
			temp->next=ptr->next;
			free(ptr);
		}
		else{
			temp = ptr;
			ptr = ptr->next;

		}

	}
}



int middle(struct node *header)
{
	struct node *ptr = header->next;
	int len = length(header);
	int middle, count =1;
	if(len%2==1){
		middle = (len/2)+1;
	}
	else{
		middle = len/2;
	}

	while(ptr!=NULL){
	if(count==middle){
		return(ptr->data);
	}
	ptr=ptr->next;
	count++;
	}
}


















