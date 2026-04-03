#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50], sexo[2];
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf("%s", sexo);

    if (strcmp(sexo, "M") == 0) {
        printf("O peso ideal para %s e: %.2f kg\n", nome, (72.7 * altura) - 58);
    } else if (strcmp(sexo, "F") == 0) {
        printf("O peso ideal para %s e: %.2f kg\n", nome, (62.1 * altura) - 44.7);
    } else {
        printf("Sexo inválido. Por favor, digite M ou F.\n");
    }
    

    system("pause");
    system("cls");
    return 0;
}