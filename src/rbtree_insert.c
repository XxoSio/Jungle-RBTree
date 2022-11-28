#include "rbtree.h"

node_t *rbtree_insert(rbtree *t, const key_t key) {
    // TODO: implement insert
    
    // 삽입할 노드 z 메모리 할당
    node_t *z = (node_t *)calloc(1, sizeof(node_t));
    //
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
        y->right = z;
    }

    z->left = t->nil;
    z->right = t->nil;
    z->color = RBTREE_RED;
    z->key = key;

    rbtree_insert_fixup(t, z);

    return t->root;
}