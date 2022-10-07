/*
2. Increment the variable x and access through pointer variable. Increment pointer variable and access through pointer variable
*/

#include<stdio.h>
void main()
{
	int x = 10;
	int *ptr =  &x;
	printf("Accessing through Pointer (Before update): %d\n",*ptr);
	*ptr +=10;
	printf("Accessing through Pointer (After update) : %d\n",*ptr);
	return ;
}
