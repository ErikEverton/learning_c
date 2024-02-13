#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
} node;


void insert_at_end(node * head, int val);
void print_list(node * head);

int main(void) {
    node * head = (node *) malloc(sizeof(node));

    if (head == NULL) {
        return 1;
    }

    head->value = 0;
    head->next = NULL;

    for (int i = 1; i <= 11; i++) {
        insert_at_end(head, i);
    }

    print_list(head);
    return 0;
}


void insert_at_end(node * head, int val) {
    node * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = (node *) malloc(sizeof(node));
    current->next->value = val;
    current->next->next = NULL;
}


void print_list(node * head) {
    node * current = head;
    printf("[");
    while (current->next != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL]\n");
}
