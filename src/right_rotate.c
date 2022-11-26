#include "rbtree.h"

node_t *right_rotate(rbtree *t, node_t *z) {
    // TODO: implement insert
    node_t *y = z->left;
    z->left = y->right;

    if(y->right != t->nil){
        y->right->parent = z;
    }

    y->parent = z->parent;

    if(z->parent == t->nil){
        t->root = y;
    }
    else if(z == z->parent->right){
        z->parent->right = y;
    }
    else{
        z->parent->right = y;
    }

    y->right = z;
    z->parent = y;
}