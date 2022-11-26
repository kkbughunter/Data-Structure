#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
struct avltree{
    char data;
    struct avltree *left,*right;
    int height;
};

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int h(struct avltree *t){
    if(t==NULL){
        return -1;
    }
    else{
        return t->height;
    }
}
struct avltree *singlerotatewithleft(struct avltree *k2){
    struct avltree *k1;
    k1=k2->left;
    k2->left=k1->right;
    k1->right=k2;
    k1->height=max(h(k1->left),h(k1->right))+1;
    k2->height=max(h(k2->left),h(k2->right))+1;
    return k1;
}

struct avltree *singlerotatewithright(struct avltree *k2){
    struct avltree *k1;
    k1=k2->right;
    k2->right=k1->left;
    k1->left=k2;
    k1->height=max(h(k1->left),h(k1->right))+1;
    k2->height=max(h(k2->left),h(k2->right))+1;
    return k1;
}

struct avltree *doublerotatewithleft(struct avltree *k1){
    k1->left=singlerotatewithright(k1->left);
    return singlerotatewithleft(k1);
}

struct avltree *doublerotatewithright(struct avltree *k1){
    k1->right=singlerotatewithleft(k1->right);
    return singlerotatewithright(k1);
}

struct avltree *insert(struct avltree *t,char x){
    if(t==NULL){
        struct avltree *temp;
        temp=(struct avltree *)malloc(sizeof(struct avltree));
        temp->data = x;
        temp->left=temp->right=NULL;
        temp->height=0;
        return temp;
    }

    else if(x<t->data){
        t->left=insert(t->left,x);
        if(abs(h(t->left)-h(t->right))==2){
            if(x<(t->left)->data){
                t=singlerotatewithleft(t);
            }
            else{
                t=doublerotatewithleft(t);
            }
        }
    }
 
    else if(x>t->data){
        t->right=insert(t->right,x);
        if(abs(h(t->right)-h(t->left))==2){
            if(x>t->data){
                t=singlerotatewithright(t);
            }
            else{
                t=doublerotatewithright(t);
            }
        }
    }
    t->height=max(h(t->left),h(t->right))+1;
    
    return t;
}

void inorder(struct avltree *t){
    if(t==NULL){
        return;
    }
    inorder(t->left);
    printf("%c ",t->data);
    inorder(t->right);
}
