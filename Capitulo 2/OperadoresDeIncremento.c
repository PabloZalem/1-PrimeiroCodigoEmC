#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5; // Inicializa x com o valor 5

    int primeiro = ++x; // Incrementa x antes de atribuir a primeiro
    printf("Valor de primeiro: %d\n", primeiro); // Imprime o valor de primeiro
    printf("Valor de x apos primeiro: %d\n", x); // Imprime o valor de x após o incremento

    system("pause"); // Pausa a execução do programa para visualizar os resultados
    system("cls"); // Limpa a tela

    int y = 5; // Inicializa y com o valor 5
    int segundo = y++; // Atribui o valor de y a segundo e depois incrementa y
    printf("Valor de segundo: %d\n", segundo); // Imprime o valor de segundo
    printf("Valor de y apos segundo: %d\n", y); // Imprime o valor de y após o incremento

    system("pause"); // Pausa a execução do programa para visualizar os resultados
    system("cls"); // Limpa a tela

    return 0;
}