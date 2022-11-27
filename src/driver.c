#include "rbtree.h"
#include <stdio.h>

void inorder(rbtree *t, node_t *start)
{
  if(start == t->nil)
  {
    return;
  }

  inorder(t, start->left);
  printf("node_key = %d, node_color = %d\n", start->key, start->color);
  inorder(t, start->right);

}

int main(int argc, char *argv[]) {
  rbtree *t = new_rbtree();

  rbtree_insert(t, 10);
  rbtree_insert(t, 20);
  rbtree_insert(t, 30);
  
  inorder(t, t->root);
  printf("root = %d\n", t->root->key);

  return 0;
}