#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
} node;


void insert_at_end(node * head, int val); 


int main(void) {
    node * head = (node *) malloc(sizeof(node));

    if (head == NULL) {
        return 1;
    }

    head->value = 0;
    head->next = NULL;

    for (int i = 1; i <= 10; i++) {
        insert_at_end(head, i);
    }

    printf("the head value is %d\n", head->value);
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
