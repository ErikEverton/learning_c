#include <stdio.h>

//C does not have boolean type, but we can do this way
#define BOOL char
#define False 0
#define TRUE 1

//defining variables
int foo;
int bar = 1;

int main(void) {
    int a = 0, b = 1, c= 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d\n", a);
    return 0;
}
