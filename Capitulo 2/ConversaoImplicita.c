#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    char b = 'A'; // 'A' tem o valor ASCII 65
    float c = 3.14;

    printf("Valor de a (int): %d\n", a);
    printf("Valor de b (char): %c\n", b);
    printf("Valor de c (float): %.2f\n", c);

    // Conversão implícita
    a = c; // O valor de c (3.14) é convertido para int (3)
    printf("Valor de a apos conversao implicita de c: %d\n", a);

    c = a; // O valor de a (3) é convertido para float (3.0)
    printf("Valor de c apos conversao implicita de a: %.2f\n", c);

    b = a; // O valor de a (3) é convertido para char (caractere com código ASCII 3, que é um caractere de controle)
    printf("Valor de b apos conversao implicita de a: %c (ASCII %d)\n", b, b);

    c = b; // O valor de b (caractere com código ASCII 3) é convertido para float (3.0)
    printf("Valor de c apos conversao implicita de b: %.2f\n", c);

    system("pause");

    return 0;
}