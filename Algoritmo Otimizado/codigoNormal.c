#include <stdio.h>
#include <stdlib.h>

main () {
    int i,j;
    int x[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            x[j][i] = i + j;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

return 0;
}
