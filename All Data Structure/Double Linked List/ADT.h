#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rptr, *lptr;
};

void insert(struct node *header, int data){
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = data;
    if(header->rptr == NULL){
        temp->rptr = header->rptr;
        header->rptr = temp;
        temp->lptr = header;
    }
    else{
        struct node *p = header->rptr;
        temp->rptr = p;
        p->lptr = temp;
        header->rptr = temp;
    }
    
}

void display(struct node *h){
    struct node *ptr = h->rptr;
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->rptr;
    }printf("\n");
}

void delete(struct node *h,int x){
    struct node *ptr,*l,*r;
    ptr = h->rptr;
    while(ptr != NULL){
        if(ptr->data == x){
            l = ptr->lptr;
            r = ptr->rptr;
            l->rptr = r;
            r->lptr = l;
            free(ptr);
            return ;
        }
        else ptr = ptr->rptr;
    }
    
}