#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data;
    struct node *lptr, *rptr;
};

void insertFront(struct node *h, char c) {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = c;
    ptr = h->rptr;
    temp->rptr = ptr;
    h->rptr = temp;
    temp->lptr = h;
    if(ptr!=NULL) ptr->lptr = temp;
}

void insertLast(struct node *h, char c) {
    struct node *temp, *ptr=h;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = c;
    while(ptr->rptr != NULL)
        ptr = ptr->rptr;
    temp->rptr = ptr->rptr;
    temp->lptr = ptr;
    ptr->rptr = temp;
}


void displayItems(struct node *h) {
    struct node *ptr, *prev;
    ptr = h->rptr;
    prev = h;
    printf("Double Linked list in Forward\n");
    while(ptr!=NULL) {
        printf("%c ", ptr->data);
        prev = ptr;
        ptr = ptr->rptr;
    }
    printf("\n");
    printf("Double Linked list in backward\n");
    while(prev!=h) {
        printf("%c ", prev->data);
        prev = prev->lptr;
    }
    printf("\n");
}
