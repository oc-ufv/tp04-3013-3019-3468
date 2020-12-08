#include <stdio.h>
#include <stdlib.h>

void radix(int n, int *vetor);

int main(){

    srand(time(NULL));
    int n, i;
    printf("Entre com o tamanho do vetor: \n");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        vetor[i] = rand() % 10000;
    }
    radix(n, vetor);
    printf("Vetor ordenado: \n");
    for (i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
}

void radix(int tamanho, int *vetor) {
    int i;
    int *b;
    int maior = vetor[0];
    int exp = 1;

    b = (int *)calloc(tamanho, sizeof(int));

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > maior)
    	    maior = vetor[i];
    }

    while (maior/exp > 0) {
        int bucket[10] = { 0 };
    	for (i = 0; i < tamanho; i++)
    	    bucket[(vetor[i] / exp) % 10]++;
    	for (i = 1; i < 10; i++)
    	    bucket[i] += bucket[i - 1];
    	for (i = tamanho - 1; i >= 0; i--)
    	    b[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
    	for (i = 0; i < tamanho; i++)
    	    vetor[i] = b[i];
    	exp *= 10;
    }

    free(b);
}
