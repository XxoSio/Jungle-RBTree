// 02_left,right_rotate01_pseudo 참고
// 02_left,right_rotate02_graph 참고
#include "rbtree.h"

node_t *left_rotate(rbtree *t, node_t *x) {
    // TODO: implement insert
    // x의 오른쪽 자식노드인 y를 설정한다
    node_t *y = x->right;
    // y의 왼쪽 자식 노드(베타)를 x의 오른쪽 자식 노드로 변경
    x->right = y->left;

    if(y->left != t->nil){
        y->left->parent = x;
    }

    y->parent = x->parent;

    if(x->parent == t->nil){
        t->root = y;
    }
    else if(x == x->parent->left){
        x->parent->left = y;
    }
    else{
        x->parent->left = y;
    }

    y->left = x;
    x->parent = y;
}