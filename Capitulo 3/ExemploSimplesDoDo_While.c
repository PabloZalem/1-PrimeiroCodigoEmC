#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int contador = 0;

    do {
        printf("\n Numeros: %d", contador);
        contador++;
    } while (contador < 10);

    system("pause");
    system("cls");

    return 0;
}