#include <stdio.h>
#include <stdlib.h>
#define PRECO_DE_FABRICA 0.45
#define LUCRO_DO_DISTRIBUIDOR 0.28
#define DECONTO_PARA_CARRO_MIL 0.10

int main() {
    // Venda de um automóvel, potencia de motor e o preco de fabricaçao
    char modelo[50];
    float potenciaDoMotor = 0.0;
    float precoFinal = 0.0;
    float precoDeFabrica = 0.0;

    printf("Digite o modelo do automovel: ");
    scanf("%49s", modelo);

    printf("Digite o preco de fabrica do automovel: ");
    scanf("%f", &precoDeFabrica);

    printf("Digite a potencia do motor: ");
    scanf("%f", &potenciaDoMotor);

    printf("Modelo do automovel: %s\n", modelo);
    printf("Potencia do motor: %.1f cavalos\n", potenciaDoMotor);

    precoFinal = precoDeFabrica + (precoDeFabrica * PRECO_DE_FABRICA) + (precoDeFabrica * LUCRO_DO_DISTRIBUIDOR);

    if(potenciaDoMotor == 1.0)
        precoFinal -= precoFinal * DECONTO_PARA_CARRO_MIL;

    printf("Preco final do automovel: R$ %.2f\n", precoFinal);

    system("pause");
    system("cls");
    return 0;
}