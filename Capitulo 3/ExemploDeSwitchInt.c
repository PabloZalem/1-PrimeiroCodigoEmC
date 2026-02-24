#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int x = 0;

    printf("Selecione o valor de x: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("A variavel x possui o valor correspondente de 1\n");
        break;
    case 2:
        printf("A variavel x possui o valor correspondente de 2\n");
        break;
    case 3:
        printf("A variavel x possui o valor correspondente de 3\n");
        break;
    default:
        printf("Nenhum das opcoes anteriores...");
        break;
    }

    system("pause");
    system("cls");

    return 0;
}