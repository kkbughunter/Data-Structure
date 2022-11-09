#include<stdio.h>
#include<stdlib.h>
#include"ADT.h"

int main(){
    struct node *head;
    head = (struct node *) malloc(sizeof(struct node));

    head->next = NULL;
    add(head, 32);
    add(head, 43);
    add(head, 56);
    add(head, 98);
    add(head, 1);
    display(head);
    deletePos(head,32);
    display(head);
    sortL(head);
    display(head);
    reverseList(head);
    display(head);
    return 0;
}

