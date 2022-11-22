#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void displayItems(struct node *h) {
    struct node *ptr, *prev;
    ptr = h->rptr;
    prev = h;
    
    printf("data :  ");
    while(ptr!=NULL) {
        ptr->data=tolower(ptr->data);
        printf("%c,", ptr->data);
        prev = ptr;
        ptr = ptr->rptr;
    }
    printf("\n");
}


void seperate(struct node *header,struct node *v,struct node *c){
     struct node *ptr;
     ptr=header->rptr;
     while(ptr!=NULL){
          ptr->data=toupper(ptr->data);
          if(ptr->data=='A'||ptr->data=='E'||ptr->data=='I'||ptr->data=='O'||ptr->data=='U')
          {
               insertFront(v,ptr->data);
               ptr=ptr->rptr;
          }
          else
          {
          insertFront(c,ptr->data);
          ptr=ptr->rptr;
          }
     }
}

