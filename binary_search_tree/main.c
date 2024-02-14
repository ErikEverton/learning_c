#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *left, *right;
} node;


int main(void) {
    node * root = (node *) malloc(sizeof(node));
    if (root == NULL) {
        return 1;
    }

    root->value = 10;
    root->left = NULL;
    root->right = NULL;

    printf("The root value: %d\n", root->value);

    return 0;
}
