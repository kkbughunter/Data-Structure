#include <stdio.h>
#include <stdlib.h>
#include "arrADT.h"

int main()
{
	struct node *head;
	int array[]= {2,4,6,8,10},size=5;
	head = (struct node*) malloc(sizeof(struct node));
	create(head,size,array);
	printf("\nAfter Create : ");
	printArray(head);
	int pos = 3;
	deleteAt(head, pos );
	printf("\nAfter Delete : ");
	printArray(head);
	int key = 1;
	insertAtEvery(head,key);
	printf("\nAfter Insert : ");
	printArray(head);
	key =1;
	int result = search(head,key);
	printf("\nYour value in position : %d\n\n\t\tThank you",result);

	return 0;
}
