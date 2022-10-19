/*
5. Initialize integer variable x with 10. Create an integer pointer to x. Print the value of x using x and pointer variable. Write change function which will change the value of x. (use pointer)
*/
#include<stdio.h>

void change(int *x);
void change(int *x){
	*x = *x + 15;
}
void main()
{
	int x=10;
	
	printf("Before Calling Funcoiton x Value : %d\n\n",x);
	change(&x);
	printf("After Calling Funcoiton x Value : %d\n\n",x);
	return ;
}

