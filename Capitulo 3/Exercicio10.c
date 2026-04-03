#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 0;

    // Tabuada;
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &num1);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num1, i, num1 * i);
    }

    system("pause");
    system("cls");
    return 0;
}