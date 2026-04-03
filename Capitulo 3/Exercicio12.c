#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;
    printf("A área do triangulo e: %.2f\n", area);

    system("pause");
    system("cls");
    return 0;
}