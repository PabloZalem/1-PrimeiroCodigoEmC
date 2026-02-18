#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 2;

    // Deslocamento à direita
    int resultado = a >> b;
    printf("O resultado do deslocamento a direita de %d por %d e: %d\n", a, b, resultado);

    return 0;
}