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
    printf("\n");
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

void insertAfter(struct node *header,int key,int x)
{
    struct node *ptr,*temp,*r;
    ptr=header->rptr;
    temp=createNode(x);
    while(ptr!=NULL)
    {
        if(ptr->data==key)
         {
             r=ptr->rptr;
             ptr->rptr=temp;
             temp->lptr=ptr;
             temp->rptr=r;
             r->lptr=temp;
             return ;
         }
        else
         ptr=ptr->rptr;
    }
}
void deleteE(struct node *header, int num)
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
    deleteE(header,50);
    insertAfter(header,30,100);
    display(header);

    return 0;
}
