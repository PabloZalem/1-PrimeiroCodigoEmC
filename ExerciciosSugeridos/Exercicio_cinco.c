#include <stdio.h>
#include <stdlib.h>

int main() {
    // Receber dois numeros reais (float) e imprimir a media aritmetica com a mensagem "media: " antes do resultado

    // Declarando as variáveis
    float num1, num2;

    // Solicitando ao usuário que insira os valores
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);

    // Calculando a média aritmética
    float media = (num1 + num2) / 2;

    // Imprimindo os valores inseridos e a média aritmética
    printf("O primeiro numero digitado e: %.2f\n", num1);
    printf("O segundo numero digitado e: %.2f\n", num2);
    printf("A media aritmetica dos numeros %.2f e %.2f e: %.2f\n", num1, num2, media);
    system("pause"); // Aguarda o usuário pressionar Enter para sair
    system("cls"); // Limpa a tela

    return 0;
}