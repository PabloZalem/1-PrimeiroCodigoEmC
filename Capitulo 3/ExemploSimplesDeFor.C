#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int x, y;

    for(x = 0; x < 10; x++) {
        printf("Valor de x: %d\n", x);
    }

    system("pause");
    system("cls");


    for(x=0, y=1; x<10 && y<20; x++, y++) {
        printf("\nNumero pertecente a x: %d\n", x);
        printf("Numero pertecente a y: %d\n", y);
    }

    return 0;
}