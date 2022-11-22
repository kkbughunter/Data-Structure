#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Application3ADT.h"

int main() {
    struct node *h;
    int node;
    h = (struct node *)malloc(sizeof(struct node));

    insertFront(h,'A');
    insertFront(h,'B');
    insertFront(h,'C');
    insertFront(h,'D');
    insertFront(h,'E');
   
  
    display(h);
    printf("\n");

    printf("Enter the node number to be swaped:");
    scanf("%d",&node);

    swap(h,node);
    display(h);
   
}
