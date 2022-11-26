#ifndef _RBTREE_H_
#define _RBTREE_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef enum { RBTREE_RED, RBTREE_BLACK } color_t;

typedef int key_t;

typedef struct node_t {
  color_t color;
  key_t key;
  struct node_t *parent, *left, *right;
} node_t;

typedef struct {
  node_t *root;
  node_t *nil;  // for sentinel
} rbtree;


// void delete_rbtree(rbtree *);

// node_t *rbtree_find(const rbtree *, const key_t);
// node_t *rbtree_min(const rbtree *);
// node_t *rbtree_max(const rbtree *);
// int rbtree_erase(rbtree *, node_t *);

// int rbtree_to_array(const rbtree *, key_t *, const size_t);

// --------------------------------------------------------------------
rbtree *new_rbtree(void);

node_t *rbtree_insert(rbtree *, const key_t);
node_t *rbtree_insert_fixup(rbtree *t, node_t *z);
node_t *left_rotate(rbtree *t, node_t *z);
node_t *right_rotate(rbtree *t, node_t *z);


#endif  // _RBTREE_H_