#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeseis[7]="Silvie";
    int nrocem = 100;
    float media = 1.68;

    printf("Int equivale a %d bytes\n", sizeof(int));
    printf("Float equivale a %d bytes\n", sizeof(float));
    printf("Char equivale a %d bytes\n", sizeof(char));
    printf("O nome %s tem %d bytes\n", nomeseis, sizeof(nomeseis));
    printf("O numero %d tem %d bytes\n", nrocem, sizeof(nrocem));
    printf("A media %f tem %d bytes\n", media, sizeof(media));

    system("pause");

    return 0;
}