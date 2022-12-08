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
void preorder(struct tree *t)
{
    printf("%d,",t->data);
    if (t->left!=NULL){
        preorder(t->left);
    }
    if(t->right!=NULL){
        preorder(t->right);
    }
}
void postorder(struct tree *t)
{
    if (t->left!=NULL){
        postorder(t->left);
    }
    if(t->right!=NULL){
        postorder(t->right);
    }
    printf("%d,",t->data);
}
struct tree *findMin(struct tree *t)
{
    if(t->left!=NULL){
        return findMin(t->left);
    }
    return t;
}
struct tree *findMax(struct tree *t)
{
    if(t->right!=NULL){
        return findMax(t->right);
    }
    return t;
}
struct tree *search(struct tree *t,int x)
{
    if(t==NULL){
        return NULL;
    }
    else if (x==t->data){
        return t;
    }
    else if(x>t->data){
        return search(t->right,x);
    }
    else{
        return search(t->left,x);
    }
}
struct tree *delete(struct tree *t,int x)
{
    if(t==NULL)
    return t;
    else if(x>t->data){
        t->right=delete(t->right,x);
    }
    else if(x<t->data){
        t->left=delete(t->left,x);
    }
    else{
          struct tree *temp;
        if(t->left==NULL && t->right==NULL){
            free(t);
            return NULL;
        }
        else if(t->left==NULL){
            temp=t;
            t=t->right;
            free(temp);
         
        }
        else if(t->right==NULL){
            struct tree *temp;
            temp=t;
            t=t->left;
            free(temp);
        }
        else{
            struct tree *min;
            min=findMin(t->right);
            t->data=min->data;
            t->right=delete(t->right,min->data);
        }
    }
    return t;
}
// Online code 
int height(struct tree* h)
{
    if (h == NULL)
        return 0;
    else {
        int lheight = height(h->left);
        int rheight = height(h->right);
 
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
void printCurrentLevel(struct tree* h, int level)
{
    if (h == NULL)
        return;
    if (level == 1)
        printf("%d ", h->data);
    else if (level > 1) {
        printCurrentLevel(h->left, level - 1);
        printCurrentLevel(h->right, level - 1);
    }
}
void levelOrder(struct tree* h)
{
    int hei = height(h);
    int i,j=1;
    for (i = 1; i <= hei; i++){
        printf("\nLevel %d : ",j++);
        printCurrentLevel(h,i);
    }
}
// online code end.
