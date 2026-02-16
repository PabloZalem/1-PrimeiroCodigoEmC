#include <stdio.h>
#include <stdlib.h>

int main() {
    // Desenvolver um programa que imprima a media aritmetica de 3 numeros de 8, 9 e 7
    int num1 = 8, num2 = 9, num3 = 7;
    float media = (num1 + num2 + num3) / 3.0; // Dividir por 3.0 para obter um resultado em ponto flutuante
    printf("A media aritmetica de %d, %d e %d e: %.2f\n", num1, num2, num3, media);

    system("pause");
    system("cls");

    return 0;
}