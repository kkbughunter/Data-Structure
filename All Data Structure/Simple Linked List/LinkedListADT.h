#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
void display(struct node *h){
	struct node *ptr;
	ptr = h->next;
	while(ptr != NULL){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}

struct node * create(struct node *h){
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	if(h == NULL){
		temp->next = NULL;
		return temp;
	}
}

void insertFrent(struct node *h, int x){

	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->next = h->next;
	temp->data = x;
	h->next = temp;
}

void insertPos(struct node *h, int pos, int x){

	struct node *temp = (struct node *) malloc(sizeof(struct node));

	struct node *ptr = h;
	for(int i=0; i<pos-1; i++)
		ptr = ptr->next;
	temp->next = ptr->next;
	temp->data = x;
	ptr->next = temp;
}

void insertEnd(struct node *h, int x){

	struct node *temp = (struct node *) malloc(sizeof(struct node));

	struct node *ptr = h;
	while(ptr->next != NULL)
		ptr = ptr->next;
	temp->next = ptr->next;
	temp->data = x;
	ptr->next = temp;
}

void insertByKey(struct node *h, int key, int x){

	struct node *temp = (struct node *) malloc(sizeof(struct node));

	struct node *ptr, *prev;
	ptr = h->next;
	prev = h;
	while(ptr->next != NULL){
		if(ptr->data == key)
			break;
		ptr = ptr->next;
		prev = prev->next;
	}
	prev->next = temp;
	temp->next = ptr;
	temp->data = x;
}

void deleteFrent(struct node *h){
	h->next = h->next->next;
}

void deleteEnd(struct node *h){
	struct node *ptr, *prev;
	ptr = h->next;
	prev = h;
	while(ptr->next != NULL){
		ptr = ptr->next;
		prev = prev->next;
	}
	prev->next = ptr->next;
}

void deleteKey(struct node *h, int key){
	struct node *ptr, *prev;
	ptr = h->next;
	prev = h;
	while(ptr->next != NULL){
		if(ptr->data == key)
			break;
		ptr = ptr->next;
		prev = prev->next;
	}
	prev->next = ptr->next;
}

