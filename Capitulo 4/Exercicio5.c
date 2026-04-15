#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Valor de seno
    float graus = 0;

    printf("O valor de seno: ");
    scanf("%f", &graus);

    printf("\n\nO valor do seno eh: %f\n\n", sin(graus));

    system("pause");
    system("cls");

    return 0;
}