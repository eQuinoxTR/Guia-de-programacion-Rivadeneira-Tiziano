#include <stdio.h>
#include <math.h>

int main() {
    int radio;
    printf("ingresa tu radio ");
    scanf("%d", &radio);
    float perimetro = 2 * 3.14 * radio;
    float area = pow(radio * 1.0, 2) * 3.14;
    printf("tu perimetro es %f, tu area es %f", perimetro, area);
    return 0;
}