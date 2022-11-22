#include<stdio.h>
#include<stdlib.h>
#include "Application1ADT.h"

int main()
{
	struct tree *t1, *t2;
	int arr1[10],count=0,i,sum=0;
	int arr2[10];
	   
	t1=NULL;
	t2=NULL;

	t1=insert(t1,29);
	insert(t1,23);
	insert(t1,4);
	insert(t1,13);
	insert(t1,39);
	insert(t1,31);
	insert(t1,45);
	insert(t1,56);
	insert(t1,49);

	t2=insert(t2,29);
	insert(t2,23);
	insert(t2,4);
	insert(t2,13);
	insert(t2,39);
	insert(t2,31);
	insert(t2,45);
	insert(t2,56);
	insert(t2,49);
	printf("\nTree 1 :");
	inorder(t1);
	printf("\nTree 2 :");
	inorder(t2);
	int x1=inorderarray(t1,arr1,0);
	int x2=inorderarray(t2,arr2,0);

	for(i=0;i<x1;i++){
		if(arr1[i]!=arr2[i]){
			count++;
			break;
		}
	}
	if(count!=0){
	printf("\n---The Tress are not SAME---\n");
	}
	else if(count==0){
	printf("\n---The Tress are SAME---\n");
	}
	return 0;
}
