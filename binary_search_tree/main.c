#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left, *right;
} node;

struct node * search(node * root, int target);


int main(void) {
    node * root = (node *) malloc(sizeof(node));
    if (root == NULL) {
        return 1;
    }

    root->key = 10;
    root->left = NULL;
    root->right = NULL;

    printf("The root value: %d\n", root->key);

    if (search(root, 11) != NULL) {
        printf("There is that value\n");
    } else {
        printf("There isn't that value\n");
    }


    return 0;
}


struct node * search(node * root, int target) {
    node * current = root;
    if (current == NULL || current->key == target) {
        return root;
    }

    if (target > current->key) {
        return search(current->right, target);
    } else {
        return search(current->left, target);
    }

    return NULL;
}
