#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char letra;

    printf("Selecione uma letra: ");
    scanf("%c", &letra);

    switch (letra) {
    case 'A':
        printf("A variavel letra possui o valor correspondente A\n");
        break;
    case 'B':
        printf("A variavel letra possui o valor correspondente B\n");
        break;
    default:
        printf("Nenhum das opcoes anteriores...");
        break;
    }

    system("pause");
    system("cls");

    return 0;
}