#include "rbtree.h"

node_t *left_rotate(rbtree *t, node_t *z) {
    // TODO: implement insert
    node_t *y = z->right;
    z->right = y->left;

    if(y->left != t->nil){
        y->left->parent = z;
    }

    y->parent = z->parent;

    if(z->parent == t->nil){
        t->root = y;
    }
    else if(z == z->parent->left){
        z->parent->left = y;
    }
    else{
        z->parent->left = y;
    }

    y->left = z;
    z->parent = y;
}