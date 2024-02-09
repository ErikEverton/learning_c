#include <stdio.h>
#include <string.h>

/*In c strings are arrays of characters*/

int main(void) {
    //This string can only be read
    //char * name = "John Smith";

    //This one can be manipulated
    char name[] = "John";

    printf("%ld\n", strlen(name));


    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    
    //String concatenation
    char dest[20]="Hello";
    char src[20]="World";

    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 20);
    printf("%s\n", dest);

    return 0;
}
