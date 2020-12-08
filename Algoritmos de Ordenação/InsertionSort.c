#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion(int n, int *vetor);

int main()
{
    srand(time(NULL));
    int n, i;
    printf("Entre com o tamanho do vetor: \n");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        vetor[i] = rand() % 10000;
    }
    insertion(n, vetor);
    printf("Vetor ordenado: \n");
    for (i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
}

void insertion(int n, int *vetor){
    int i, j, aux;
    for (i=1; i<n; i++){
        aux = vetor[i];
        for(j=i; (j>0)&&(aux < vetor[j-1]); j--)
            vetor[j] = vetor[j-1];
        vetor[j]= aux;
    }
}

