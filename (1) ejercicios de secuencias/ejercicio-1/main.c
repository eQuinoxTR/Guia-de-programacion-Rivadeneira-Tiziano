#include <stdio.h>

int main() {
    int resi1;
    int resi2;
    printf("ingresa la primera resistencia ");
    scanf("%d", &resi1);
    printf("ingresa la segunda resistencia ");
    scanf("%d", &resi2);
    int resultado = resi1 + resi2;
    printf("el resultado es %d", resultado);
    return 0;
}