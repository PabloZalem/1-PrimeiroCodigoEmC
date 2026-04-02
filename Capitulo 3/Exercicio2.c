#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = 0;
    int acc = 0;
    int quantidade = 0;

    do {
        // Digite um valor inteiro
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        acc += num;
        quantidade++;

    } while (num > 0); // Enquanto o número for positivo, continue pedindo

    printf("Media dos numeros positivos: %d\n", acc / quantidade);

    return 0;
}