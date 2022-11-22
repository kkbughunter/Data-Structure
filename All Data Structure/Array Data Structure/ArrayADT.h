#include <stdio.h>
#include <stdlib.h>


struct node{
	int size;
	int *arr;
};

struct node * create(struct node *a,int size, int array[]){
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->size = size;
	temp->arr = (int *) malloc((temp->size+5) * sizeof(int));
	int i;
	for(i=0; i<size; i++){
		temp->arr[i] = array[i];
	}
	return temp;
}

void delete(struct node *a, int pos){
	int i;
	for(i=pos-1; i<a->size; i++){
		a->arr[i] = a->arr[i+1];
	}
	a->size--;
}

void printArray(struct node *a){
	int i;
	for(i=0; i < a->size; i++){
		printf("%d ",a->arr[i]);
	}

}

void insert(struct node *a, int x){
	int i;
	for(i=a->size; i>=0; i--){
		a->arr[i] = a->arr[i-1];
	}
	a->arr[0] = x;
	a->size++;
}


void insertPos(struct node *a, int pos, int x){
	int i;
	for(i=a->size; i>=pos-1; i--){
		a->arr[i] = a->arr[i-1];
	}
	a->arr[pos-1] = x;
	a->size++;
}


void insertLast(struct node *a, int x){
	a->arr[a->size] = x;
	a->size++;
}

int length(struct node *a){
	return a->size;
}
