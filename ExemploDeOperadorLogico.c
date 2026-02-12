#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo;
    system("cls");
    printf("\n* * * V E T O R E S * * *\n");

    sexo = ' '; // Atribuição de valor à variável sexo`;
    printf("\nDigite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'F')
        printf("\nSexo invlido! Por favor, digite 'M' para masculino ou 'F' para feminino.\n");
    
    printf("\n\n");
    system("pause");

    return 0;
}

// Comando para rodar -> gcc ExemploDeOperadorLogico.c -o ExemploDeOperadorLogico.exe ->  ExemploDeOperadorLogico.exe