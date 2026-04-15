#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Funcao Ceil
    float valor=0, superior=0;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    superior = ceil(valor);

    printf("\n\nNumero superior (s/casas decimais) que %f eh %.2f\n", valor, superior);

    system("pause");
    system("cls");

    return 0;
}