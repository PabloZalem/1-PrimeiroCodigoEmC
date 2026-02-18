#include <stdio.h>
#include <stdlib.h>

int main() {
    // Criar um proframa que calcule e imprima a area de um triangulo: formula: area = (base * altura) / 2
    // Declarar as variaveis
    float base, altura, area;

    // Solicitar ao usuario a base e a altura do triangulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    
    // Calcular a area do triangulo
    area = (base * altura) / 2;
    // Imprimir o resultado
    printf("A area do triangulo e: %.2f\n", area);
    system("pause");
    system("cls");

    return 0;
}