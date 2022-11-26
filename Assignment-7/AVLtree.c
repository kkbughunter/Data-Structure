#include<stdio.h>
#include<stdlib.h>
#include "avlADT.h"



int main()
{
	struct avltree *t=NULL;
	
    	printf("\n\nInorder :");
	t = insert(t,'H');
	t = insert(t,'I');
	t = insert(t,'J');
	t = insert(t,'B');
	t = insert(t,'A');
	t = insert(t,'E');
	t = insert(t,'C');
	t = insert(t,'F');
	t = insert(t,'D');
	t = insert(t,'G');
	t = insert(t,'K');
	t = insert(t,'L');
	inorder(t);
    	printf("\n\n");
	return 0;
}

