#include "rbtree.h"

int main(int argc, char *argv[]) {
        rbtree *t = new_rbtree();

        rbtree_insert(t, 10);
        rbtree_insert(t, 20);
        rbtree_insert(t, 30);

        printf("HelloHelloHelloHelloHelloHello2\n");

        return 0;
}