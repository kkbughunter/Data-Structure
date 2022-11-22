
#include<stdio.h>
#include<stdlib.h>
#include "LinkedListADT.h"
int main(){

	struct node *head;
	head = NULL;

	head = create(head);
	insertFrent(head, 1);
	insertFrent(head, 2);
	insertFrent(head, 3);
	insertEnd(head, 4);
	insertByKey(head,2,100);
	insertEnd(head, 5);
	insertPos(head,3,6);
	deleteFrent(head);
	deleteEnd(head);
	deleteKey(head,5);
	display(head);
	return 0;
}
