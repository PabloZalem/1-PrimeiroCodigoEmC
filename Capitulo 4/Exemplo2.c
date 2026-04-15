#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num = 255, quadrado = 0;

    quadrado = sqrt(num);

    printf("A raiz quadrada de %.2f eh %.2f\n", num, quadrado);

    return 0;
}