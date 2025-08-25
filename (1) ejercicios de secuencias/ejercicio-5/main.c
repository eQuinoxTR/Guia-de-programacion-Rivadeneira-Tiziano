#include <stdio.h>

int main() {
    int hz;
    printf("Ingresa tu frecuencia aca ");
    scanf("%d", &hz);
    float resultado = 2 * 3.14 * hz;
    printf("tu frecuencia angular es %f", resultado);
    return 0;
}