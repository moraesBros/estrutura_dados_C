#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int vetor[TAM];
    int n = 20;
    int intervalo_max = 20;

    // Marca o tempo de início
    clock_t inicio = clock();

    srand(time(NULL));

    vetor[0] = rand() % 10;

    for (int i = 1; i < n; ++i) {
        vetor[i] = vetor[i - 1] + (rand() % intervalo_max);
    }

    // Imprime os valores do vetor
    printf("Vetor de números ordenados com intervalos aleatórios:\n");
    for (int i = 0; i < n; ++i) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Marca o tempo de fim
    clock_t fim = clock();

    // Calcula o tempo total decorrido
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\nTempo de execução: %g segundos\n", tempo_execucao);

    return 0;
}
