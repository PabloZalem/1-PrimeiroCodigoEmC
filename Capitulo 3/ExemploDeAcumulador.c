#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define limite 35

int main() {
    int acumulador = 0;

    for (int i = 1; i <= limite; i++) {
        acumulador += i;
    }

    printf("Acumulador: %d\n", acumulador);
    system("pause");
    system("cls");
    return 0;
}