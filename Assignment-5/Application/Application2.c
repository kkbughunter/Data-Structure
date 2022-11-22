#include<stdio.h>
#include<stdlib.h>
#include "Application2ADT.h"

int main()
{
    struct tree *t1, *t2;
    int arr1[10],num1,num2;
   
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

   
    int x1=inorder(t1,arr1,0);
  
    printf("Enter the starting Range: ");
    scanf("%d",&num1);
    printf("Enter the ending Range: ");
    scanf("%d",&num2);

    printf("The Elements between %d and %d\n",num1,num2); 
    count(t1,num1,num2);
    printf("\n");
}
