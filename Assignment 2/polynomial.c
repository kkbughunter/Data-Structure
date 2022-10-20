
#include <stdio.h>
#include <stdlib.h>
#include "polyABT.h"

int main()
{
	struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

	create_node(6, 7, &poly1);
	create_node(8, 3, &poly1);
	create_node(7, 2, &poly1);
	create_node(9, 0, &poly1);

	create_node(7, 3, &poly2);
	create_node(6, 0, &poly2);

	printf("1st Number: ");
	display(poly1);

	printf("\n2nd Number: ");
	display(poly2);

	poly = (struct Node*)malloc(sizeof(struct Node));

	polyadd(poly1, poly2, poly);

	printf("\nAdded polynomial: ");
	display(poly);
	printf("\n\n");

	return 0;
}



/*

Poly1: 6x7+8x3 +7x2+9, 
Poly2: 7x3+6  
Resultant Poly: 6x7+15x3+ 7x2+15
*/
