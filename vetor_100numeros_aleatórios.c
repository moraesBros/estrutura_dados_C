#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int vetor[TAM];
    int n = 20;

    // Inicializa a semente para gerar números aleatórios diferentes a cada execução
    srand(time(NULL));

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < n; ++i) {
        vetor[i] = rand() % 100; // Números aleatórios de 0 a 99
    }

    // Imprime os valores do vetor
    printf("Vetor de números aleatórios:\n");
    for (int i = 0; i < n; ++i) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
