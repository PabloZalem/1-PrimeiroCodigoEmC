#include <stdlib.h>
#include <stdio.h>

int main() {
    float j = 1.50;
    float m = 1.20;

    printf("Jorge: %.2f\n", j);
    printf("Maria: %.2f\n", m);

    // Quanto tempo maria precisa para alcançar jorge em altura?
    // Maria ganha 0.03 metros por ano e Jorge ganha 0.02 metros por ano
    int tempo = 0;

    while (m < j) {
        m += 0.03; // Maria ganha 0.03 metros por ano
        j += 0.02; // Jorge ganha 0.02 metros por ano
        tempo++;
    }

    printf("Tempo necessario para Maria alcancar Jorge: %d anos\n", tempo);

    return 0;
}