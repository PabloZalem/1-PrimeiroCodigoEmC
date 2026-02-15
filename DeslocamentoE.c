#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 20;

    // Deslocamento E
    a = a & b;
    printf("O resultado do deslocamento E de 5 por 20 e: %d\n", a);

    return 0;
}