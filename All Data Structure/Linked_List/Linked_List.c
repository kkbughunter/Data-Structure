
#include <stdio.h>
#include <stdlib.h>
#include "ADT.h"

int main(void) {
	struct node *header;
	header=(struct node *) malloc(sizeof(struct node ));
	header->next=NULL;

	insert(header,10);
	insert(header,20);
	insert(header,40);
	insert(header,50);
	insert(header,30);
	display(header);
	sortL(header);
	display(header);

	
	return 0;
}
