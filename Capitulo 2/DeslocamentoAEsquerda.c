#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 3;

    a = a << b; // Desloca os bits de a para a esquerda em b posições

    printf("Valor de a apos deslocamento: %d\n", a); // Imprime o valor de a após o deslocamento

    return 0;
}