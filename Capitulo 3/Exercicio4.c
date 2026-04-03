#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 0) {
        printf("Idade inexistente\n");
    } else if (idade > 0 && idade <= 12) {
        printf("Crianca\n");
    } else if (idade > 12 && idade <= 18) {
        printf("Adolescente\n");
    } else if (idade > 18 && idade <= 60) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    system("pause");
    system("cls");

    return 0;
}