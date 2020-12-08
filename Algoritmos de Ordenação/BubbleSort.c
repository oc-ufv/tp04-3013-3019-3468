#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int n, int *vetor);

int main(){

    srand(time(NULL));
    int n, i;
    printf("Entre com o tamanho do vetor: \n");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        vetor[i] = rand() % 10000;
    }
    bubble(n, vetor);
    printf("Vetor ordenado: \n");
    for (i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
}

void bubble(int n, int *vetor){
    int i, j, aux;

    for (i=0; i<n-1; i++){
        for (j=0; j<n-1 ;j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

