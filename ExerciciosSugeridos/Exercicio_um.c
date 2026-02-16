#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarando as variáveis
    int a, b;

    // Solicitando ao usuário que insira os valores
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Imprimindo os valores inseridos
    printf("O valor de a e: %d\n", a);
    printf("O valor de b e: %d\n", b);

    system("pause"); // Aguarda o usuário pressionar Enter para sair
    system("cls"); // Limpa a tela

    return 0;
}