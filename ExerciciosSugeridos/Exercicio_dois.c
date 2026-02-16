#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declarando as variáveis
    float a, b;

    // Solicitando ao usuário que insira os valores
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    // Imprimindo os valores inseridos
    printf("O valor de a e: %.2f\n", a);
    printf("O valor de b e: %.2f\n", b);

    system("pause"); // Aguarda o usuário pressionar Enter para sair
    system("cls"); // Limpa a tela

    return 0;
}