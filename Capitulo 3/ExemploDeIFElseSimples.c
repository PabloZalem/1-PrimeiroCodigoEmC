#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1=0, n2=0, media=0;

    // Inputar
    printf("Informar a primeria nota: ");
    scanf("%f", &n1);
    printf("\nInformar a segunda nota: ");
    scanf("%f", &n2);

    // Calcular Media
    media = (n1 + n2)/ 2;

    if (media >= 7.0) {
        printf("* * * APROVADO * * *\n");
    } else {
        printf("* * * REPROVADO * * *\n");
    }
    
    system("pause");
    system("cls");

    return 0;
}