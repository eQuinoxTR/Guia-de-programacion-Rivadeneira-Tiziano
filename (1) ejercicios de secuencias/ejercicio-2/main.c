#include <stdio.h>

int main() {
    int resi1;
    int resi2;
    printf("Ingresa la primera resistencia ");
    scanf("%d", &resi1);
    printf("Ingresa la segunda resistencia ");
    scanf("%d", &resi2);
    float resultado = 1.0 / ((1.0/resi1) + (1.0/resi2)) ;
    printf("Este es el resultado %f", resultado);
    return 0;
}