


#include<stdio.h>
#include<stdlib.h>
#include "ADT.h"


int main(){
 	struct stack *head = (struct stack*) malloc(sizeof(struct stack));
 	printf("3) Binary Application\n ");
 	
	createStack(head, 10);
	Binary(head,14);
	printf("\n");
	return 0;



}

