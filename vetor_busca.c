#include <stdio.h> // printf
#include <stdlib.h> // bsearch

int compara(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
} // compara dois ponteiros A e B, converte para int*, retorna a diferença entre os dois números

int main() {
    int vetor[] = {10, 20, 30, 40, 50}; // define o vetor, Importante: o vetor deve estar ordenado
    int chave = 30; // define a chave que será procurada

    int *resultado = (int *)bsearch(&chave, vetor, 5, sizeof(int), compara); 
  
          /* parâmetros:

            &chave → Ponteiro para o valor que queremos encontrar.

            vetor → Ponteiro para o array onde será feita a busca.

            5 → Quantidade de elementos no vetor.

            sizeof(int) → Tamanho de cada elemento em bytes.

            compara → Função de comparação personalizada.

            Se bsearch() encontrar o elemento, retorna um ponteiro para ele. Caso contrário, retorna NULL.
          */
  
    if (resultado) {
        printf("Elemento %d encontrado no índice %ld.\n", chave, resultado - vetor);
    } else {
        printf("Elemento %d não encontrado.\n", chave);
    } // verifica o resultado da busca

    return 0;
}
