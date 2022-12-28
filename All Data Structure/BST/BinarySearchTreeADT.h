#include "queue.h"


struct tree* insertBST(struct tree *t, int x){
    if(t == NULL){
        t = (struct tree *) malloc(sizeof(struct tree));
        t->data = x;
        t->right = NULL;
        t->left = NULL;
    }
    else if(x > t->data)
        t->right = insertBST(t->right,x);
    else if(x < t->data)
        t->left = insertBST(t->left,x);
    return t;
}

void inorderBST(struct tree *t){
    if(t==NULL) return ;
    if(t->left != NULL)
        inorderBST(t->left);
    printf("%d ",t->data);
    if(t->right != NULL)
        inorderBST(t->right);
}
struct tree * findmax(struct tree *t){
    if(t->right != NULL) t->right = findmax(t->right);
    return t;
}
struct tree * findmin(struct tree *t){
    if(t->left != NULL) t->left = findmin(t->left);
    return t;
}
struct tree * deleteBST(struct tree *t, int x){
    struct tree *temp;
    if(t==NULL)return t;
    else if(x> t->data) t->right = deleteBST(t->right,x);
    else if(x < t->data) t->left = deleteBST(t->left,x);
    else if(t->left != NULL && t->right != NULL) {
        temp = findmin(t->right);
        t->data = temp->data;
        t->right = deleteBST(temp->right,temp->data);
    }
    else{
        temp = t;
        if(t->right == NULL) t = t->left;
        else if(t->left == NULL) t = t->right;
    }
    return t;
}
// void levelorderBST(struct tree *t){
//     if(t == NULL) return ;
//     struct queue *q = createQueue(20);
//     enqueue(q,t);
//     int i=0;
//     // printf("%d first queue \n",peek(q)->data);
//     struct tree *temp = t;
//     while(!isEmpty(q)){
//         temp = peek(q);
//         printf("%d ",temp->data);
//         // printf("\nQueue Print %d: ",i++);display(q);
//         if(temp->left != NULL ) enqueue(q,temp->left);
//         if(temp->right != NULL ) enqueue(q,temp->right);
//         dequeue(q);
//     }
// }