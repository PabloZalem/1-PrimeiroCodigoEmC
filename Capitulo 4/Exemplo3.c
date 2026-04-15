#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float valor = 0, inferior = 0;

    printf("Entre com um valor real (com casas decimais): ");
    scanf("%f", &valor);

    inferior = floor(valor);

    printf("O valor inteiro inferior eh: %.f\n", inferior);

    system("pause");
    system("cls");

    return 0;
}