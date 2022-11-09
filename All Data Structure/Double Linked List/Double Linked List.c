#include <stdio.h>
#include <stdlib.h>
#include "ADT.h"
int main()
{
    struct node *header;
    header=(struct node*)malloc(sizeof(struct node));
    header->lptr=header->rptr=NULL;
    insert(header,10);
    insert(header,20);
    insert(header,30);
    insert(header,40);
    insert(header,50);
    display(header);
    delete(header,50);
    display(header);
    
    return 0;
}
