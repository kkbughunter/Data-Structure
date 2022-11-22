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
void inorderarray(struct tree *t,int arr[])
{
    static int i=0;
    if (t->left!=NULL){
        inorderarray(t->left,arr);
    }
    arr[i++]=t->data;
    if(t->right!=NULL){
        inorderarray(t->right,arr);
    }
}



void inorder(struct tree *t)
{
    if (t->left!=NULL){
        inorder(t->left);
    }
    printf("%d,",t->data);
    if(t->right!=NULL){
        inorder(t->right);
    }
}
