#include <stdio.h>
#include <stdlib.h>

int main() {
    // Receber um numero inteiro e imprimir seu sucessor e antecessor
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("O numero digitado e: %d\n", num);
    printf("O sucessor de %d e: %d\n", num, num + 1);
    printf("O antecessor de %d e: %d\n", num, num - 1);
    system("pause"); // Aguarda o usuário pressionar Enter para sair
    system("cls"); // Limpa a tela

    return 0;
}