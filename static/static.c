#include <stdio.h>

int runner() {
    /*
        Variables can be declared as static to increase their scope up to file containing them.
        As a result, these variables can be accessed anywhere inside a file.
    */
    static int count = 0;
    count++;
    return count;
}

/* 
    If we declare a function with static, the scope of that function is reduced to the file containing it.
*/

static void fun(void) {
    printf("I am a static function.\n");
}


int main(void) {
    printf("%d ", runner());
    printf("%d ", runner());
    fun();
    return 0;
}
