#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
    int vetor[TAM];
    int n = 20;
    int intervalo_max = 20; // Defina o intervalo máximo entre valores

    srand(time(NULL)); // Garante que os números sejam diferentes a cada execução

    // Primeiro número aleatório
    vetor[0] = rand() % 10; // Número inicial pode ser qualquer um entre 0 e 9

    // Preenche o vetor garantindo ordem crescente
    for (int i = 1; i < n; ++i) {
        vetor[i] = vetor[i - 1] + (rand() % intervalo_max); // Intervalo aleatório
    }

    // Imprime os valores do vetor
    printf("Vetor de números ordenados com intervalos aleatórios:\n");
    for (int i = 0; i < n; ++i) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
