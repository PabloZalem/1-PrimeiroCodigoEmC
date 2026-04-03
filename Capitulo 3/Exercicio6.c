#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, a = 0, b = 1, proximo;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo; 
    }

    system("pause");
    system("cls");

    return 0;
}