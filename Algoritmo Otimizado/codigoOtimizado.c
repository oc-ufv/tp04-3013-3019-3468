#include <stdio.h>
#include <stdlib.h>

main () {
    int i,j;
    int x[100][100];

    for (j=0; j<100; j++) {
        int *p = x[j];
        for (i=0; i<100; i++) {
            *p++ = i+j;
        }
    }
    
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

return 0;
}
