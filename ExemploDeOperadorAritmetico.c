#include <stdio.h>
#include <stdlib.h>

int main() {
    float var = 3;
    var = var + 2; // var agora é 5
    printf("O valor de var e: %f\n", var);

    float resto = 10 % 3; // resto é 1
    printf("O resto da divisão de 10 por 3 é: %d\n", resto);

    return 0;
}
// Comando para executar o código: gcc ExemploDeOperadorAritmetico.c -o ExemploDeOperadorAritmetico.exe -> ./ExemploDeOperadorAritmetico.exe