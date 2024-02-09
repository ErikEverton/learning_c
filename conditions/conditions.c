#include <stdio.h>

int main(void) {
    int target = 10;
    if (target == 10) {
        printf("The targer number is ");
    }

    printf("%d\n", target);

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.\n");
    }else if (foo == bar) {
        printf("foo is equal to bar\n");
    } else {
        printf("foo is greater than bar\n");
    }

    return 0;
}
