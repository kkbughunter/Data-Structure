#include<stdio.h>
#include<stdlib.h>

struct node {
	int *arr;
	int size;
};

void create(struct node *str, int siz, int *array){
	int i;
	str->size = siz;
	str->arr = (int*) malloc(siz*(2+1) *sizeof(int));
	for(i=0; i<str->size; i++){
		str->arr[i] = array[i];
	}
}

void printArray(struct node *str){
	int i;
	for(i=0; i<str->size; i++){
		printf("%d ",str->arr[i]);
	}
}

void deleteAt(struct node *str, int pos ){
	int i;
	for(i=pos; i<str->size; i++){
		str->arr[i] = str->arr[i+1];
	}
	--str->size;

}

void insertAtEvery(struct node *str, int key){
	int i,temp = str->size;
	temp--;
	str->size *=2;
	for(i=str->size-1; i>=0; i-=2){
		str->arr[i] = str->arr[temp];
		temp--;
		str->arr[i-1] = key;
	}
}


int search(struct node *str, int key){
	return str->arr[key];
}
