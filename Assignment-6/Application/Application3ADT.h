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
    if(ptr!=NULL)
ptr->lptr = temp;
}


void display(struct node *h) {
    struct node *ptr, *prev;
    ptr = h->rptr;
    prev = h;
    printf("List In Forward: ");
    while(ptr!=NULL) {
        printf("%c   ", ptr->data);
        prev = ptr;
        ptr = ptr->rptr;
    }
    printf("\n\n");
printf("list in Backward: ");
    while(prev!=h) {
        printf("%c   ", prev->data);
        prev = prev->lptr;
    }
    printf("\n");
}

void swap(struct node *h,int k) {
    struct node *end, *ptr;
    ptr = h->rptr;
    end = h;
int temp;
    while(end->rptr!=NULL)  
end = end->rptr;
for(int i=0;i<k-1;i++){
ptr=ptr->rptr;
end=end->lptr;
}
temp=ptr->data;
ptr->data=end->data;
end->data=temp;
   

   
}


