#include "rbtree.h"
#include <stdio.h>

// void inorder(rbtree *t, node_t *start)
// {
//   if(start == t->nil)
//   {
//     return;
//   }

//   inorder(t, start->left);
//   printf("%d", start->key);
//   inorder(t, start->right);

//   return;
// }

int main(int argc, char *argv[]) {
  rbtree *t = new_rbtree();

  rbtree_insert(t, 10);
  rbtree_insert(t, 20);
  rbtree_insert(t, 30);

  // inorder(t, t->root);

  return 0;
}