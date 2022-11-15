#include<stdio.h>
#include<stdlib.h>
#include "ADT.h"


int main(){
	struct stack *head = (struct stack*) malloc(sizeof(struct stack));
	printf("Elements :");
	 createStack(head, 10);
	 push(head,1);
	 push(head,2);
	 push(head,3);
	 display(head);
	 printf("\n\n %d is max value\n\n",big(head));
	return 0;



}
