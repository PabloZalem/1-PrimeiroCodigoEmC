#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num = 3, elevado = 2, expo = 0;

    expo = pow(num,elevado);
    printf("Resultado: %.2f\n", expo);

    printf("\n\n A exponenciacao de %.f e: %.f \n\n", num, pow(num, elevado));

    system("pause");
    return 0;
}