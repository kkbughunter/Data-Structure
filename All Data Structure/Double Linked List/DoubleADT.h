#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lptr,*rptr;
};
struct node* createNode(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    return temp;
}
void insert(struct node *header, int x)
{
    struct node *temp,*p;
    temp=createNode(x);
    p=header->rptr;
    temp->rptr=header->rptr;
    header->rptr=temp; 
    temp->lptr=header;
    if(p!=NULL)
     p->lptr=temp;
}
void display(struct node *header)
{
    struct node *ptr,*end;
    ptr=header->rptr;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        end=ptr;
        ptr=ptr->rptr;
    }
    printf("\n");
}

int search(struct node *header,int key)
{
    struct node *ptr;
    ptr=header->rptr;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
          return ptr->data;
        else
         ptr=ptr->rptr;
    }
   return -1;
}

void delete(struct node *header, int num)
{
    struct node *ptr,*l,*r;
    ptr=header->rptr;
    while(ptr!=NULL)
    {
        if(ptr->data==num)
        {
           l=ptr->lptr;
           r=ptr->rptr;
           l->rptr=r;
           r->lptr=l;
           free(ptr);
        }
        else
        {
            ptr=ptr->rptr;
        }
    }
}

void reverse(struct node *head)
{
    struct node *temp = NULL, *current = head->lptr;
    while (current != NULL) {
        temp = current->lptr;
        current->lptr = current->rptr;
        current->rptr = temp;
        current = current->lptr;
    }
    if (temp != NULL)
        head = temp->lptr;
}
