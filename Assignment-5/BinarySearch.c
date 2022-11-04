
#include <stdio.h>
#include <stdlib.h>
#include"BinarySearchADT.h"
int main() {
  struct node *temp ,*t = NULL;
  t = insert(t, -31);
  t = insert(t, 1);
  t = insert(t, 2);
  t = insert(t, 3);
  t = insert(t, 4);
  t = insert(t, 5);
  t = insert(t, 6);
  t = insert(t, 71);

  printf("Inorder traversal: ");
  inorder(t);

  printf("\nAfter deleting 3\n");
  t = deleteNode(t, 3);


  printf("Inorder traversal: ");
  inorder(t);
  printf("\npreorder traversal: ");
  preorder(t);
  printf("\npostorder traversal: ");
  postorder(t);

  temp = minValueNode(t);
  printf("\nmin value = %d ",temp->data);
  temp = maxValueNode(t);
  printf("\nmin value = %d ",temp->data);
}
