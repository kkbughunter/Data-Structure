#include<stdio.h>
#include<stdlib.h>

struct node1 {
	int *arr;
	int size;
};

void init(struct node1 *a, int siz)
{
	a->size = siz;
	a->arr = (int*) malloc(siz*(2+1) *sizeof(int));
}

void InsertElement(struct node1 *a, int *array){
	int i;
	//a->arr[0] = -99;
	for(i=0; i<a->size; i++){
		a->arr[i] = array[i];
	}
}

void Display(struct node1 *a){
	printf("Array Element : ");
	for(int i=0; i<a->size; i++){
		printf("%d ",a->arr[i]);
	}
	printf("\n\n");
}


void sellSort(struct node1 *a)

{
	for (int i = a->size / 2; i > 0; i = i / 2){
		for (int j = i; j <  a->size; j++){
			for(int k = j - i; k >= 0; k = k - i){
				if (a->arr[k+i] >= a->arr[k]){
					break;
				}
				else
				{
					int temp = a->arr[k];
					a->arr[k] = a->arr[k+i];
					a->arr[k+i] = temp;

                }
            }
        }
    }
	return ;
}

     

