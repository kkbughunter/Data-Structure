#include<stdio.h>
#include<stdlib.h>
#include"avlADT.h"

int main()
{
    struct avl *t=NULL;
    t = Insert(t, 10);
    t = Insert(t, 8);
    t = Insert(t, 9);
    t = Insert(t, 19);
    printf("\n\n");
    inorder(t);
    printf("\n\n");
    
    levelOrderTraversal(t);
    return 0;
}






