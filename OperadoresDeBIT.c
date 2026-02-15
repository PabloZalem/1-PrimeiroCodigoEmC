#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    a = 5; // 0000 0101
    b = 2; // 0000 0010
    system("cls");
    printf("\n - - - - DESLOCAMENTO A ESQUERDA - - - - \n");
    printf("Valores de a e b: %d e %d\n", a, b);
    printf("a << b: %d\n", a << b); // Desloca os bits de 'a' para a esquerda por 'b' posições (0001 0100 = 20)
    printf("\n\n");

    printf("Ou: A <<= B - resultado: %d\n", a <<= b); // Atribuição de deslocamento à esquerda (a = a << b, resultado: 20)
    printf("\n\n");
    system("pause");
    system("cls");


    a = 5; // 0000 0101
    b = 2; // 0000 0010
    printf("\n - - - - DESLOCAMENTO A DIREITA - - - - \n");
    printf("Valores de a e b: %d e %d\n", a, b);
    printf("a >> b: %d\n", a >> b); // Desloca os bits de 'a' para a direita por 'b' posições (0000 0001 = 1)
    printf("\n\n");

    printf("Ou: A >>= B - resultado: %d\n", a >>= b); // Atribuição de deslocamento à direita (a = a >> b, resultado: 1)
    printf("\n\n");
    system("pause");
    system("cls");


    a = 5; // 0000 0101
    b = 20; // 0001 0100
    printf("\n - - - - OPERADOR DE BIT A BIT E - - - - \n");
    printf("Valores de a e b: %d e %d\n", a, b);
    printf("a & b: %d\n", a & b); // Realiza a operação AND bit a bit entre 'a' e 'b' (0000 0100 = 4)
    printf("\n\n");

    printf("Ou: A &= B - resultado: %d\n", a &= b); // Atribuição de operador AND bit a bit (a = a & b, resultado: 4)
    printf("\n\n");
    system("pause");
    system("cls");


    a = 5; // 0000 0101
    b = 20; // 0001 0100
    printf("\n - - - - OPERADOR DE BIT A BIT OU - - - - \n");
    printf("Valores de a e b: %d e %d\n", a, b);
    printf("a | b: %d\n", a | b); // Realiza a operação OR bit a bit entre 'a' e 'b' (0001 0101 = 21)
    printf("\n\n");

    printf("Ou: A |= B - resultado: %d\n", a |= b); // Atribuição de operador OR bit a bit (a = a | b, resultado: 21)
    printf("\n\n");
    system("pause");
    system("cls");

    a = 5; // 0000 0101
    b = 20; // 0001 0100
    printf("\n - - - - OPERADOR DE BIT A BIT XOR - - - - \n");
    printf("Valores de a e b: %d e %d\n", a, b);
    printf("a ^ b: %d\n", a ^ b); // Realiza a operação XOR bit a bit entre 'a' e 'b' (0001 0001 = 17)
    printf("\n\n");

    printf("Ou: A ^= B - resultado: %d\n", a ^= b); // Atribuição de operador XOR bit a bit (a = a ^ b, resultado: 17)
    printf("\n\n");
    system("pause");
    system("cls");

    a = 170; // 1010 1010
    printf("\n - - - - OPERADOR DE BIT A BIT COMPLEMENTO - - - - \n");
    printf("Valor de a: %d\n", a);
    printf("~a: %d\n", ~a); // Realiza a operação de complemento bit a bit em 'a' (0101 0101 = -171 em complemento de dois)
    printf("\n\n");
    system("pause");
    system("cls");

    return 0;
}