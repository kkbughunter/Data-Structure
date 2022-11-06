#include<stdio.h>
#include<stdlib.h>
#include"ADT.h"

int main(){
    struct node *head;
    head = (struct node *) malloc(sizeof(struct node));

    head->next = NULL;
    add(head, 10);
    add(head, 5);
    add(head, 30);
    delete(head);
    add(head, 20);
    display(head);
    sortL(head);
    display(head);
    return 0;
}