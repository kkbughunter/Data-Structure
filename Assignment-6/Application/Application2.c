#include"Application2ADT.h"

void main() {
    int result;
    struct node *h,*ptr1,*ptr2;
    h = (struct node *)malloc(sizeof(struct node));
    ptr1=(struct node *)malloc(sizeof(struct node));
    ptr2=(struct node *)malloc(sizeof(struct node));

    insertFront(h,'D');		// DATASTRUCTURE
    insertFront(h,'A');
    insertFront(h,'T');
    insertFront(h,'A');
    insertFront(h,'S');
    insertFront(h,'T');
    insertFront(h,'R');
    insertFront(h,'U');
    insertFront(h,'C');
    insertFront(h,'T');
    insertFront(h,'U');
    insertFront(h,'R');
    insertFront(h,'E');
    
    displayItems(h);

    printf("\n");

    seperate(h,ptr1,ptr2);
    
    displayItems(ptr1);
    printf("\n");
    displayItems(ptr2);
    
}
