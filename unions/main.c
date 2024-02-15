#include <stdio.h>


union intParts {
    int theInt;
    char bytes[sizeof(int)];
};

struct operator {
    int type;
    union {
        int intNum;
        float floatNum;
        double doubleNum;
    } types;
};

union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    };
    int coins[4];
};


int main(void) {
    union intParts parts;
    parts.theInt = 5648;

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
        parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);

    int theInt = parts.theInt;
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
            theInt, *((char*)&theInt+0), *((char*)&theInt+1), *((char*)&theInt+2), *((char*)&theInt+3));

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
            theInt, ((char*)&theInt)[0], ((char*)&theInt)[1], ((char*)&theInt)[2], ((char*)&theInt)[3]);


    struct operator op;
    op.type = 0;
    op.types.intNum = 352;

    union Coins change;
    for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
    {
        scanf("%i", change.coins + i); 
    }
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n",
        change.quarter, change.dime, change.nickel, change.penny);


    return 0;
}
