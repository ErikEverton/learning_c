#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nrows = 2;
    int ncols = 5;
    int i, j;

    char **pvowels = (char **) malloc(nrows * sizeof(char *));
    pvowels[0] = (char *) malloc(ncols * sizeof(char));
    pvowels[1] = (char *) malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++) {
        for (j = 0; j < ncols; j++) {
            printf("%c", pvowels[i][j]);
        }
        printf("\n");
    }

    free(pvowels[0]);
    free(pvowels[1]);

    free(pvowels);

    return 0;
}
