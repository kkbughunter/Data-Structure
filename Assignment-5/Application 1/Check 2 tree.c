

 #include <stdio.h>
 #include <stdlib.h>
 #include"BinarySearchADT.h"
 int main() {
	 struct node *temp ,*t1 = NULL,*t2 = NULL;
	 t1 = insert(t1, 29);
	 t1 = insert(t1, 23);
	 t1 = insert(t1, 4);
	 t1 = insert(t1, 13);
	 t1 = insert(t1, 39);
	 t1 = insert(t1, 31);
	 t1 = insert(t1, 45);
	 t1 = insert(t1, 56);
	 t1 = insert(t1, 49);
// 	 printf("Inorder traversal TREE 1: ");
// 	 inorder(t1);

	 t2 = insert(t2, 29);
	 t2 = insert(t2, 23);
	 t2 = insert(t2, 4);
	 t2 = insert(t2, 13);
	 t2 = insert(t2, 39);
	 t2 = insert(t2, 31);
	 t2 = insert(t2, 45);
	 t2 = insert(t2, 56);
	 t2 = insert(t2, 49);
// 	 printf("\nInorder traversal TREE 2: ");
// 	 inorder(t2);

	 int arr1[20],i=0,j=0,flag=0;
	 int len1 = arrayInorder(t1,arr1,0);
	 printf("\nArray Element in TREE 1 : ");
	 for(int i=0; i<len1; i++)
		 printf("%d ",arr1[i]);


	 int arr2[20],len2 = arrayInorder(t2,arr2,0);
	 printf("\nArray Element in TREE 2 : ");
	 for(int i=0; i<len2; i++)
		 printf("%d ",arr2[i]);




	 if(len1 != len2){
		 printf("\n2 BST are not Same");
	}
	else {
		for(i=0; i<len1; i++){
			printf("\n%d %d",arr1[i],arr2[i]);
			if(arr1[i] != arr2[i]){
				flag=1;
				break;
			}
		}
	}

	if(flag == 1) printf("\n\nFail");
	else printf("\n\nSuccess");

	return 0;


 }
