// search function not completed.....
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *left, *right;
};




struct node *insert(struct node *t, int data) {
  if (t == NULL){
     struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
  }

  if (data < t->data)
    t->left = insert(t->left, data);
  else
    t->right = insert(t->right, data);

  return t;
}

void inorder(struct node *t) {

  if (t->left != NULL)
    inorder(t->left);
    printf("%d, ", t->data);
  if (t->right != NULL)
    inorder(t->right);
}

void preorder(struct node *t) {
  printf("%d, ", t->data);
  if (t->left != NULL)
	  preorder(t->left);
  if (t->right != NULL)
	  preorder(t->right);
}

void postorder(struct node *t) {
  if (t->left != NULL)
	  postorder(t->left);
  if (t->right != NULL)
	  postorder(t->right);
  printf("%d, ", t->data);
}



struct node *minValueNode(struct node *node) {
  struct node *current = node;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}

struct node *maxValueNode(struct node *node) {
  struct node *current = node;

  while (current && current->right != NULL)
    current = current->right;

  return current;
}

struct node *deleteNode(struct node *t, int data) {
  if (t == NULL) return t;

  if (data < t->data)
    t->left = deleteNode(t->left, data);
  else if (data > t->data)
    t->right = deleteNode(t->right, data);

  else {
    if (t->left == NULL) {
      struct node *temp = t->right;
      free(t);
      return temp;
    } else if (t->right == NULL) {
      struct node *temp = t->left;
      free(t);
      return temp;
    }
    struct node *temp = minValueNode(t->right);

    t->data = temp->data;

    t->right = deleteNode(t->right, temp->data);
  }
  return t;
}


struct node* search(struct node* t, int key)
{
	if (t == NULL || t->data == key)
		return t;
	if (t->data < key)
		return search(t->right, key);
	return search(t->left, key);
}


int arrayInorder(struct node *t, int arr[],int index){
	if(t->left != NULL)
		index = arrayInorder(t->left, arr, index);
	arr[index++] = t->data;
	if(t->right != NULL)
		index = arrayInorder(t->right, arr, index);
	return index;
}


