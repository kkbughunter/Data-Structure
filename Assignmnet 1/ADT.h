/*
9. Create a simple arrADT with create and display function
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	int arr[30];
	int size;
};

void display(struct student *ptr)
{
	for(int i=0; i<ptr->size; i++){
		printf("%d ",ptr->arr[i]);	
	}
	printf("\nsize = %d  \n",ptr->size);
}

void create(struct student *ptr,int *array, int n){
	ptr->size = n;
	for(int i=0; i<ptr->size; i++){
		ptr->arr[i] = array[i];	
	}
}
