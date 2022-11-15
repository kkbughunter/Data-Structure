
#include<stdio.h>
#include<stdlib.h>
#include "ADT.h"


int main(){
	struct stack *top = (struct stack*) malloc(sizeof(struct stack));
	createStack(top, 10);
	(gettop(top)==-1)?printf("Gettop : Empty\n"):printf("Gettop : %d\n",gettop(top));
	push(top,4);
	printf("\nAfter push : ");display(top);
	push(top,6);
	printf("\nAfter push : ");display(top);
	push(top,8);
	printf("\nAfter push : ");display(top);
	pop(top);
	(gettop(top)==-1)?printf("\nGettop : Empty\n"):printf("\nGettop : %d\n",gettop(top));
	(gettop(top)==-1)?printf("\nGettop : Empty\n"):printf("\nGettop : %d\n",gettop(top));
	pop(top);
	pop(top);
	(gettop(top)==-1)?printf("Gettop : Empty\n"):printf("Gettop : %d\n",gettop(top));
	pop(top);
	pop(top);
	printf("\nAfter push : ");display(top);
	(gettop(top)==-1)?printf("\nGettop : Empty\n"):printf("\nGettop : %d\n",gettop(top));

	return 0;



}


