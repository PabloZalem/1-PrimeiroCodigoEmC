#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 200;
    int acumulador = 0;

    for(int i = num; i > 0; i--) {
        printf("%d \n", i);
        acumulador += i;
    }

    printf("A soma dos numeros de 1 a %d e: %d", num, acumulador);

    return 0;
}