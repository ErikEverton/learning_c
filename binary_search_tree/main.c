#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left, *right;
} node;

struct node * create_node(int value);
struct node * search(node * root, int target);
struct node * insert(node * root, int value);


int main(void) {
    node * root = (node *) malloc(sizeof(node));
    if (root == NULL) {
        return 1;
    }

    root->key = 10;
    root->left = NULL;
    root->right = NULL;

    printf("The root value: %d\n", root->key);


    for (int i = 0; i < 20; i++) {
        if (i == 10) {
            continue;
        }
        insert(root, i);
    }

    for (int j = 0; j < 30; j++) {
        if (search(root, j) != NULL) {
            printf("The number %d is in the tree\n", j);
        } else {
            printf("The number %d isn't in the tree\n", j);
        }
    }

    return 0;
}

struct node * create_node(int value) {
    node * new_node = (node *) malloc(sizeof(node));
    new_node->key = value;
    new_node->left = new_node->right = NULL;
    return new_node;
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


struct node * insert(node * current, int value) {
    if (current == NULL) {
        return create_node(value);
    }

    if (value < current->key) {
        current->left = insert(current->left, value);
    } else {
        current->right = insert(current->right, value);
    }

    return current;
}
