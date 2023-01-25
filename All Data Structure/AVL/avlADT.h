#define MAX(a,b) ( (a) > (b) ? (a) : (b) )


struct avl{
    int data,h;
    struct avl *left,*right;
};

int height(struct avl *t){
    if(t == NULL) return -1;
    return t->h;
}


struct avl * singleleft(struct avl *t){
    struct avl *temp;
    
    temp = t->left;
    t->left = temp->right;
    temp->right = t;
    
    temp->h = MAX(height(temp->left),height(temp->right)) + 1;
    t->h = MAX(height(t->left), height(t->right) )+1;
    
    return temp;
}


struct avl * singleright(struct avl *t){
    struct avl *temp;
    
    temp = t->right;
    t->right = temp->left;
    temp->left = t;
    
    temp->h = MAX(height(temp->left),height(temp->right)) + 1;
    t->h = MAX(height(t->left), height(t->right) )+1;
    
    return temp;
}

struct avl * doubleright_left(struct avl *t){
    t->left = singleright(t->left);
    return singleleft(t);
}
struct avl * doubleleft_right(struct avl *t){
    t->right = singleleft(t->right);
    return singleright(t);
}


struct avl * Insert(struct avl *t, int x){
    if(t == NULL){
        struct avl *temp = (struct avl *) malloc(sizeof(struct avl));
        temp->data = x;
        temp->left = temp->right = NULL;
        temp->h = 0;
        return temp;
    }
    else if(x < t->data){
        t->left = Insert(t->left,x);
        if(abs(height(t->left) - height(t->right)) == 2){
            if(x < t->left->data) 
                t = singleleft(t);
            else
                t = doubleright_left(t);
        }
    }
    else if(x > t->data){
        t->right = Insert(t->right,x);
        if(abs(height(t->left) - height(t->right)) == 2){
            if(x < t->right->data) 
                t = singleright(t);
            else
                t = doubleleft_right(t);
        }
    }
    
    t->h = MAX(height(t->left), height(t->right))+1;
    return t;

}

void inorder(struct avl *t){
    if(t->left != NULL)
        inorder(t->left);
    printf("%d %d\n",t->data,t->h);
    if(t->right != NULL)
        inorder(t->right);
}

void printGivenLevel(struct avl* root, int level) {
    if (root == NULL)
    return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}


void levelOrderTraversal(struct avl* root) {
    int h = height(root)+1;
    int i;
    for (i=1; i<=h; i++){
        printGivenLevel(root, i);
        printf("\n");
    }
}
