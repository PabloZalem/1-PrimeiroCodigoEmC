#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int tipo = 0;

    printf("\n*** R E C E B E N D O  D A D O S ***\n");

    do
    {
        printf("\n\n Informe o tipo de venda 1-Varejista ou 2-Atacado: ");
        scanf("%d", &tipo);
        if (tipo != 1 && tipo != 2) {
            printf("\n\n Tipo informado invalido!!!");
        } else if (tipo == 1) {
            printf("\n\nO Tipo informado foi VAREJISTA\n");
        } else {
            printf("\n\nO Tipo informado foi ATACADO\n");
        }

    } while (tipo != 1 && tipo != 2);

    system("pause");
    system("cls");

    return 0;
}