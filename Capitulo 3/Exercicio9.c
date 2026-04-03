#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;
    int acumulador = 0;

    for(int i = 100; i <= 200; i++) {
        acumulador += i;
    }

    printf("A soma dos numeros de 100 a 200 e: %d\n", acumulador);

    system("pause");
    system("cls");

    return 0;
}