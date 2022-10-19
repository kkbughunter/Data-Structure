#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ADT.h"

void main()
{
	int n =10;
	struct student *ptr = (struct student*) malloc(n * sizeof(struct student));
	int array[30] = {1,2,3,4,5,6,7,8};

	int array1[30] = {5,6,7,8};

	create(ptr, array, 8);
	create(ptr+1, array1, 4);

	display(ptr);
	display(ptr+1);
	
	return ;
}
