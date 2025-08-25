#include <stdio.h>

int main() {
    int pies;
    float cm, pulgadas;
    printf("ingresa tu medida en cm para convertirla a pies y pulgadas ");
    scanf("%f", &cm);
    pulgadas = cm/2.54;
    pies = pulgadas/12;
    printf("cm: %f pulgadas: %f pies: %d", cm, pulgadas, pies);
    return 0;
}