#include<stdio.h>
#include<stdlib.h>
#include"ABT.h"
int main()
{
	struct node *header,*sea;
	int temp;
	header = (struct node*) malloc( sizeof(struct node));
	header->next = NULL;




	printf("\nlength = %d\n",length(header));
	printf("Insert elements : ");
	insert(header,2);printf("\n");
	display(header);
	insert(header,4);printf("\n");
	display(header);
	insert(header,6);printf("\n");
	display(header);
	insert(header,8);printf("\n");
	display(header);

	printf("\nlength = %d\n",length(header));

	temp = middle(header);
	printf("middle value = %d\n",temp);

	temp = search(header,4);
	printf("\nsearch result = %d\n",temp);
	temp = search(header,5);
	printf("\nsearch result = %d\n",temp);

	delet(header,2);
	printf("\nAfter Delete    : ");
	display(header);
	reverseList(header);
	printf("\nAfter Reverse    : ");
	display(header);
	printf("\n\n");

	return 0;

}
