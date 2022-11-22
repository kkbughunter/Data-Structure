#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *insert(struct tree *t,int x)
{
    if (t==NULL)
    {
        t=(struct tree*)malloc(sizeof(struct tree));
        t->data=x;
        t->left=NULL;
        t->right=NULL;
    }
    else if(x>t->data)
    {
        t->right=insert(t->right,x);
    }
    else
    {
        t->left=insert(t->left,x);
    }
    return t;
}
int inorder(struct tree *t,int arr[],int i)
{
    if (t->left!=NULL){
        inorder(t->left,arr,i++);
    }
    arr[i++]=t->data;
    if(t->right!=NULL){
        inorder(t->right,arr,i++);
    }
return i;
}

void count(struct tree *t, int a, int b) {
   if(t->left!=NULL)
      count(t->left, a, b); 
   if(t->data > a && t->data < b) 
     printf("%d  ", t->data);
   if(t->right!=NULL)
      count(t->right, a, b);
}

          
