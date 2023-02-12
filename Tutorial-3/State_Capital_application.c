#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct tree{
    char state[20];
    char capital[20];
    struct tree *left;
    struct tree *right;
};
struct tree *insert(struct tree *t,char x[],char c[])
{
    if (t==NULL)
    {
        t=(struct tree*)malloc(sizeof(struct tree));
        strcpy(t->state,x);
        strcpy(t->capital,c);
        t->left=NULL;
        t->right=NULL;
    }
    else if(strcmp(x,t->state)>0)
    {
        t->right=insert(t->right,x,c);
    }
    else
    {
        t->left=insert(t->left,x,c);
    }
    return t;
}
void inorder(struct tree *t)
{
    if (t->left!=NULL){
        inorder(t->left);
    }
    printf(" %s - %s ,",t->state,t->capital);
    if(t->right!=NULL){
        inorder(t->right);
    }
}

struct tree *findMin(struct tree *t)
{
    if(t->left!=NULL){
        return findMin(t->left);
    }
    return t;
}

struct tree *search(struct tree *t,char x[])
{
    if(t==NULL){
        return NULL;
    }
    else if (strcmp(x,t->state)==0){
        return t;
    }
    else if(strcmp(x,t->state)>0){
        return search(t->right,x);
    }
    else{
        return search(t->left,x);
    }
}

struct tree *delete(struct tree *t,char s[])
{
    if(t==NULL)
    return t;
    else if(strcmp(s,t->state)>0){
        t->right=delete(t->right,s);
    }
    else if(strcmp(s,t->state)<0){
        t->left=delete(t->left,s);
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
            strcpy(t->state,min->state);
            t->right=delete(t->right,min->state);
        }
    }
    return t;
}

void main(){
    struct tree *t,*sea;
    t=NULL;
    int choice,op;
    char state[20],capital[20];
     printf("1 For insert state and capital\n2 Delete the State\n3 For Search the state for capital\n4 For Inorder the tree\n");
    do{
        printf("Enter your option: ");
        scanf("%d",&op);
        switch(op){
            case 1:printf("Enter the state for insert: ");
                   scanf("%s",state);
                   printf("Enter the capital for insert: ");
                   scanf("%s",capital);
                   t=insert(t,state,capital);
                   break;
            case 2:printf("Enter the state for delete: ");
                   scanf("%s",state);
                   t=delete(t,state);
                   break;
            case 3:printf("Enter the state for find its capital: ");
                   scanf("%s",state);
                   sea=search(t,state);
                    if(sea!=NULL){
                        printf("\nThe State is Found and the capital of %s is %s\n",sea->state,sea->capital);
                    }
                    else{
                        printf("\nThe element is not found");
                    }
                    break;
            case 4:printf("Inorder :  ");
                   inorder(t);
                   printf("\n");
       }
       printf("Do you want to continue means enter 1 else Enter 0: ");
       scanf("%d",&choice);
   }while(choice==1);
}
