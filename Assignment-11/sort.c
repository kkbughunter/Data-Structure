#include <stdio.h>
#include <stdlib.h>
#include "arrADT.h"
#include "SellsortADT.h"

int main()
{
	// Insertion Sorting 
	struct node *head;
	int array[]= {2,6,8,10,1,3},size=6;
	head = (struct node*) malloc(sizeof(struct node));

	initI(head,size);
	InsertElementI(head,array);
	printf("\nAfter Create : \n");
	DisplayI(head);
	
	printf("After Insertion Sorting :\n");
	InsSort(head);
	DisplayI(head);

	struct node1 *head1;
	int array1[]= {347,27,298,188,28,385},size1=6;
	head1 = (struct node1*) malloc(sizeof(struct node1));

	init(head1,size1);
	InsertElement(head1,array1);
	printf("\nAfter Create : \n");
	Display(head1);
	
	printf("After Sell Sorting :\n");
	sellSort(head1);
	Display(head1);
	return 0;
}
