#include <stdio.h>

typedef struct {
    char * brand;
    int model;
} vehicle;


int main(void) {
    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;
    printf("Car brand: %s\nCar model: %d\n", mycar.brand, mycar.model);
    return 0;
}
