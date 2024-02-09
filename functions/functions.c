#include <stdio.h>

int foo(int bar);

void moo();

int main(void) {
    int value;
    value = foo(3);
    printf("%d\n", value);
    moo();
    return 0;
}

int foo(int bar) {
    return bar * 2;
}

void moo() {
    printf("moo\n");
}
 