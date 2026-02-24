#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int opcao; // Declaracao da variavel opcao do tipo inteiro

    system("cls"); // Limpeza de tela

    printf("#############################################\n");
    printf("################## MENU #####################\n");
    printf("#############################################\n");
    printf("1- Cadastro de Clientes\n");
    printf("2- Cadastro de Contas\n");
    printf("\nOpcao: ");
    scanf("%d", &opcao);


    switch (opcao) {
    case 1:
        printf("\nCadastro de clientes...\n");
        break;
    case 2:
        printf("\nCadastro de clientes...\n");
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    printf("\n Pressione uma tecla para finalizar...");
    getch();

    return 0;
}