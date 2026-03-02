#include <stdio.h>
#include <stdlib.h>
# define quantidade 3

int main() {
    float nota, total, media;

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &nota);
        total += nota;
    }

    media = total / quantidade;
    printf("Media: %.2f\n", media);

    if (media > 6.9){
        printf("Aprovado\n");
    } else if (media < 5.0){
        printf("Reprovado\n");
    } else {
        printf("Exame\n");
    }
    
    system("pause");
    system("cls");
    return 0;
}