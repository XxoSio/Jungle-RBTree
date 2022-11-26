#include "rbtree.h"

node_t *rbtree_insert_fixup(rbtree *t, node_t *z) {
    // TODO: implement insert
    while(z->parent->color== RBTREE_RED){
        if(z->parent == z->parent->parent->left){
            node_t *y = z->parent->parent->right;

            if(y->color == RBTREE_RED){
                z->parent->color = RBTREE_BLACK;
                y->color = RBTREE_BLACK;
                z->parent->parent->color = RBTREE_RED;
                z = z->parent->parent;
            }
            else if(z == z->parent->parent){
                z = z->parent;
                left_rotate(t, z);
            }

            z->parent->color = RBTREE_BLACK;
            z->parent->parent->color = RBTREE_RED;
                 
            right_rotate(t, z->parent->parent);
        }
        else{
            node_t *y = z->parent->parent->left;

            if(y->color == RBTREE_RED){
                z->parent->color = RBTREE_BLACK;
                y->color = RBTREE_BLACK;
                z->parent->parent->color = RBTREE_RED;
                z = z->parent->parent;
            }
            else if(z == z->parent->parent){
                z = z->parent;
                left_rotate(t, z);
            }

            z->parent->color = RBTREE_BLACK;
            z->parent->parent->color = RBTREE_RED;
                 
            // right_rotate(t, z->parent->parent);
        }
    }

    t->root->color = RBTREE_BLACK;
}