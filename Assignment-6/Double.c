#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"ADT.h"


int main() {
    struct node *h;
    h = (struct node *)malloc(sizeof(struct node));
    insertFront(h,'P');
    insertFront(h,'Q');
    insertFront(h,'R');
    insertFront(h,'S');
    insertFront(h,'T');
    insertFront(h,'U');
    insertFront(h,'V');
    insertFront(h,'W');
    insertFront(h,'X');
    insertFront(h,'Y');
    insertFront(h,'Z');
    
    displayItems(h);
 
    return 0;
}

