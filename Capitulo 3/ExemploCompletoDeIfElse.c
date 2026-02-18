#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variaveis
    float n1=0, n2=0, media=0;

    // Informar os valores
    printf("Informar a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInformar a segunda nota: ");
    scanf("%f", &n2);

    // Calcular media
    media = (n1 + n2) / 2;

    // IF-ELSE
    if (media >= 7.0) {
        printf("* * * APROVADO * * *\n");
        printf("Nota: %.2f", media);
    } else if (media <= 4.0) {
        printf("* * * REPROVADO * * *\n");
         printf("Nota: %.2f", media);
    } else {
        printf("* * * RECUPERACAO * * *\n");
         printf("Nota: %.2f", media);
    }
    
    

    return 0;
}