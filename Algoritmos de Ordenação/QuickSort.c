#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quick(int n, int *vetor);
void Ordena(int esq, int dir, int *vetor);
void Particao (int esq, int dir, int* i, int* j, int* vetor);

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
    quick(n, vetor);
    printf("Vetor ordenado: \n");
    for (i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
}

void Ordena(int esq, int dir, int *vetor){
    int i, j;
    Particao(esq, dir, &i, &j, vetor);
    if (esq < j) Ordena(esq, j, vetor);
    if (i<dir) Ordena(i, dir, vetor);
}

void quick(int n, int *vetor){
    Ordena(0, n-1, vetor);
}

void Particao (int esq, int dir, int* i, int* j, int* vetor){
    int pivo, aux;
    *i= esq; *j = dir;
    pivo = vetor[(*i+*j)/2];
    do {
        while (pivo > vetor[*i]) (*i)++;
        while (pivo < vetor[*j]) (*j)--;
        if (*i <= *j){
            aux = vetor[*i]; vetor[*i] = vetor[*j]; vetor[*j] = aux;
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

