#include<stdio.h>
#include<stdlib.h>
#include "ADT.h"

int main()
{
    struct tree *t,*max,*min,*sea;
    max=(struct tree*)malloc(sizeof(struct tree*));
    min=(struct tree*)malloc(sizeof(struct tree*));
    t=NULL;
    t=insert(t,29);
    insert(t,23);
    insert(t,4);
    insert(t,13);
    insert(t,39);
    insert(t,31);
    insert(t,45);
    insert(t,56);
    insert(t,49);
    printf("INORDER   :");
    inorder(t);
    printf("\nPREORDER  :");
    preorder(t);
    printf("\nPOSTORDER :");
    postorder(t);
    max=findMax(t);
    printf("\nMax Value is: %d",max->data);
    min=findMin(t);
    printf("\nMin value is: %d",min->data);
    sea=search(t,39);
    if(sea!=NULL){
        printf("\nThe element is found, value is %d",sea->data);
    }
    else{
        printf("\nThe element is not found");
    }
    t=delete(t,4);
    printf("\nINORDER:   ");
    inorder(t);
}
