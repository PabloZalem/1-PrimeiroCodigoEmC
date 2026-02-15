#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 20;

    // Deslocamento OU
    a = a ^ b;
    printf("O resultado do deslocamento OU de 5 por 20 e: %d\n", a);
    system("pause");
    system("cls");


    int c = 5;
    int d = 20;
    // Deslocamento OU
    c = c | d;
    printf("O resultado do deslocamento OU de 5 por 20 e: %d\n", c);
    system("pause");
    system("cls");

    return 0;
}