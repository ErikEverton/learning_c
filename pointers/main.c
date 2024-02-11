#include <stdio.h>

int main(void) {
    int a = 1;

    //define a pointer variable, and point to a using the & operator

    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    // let's change the variable a 
    a += 1;

    // we just changed the variable again!
    *pointer_to_a += 1;

    printf("The value of a now is %d\n", a);

    return 0;
}
