#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0, a=2, b=4;

    i++; // Incrementa i em 1 (i se torna 1)
    a = -b; // Tanto a quanto b se tornam -4 (a recebe o valor negativo de b)

    int resultado = a + b * 3;
    printf("Resultado de a + b * 3: %d\n", resultado); // O resultado é -4 + (4 * 3) = -4 + 12 = 8

    system("pause"); // Pausa a execução do programa (funciona no Windows
    system("cls"); // Limpa a tela (funciona no Windows)

    return 0;
}