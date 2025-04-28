#include <stdio.h>

int main(void) {
    char str[] = " 09AZaz";
    char letra;
    printf("Tamanho de str=%d\n", (int)sizeof(str));
    int i=0;
    do {
        letra = str[i];
        printf("str[%d]=%c %02x\n", i, letra, letra);
        i += 1;
    } while( letra);
    
    return 0;
}
