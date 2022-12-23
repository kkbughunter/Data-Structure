#include <stdio.h>
#include <stdlib.h>
#include "SellsortADT.h"

int main()
{
	struct node1 *head1;
	int array1[]= {1,2,3,4,5,1,2,3},size1=8;
	head1 = (struct node1*) malloc(sizeof(struct node1));

	init(head1,size1);
	InsertElement(head1,array1);
	printf("\nAfter Insert : \n");
	Display(head1);
	
	printf("After Insertion Sorting :\n");
	sellSort(head1);
	Display(head1);
	printf("\n\nTest for 4:\n");
	appearsonce(head1,4);
	printf("Test for 2:\n");
	appearsonce(head1,2);

	printf("\n\ncount the repeted data : \n");
	appearscount(head1,4);
	appearscount(head1,1);
	return 0;
}
