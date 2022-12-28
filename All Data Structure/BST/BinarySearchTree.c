#include<stdio.h>
#include<stdlib.h>
#include "BinarySearchTreeADT.h"

int main()
{
    struct tree *t = NULL;
    t = insertBST(t,30);
    t = insertBST(t,20);
    t = insertBST(t,40);
    t = insertBST(t,10);
    t = insertBST(t,15);
    t = insertBST(t,35);
    t = insertBST(t,50);
    inorderBST(t);
    printf("\nStart delete :\n");
    t = deleteBST(t,20);
    t = deleteBST(t,40);
    t = deleteBST(t,10);
    t = deleteBST(t,15);
    inorderBST(t);
    // printf("\n\nLevel Order \n\n ");
    // levelorderBST(t);
    return 0;
}