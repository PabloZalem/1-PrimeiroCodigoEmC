#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    float b = 200.210;
    system("cls");

    printf("- - - - VALORES INICIAIS - - - - \n");
    printf("Valor de a (int): %d\n", a);
    printf("Valor de b (float): %.3f\n", b);
    printf("\n");

    printf("- - - - CONVERSAO EXPLICITA - - - - \n");
    printf("Valor de a apos conversao explicita de b: %d\n", a = (int) b); // O valor de b (200.210) é convertido para int (200)
    printf("\n\n");

    a = 30.0;
    b = 0.0;
    printf("- - - - VALORES INICIAIS - - - - \n");
    printf("Valor de a (int): %d\n", a);
    printf("Valor de b (float): %.1f\n", b);
    printf("\n");
    printf("- - - - CONVERSAO EXPLICITA - - - - \n");
    printf("Valor de b apos conversao explicita de a: %.1f\n", b = (float) a); // O valor de a (30) é convertido para float (30.0)

    system("pause");
    system("cls");

    return 0;
}