#include <stdio.h>

int main(void) {
    int numbers[10]; //This defines an array of integes with a maximum of 10 elements

    //populating the array
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    printf("The 7th value in the array is %d\n", numbers[6]);
}
