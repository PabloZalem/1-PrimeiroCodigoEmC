#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tempoDeLigacao;
    char tipoDeLigacao[20], tipoDeAparelho[20];
    float valor = 0.0;

    printf("Digite a quantidade de minutos da ligacao: ");
    scanf("%d", &tempoDeLigacao);

    printf("Digite o tipo de ligacao (local, interurbana): ");
    scanf("%s", tipoDeLigacao);

    if (strcmp(tipoDeLigacao, "local") == 0) {
        printf("Digite o tipo de aparelho (celular, fixo): ");
        scanf("%s", tipoDeAparelho);

        if (strcmp(tipoDeAparelho, "celular") == 0) {
            valor = tempoDeLigacao * 1.20;
            printf("Valor da ligacao: R$ %.2f\n", valor);

        } else if (strcmp(tipoDeAparelho, "fixo") == 0) {
            valor = tempoDeLigacao * 1.00;
            printf("Valor da ligacao: R$ %.2f\n", valor);

        } else {
            printf("Tipo de aparelho invalido.\n");
        }
    } else if (strcmp(tipoDeLigacao, "interurbana") == 0) {
       if (strcmp(tipoDeAparelho, "celular") == 0) {
            valor = tempoDeLigacao * 2.00;
            printf("Valor da ligacao: R$ %.2f\n", valor);

        } else if (strcmp(tipoDeAparelho, "fixo") == 0) {
            valor = tempoDeLigacao * 1.50;
            printf("Valor da ligacao: R$ %.2f\n", valor);

        } else {
            printf("Tipo de aparelho invalido.\n");
        }
    }
    

    system("pause");
    system("cls");
    return 0;
}