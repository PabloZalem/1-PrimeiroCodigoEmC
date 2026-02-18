#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    const pi = 3.14159; // This will cause a compilation error because 'pi' is not declared as a variable
    
    return 0;
}