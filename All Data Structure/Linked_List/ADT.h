#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void add(struct node* head, int data){
    struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data  = data;
    newNode->next = NULL;
	
    while(head->next != NULL)
       head = head->next;
    head->next = newNode;
}

void insert(struct node *header,int data)
{
	struct node *temp,*ptr;
	temp = (struct node*) malloc(sizeof(struct node));

	temp->next = header->next;
	header->next = temp;
	temp->data = data;
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

void display(struct node *header)
{
	struct node  *ptr = header->next;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
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

void sortL(struct node *head){
	int i=0, j=0;
	struct node *temp1=head->next, *temp = head->next;
	while(temp1 != NULL){
		while(temp != NULL){
			if(temp1->data < temp->data){
				int T = temp1->data;
				temp1->data = temp->data;
				temp->data = T;
			}
			temp = temp->next;
		}
		temp1 = temp1->next;
		temp = head->next;
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
