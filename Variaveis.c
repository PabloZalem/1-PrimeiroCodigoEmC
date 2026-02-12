#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 25; // inteiro, -2.147.483.648 a 2.147.483.647
    unsigned int numero = 100; // inteiro sem sinal, 0 a 4.294.967.295
    float altura = 1.75; // ponto flutuante, 3.4E-38 a 3.4E+38
    char nome[20] = "João"; // char 1 byte, -127 a 127
    unsigned char letra = 'A'; // 0 a 255
    signed char simbolo = '@'; // -127 a 127

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Letra: %c\n", letra);
    printf("Símbolo: %c\n", simbolo);
    printf("Número: %u\n", numero);

    return 0;
}