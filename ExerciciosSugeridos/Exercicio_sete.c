#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ler o valor de um produto e imprimir o novo valor, tendo em vista o desconto informado
    // Declarando as variáveis
    float valorProduto, desconto, valorComDesconto;

    // Solicitando o valor do produto
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    // Solicitando o valor do desconto
    printf("Digite o valor do desconto (em porcentagem): ");
    scanf("%f", &desconto);

    // Calculando o valor com desconto
    valorComDesconto = valorProduto - (valorProduto * (desconto / 100));
    // Imprimindo o valor com desconto
    printf("O valor do produto com desconto e: %.2f\n", valorComDesconto);

    system("pause");
    system("cls");

    return 0;
}