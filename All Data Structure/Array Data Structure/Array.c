#include<stdio.h>
#include "ArrayADT.h"


int main(){
	struct node *a = NULL;
	int size = 4,arr[]={1,2,3,4};

	a = create(a,size,arr);
	printf("\nAfter Create : ");
	printArray(a);

	int pos = 2;
	delete(a,pos);
	printf("\nAfter Delete position %d : ",pos);
	printArray(a);


	insert(a,5);
	printf("\nAfter Insert : ");
	printArray(a);

	insertPos(a,3,6);
	printf("\nAfter InsertPos : ");
	printArray(a);

	insertLast(a,3);
	printf("\nAfter InsertLast : ");
	printArray(a);

	printf("\nLength of array : %d",length(a));
	return 0;
}
