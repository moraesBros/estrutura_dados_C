#include <stdio.h>

#define TAM 100

int main(){
int quadrado[TAM];
int n = 20;

for(int i=0; i < n; ++i){
    quadrado[i] = (i+1)*(i+1);
}
    
    // Opcional: imprimir os valores para verificar
    for (int i = 0; i < n; ++i) {
        printf("quadrado[%d] = %d\n", i, quadrado[i]);
    }

    return 0;
}
