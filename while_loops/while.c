#include <stdio.h>

int main(void) {
    int n = 0;
    while (n < 10) {
        n++;
        if (n % 2 == 1) {
            //go back to the start of the while
            continue;
        }
        printf("The nuber %d is even.\n", n);
    }
    return 0;
}
