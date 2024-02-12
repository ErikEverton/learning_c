#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name;
    int age;
} person;

int main(void) {
    person * myperson = (person *) malloc(sizeof(person));
    myperson->name = "John";
    myperson->age = 27;
    printf("The %s age is %d\n", myperson->name, myperson->age);
    free(myperson);
    return 0;
}
