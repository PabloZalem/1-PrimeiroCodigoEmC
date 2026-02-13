#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B;
    // Atribuição de valores
    A = 2; // A recebe o valor 2
    B = 3; // B recebe o valor 3
    system("cls"); // Limpa a tela (funciona no Windows)
    printf("\n - - - - MULTIPLICACAO - - - - \n");
    printf("O valores de A e: %d - B: %d \n", A, B);
    printf("O resultado da multiplicacao de A=A*B e: %d\n", A * B);

    A = 2;
    B = 3;
    printf("Ou: A *=B - resultado: %d\n", A *= B); // A recebe o resultado da multiplicação de A por B
    printf("\n\n");
    system("pause"); // Pausa a execução do programa (funciona no Windows)
    system("cls"); // Limpa a tela (funciona no Windows)

    A = 6;
    B = 3;
    printf("\n - - - - DIVISAO - - - - \n");
    printf("O valores de A e: %d - B: %d \n", A, B);
    printf("O resultado da divisao de A=A/B e: %d\n", A = A / B);

    A = 6;
    B = 3;
    printf("Ou: A /=B - resultado: %d\n", A /= B);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    A = 6;
    B = 3;
    printf("\n - - - - ADICAO - - - -");
    printf("\nValores de A: %d - B: %d", A, B);
    printf("\nAdicao podera ser: A=A+B - o resultado: %d\n", A = A + B);

    A = 6;
    B = 3;
    printf("Ou: A +=B - resultado: %d\n", A += B);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    A = 6;
    B = 3;
    printf("\n - - - - SUBTRACAO - - - -");
    printf("\nValores de A: %d - B: %d", A, B);
    printf("\nSubtracao podera ser: A=A-B - o resultado: %d\n", A = A - B);

    A = 6;
    B = 3;
    printf("Ou: A -=B - resultado: %d\n", A -= B);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    A = 6;
    B = 3;
    printf("\n - - - - RESTO DA DIVISAO - - - -");
    printf("\nValores de A: %d - B: %d", A, B);
    printf("\nResto da divisao podera ser: A=A%%B - o resultado: %d\n", A = A % B);

    A = 6;
    B = 3;
    printf("Ou: A %%=B - resultado: %d\n", A %= B);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    A = 6;
    printf("\n - - - - INCREMENTO - - - -");
    printf("\nValor de A: %d", A);
    printf("\nIncremento podera ser: A=A+1 - o resultado: %d\n", A = A + 1);

    A = 6;
    printf("Ou: A++ - resultado: %d\n", A++);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    A = 6;
    printf("\n - - - - DECREMENTO - - - -");
    printf("\nValor de A: %d", A);
    printf("\nDecremento podera ser: A=A-1 - o resultado: %d\n", A = A - 1);

    A = 6;
    printf("Ou: A-- - resultado: %d\n", A--);
    printf("\n\n");
    system("pause");
    system("cls"); // Pausa a execução do programa (funciona no Windows)

    return 0;
}

// Comando para executar o código: gcc AtribuicaoDeValores.c -o AtribuicaoDeValores.exe -> ./AtribuicaoDeValores.exe