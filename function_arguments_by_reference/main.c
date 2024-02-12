#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

void addone(int *pointer_to_n);
void move(point * p);

int main(void) {
    int n = 0;
    addone(&n);
    
    point p;
    p.x = 0;
    p.y = 0;

    move(&p);

    printf("The x value: %d\n", p.x);
    printf("The y value: %d\n", p.y);

    return 0;
}


void addone(int *pointer_to_n) {
    (*pointer_to_n)++;
}

void move(point * p) {
    p->x++;
    p->y++;
}

