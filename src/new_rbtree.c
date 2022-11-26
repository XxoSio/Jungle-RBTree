#include "rbtree.h"

rbtree *new_rbtree(void) {
    rbtree *p = (rbtree *)calloc(1, sizeof(rbtree));
    // TODO: initialize struct if needed
    node_t *NIL = (node_t *)calloc(1, sizeof(node_t));

    NIL->color = RBTREE_BLACK;

    p->nil = NIL;
    p->root = p->nil;    
    
    return p;
}