#include <stdio.h>
#include <stdlib.h>
#define VALOR_HORA 12.00
#define CADA_DEPENDENTE 40.00
#define DESCONTO_INSS 0.085
#define DESCONTO_IR 0.05

int main() {
    int numeroDeHorasDeTrabalho = 0, numeroDeDependentes = 0;
    int salarioBruto = 0;
    float salarioLiquido = 0.0;

    printf("Digite o numero de horas de trabalho: ");
    scanf("%d", &numeroDeHorasDeTrabalho);

    salarioBruto = numeroDeHorasDeTrabalho * VALOR_HORA;
    printf("Valor do salario bruto: R$ %d\n", salarioBruto);

    salarioLiquido = salarioBruto - (salarioBruto * DESCONTO_INSS) - (salarioBruto * DESCONTO_IR);
    printf("Valor do salario liquido: R$ %.2f\n", salarioLiquido);

    printf("O valor descontado do INSS: R$ %.2f\n", salarioBruto * DESCONTO_INSS);
    printf("O valor descontado do IR: R$ %.2f\n", salarioBruto * DESCONTO_IR);

    system("pause");
    system("cls");
    return 0;
}