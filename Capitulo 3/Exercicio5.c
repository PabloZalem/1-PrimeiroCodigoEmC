#include <stdio.h>
#include <stdlib.h>

int main()
{
    int usuario = 0;
    float salario = 0.0;
    float acumulador = 0.0;
    float maiorSalario = 0.0;

    while (usuario < 5)
    {
        printf("Digite o %d salario: ", usuario + 1);
        scanf("%f", &salario);
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        acumulador += salario;
        usuario++;
    }

    printf("O maior salario e: %.2f\n", maiorSalario);
    printf("Soma dos salarios: %.2f\n", acumulador);

    system("pause");
    system("cls");
    return 0;
}