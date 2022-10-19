/*
6. Use the example 1, create another pointer variable and copy the address of the already existing pointer variable. Print the data accessed through both the pointers
*/
#include<stdio.h>
void main()
{
	int x=10;
	int *ptr1 = &x;
	int *ptr2 = ptr1;
	printf("value of x = %d  \n",x);
	printf("pointer1 = %d  \n",*ptr1);
	printf("pointer2 = %d  \n",*ptr2);
}
