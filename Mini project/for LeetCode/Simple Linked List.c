#include<stdio.h>
#include<stdlib.h>

struct node {
	int val;
	struct node *next;
};
void display(struct node *h){
	struct node *ptr;
	ptr = h;
	while(ptr != NULL){
		printf("%d ",ptr->val);
		ptr = ptr->next;
	}
}

struct node * create(struct node *h,int x){
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	if(h == NULL){
		temp->next = NULL;
		temp->val = x;
		return temp;
	}
}

struct node * insertFrent(struct node *h, int x){

	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp->next = h;
	temp->val = x;
	h = temp;
}


struct node * deleteFrent(struct node *h){
	return h->next;
}

int main(){

	struct node *head;
	head = NULL;

	head = create(head,0);
	head = insertFrent(head, 1);
	head = insertFrent(head, 2);
	head = insertFrent(head, 3);
	head = deleteFrent(head);
	head = deleteFrent(head);
	display(head);
	return 0;
}
