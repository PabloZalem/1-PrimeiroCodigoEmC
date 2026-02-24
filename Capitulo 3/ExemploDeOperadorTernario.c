 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int y=0, x=0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("\n\n");

    y=x<=0 ? x+1 : x-1;
    printf("O resultado de y: %d\n", y);

    system("pause");
    system("cls");

    return 0;
}