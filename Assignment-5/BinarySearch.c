
#include <stdio.h>
#include <stdlib.h>
#include"BinarySearchADT.h"
int main() {
  	struct node *temp ,*t = NULL;
  	t = insert(t, 29);
  	t = insert(t, 23);
  	t = insert(t, 4);
  	t = insert(t, 13);
  	t = insert(t, 39);
  	t = insert(t, 31);
  	t = insert(t, 45);
	t = insert(t, 56);
	t = insert(t, 49);

  	printf("Inorder traversal: ");
  	inorder(t);
  	printf("\nAfter deleting 3\n");
  	t = deleteNode(t, 13);
	printf("Inorder traversal: ");
	inorder(t);
  	printf("\npreorder traversal: ");
  	preorder(t);
  	printf("\npostorder traversal: ");
  	postorder(t);

  	temp = minValueNode(t);
  	printf("\nMin value = %d ",temp->data);
  	temp = maxValueNode(t);
  	printf("\nMax value = %d ",temp->data);


	int key =4;
	temp = search(t,key);
  	(temp == NULL) ? printf("\n Key Not Found\n") : printf("\nKey Found :)\n");


	inorder(t);
	int arr[]={0},i=0;
	int len = arrayInorder(t,arr,0);
	printf("\nArray Element : ");
	for(int i=0; i<len; i++)
		printf("%d ",arr[i]);



	return 0;
}
