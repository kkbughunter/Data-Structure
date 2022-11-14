#include<stdio.h>
#include<stdlib.h>
#include "StackADT.h"

int main()
{
	struct stack *head = (struct stack *) malloc(sizeof(struct stack));

	CreateStack(head,3);
	push(head, 2);
	push(head, 4);
	push(head, 6);
	push(head, 6);
	Display(head);

	pop(head);
	pop(head);
	pop(head);
	pop(head);
	pop(head);
	push(head, 6);
	Display(head);
	return 0;
}
