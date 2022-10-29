
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



/*
 *
 i n*t opt=3;
 struct stack *head = (struct stack*) malloc(sizeof(struct stack));
 printf("\n\n1.Max\n2.Binary\nEnter the option : ");
 //scanf("%d",&opt);
 switch(opt){
	 case 1:
		 printf("Elements :");
		 createStack(head, 10);
		 push(head,1);
		 push(head,2);
		 push(head,3);
		 display(head);
		 printf("\n\n %d is max value\n\n",big(head));
		 break;
	 case 2:
		 createStack(head, 10);
		 Binary(head,14);
		 break;
	 case 3:

		 }

 */
