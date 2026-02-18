#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarando as variaveis
    float n1 = 0, n2 = 0, media = 0;

    // Solicitando as informações
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    // Calculando a media
    media = (n1 + n2) / 2;
    printf("\n\n Media da sua nota: %.2f", media);
    printf("\n\n");

    // Condicional Simples
    if (media >= 7)
    {
        printf("* * * APROVADO * * *\n\n");
    }
    
    system("pause");
    system("cls");

    return 0;
}