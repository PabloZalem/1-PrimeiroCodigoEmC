#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ler um numero float e imprimir a terça parte do numero
    float num;
    printf("Digite um numero float: ");
    scanf("%f", &num);
    printf("O numero digitado e: %.2f\n", num);
    printf("A terca parte de %.2f e: %.6f\n", num, num / 3);
    system("pause"); // Aguarda o usuário pressionar Enter para sair
    system("cls"); // Limpa a tela

    return 0;
}