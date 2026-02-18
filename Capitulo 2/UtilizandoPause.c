#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;

    printf("### CALCULO ###\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    int total = num * num;
    printf("O resultado do numero %d multiplicado por ele mesmo e: %d\n", num, total);
    system("pause"); // Aguarda o usuário pressionar Enter para sair

    return 0;
}