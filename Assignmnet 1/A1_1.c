/*
1. Initialize integer variable x with 10. Create an integer pointer to x. Print the value of x using x and pointer variable
*/
#include<stdio.h>
void main()
{
	int x=10;
	int *ptrx = &x;
	printf("value of x = %d  \n",x);
	printf("pointer to x = %d  \n",*ptrx);
}
