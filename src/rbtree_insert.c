#include "rbtree.h"

node_t *rbtree_insert(rbtree *t, const key_t key) {
    // TODO: implement insert
    node_t *z = (node_t *)calloc(1, sizeof(node_t));
    node_t *y = t->nil;
    node_t *x = t->root;

    while(x != t->nil){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }

    z->parent = y;
    
    if(y == t->nil){
        t->root = z;
    }
    else if(z->key < y->key){
        y->left = z;
    }
    else{
        y->right = t->nil;
    }

    z->left = t->nil;
    z->right = t->nil;
    z->color = RBTREE_RED;

    rbtree_insert_fixup(t, z);

    return t->root;
}