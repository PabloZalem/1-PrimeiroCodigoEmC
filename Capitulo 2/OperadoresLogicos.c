#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 98;
    int b = 10;

    // Operadores Logicos
    printf("%d == %d: %d\n", a, b, a == b); // Igualdade
    printf("%d != %d: %d\n", a, b, a != b); // Diferente
    printf("%d > %d: %d\n", a, b, a > b);   // Maior que
    printf("%d < %d: %d\n", a, b, a < b);   // Menor que
    printf("%d >= %d: %d\n", a, b, a >= b); // Maior ou igual a
    printf("%d <= %d: %d\n", a, b, a <= b); // Menor ou igual a

    return 0;
}