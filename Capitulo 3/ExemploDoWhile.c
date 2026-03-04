#include <stdio.h>
#include <conio.h>

int main()
{
    int contador = 0;

    while (contador <= 100)
    {
        printf("\n Contador: %d", contador);
        contador++;
    }
    
    printf("\nPressione qualquer tecla para sair...");
    getch();

    return 0;
}