#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left, *right;
} node;

struct node * create_node(int value);
struct node * delete(node * root, int target);
struct node * find_min(node * root);
struct node * find_max(node * root);
struct node * free_tree(node * root);
struct node * insert(node * root, int value);
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


    for (int i = 0; i < 20; i++) {
        if (i == 10) {
            continue;
        }
        insert(root, i);
    }

    delete(root, 2);
    delete(root, 6);
    delete(root, 9);

    for (int j = 0; j < 30; j++) {
        if (search(root, j) != NULL) {
            printf("The number %d is in the tree\n", j);
        } else {
            printf("The number %d isn't in the tree\n", j);
        }
    }

    node * max = find_max(root);

    printf("MAX: %d\n", max->key);
    free_tree(root);

    return 0;
}

struct node * create_node(int value) {
    node * new_node = (node *) malloc(sizeof(node));
    new_node->key = value;
    new_node->left = new_node->right = NULL;
    return new_node;
}

struct node * delete(node * current, int target) {
    if (current == NULL) {
        return NULL;
    }

    if (target == current->key) {

        if (current->left == NULL && current->right == NULL) {
            free(current);
            return NULL;
        } else if (current->left == NULL || current->right == NULL) {
            node * temp;
            if (current->left != NULL) {
                temp = current->left;
            } else {
                temp = current->right;
            }
            free(current);
            return temp;
        } else {
            node * temp = find_min(current);
            current->key = temp->key;
            delete(current->right, temp->key);
        }
    }

    if (target > current->key) {
        current->right = delete(current->right, target);
    } else {
        current->left = delete(current->left, target);
    }

    return current;
}


struct node * find_min(node * current) {
    if (current == NULL) {
        return NULL;
    } else if (current->left != NULL) {
        return find_min(current->left);
    }
    return current;
}


struct node * find_max(node * current) {
    if (current == NULL) {
        return NULL;
    } else if (current->right != NULL) {
        return find_max(current->right);
    }
    return current;
}


struct node * free_tree(node * current) {
    if (current->left == NULL && current->right == NULL) {
        free(current);
        return NULL;
    }

    if (current->left != NULL && current->right == NULL) {
        free_tree(current->left);
        free(current);
    } else if (current->left == NULL && current->right != NULL) {
        free_tree(current->right);
        free(current);
    } else {
        return free_tree(current->left);
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
