#include <stdio.h>

unsigned int factorial(unsigned int x);

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("The factorial of %d is %d\n", i, factorial(i));
    }
    return 0;
}

unsigned int factorial(unsigned int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x-1);
}

