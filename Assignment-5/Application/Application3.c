#include<stdio.h>
#include<stdlib.h>
#include "Application3ADT.h"

int main()
{
	    struct tree *t=NULL;
	    int arr[20],k,i,sum=0;

	    t=insert(t,29);
	    insert(t,23);
	    insert(t,4);
	    insert(t,13);
	    insert(t,39);
	    insert(t,31);
	    insert(t,45);
	    insert(t,56);
	    insert(t,49);
	    printf("Element in BST : ");inorder(t);
	    printf("\n\n");
	    inorderarray(t,arr);
	    printf("Enter the no of Elements K : ");
	    scanf("%d",&k);
	    printf("\n\n");

	    for(i=0;i<k;i++){
		printf("%d + ",arr[i]);
	       sum+=arr[i];
	    }
	    printf(" = %d\n",sum);
	    return 0;
}
