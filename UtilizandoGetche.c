#include <stdio.h>
#include <conio.h>

int main() {
    int num = 0;

    printf("### CALCULO ###\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    int total = num * num;
    printf("O resultado do numero %d multiplicado por ele mesmo e: %d\n", num, total);
    printf("Pressione qualquer tecla para sair...");
    getche(); // Aguarda o usuário pressionar uma tecla e exibe a tecla pression

    return 0;
}