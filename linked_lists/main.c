#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    struct node * next;
} node;


int main(void) {
    node * head = (node *) malloc(sizeof(node));

    if (head == NULL) {
        return 1;
    }

    head->value = 0;
    head->next = NULL;

    printf("the head value is %d\n", head->value);
    return 0;
}
