#include<stdio.h>
#include<stdlib.h>

struct node {
	int *arr;
	int size;
};

void initI(struct node *a, int siz)
{
	a->size = siz;
	a->arr = (int*) malloc(siz*(2+1) *sizeof(int));
}

void InsertElementI(struct node *a, int *array){
	int i;
	a->arr[0] = -99;
	for(i=1; i<a->size; i++){
		a->arr[i] = array[i];
	}
}

void DisplayI(struct node *a){
	printf("Array Element : ");
	for(int i=1; i<a->size; i++){
		printf("%d ",a->arr[i]);
	}
	printf("\n\n");
}

void InsSort(struct node *a){
	
	int i;
	for(i=2; i<a->size; i++){
		int j = i;
		while(a->arr[j] < a->arr[j-1]){
			int temp = a->arr[j-1];
			a->arr[j-1] = a->arr[j];
			a->arr[j] = temp;
			j = j-1;
		}
	}

}


     



