#include <stdio.h>
#include <math.h>

int main() {
    int inductancia;
    int capacitancia;
    printf("ingresa tu inductancia ");
    scanf("%d", &inductancia);
    printf("ingresa tu capacitancia ");
    scanf("%d", &capacitancia);
    float resultado = 1 / (2 * 3.14 * sqrt(inductancia * capacitancia));
    printf("La frecuencia es %f", resultado);

    return 0;
}