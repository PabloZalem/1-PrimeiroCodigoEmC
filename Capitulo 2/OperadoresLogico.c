#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 10;

    // Logical AND
    if (a > 0 && b > 0) {
        printf("Ambos a e b sao positivos.\n");
    }

    // Logical OR
    if (a > 0 || b < 0) {
        printf("A ou b sao positivos.\n");
    }

    // Logical NOT
    if (!(a < 0)) {
        printf("a nao e negativo.\n");
    }

    return 0;
}