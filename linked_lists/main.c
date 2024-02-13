#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node * next;
} node;


struct node * insert_at_beggining(node * head, int val);
void insert_at_end(node * head, int val);
void print_list(node * head);
struct node * remove_head(node * head);

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

    for (int j = 100; j >= 90; j--) {
        head = insert_at_beggining(head, j);
    }

    print_list(head);

    for (int i = 0; i <= 10; i++) {
        head = remove_head(head);
    }

    print_list(head);

    
    return 0;
}


struct node * insert_at_beggining(node * head, int val) {
    node * new_node = (node *) malloc(sizeof(node));
    new_node->value = val;
    new_node->next = head;
    return new_node;
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


struct node * remove_head(node * head) {
    head = head->next;
    return head;
}
